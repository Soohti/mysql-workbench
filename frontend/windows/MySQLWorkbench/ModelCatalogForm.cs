/*
 * Copyright (c) 2008, 2019, Oracle and/or its affiliates. All rights reserved.
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

using System.Windows.Forms;

using Aga.Controls.Tree;

using MySQL.Controls;
using MySQL.Workbench;

namespace MySQL.GUI.Workbench
{
  public partial class ModelCatalogForm : TabDocument
  {
    private ModelCatalogForm()
    {
      InitializeComponent();
    }

    public ModelCatalogForm(ModelDiagramFormWrapper form)
      : this()
    {
      TreeViewAdv catalogTree = form.get_catalog_tree();
      catalogTree.ShowNodeToolTips = true;
      headerPanel1.Controls.Add(catalogTree);
      headerPanel1.Controls.SetChildIndex(catalogTree, 0);
      catalogTree.Dock = DockStyle.Fill;
    }

    public void UpdateColors()
    {
      topPanel.BackColor = Conversions.GetApplicationColor(ApplicationColor.AppColorPanelToolbar, false);
    }

  }
}