/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver> {
    unsigned int _errorCount;
    BOOL _networkReachable;
}

+ (id)sharedReachability;

- (void)_reachabilityChanged:(id)arg1;
- (void)_resetErrors;
- (BOOL)anyFailures;
- (void)dealloc;
- (id)init;
- (BOOL)networkAvailable;
- (void)reportLoadFailure:(id)arg1;
- (void)reportTileLoadSuccess:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

@end