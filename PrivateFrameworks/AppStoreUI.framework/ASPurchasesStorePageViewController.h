/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class ISOperation, SSSoftwareUpdatesRequest;

@interface ASPurchasesStorePageViewController : SUStorePageViewController <SSSoftwareUpdatesRequestDelegate> {
    SSSoftwareUpdatesRequest *_backgroundRequest;
    ISOperation *_constructRequestOperation;
}

- (BOOL)_URLRequestPropertiesAreForSoftwareUpdates:(id)arg1;
- (void)_cancelBackgroundRequest;
- (void)_constructSoftwareUpdatesRequestWithProperties:(id)arg1;
- (void)_enqueueRealFetchOperationWithRequestProperties:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (BOOL)_includesSoftwareUpdates;
- (BOOL)_isPageSectionSoftwareUpdates:(id)arg1;
- (void)_startBackgroundRequest;
- (void)applicationWillEnterForeground;
- (BOOL)canBeResolved;
- (void)cancelOperations;
- (void)dealloc;
- (void)enqueueFetchOperation;
- (void)enqueueFetchOperationForPageSection:(id)arg1;
- (id)initWithSection:(id)arg1;
- (void)loadView;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (BOOL)shouldDisplaySectionsInNavigationBar:(id)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (void)updateQueueRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end