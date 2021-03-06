/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUISceneAgent : NSObject <FBUISceneConduit, FBUISceneIdentity> {
    <FBUISceneClientProxy> *_clientProxy;
    <FBUISceneHostProxy> *_hostProxy;
    FBUISceneSpecification *_specification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) <FBUISceneClientProxy> *sceneClient;
@property <FBUISceneHostProxy> *sceneHost;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (nonatomic, readonly, copy) FBUISceneSpecification *sceneSpecification;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didInvalidateSceneClient:(id)arg1;
- (void)didInvalidateSceneHost:(id)arg1;
- (void)handleIncomingActionsEvent:(id)arg1;
- (void)handleInvalidationEvent:(id)arg1;
- (void)handleOutgoingActionsEvent:(id)arg1;
- (void)handleUpdateClientSettingsEvent:(id)arg1;
- (void)handleUpdateSettingsEvent:(id)arg1;
- (id)init;
- (id)initWithSceneSpecification:(id)arg1;
- (id)sceneClient;
- (void)sceneClient:(id)arg1 didAttachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didDetachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2;
- (id)sceneHost;
- (void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)sceneHost:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (void)sceneHost:(id)arg1 registerSceneClient:(id)arg2 withInitialParameters:(id)arg3;
- (id)sceneIdentifier;
- (id)sceneSpecification;
- (void)setSceneClient:(id)arg1;
- (void)setSceneHost:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
