// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreData;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC12FinalProject11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;
@class NSCoder;

SWIFT_CLASS("_TtC12FinalProject26ColorSelectorTableViewCell")
@interface ColorSelectorTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified colorLabel;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC12FinalProject7Project")
@interface Project : NSManagedObject
+ (NSString * _Nonnull)entityName;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12FinalProject6Column")
@interface Column : Project
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;
@class NSSet;

@interface Column (SWIFT_EXTENSION(FinalProject))
@property (nonatomic, copy) NSString * _Nonnull columnName;
@property (nonatomic, strong) NSNumber * _Nonnull columnTicketCount;
@property (nonatomic, strong) NSNumber * _Nonnull columnIndex;
@property (nonatomic, strong) NSSet * _Nullable childTicket;
@property (nonatomic, strong) Project * _Nonnull parentProject;
@end

@class ProjectDirectoryTableViewController;
@class TicketsPageViewContainerController;
@class ProjectSettingsTableViewController;
@class UIStoryboardSegue;
@class NSBundle;

SWIFT_CLASS("_TtC12FinalProject18MenuViewController")
@interface MenuViewController : UIViewController
- (IBAction)menuToDirectoryButton:(id _Nonnull)sender;
- (IBAction)menuToTicketsButton:(id _Nonnull)sender;
- (IBAction)menuToNotificationsButton:(id _Nonnull)sender;
- (IBAction)menuToChatButton:(id _Nonnull)sender;
- (IBAction)menuToSettingsButton:(id _Nonnull)sender;
- (void)projectDirectoryTableVCDidFinish:(ProjectDirectoryTableViewController * _Nonnull)directoryVC;
- (void)ticketsPageVCDidFinish:(TicketsPageViewContainerController * _Nonnull)ticketsVC;
- (void)projectSettingsTableVCDidFinish:(ProjectSettingsTableViewController * _Nonnull)settingsVC;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSEntityDescription (SWIFT_EXTENSION(FinalProject))
@end


@interface NSFetchRequest (SWIFT_EXTENSION(FinalProject))
@end


SWIFT_CLASS("_TtC12FinalProject27NotificationsViewController")
@interface NotificationsViewController : UIViewController
- (IBAction)closeNotificationsButton:(id _Nonnull)sender;
- (void)showAnimate;
- (void)removeAnimate;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@class NSDate;

@interface Project (SWIFT_EXTENSION(FinalProject))
@property (nonatomic, strong) NSObject * _Nonnull projectColorMain;
@property (nonatomic, strong) NSObject * _Nonnull projectColorSecondary;
@property (nonatomic, copy) NSString * _Nonnull projectName;
@property (nonatomic, strong) NSNumber * _Nonnull projectNotifications;
@property (nonatomic, strong) NSDate * _Nonnull projectCreationDate;
@property (nonatomic, strong) NSNumber * _Nonnull projectTicketCount;
@property (nonatomic, strong) NSSet * _Nonnull childColumn;
@end

@class UITableView;
@class NSIndexPath;

SWIFT_CLASS("_TtC12FinalProject34ProjectCreationTableViewController")
@interface ProjectCreationTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12FinalProject29ProjectDirectoryTableViewCell")
@interface ProjectDirectoryTableViewCell : UITableViewCell
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12FinalProject35ProjectDirectoryTableViewController")
@interface ProjectDirectoryTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (BOOL)tableView:(UITableView * _Nonnull)tableView canMoveRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (BOOL)tableView:(UITableView * _Nonnull)tableView canEditRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView moveRowAtIndexPath:(NSIndexPath * _Nonnull)fromIndexPath toIndexPath:(NSIndexPath * _Nonnull)toIndexPath;
- (void)projectCreationVCDidFinish:(ProjectCreationTableViewController * _Nonnull)projectCreationVC;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12FinalProject34ProjectSettingsTableViewController")
@interface ProjectSettingsTableViewController : UITableViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12FinalProject6Ticket")
@interface Ticket : Column
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Ticket (SWIFT_EXTENSION(FinalProject))
@property (nonatomic, copy) NSString * _Nullable ticketAssignee;
@property (nonatomic, copy) NSString * _Nullable ticketComments;
@property (nonatomic, strong) NSDate * _Nonnull ticketCreationDate;
@property (nonatomic, copy) NSString * _Nullable ticketDetail;
@property (nonatomic, copy) NSString * _Nullable ticketLabel;
@property (nonatomic, strong) NSDate * _Nonnull ticketMilestone;
@property (nonatomic, strong) NSNumber * _Nonnull ticketNumber;
@property (nonatomic, copy) NSString * _Nonnull ticketTitle;
@property (nonatomic, strong) Column * _Nonnull parentColumn;
@end


SWIFT_CLASS("_TtC12FinalProject26TicketColumnViewController")
@interface TicketColumnViewController : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextField;

SWIFT_CLASS("_TtC12FinalProject33TicketCreationTableViewController")
@interface TicketCreationTableViewController : UITableViewController <UITextFieldDelegate>
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)animated;
- (null_unspecified instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) Column * _Null_unspecified selectedColumn;
@property (nonatomic, strong) Ticket * _Nullable selectedTicket;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified titleTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified descriptionTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified commentsTextField;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified milestoneLabel;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified milestoneTextField;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified groupingDetailLabel;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified assigneeTextField;
@end

@class UIPageViewController;
@class UIPageControl;

SWIFT_CLASS("_TtC12FinalProject34TicketsPageViewContainerController")
@interface TicketsPageViewContainerController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>
@property (nonatomic, strong) UIPageViewController * _Null_unspecified pageViewController;
@property (nonatomic, strong) UIPageControl * _Null_unspecified pageControl;
@property (nonatomic, readonly, copy) NSArray<UIViewController *> * _Nonnull orderedViewControllers;
- (UIViewController * _Nullable)pageViewController:(UIPageViewController * _Nonnull)pageViewController viewControllerBeforeViewController:(UIViewController * _Nonnull)viewController;
- (UIViewController * _Nullable)pageViewController:(UIPageViewController * _Nonnull)pageViewController viewControllerAfterViewController:(UIViewController * _Nonnull)viewController;
- (NSInteger)presentationCountForPageViewController:(UIPageViewController * _Nonnull)pageViewController;
- (NSInteger)presentationIndexForPageViewController:(UIPageViewController * _Nonnull)pageViewController;
- (void)pageViewController:(UIPageViewController * _Nonnull)pageViewController willTransitionToViewControllers:(NSArray<UIViewController *> * _Nonnull)pendingViewControllers;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
