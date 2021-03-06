/* Generated by RuntimeBrowser.
 */

@protocol CNDataMapper <NSObject>

@required

- (NSArray *)accountsMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSArray *)contactsForFetchRequest:(CNContactFetchRequest *)arg1 error:(id*)arg2;
- (NSArray *)contactsForFetchRequest:(CNContactFetchRequest *)arg1 matchInfos:(id*)arg2 error:(id*)arg3;
- (NSArray *)containersMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSString *)defaultContainerIdentifier;
- (BOOL)executeSaveRequest:(CNSaveRequest *)arg1 error:(id*)arg2;
- (NSArray *)groupsMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSString *)meContactIdentifierWithError:(id*)arg1;
- (NSArray *)membersOfGroupWithIdentifier:(NSString *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;
- (CNPolicy *)policyForContainerWithIdentifier:(NSString *)arg1 error:(id*)arg2;
- (void)requestAccessForEntityType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (BOOL)requestAccessForEntityType:(int)arg1 error:(id*)arg2;
- (NSArray *)serverSearchContainersMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSArray *)subgroupsOfGroupWithIdentifier:(NSString *)arg1 error:(id*)arg2;

@optional

- (NSArray *)contactIdentifiersForFetchRequest:(CNContactFetchRequest *)arg1 error:(id*)arg2;
- (CNContact *)contactWithUserActivityUserInfo:(NSDictionary *)arg1 keysToFetch:(NSArray *)arg2;
- (NSArray *)contactsWithIdentifiers:(NSArray *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;
- (<CNCancelable> *)executeFetchRequest:(void *)arg1 progressiveResults:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 14: CNContactFetchRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (NSArray *)groupsWithIdentifiers:(NSArray *)arg1 error:(id*)arg2;
- (BOOL)setBestMeIfNeededForGivenName:(NSString *)arg1 familyName:(NSString *)arg2 email:(NSString *)arg3 error:(id*)arg4;
- (BOOL)setMeContact:(CNContact *)arg1 error:(id*)arg2;
- (BOOL)setMeContact:(CNContact *)arg1 forContainer:(CNContainer *)arg2 error:(id*)arg3;
- (void)setNotificationSource:(id)arg1;
- (NSArray *)unifiedContactsMatchingPredicate:(NSPredicate *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;
- (NSArray *)usedLabelsForPropertyWithKey:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)userActivityUserInfoForContact:(CNContact *)arg1;

@end
