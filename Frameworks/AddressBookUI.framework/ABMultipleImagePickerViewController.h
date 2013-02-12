/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABMultipleSourceImagePickerDelegate>, NSMutableArray;

@interface ABMultipleImagePickerViewController : UITableViewController {
    <ABMultipleSourceImagePickerDelegate> *_delegate;
    NSMutableArray *_imageCellData;
    NSUInteger _selectedImageIndex;
}

@property <ABMultipleSourceImagePickerDelegate> *delegate;

- (void)addImageData:(id)arg1 title:(id)arg2 isSelectedImage:(BOOL)arg3 person:(void*)arg4;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(NSInteger)arg1;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)viewDidLoad;

@end