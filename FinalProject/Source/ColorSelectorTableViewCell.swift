//
//  ColorSelectorTableViewCell.swift
//  FinalProject
//
//  Created by Matt Zhu on 8/21/16.
//
//

import UIKit

class ColorSelectorTableViewCell: UITableViewCell {

    @IBOutlet weak var colorLabel: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        colorLabel.text = "Hello world"
        // Initialization code
    }

    override func setSelected(selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
