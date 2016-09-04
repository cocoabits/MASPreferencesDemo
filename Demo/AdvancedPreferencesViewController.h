//
// This is a sample Advanced preference pane
//

#import <MASPreferences/MASPreferences.h>

@interface AdvancedPreferencesViewController : NSViewController <MASPreferencesViewController> {
    NSTextField *_textField;
    NSTableView *_tableView;
}

@property (nonatomic, assign) IBOutlet NSTextField *textField;
@property (assign) IBOutlet NSTableView *tableView;

@end
