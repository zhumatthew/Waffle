//
//  ProjectCreationTableViewController.swift
//  FinalProject
//
//  Created by Kyle Holmberg on 8/19/16.
//
//

import UIKit
import CoreData
import CoreDataService

protocol CreateProjectTableVCDelegate: class {
    func projectCreationVCDidFinish(projectCreationVC: ProjectCreationTableViewController)
}

class ProjectCreationTableViewController: UITableViewController, NSFetchedResultsControllerDelegate {
    
    @IBOutlet weak var navItem: UINavigationItem!
    
    func addProject() {
        
        let name = (tableView.cellForRowAtIndexPath(NSIndexPath(forRow: 0, inSection: 0)) as! TitleTableViewCell).titleTextField.text
        let color = (tableView.cellForRowAtIndexPath(NSIndexPath(forRow: 1, inSection: 0)) as! ColorSelectorTableViewCell).colorTextField.text
        var columns = Array<String>()
        for row in 0...tableView(tableView, numberOfRowsInSection: 1) {
            columns.append((tableView.cellForRowAtIndexPath(NSIndexPath(forRow: row, inSection: 1)) as! ColumnTableViewCell).columnTextField.text!)
        }
//        TraskService.addProject(name: , mainColor: NSObject, textColor: NSObject, possibleColumnsArray: [String], notificationsStatus: Bool, orderIndex: Int)
//        TraskService.addProject(<#T##TraskService#>)
        self.navigationController?.popViewControllerAnimated(true)
    }
    
    // MARK: View Controller Functions
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.title = "Add Project"
        
        let button = UIButton(type: .Custom)
        button.setTitle("Add", forState: .Normal)
        //        button.layer.backgroundColor = UIColor(red: 0.0, green: 0.6, blue: 0.0, alpha: 1.0).CGColor
        button.addTarget(self, action: #selector(ProjectCreationTableViewController.addProject), forControlEvents: .TouchUpInside)
        button.bounds = CGRectMake(0,0,70,34)
        button.tintColor = UIColor.redColor()
        // button.tintColor = self.view.tintColor
        button.titleLabel?.textColor = UIColor.redColor()
        button.enabled = true
        let item = UIBarButtonItem(customView: button)
        item.tintColor = UIColor.redColor()
        item.enabled = true
        self.navItem.rightBarButtonItem = item
        
        
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    // MARK: Table View Functions
    override func numberOfSectionsInTableView(tableView: UITableView) -> Int {
        return Sections.AllSections.count
    }
    
    override func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        switch Sections.AllSections[section] {
        case .DetailRows:
            return DetailRows.AllRows.count
        case .ColumnRows:
            return columnCount < 6 ? columnCount + 1 : columnCount
        case .NotificationRow:
            return 1
        }
    }
    
    override func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        var cell: UITableViewCell
        switch Sections.AllSections[indexPath.section] {
        case .DetailRows:
            switch DetailRows.AllRows[indexPath.row] {
            case .ProjectTitle:
                cell = tableView.dequeueReusableCellWithIdentifier("ProjectCreationTitleCell") as UITableViewCell!
            case .MainColorSelector:
                cell = tableView.dequeueReusableCellWithIdentifier("ProjectCreationMainColorCell") as UITableViewCell!
            }
        case .ColumnRows:
            if indexPath.row < columnCount {
                cell = tableView.dequeueReusableCellWithIdentifier("ProjectCreationColumnCell") as UITableViewCell!
            } else {
                cell = tableView.dequeueReusableCellWithIdentifier("ProjectCreationAddColumnCell") as UITableViewCell!
            }
        case .NotificationRow:
            cell = tableView.dequeueReusableCellWithIdentifier("ProjectCreationNotificationsCell") as UITableViewCell!
        }
        return cell
        
    }
    
    override func tableView(tableView: UITableView, didSelectRowAtIndexPath indexPath: NSIndexPath) {
        if (Sections.AllSections[indexPath.section] == .ColumnRows && indexPath.row == columnCount) {
            if columnCount < 6 {
                columnCount += 1
                tableView.reloadData()
            }
        }
        
        if (Sections.AllSections[indexPath.section] == .DetailRows && DetailRows.AllRows[indexPath.row] == .MainColorSelector) {
            let cell = self.tableView(tableView, cellForRowAtIndexPath: indexPath) as! ColorSelectorTableViewCell
            cell.colorTextField.becomeFirstResponder()
        }
    }
    
    // MARK: Section/Row Enums
    enum Sections {
        case DetailRows
        case ColumnRows
        case NotificationRow
        
        static let AllSections: Array<Sections> = [.DetailRows, .ColumnRows, .NotificationRow]
    }
    
    enum DetailRows {
        case ProjectTitle
        case MainColorSelector
        
        static let AllRows: Array<DetailRows> = [.ProjectTitle, .MainColorSelector]
    }
    
    weak var delegate : CreateProjectTableVCDelegate?
    //var ColumnRows: Int = TraskService.fetchedResultsControllerForColumnsInProject(project).count
    
    // MARK: Properties (Private)
    private var fetchedResultsController: NSFetchedResultsController?
    private var horizontalSwipeToEditMode = false
    private var ignoreUpdates = false
    private var columnCount = 3
    
    // MARK : Properties (IBOutlet)
    @IBOutlet weak private var projectCreationTableView: UITableView!
    
    // MARK: Properties (Private Static Constant)
    private static let DefaultName = "Unnamed Project"
    private static let DefaultColumnName = "Unnamed Column"
}
