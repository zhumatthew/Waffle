//
//  ColorSelectorTableViewCell.swift
//  FinalProject
//
//  Created by Kyle Holmberg on 8/21/16.
//
//

import UIKit

class ColorSelectorTableViewCell: UITableViewCell, UIPickerViewDelegate, UIPickerViewDataSource {
    @IBOutlet weak var colorTextField: UITextField!
    let colorPickerData = ["Black", "White", "Red", "Blue", "Green", "Yellow", "Purple"]
    var colorSelection: String!
    
    func numberOfComponentsInPickerView(pickerView: UIPickerView) -> Int {
        return 1
    }
    
    func pickerView(pickerView: UIPickerView, numberOfRowsInComponent component: Int) -> Int {
        return colorPickerData.count
    }
    
    override func awakeFromNib() {
        super.awakeFromNib()
        
        let pickerView = UIPickerView()
        let toolbar = UIToolbar(frame: CGRect(x: 0.0, y: 0.0, width: 0.0, height: 44.0))

        colorTextField.inputView = pickerView
        colorTextField.inputAccessoryView = toolbar
        
        colorSelection = colorPickerData.first
        colorTextField.text = colorSelection

        pickerView.delegate = self
        pickerView.dataSource = self
    }

    override func setSelected(selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }
}
