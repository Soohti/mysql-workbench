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

  public
    class ImageBoxWrapper : public ViewWrapper {
    protected:
      ImageBoxWrapper(mforms::ImageBox *backend);

      static bool create(mforms::ImageBox *backend);
      static void set_image(mforms::ImageBox *backend, const std::string &file);
      static void set_image_align(mforms::ImageBox *backend, mforms::Alignment alignment);
      static void set_image_data(mforms::ImageBox *backend, const char *data, size_t length);
      static void set_scale_contents(mforms::ImageBox *backend, bool flag);

    public:
      static void init();
    };
  };
};
