include std.sci

const float c_fMaxFlameLength = 600;

const int c_iDamageTypePhysical = 0;
const int c_iDamageTypeBullet = 1;
const int c_iDamageTypeFire = 2;

const int c_iHitTypePhysical = 0;
const int c_iHitTypePhysical2 = 1;
const int c_iHitTypeBullet = 2;
const int c_iHitTypeOscoloc = 3;
const int c_iHitTypeFire = 4;
const int c_iHitTypeDisease = 5;
const int c_iHitTypeMental = 6;
const int c_iHitTypeRat = 7;

string GetDamageTypePostfix(int iDamageType)
{
	if (iDamageType == c_iDamageTypeFire) {
		return "fire";
	}
	else if (iDamageType == c_iDamageTypeBullet) {
		return "bullet";
	}
	return "phys";
}

Vector GetActorPosition(void)
{
	Vector vPos;
	@GetPosition(vPos);
	return vPos;
}

Vector GetActorPosition(object actor)
{
	Vector vPos;
	actor->GetPosition(vPos);
	return vPos;
}

Vector GetActorDelta(object actor)
{
	Vector vPos1, vPos2;
	@GetPosition(vPos1);
	actor->GetPosition(vPos2);
	return vPos2 - vPos1;
}

float GetActorDistanceSqr(object actor)
{
	Vector vPos1, vPos2;
	@GetPosition(vPos1);
	actor->GetPosition(vPos2);
	Vector vDelta = vPos2 - vPos1;
	return vDelta | vDelta;
}

int GetActorRegion()
{
	object scene;
	@GetScene(scene);
	int id;
	scene->GetRegionByPt(id, GetActorPosition());
	return id;
}

object GetPlayerActor(void)
{
	object player;
	@FindActor(player, "player");
	return player;
}

bool IsPlayerActor(object actor) {
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	return bPlayer;
}

bool HasProperty(object actor, string strProp)
{
	if (!actor->FuncExist("HasProperty", 2))
		return false;
	bool bHas;
	actor->HasProperty(strProp, bHas);
	return bHas;
}

string GetPropertyString(string strProp)
{
	string val;
	@GetProperty(strProp, val);
	return val;
}

string GetPropertyString(object actor, string strProp)
{
	string val;
	actor->GetProperty(strProp, val);
	return val;
}

void ModPropertyF(string strProp, float fAmount)
{
	float fValue;
	@GetProperty(strProp, fValue);
	@SetProperty(strProp, fValue + fAmount);
}

bool ModPropertyF(string strProp, float fAmount, float fMinVal, float fMaxVal)
{
	bool bHas;
	@HasProperty(strProp, bHas);
	if (!bHas)
		return false;
	float fValue;
	@GetProperty(strProp, fValue);
	@SetProperty(strProp, clampf(fValue + fAmount, fMinVal, fMaxVal));
	return true;
}

bool ModPropertyF(object actor, string strProp, float fAmount, float fMinVal, float fMaxVal)
{
	if (!HasProperty(actor, strProp))
		return false;
	float fValue;
	actor->GetProperty(strProp, fValue);
	actor->SetProperty(strProp, clampf(fValue + fAmount, fMinVal, fMaxVal));
	return true;
}

void ModPropertyI(string strProp, int iAmount)
{
	int iValue;
	@GetProperty(strProp, iValue);
	@SetProperty(strProp, iValue + iAmount);
}

void ModPropertyI(object actor, string strProp, int iAmount)
{
	int iValue;
	actor->GetProperty(strProp, iValue);
	actor->SetProperty(strProp, iValue + iAmount);
}

bool ModPropertyI(object actor, string strProp, int iAmount, int iMinVal, int iMaxVal)
{
	if (!HasProperty(actor, strProp))
		return false;
	int iValue;
	actor->GetProperty(strProp, iValue);
	actor->SetProperty(strProp, clampi(iValue + iAmount, iMinVal, iMaxVal));
	return true;
}

float Damage(object actor, float fAmount, int iDamageType)
{
	if (!HasProperty(actor, "health"))
		return 0.0;
	int iArmor;
	if (!HasProperty(actor, "armor")) {
		iArmor = 0;
	}
	else {
		actor->GetProperty("armor", iArmor);
	}
	
	string strArmorName = "armor_" + GetDamageTypePostfix(iDamageType);
	int iSpecialArmor;
	if (!HasProperty(actor, strArmorName)) {
		iSpecialArmor = 0;
	}
	else {
		actor->GetProperty(strArmorName, iSpecialArmor);
	}
	
	float fArmor = minf((iArmor + iSpecialArmor) / 100.0, 1);

	float fHealth;
	actor->GetProperty("health", fHealth);
	float fDamage = fAmount * (1 - fArmor);
	actor->SetProperty("health", clampf(fHealth - fDamage, 0, 1));
	if (IsPlayerActor(actor)) 
		ReportHealthChange(-fDamage);
	return fDamage;
}

float Disease(object actor, float fAmount)
{
	if (!HasProperty(actor, "disease"))
		return 0;
	float fArmor = 0;
	if (HasProperty(actor, "armor_disease")) {
		actor->GetProperty("armor_disease", fArmor);
		fArmor /= 100;
	}
	
	if (HasProperty(actor, "immunity")) {
		float fImmunity;
		actor->GetProperty("immunity", fImmunity);
		fArmor += fImmunity;
		ModPropertyF(actor, "immunity", -fAmount, 0, 1);
	}
	
	if (fArmor >= 1)
		return 0.0;
	fAmount *= (1 - fArmor) / 2;

	ModPropertyF(actor, "disease", fAmount, 0, 1);
	if (IsPlayerActor(actor))
		ReportDiseaseChange(fAmount);
	return fAmount;
}

bool IsZeroHealth(object actor)
{
	if (!HasProperty(actor, "health"))
		return false;
	if (IsPlayerActor(actor) && IsGodMode())
		return false;
	float fHealth;
	actor->GetProperty("health", fHealth);
	return fHealth <= 0.0;
}

bool IsDead(object actor)
{
	bool bDead;
	actor->IsDead(bDead);
	return bDead;
}

bool IsAccessible2(object actor)
{
	if (actor == null)
		return false;
	if (actor->FuncExist("IsDead", 1) && IsDead(actor))
		return false;
	object pCurScene, pActorScene;
	@GetScene(pCurScene);
	if (pCurScene == null)
		return false;
	actor->GetScene(pActorScene);
	if (pCurScene != pActorScene)
		return false;
	return true;
}

bool IsAccessible(object actor)
{
	if (!IsAccessible2(actor))
		return false;
	if (!HasProperty(actor, "noaccess"))
		return true;
	int iNoAccess;
	actor->GetProperty("noaccess", iNoAccess);
	return iNoAccess == 0;
}

bool IsAccessibleOrDead(object actor)
{
	if (actor == null)
		return false;
	object pCurScene, pActorScene;
	@GetScene(pCurScene);
	if (pCurScene == null)
		return false;
	actor->GetScene(pActorScene);
	if (pCurScene != pActorScene)
		return false;
	if (!HasProperty(actor, "noaccess"))
		return true;
	int iNoAccess;
	actor->GetProperty("noaccess", iNoAccess);
	return iNoAccess == 0;
}

bool IsInCurrentScene(object actor)
{
	if (actor == null)
		return false;
	object pCurScene, pActorScene;
	@GetScene(pCurScene);
	if (pCurScene == null)
		return false;
	actor->GetScene(pActorScene);
	if (pCurScene != pActorScene)
		return false;
	return true;
}

string GetMaterialName(int iMaterial)
{
	if (iMaterial == 1) {
		return "wood";
	}
	else if (iMaterial == 2) {
		return "metal";
	}
	else if (iMaterial == 3) {
		return "ground";
	}
	else if (iMaterial == 4) {
		return "water";
	}
	else if (iMaterial == 5) {
		return "carpet";
	}
	return "stone";
}

bool RotateToPoint(Vector vPos)
{
	Vector vCurPos;
	@GetPosition(vCurPos);
	Vector vDelta = vPos - vCurPos;
	bool bSuccess;
	@Rotate(vDelta.x, vDelta.z, bSuccess);
	return bSuccess;
}

bool RotateToActor(object actor)
{
	Vector vActorPos;
	actor->GetPosition(vActorPos);
	return RotateToPoint(vActorPos);
}

void StdHandleBase(object actor)
{
	if (actor == null)
		return;
	bool bDead;
	@IsDead(bDead);
	if (bDead)
		return;
	int iAnimType;
	@GetSecondaryAnimationType(iAnimType);
	if (iAnimType < 0)
		return;
	Vector vActorPos, vCurPos, vLookDir;
	actor->GetPosition(vActorPos);
	@GetPosition(vCurPos);
	@GetDirection(vLookDir);
	Vector vDelta = vCurPos - vActorPos;
	string strPrefix = (vDelta.x * vLookDir.x + vDelta.z * vLookDir.z >= 0)? "fhit" : "bhit";
	@FadeSecondaryAnimation("hit_react", strPrefix + "1", strPrefix + "2", -10);
}

void StdHandleHit(object actor, int iHitType, float fDamage)
{
	const float c_fMaxLocatorHitAngle = 45;
	
	if (actor && iHitType != c_iHitTypeFire && iHitType != c_iHitTypeDisease) {
		Vector vDir = Normalize(GetActorDelta(actor));
		object locs;
		@CreateVectorVector(locs);
		for (int i = 1; ; ++i) {
			bool bFound;
			Vector vPosition, vDirection;
			@GetGeometryLocator("hit" + i, bFound, vPosition, vDirection);
			if (!bFound)
				break;
			if ((vDirection | vDir) >= cos(c_fMaxLocatorHitAngle * PI / 180))
				locs->add(vPosition);
		}
		
		int iCount;
		locs->size(iCount);
		if (iCount) {
			int iLocator;
			@irand(iLocator, iCount);
			Vector vPosition;
			locs->get(vPosition, iLocator);
			StdHandleHit2(actor, iHitType, fDamage, vPosition, -vDir);
			return;
		}
	}
	
	StdHandleBase(actor);
}

void StdHandleHit2(object actor, int iHitType, float fDamage, Vector vPosition, Vector vDirection)
{
	object scene;
	@GetScene(scene);
	object blood;
	@AddActorByType(blood, "scripted", scene, vPosition, vDirection, "blood_dir.xml");

	StdHandleBase(actor);
}

void RotateAsyncToActor(object actor)
{
	Vector vActorPos, vCurPos;
	actor->GetPosition(vActorPos);
	@GetPosition(vCurPos);
	Vector vDelta = vActorPos - vCurPos;
	@RotateAsync(vDelta.x, vDelta.z);
}

void RotateAsyncToActor(object actor, float fRotSpeed)
{
	Vector vActorPos, vCurPos;
	actor->GetPosition(vActorPos);
	@GetPosition(vCurPos);
	Vector vDelta = vActorPos - vCurPos;
	@RotateAsync(vDelta.x, vDelta.z, fRotSpeed);
}

float GetEyesHeightDelta(object actor)
{
	float fHeight1;
	@GetEyesHeight(fHeight1);
	float fHeight2;
	actor->GetEyesHeight(fHeight2);
	return fHeight2 - fHeight1;
}

bool IsLoaded(void) {
	bool bLoaded;
	@IsLoaded(bLoaded);
	return bLoaded;
}

bool SetDialogCamera(object player) {
	return SetDialogCamera(player, 70);
}

bool SetDialogCamera(object player, float fDist)
{
	float fEyesHeight;

	Vector vPlayerPos;
	player->GetPosition(vPlayerPos);
	player->GetEyesHeight(fEyesHeight);
	vPlayerPos.y += fEyesHeight;

	Vector vPos;
	@GetPosition(vPos);
	@GetEyesHeight(fEyesHeight);
	vPos.y += fEyesHeight;

	Vector vDelta = vPlayerPos - vPos;
	vDelta.y = 0;
	vDelta /= sqrt(vDelta | vDelta);
	Vector vDestDir = -vDelta;
	Vector vOffset = vDelta * fDist + Normalize(vDestDir ^ [0, 1, 0]) * 25 - [0, 10, 0];
	Vector vDestPos = vPos + vOffset;

	bool bActive;
	@IsOverrideActive(bActive);
	if (bActive)
		return false;
	@StopWorld();
	
	@CameraTransit(vDestPos, vDestDir);

	@Rotate(vOffset.x, vOffset.z);
	
	// TEST ME
	if (IsLSHNPC()) {
		//@lshBeginTrackCamera();
	}
	else {
		bool bHas;
		@HasAnimationTrack(bHas, "head"); 
		if (bHas)
			@LookAsyncCamera("head");
	}	

	@CameraWaitForPlayFinish();

	@ResumeWorld();
	
	return true;
}

void UnsetDialogCamera(object player)
{
	@CameraSwitchToNormal();
	
	// TEST ME
	if (IsLSHNPC()) {
		//@lshEndTrackCamera();
	}
	else {
		bool bHas;
		@HasAnimationTrack(bHas, "head"); 
		if (bHas)
			@UnlookAsync("head");
	}	
}

bool StartMeeting(object actor) {
	int iVal;
	@GetVariable("voice_common", iVal);
	if (iVal) {
		if (!StartCommonSpeech(actor)) {
			if (!StartDaySpeech(actor))
				return false;
		}
		int iP;
		@irand(iP, 2);
		if (iP)
			@SetVariable("voice_common", (iVal + 1) % 3);
		else
			@SetVariable("voice_common", 0);
	}
	else {
		if (!StartDaySpeech(actor)) {
			if (!StartCommonSpeech(actor))
				return false;
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool StartCommonSpeech(object actor) {
	string strProp = "c";
	int iCount = 0;
	while (1){ 
		bool bHas;
		actor->HasProperty(strProp + (iCount+1), bHas);
		if (!bHas)
			break;
		iCount++;
	}
	if (!iCount)
		return false;
		
	int iSel = 0;
	if (iCount > 1)
		@irand(iSel, iCount);
		
	string strSpeech;
	actor->GetProperty(strProp + (iSel + 1), strSpeech);
	
	return StartSpeech(strSpeech);
}

bool StartDaySpeech(object actor) {
	string strProp = "d" + GetDay() + "m";
	int iCount = 0;
	while (1){ 
		bool bHas;
		actor->HasProperty(strProp + (iCount+1), bHas);
		if (!bHas)
			break;
		iCount++;
	}
	if (!iCount)
		return false;
		
	int iSel = 0;
	if (iCount > 1)
		@irand(iSel, iCount);
		
	string strSpeech;
	actor->GetProperty(strProp + (iSel + 1), strSpeech);
	
	return StartSpeech(strSpeech);
}

void WaitForMeetingEnd() {
	@lshWaitForSpeechEnd();
}

bool SetTradeCamera(object player) {
	return SetTradeCamera(player, 70);
}

bool SetTradeCamera(object player, float fDist)
{
	float fEyesHeight;

	Vector vPlayerPos;
	player->GetPosition(vPlayerPos);
	player->GetEyesHeight(fEyesHeight);
	vPlayerPos.y += fEyesHeight;

	Vector vPos;
	@GetPosition(vPos);
	@GetEyesHeight(fEyesHeight);
	vPos.y += fEyesHeight;

	Vector vDelta = vPlayerPos - vPos;
	vDelta.y = 0;
	vDelta /= sqrt(vDelta | vDelta);
	Vector vDestDir = -vDelta;
	Vector vOffset = vDelta * fDist - [0, 10, 0];
	Vector vDestPos = vPos + vOffset;

	bool bActive;
	@IsOverrideActive(bActive);
	if (bActive)
		return false;
	@StopWorld();

	@CameraTransit(vDestPos, vDestDir);

	@Rotate(vOffset.x, vOffset.z);

	@CameraWaitForPlayFinish();

	@ResumeWorld();
	
	return true;
}

void UnsetTradeCamera(object player)
{
	@CameraSwitchToNormal();
}

void IncrementNoAccess(void)
{
	bool bHas;
	@HasProperty("noaccess", bHas);
	if (bHas) {
		int iCount;
		@GetProperty("noaccess", iCount);
		@SetProperty("noaccess", iCount + 1);
	}
	else {
		@SetProperty("noaccess", 1);
	}
}

void DecrementNoAccess(void)
{
	int iCount;
	@GetProperty("noaccess", iCount);
	if (iCount > 1) {
		@SetProperty("noaccess", iCount - 1);
	}
	else {
		@RemoveProperty("noaccess");
	}
}

void IncrementNoAccess(object actor)
{
	if (!actor)
		return;
	bool bHas;
	actor->HasProperty("noaccess", bHas);
	if (bHas) {
		int iCount;
		actor->GetProperty("noaccess", iCount);
		actor->SetProperty("noaccess", iCount + 1);
	}
	else {
		actor->SetProperty("noaccess", 1);
	}
}

void DecrementNoAccess(object actor)
{
	if (!actor)
		return;
	int iCount;
	actor->GetProperty("noaccess", iCount);
	if (iCount > 1) {
		actor->SetProperty("noaccess", iCount - 1);
	}
	else {
		actor->RemoveProperty("noaccess");
	}
}

task TWaitForLoad
{
	void init(void) {
		do {
			@Hold();
		} while (!IsLoaded());
	}
	
	void OnLoad(void) {
		@StopGroup0();
		@sync();
	}
}

task TWaitForUnload
{
	void init(void) {
		do {
			@Hold();
		} while (IsLoaded());
	}
	
	void OnUnload(void) {
		@StopGroup0();
		@sync();
	}
}

task TTrade 
{
	var bool bEnd;
	void init(object actor) {
		@DoTrade();
		bEnd = false;
		for (;;) {
			if (IsLSHNPC()) {
				PlayHeadAnimation("Neutral");
				@lshWaitForAnimEnd();
			}
			else {
				@WaitForAnimEnd();
				@PlayAnimation("all", "idle");
			}
			if (bEnd)
				return;
		}		
	}
	
	void OnDialogReply(int iID) {
		if (IsLSHNPC())
			@lshStopAnimation();
		else
			@StopAnimation();
			
		@StopTrade();
		bEnd = true;
	}
}

task TLSHTrade 
{
	var bool bEnd;
	void init(object actor) {
		@DoTrade();
		bEnd = false;
		for (;;) {
			PlayHeadAnimation("Neutral");
			@lshWaitForAnimEnd();
			if (bEnd)
				return;
		}		
	}
	
	void OnDialogReply(int iID) {
		@lshStopAnimation();
		@StopTrade();
		bEnd = true;
	}
}

void PlayHeadAnimation(string strName) {
	float fBegin, fEnd;
	@lshGetAnimTimes(strName, fBegin, fEnd);
	@lshPlayAnimation(fBegin, fEnd, false);
}

void PlayHeadAnimation(string strName, bool bBlend) {
	float fBegin, fEnd;
	@lshGetAnimTimes(strName, fBegin, fEnd);
	@lshPlayAnimation(fBegin, fEnd, bBlend);
}

bool IsSleeping(void)
{
	bool bHas;
	@HasProperty("sleeping", bHas);
	if (!bHas)
		return false;
	bool bSleeping;
	@GetProperty("sleeping", bSleeping);
	return bSleeping;
}

object GetContainerItems(object actor, int n, object amounts)
{
	object items = CreateObjectVector();
	int iItemCount;
	actor->GetItemCount(iItemCount, n);
	for (int i = 0; i < iItemCount; ++i) {
		object item;
		actor->GetItem(item, i, n);
		items->add(item);
		int iAmount;
		actor->GetItemAmount(iAmount, i, n);
		amounts->add(iAmount);
	}
	return items;
}

object GetContainerSelItems(object actor, int n)
{
	object sel;
	@CreateIntVector(sel);
	int iItemCount;
	actor->GetItemCount(iItemCount, n);
	for (int i = 0; i < iItemCount; ++i) {
		bool bSel;
		actor->IsItemSelected(bSel, i, n);
		if (bSel)
			sel->add(i);
	}
	return sel;
}

void RestoreContainer(object actor, int n, object items, object amounts, object sel)
{
	actor->RemoveAllItems(n);
	int iCount;
	items->size(iCount);
	for (int i = 0; i < iCount; ++i) {
		object item;
		items->get(item, i);
		int iAmount;
		amounts->get(iAmount, i);
		bool bAdded;
		actor->AddItem(bAdded, item, n, iAmount);
	}
	sel->size(iCount);
	for (int i = 0; i < iCount; ++i) {
		int iIndex;
		sel->get(iIndex, i);
		actor->SelectItem(iIndex, true, n);
	}
}

void HeadLook(object actor)
{
	float fEyesHeight;
	actor->GetEyesHeight(fEyesHeight);
	Vector vOffset = [0, 0, 0];
	vOffset.y = fEyesHeight;
	@LookAsync(actor, "head", vOffset);
}

bool StartSpeech(string strMMS) 
{
	if (IsLSHNPC()) {
		bool bHas;
		@lshHasSpeech(bHas, strMMS);
		if (bHas) {
			@lshPlaySpeech(strMMS);
			return true;
		}
	}
	return false;
}

void StopSpeech() 
{
	if (IsLSHNPC()) {
		@lshStopSpeech();
	}		
}

void GenerateActorRandomItem(object actor, string name, int iProb, int iTotal)
{
	if (rndbool(iProb, iTotal)) {
		bool bAdded;
		actor->AddItem(bAdded, name, 0);
	}
}

void GenerateActorRandomItem(object actor, string name, int iProb, int iTotal, int iMaxAmount)
{
	if (rndbool(iProb, iTotal)) {
		int iAmount;
		@irand(iAmount, iMaxAmount);
		bool bAdded;
		actor->AddItem(bAdded, name, 0, iMaxAmount + 1);
	}
}

void GenerateRandomItem(string name, int iProb, int iTotal)
{
	if (rndbool(iProb, iTotal)) {
		bool bAdded;
		@AddItem(bAdded, name, 0);
	}
}

void GenerateRandomItem(string name, int iProb, int iTotal, int iMaxAmount)
{
	if (rndbool(iProb, iTotal)) {
		int iAmount;
		@irand(iAmount, iMaxAmount);
		bool bAdded;
		@AddItem(bAdded, name, 0, iAmount + 1);
	}
}

void GenerateRandomItem(string name, int iProb, int iTotal, int iMinAmount, int iMaxAmount)
{
	if (rndbool(iProb, iTotal)) {
		int iAmount;
		@irand(iAmount, iMaxAmount - iMinAmount + 1);
		bool bAdded;
		@AddItem(bAdded, name, 0, iAmount + iMinAmount);
	}
}

void PlayAnimationSound(string name)
{
	bool bExist;
	@IsExisting3DSound(bExist, name);
	if (!bExist) {
		int iSoundCount;
		for (iSoundCount = 0; ; ++iSoundCount) {
			bool bExist;
			@IsExisting3DSound(bExist, name + (iSoundCount + 1));
			if (!bExist)
				break;
		}
		if (!iSoundCount)
			return;
		int iSoundIndex;
		@irand(iSoundIndex, iSoundCount);
		name += iSoundIndex + 1;
	}

	bool bLoaded;
	@Is3DSoundLoaded(bLoaded, name);
	if (bLoaded) {
		float fEyesHeight;
		@GetEyesHeight(fEyesHeight);
		Vector vDir;
		@GetDirection(vDir);
		Vector vOffset = vDir * 50;
		vOffset.y += fEyesHeight;
		@PlayGlobalSound(name, vOffset);
	}
}

bool IsCommonClass(string strClass)
{
	return strClass == "woman" || strClass == "worker" || strClass == "butcher" || strClass == "wasted_girl" ||
		   strClass == "boy" || strClass == "vaxxabitka" || strClass == "unosha" || strClass == "wasted_male" ||
		   strClass == "alkash" || strClass == "dohodyaga" || strClass == "vaxxabit" || strClass == "nudegirl" ||
		   strClass == "morlok";
}

