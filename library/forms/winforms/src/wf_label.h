/*
 * Copyright (c) 2008, 2018, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is designed to work with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation.  The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have either included with
 * the program or referenced in the documentation.
 * This program is distributed in the hope that it will be useful,  but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA 
 */

#pragma once

namespace MySQL {
  namespace Forms {

    /**
     * Defines a label with an auto wrapping feature.
     */
  private
    ref class WrapControlLabel : System::Windows::Forms::Label {
    private:
      bool autoWrapping;
      Drawing::Size lastSize;

    public:
      WrapControlLabel();

      property bool AutoWrapping {
        bool get() {
          return autoWrapping;
        };
        void set(bool value) {
          autoWrapping = value;
        };
      }

      property String ^ Text { virtual void set(String ^ value) override; }

        property Drawing::Font ^
        Font { virtual void set(Drawing::Font ^ value) override; }

        virtual Drawing::Size
        GetPreferredSize(Drawing::Size proposedSize) override;
    };

  public
    class LabelWrapper : ViewWrapper {
    protected:
      LabelWrapper(mforms::Label *backend);

      static bool create(mforms::Label *backend);
      static void set_style(mforms::Label *backend, mforms::LabelStyle style);
      static void set_text(mforms::Label *backend, const std::string &text);
      static void set_text_align(mforms::Label *backend, mforms::Alignment align);
      static void set_color(mforms::Label *backend, const std::string &color);
      static void set_wrap_text(mforms::Label *backend, bool flag);

    public:
      static void init();
    };
  };
};
