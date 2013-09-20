/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class CLLocation, GEOPlace, NSDate, NSDateFormatter, NSDictionary, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSOrderedSet, NSString, PLMomentAnalyzerWorkThread, PLPhotoLibrary, PLXPCTransaction;

@interface PLMomentAnalyzer : NSObject {
    NSMutableSet *_activeGEORequests;
    BOOL _addCountyIfNeeded;
    void *_addressBook;
    double _analysisStartTime;
    BOOL _analyzingAllMoments;
    unsigned int _currentRevGeoServerVersionNum;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    NSOrderedSet *_defaultDominantGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultDominantGeoOrderingForMoment;
    NSOrderedSet *_defaultSecondaryGeoOrderingForYear;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMoment;
    BOOL _delayedSavePending;
    int _errorBackoffLevel;
    unsigned int _errorState;
    PLMomentAnalyzerWorkThread *_geoWorkThread;
    NSDictionary *_homeAddressDictionary;
    CLLocation *_homeLocation;
    GEOPlace *_homePlace;
    PLXPCTransaction *_keepAliveTransaction;
    NSString *_languageAndLocale;
    NSString *_lastGeoProviderId;
    NSDate *_lastGeoVersionFileFetchDate;
    unsigned int _lastGeoVersionFileVersion;
    double _lastNetworkForcedAbortTime;
    double _lastServerVersionInfoFetchAttemptTime;
    NSMutableSet *_megaMomentListIdsToProcess;
    unsigned int _mode;
    BOOL _needToUpdateInvalidMomentsWhenPossible;
    BOOL _networkObservingReachability;
    BOOL _noResultErrorIsSuccess;
    unsigned int _objectUpdatesSinceSave;
    BOOL _passSuccess;
    NSMutableOrderedSet *_pendingGEORequests;
    BOOL _pendingServerVersionInfoFetch;
    PLPhotoLibrary *_photoLibrary;
    NSMutableSet *_processingMomentUuids;
    double _revGeoServerVersionInfoFetchNewVersionInterval;
    NSString *_revGeoServerVersionInfoURL;
    NSDictionary *_serverVersionInfo;
    NSDateFormatter *_shortDateFormatter;
    double _timeToWaitBeforeNextRequest;
    int _triesAtCurrentBackoffLevel;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableSet *_yearMomentListIdsToProcess;
}

@property(readonly) void* _addressBook;
@property(readonly) CLLocation * _homeLocation;
@property(readonly) PLPhotoLibrary * _photoLibrary;

+ (BOOL)hasCompletedMomentsAndMomentListAnalysisInLibrary:(id)arg1;
+ (id)sharedInstance;

- (void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2;
- (void)_addRevGeoPlacesFromAssets:(id)arg1 toPlacesArray:(id)arg2;
- (void*)_addressBook;
- (void)_addressBookChanged;
- (id)_addressDictionaryForABRecord:(void*)arg1 identifier:(int)arg2;
- (void)_analysisComplete;
- (BOOL)_canProcessMoments;
- (void)_checkForNewServerVersionInfoIfNeeded;
- (id)_compactPlaceDescriptionForPlaceResult:(id)arg1;
- (id)_currentHomeAddressDictionary;
- (id)_currentProviderId;
- (id)_dictionaryFromLocation:(id)arg1;
- (id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned int)arg2 totalPlaceCount:(unsigned int)arg3 includeAllPlaces:(BOOL)arg4 includeHome:(BOOL)arg5 homeAtEnd:(BOOL)arg6 atLastLevel:(BOOL)arg7 outOtherNonDominantPlaces:(id)arg8;
- (void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(BOOL)arg2;
- (unsigned int)_errorTypeForError:(id)arg1;
- (void)_fetchServerVersionInfo;
- (void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(BOOL)arg3;
- (void)_finalizeInitOnWorkQueue;
- (void)_finishedGEORequestInfo:(id)arg1 withSuccess:(BOOL)arg2 errorType:(unsigned int)arg3;
- (void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(BOOL)arg2;
- (void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(id)arg2;
- (id)_geoLocationForCoordinate:(struct { double x1; double x2; })arg1 date:(id)arg2;
- (unsigned int)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_homeLocation;
- (unsigned int)_indexForGeoOrder:(unsigned int)arg1 inPrioritySet:(id)arg2;
- (BOOL)_isNetworkReachable;
- (BOOL)_loadServerVersionInfo;
- (id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(BOOL)arg3 outAddedHome:(BOOL*)arg4;
- (id)_locationFromDictionary:(id)arg1;
- (BOOL)_markInvalidLowQualityAssetsInMoment:(id)arg1;
- (BOOL)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2;
- (id)_metadataPath;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)_photoLibrary;
- (void)_processGEORequestWithRequestInfo:(id)arg1;
- (unsigned int)_processMegaMomentList:(id)arg1;
- (void)_processMegaMomentLists;
- (void)_processNextAnalysisTransaction;
- (void)_processNextTransaction;
- (void)_processPendingGEORequests;
- (unsigned int)_processYearMomentList:(id)arg1;
- (void)_processYearMomentLists;
- (void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(BOOL)arg1;
- (void)_removeKeepAlive;
- (id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(BOOL)arg2;
- (void)_resetErrorState;
- (void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(BOOL)arg2 invalidOnly:(BOOL)arg3;
- (void)_runBlockOnWorkQueue:(id)arg1;
- (void)_saveDataIfNeededAfterTimeDiff:(double)arg1;
- (void)_saveDataIfReachedObjectChangeThreshold;
- (void)_saveGlobalMetadata;
- (void)_saveNow;
- (id)_serverVersionInfoFilePath;
- (void)_setErrorState:(unsigned int)arg1;
- (void)_setLocationDataValidForMomentId:(id)arg1;
- (unsigned int)_significantPlaceCountInMap:(id)arg1;
- (id)_simpleNamesForNameInfoArray:(id)arg1;
- (void)_startObservingReachabilityChanges;
- (BOOL)_startingToProcessMomentWithUuid:(id)arg1;
- (void)_stopObservingReachabilityChanges;
- (id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned int)arg2 homePlace:(id)arg3;
- (id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned int)arg2;
- (void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(BOOL)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6;
- (void)_updateDateFormattersForLocale:(id)arg1;
- (id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(BOOL)arg4 includeHome:(BOOL)arg5 homeAtEnd:(BOOL)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned int*)arg9 outUsedHome:(BOOL*)arg10;
- (void)_updateErrorStateWithSuccess:(BOOL)arg1 errorType:(unsigned int)arg2;
- (BOOL)_updateHomeAddressIfNeeded;
- (void)_updateHomeLocation;
- (BOOL)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3;
- (void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned int)arg1;
- (void)_updateInformationForGeoProviderIfNeeded;
- (void)_updateInformationForGeoProviderIfNeededOnWorkQueue;
- (void)_updateKeepAlive;
- (BOOL)_updateLanguageIfNeeded;
- (void)_updateLocalServerVersionInfo:(id)arg1;
- (void)_updateRevGeoServerFetchInfoConfig;
- (void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned int)arg8 usedHome:(BOOL)arg9;
- (void)_waitForReachability;
- (void)dealloc;
- (id)init;
- (void)updateInfoForAllMoments;
- (void)updateInfoForInvalidMomentsIfNeeded;
- (void)updateInfoForMegaMomentLists:(id)arg1;
- (void)updateInfoForMomentListWithMomentListId:(id)arg1;
- (void)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(BOOL)arg2;
- (void)updateInfoForMoments:(id)arg1 invalidOnly:(BOOL)arg2;
- (void)updateInfoForYearMomentLists:(id)arg1;

@end