//
//  TitleTableViewCell.swift
//  FinalProject
//
//  Created by Kyle Holmberg on 8/24/16.
//
//

import UIKit

class TitleTableViewCell: UITableViewCell, UITextFieldDelegate {

    @IBOutlet weak var titleTextField: UITextField!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
        
        titleTextField.delegate = self
    }

    override func setSelected(selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
