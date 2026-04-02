include actor_std.sci
include world_wnd_messages.sci

// common events
event OnUse					0;
event OnSee					1;
event OnStopSee				2;
event OnHear				3;
event OnStopHear			4;
event OnLoad				5;
event OnUnload				6;
event OnTimer				7;
event OnRegionChange		8;
event OnGameTime			9;
event OnCollision			10;
event OnMusicChange			12;
event OnPropertyChange		16;
event OnAttacked			17;
event OnHit					22;
event OnIntersection		23;
event OnKeyDown				24;
event OnKeyUp				25;
event OnTrigger				26;
event OnStopIntersection	27;
event OnActorStuck			28;
event OnPlayerDamage		30;
event OnReputationChange	31;
event OnDispose				32;
event OnInventoryAddItem	33;
event OnInventoryRemoveItem	34;
event OnInventorySelChange	35;
event OnClearPath			38;
event OnFallDamage			39;
event OnSteal				40;
event OnDeath				41;
event OnMessage				42;
event OnHit2				43;
event OnPlayerEnemy			44;
event OnLSHAnimationEnd		45;
event OnConsole				1000;

// player events
event OnPlayerStartShooting		13;
event OnPlayerStopShooting		14;
event OnPlayerHolsterWeapon		15;
event OnAction					18;
event OnPlayerLand				19;
event OnPlayerStartWalking		20;
event OnPlayerStopWalking		21;
event OnPlayerStartAltShooting	36;
event OnPlayerStopAltShooting	37;
event OnPlayerStartSneaking		44;
event OnPlayerStopSneaking		45;

const float PI = 3.1415926535897932;

object self(void)
{
	object obj;
	@self(obj);
	return obj;
}

int min_of(int v1, int v2, int v3)
{
	if (v1 < v2)
		return (v1 < v3)? 0 : 2;
	return (v2 < v3)? 1 : 2;
}

int max_of(int v1, int v2, int v3)
{
	if (v1 > v2)
		return (v1 > v3)? 0 : 2;
	return (v2 > v3)? 1 : 2;
}

Vector Normalize(Vector v)
{
	float fLen = sqrt(v | v);
	if (fLen < 0.000001)
		return [0, 0, 0];
	return v / fLen;
}

float VectorDist(Vector v1, Vector v2)
{
	Vector vDelta = v2 - v1;
	return sqrt(vDelta | vDelta);
}

float VectorDistSqr(Vector v1, Vector v2)
{
	Vector vDelta = v2 - v1;
	return (vDelta | vDelta);
}

float minf(float v1, float v2)
{
	return (v1 < v2)? v1 : v2;
}

int abs(int v)
{
	return (v < 0)? -v : v;
}

float absf(float v)
{
	return (v < 0)? -v : v;
}

float QuadraticDeterminant(float a, float b, float c)
{
	return b * b - 4 * a * c;
}

float SolveQuadraticMinPos(float a, float b, float c, float d)
{
	float k = (-b - d) / (2 * a);
	if (k > 0)
		return k;
	return (-b + d) / (2 * a);
}

float SolveQuadraticMax(float a, float b, float c, float d)
{
	return (-b + d) / (2 * a);
}

float clampf(float v, float fMin, float fMax)
{
	if (v < fMin)
		return fMin;
	if (v > fMax)
		return fMax;
	return v;
}

float signf(float v)
{
	if (v < 0.0) return -1.0;
	return (v > 0.0)? 1.0 : 0.0;
}

int clampi(int v, int iMin, int iMax)
{
	if (v < iMin)
		return iMin;
	if (v > iMax)
		return iMax;
	return v;
}

bool betweenf(float v, float fMin, float fMax)
{
	return v >= fMin && v <= fMax;
}

float LinInterpolate(float t, float t1, float t2, float v1, float v2)
{
	float k = (t - t1) / (t2 - t1);
	return v1 * (1 - k) + v2 * k;
}

bool rndbool(float fProb)
{
	float fRand;
	@rand(fRand);
	return fRand < fProb;
}

bool rndbool(int iProb, int iTotal)
{
	int iRand;
	@irand(iRand, iTotal);
	return iRand < iProb;
}

int GetVirtualKeyCode(string strKeyName)
{
	int iCode;
	@GetVirtualKeyCode(iCode, strKeyName);
	return iCode;
}

object CreateObjectSet(void)
{
	object obj;
	@CreateObjectSet(obj);
	return obj;
}

object CreateIntVector(void)
{
	object obj;
	@CreateIntVector(obj);
	return obj;
}

object CreateObjectVector(void)
{
	object obj;
	@CreateObjectVector(obj);
	return obj;
}

float CosAngle(Vector v1, Vector v2)
{
	return (v1 | v2) / sqrt((v1 | v1) * (v2 | v2));
}

float Dot2D(Vector v1, Vector v2)
{
	return v1.x * v2.x + v1.z * v2.z;
}

float LengthSqr2D(Vector v)
{
	return v.x * v.x + v.z * v.z;
}

float Length2D(Vector v)
{
	return sqrt(v.x * v.x + v.z * v.z);
}

float CosAngle2D(Vector v1, Vector v2)
{
	return Dot2D(v1, v2) / (Length2D(v1) * Length2D(v2));
}

int strchr(string str, string chars)
{
	int iIndex;
	@_strchr(iIndex, str, chars);
	return iIndex;
}

string strsub(string str, int iBegin)
{
	string r;
	@_strsub(r, str, iBegin);
	return r;
}

string strsub(string str, int iBegin, int iEnd)
{
	string r;
	@_strsub(r, str, iBegin, iEnd);
	return r;
}

int GetVariable(string name) {
	int iVal;
	@GetVariable(name, iVal);
	return iVal;
}

int IncVariable(string name) {
	int iVal = GetVariable(name);
	iVal += 1;
	@SetVariable(name, iVal);
	return iVal;
}

int DecVariable(string name) {
	int iVal = GetVariable(name);
	iVal -= 1;
	@SetVariable(name, iVal);
	return iVal;
}

int GetLocatorCount(string name)
{
	int n;
	for (n = 1; ; ++n) {
		bool bFound;
		@GetLocator(name + n, bFound);
		if (!bFound)
			break;
	}
	return n - 1;
}

Vector GetLocatorPosition(object scene, string name)
{
	bool bFound;
	Vector vPos;
	scene->GetLocator(name, bFound, vPos);
	if (!bFound) {
		@Trace("Locator '" + name + "' doesn't exist");
		return [0, 0, 0];
	}
	return vPos;
}

object AddQuestActor(string name)
{
	object scene;
	@GetMainOutdoorScene(scene);
	object actor;
	@AddBlankActor(actor, scene, name, name + ".bin");
	return actor;
}

object AddQuestActorFromXml(string name)
{
	object scene;
	@GetMainOutdoorScene(scene);
	object actor;
	@AddBlankActorFromXml(actor, scene, name, name + ".xml");
	return actor;
}

object GetSceneByName(string name)
{
	object scene;
	@GetSceneByName(scene, name);
	return scene;
}

object SpawnActor(object scene, string actor_name, string xml_name)
{
	object actor;
	@AddActor(actor, actor_name, scene, [0, 0, 0], [0, 0, 1], xml_name);
	return actor;
}

object SpawnActor(object scene, string loc, string actor_name, string xml_name)
{
	bool bFound;
	Vector vPos, vDir;
	scene->GetLocator(loc, bFound, vPos, vDir);
	object actor;
	if (!bFound) {
		@Trace("Locator " + loc + " doesn't exist");
		actor = null;
	}
	else {
		@AddActor(actor, actor_name, scene, vPos, vDir, xml_name);
	}
	return actor;
}

object SpawnScriptedActor(object scene, string actor_name, string script_name)
{
	object actor;
	@AddScriptedActor(actor, actor_name, script_name, scene, [0, 0, 0], [0, 0, 1]);
	return actor;
}

object SpawnScriptedActor(object scene, string loc, string actor_name, string script_name)
{
	bool bFound;
	Vector vPos, vDir;
	scene->GetLocator(loc, bFound, vPos, vDir);
	object actor;
	if (!bFound) {
		@Trace("Locator " + loc + " doesn't exist");
		actor = null;
	}
	else {
		@AddScriptedActor(actor, actor_name, script_name, scene, vPos, vDir);
	}
	return actor;
}

object SpawnActorByType(object scene, string loc, string actor_type, string xml_name)
{
	bool bFound;
	Vector vPos, vDir;
	scene->GetLocator(loc, bFound, vPos, vDir);
	object actor;
	if (!bFound) {
		@Trace("Locator " + loc + " doesn't exist");
		actor = null;
	}
	else {
		@AddActorByType(actor, actor_type, scene, vPos, vDir, xml_name);
	}
	return actor;
}

object SpawnStationaryActor(object scene, string loc, string actor_name)
{
	bool bFound;
	Vector vPos, vDir;
	scene->GetLocator(loc, bFound, vPos, vDir);
	object actor;
	if (!bFound) {
		@Trace("Locator " + loc + " doesn't exist");
		actor = null;
	}
	else {
		scene->AddStationaryActor(actor, vPos, vDir, actor_name);
	}
	return actor;
}

object SpawnStationaryActor(object scene, string loc, string actor_name, string xml_name)
{
	bool bFound;
	Vector vPos, vDir;
	scene->GetLocator(loc, bFound, vPos, vDir);
	object actor;
	if (!bFound) {
		@Trace("Locator " + loc + " doesn't exist");
		actor = null;
	}
	else {
		scene->AddStationaryActor(actor, vPos, vDir, actor_name, xml_name);
	}
	return actor;
}

object SpawnStationaryActorForce(object scene, string loc, string actor_name, string xml_name)
{
	bool bFound;
	Vector vPos, vDir;
	scene->GetLocator(loc, bFound, vPos, vDir);
	object actor;
	if (!bFound) {
		@Trace("Locator " + loc + " doesn't exist");
		actor = null;
	}
	else {
		scene->AddStationaryActor(actor, vPos, vDir, actor_name, xml_name, true);
	}
	return actor;
}

void LockDoorActor(string name, bool bLock)
{
	object actor;
	@FindActor(actor, name);
	if (!actor)
		@Trace("Door " + name + " not found");
	else
		actor->SetProperty("locked", bLock);
}

void LockDoorActor(string name, bool bLock, bool bUnlockable)
{
	object actor;
	@FindActor(actor, name);
	if (!actor)
		@Trace("Door " + name + " not found");
	else {
		actor->SetProperty("locked", bLock);
		actor->SetProperty("lp", bUnlockable);
	}
}

void LockMovingDoor(string name, bool bLock)
{
	object actor;
	@FindActor(actor, name);
	if (!actor)
		@Trace("Door " + name + " not found");
	else {
		if (bLock)
			actor->Close();
		actor->SetProperty("locked", bLock);
	}
}

void ModVariableI(string varname, int iDelta)
{
	int iVal;
	@GetVariable(varname, iVal);
	@SetVariable(varname, iVal + iDelta);
}

void EnableInventoryDrop(void)
{
	ModVariableI("noinv_drop", -1);
}

void DisableInventoryDrop(void)
{
	ModVariableI("noinv_drop", 1);
}

bool InventoryDropEnabled(void)
{
	int iVal;
	@GetVariable("noinv_drop", iVal);
	return !iVal;
}

void EnableContainerUse(void)
{
	ModVariableI("nouse_container", -1);
}

void DisableContainerUse(void)
{
	ModVariableI("nouse_container", 1);
}

bool ContainerUseEnabled(void)
{
	int iVal;
	@GetVariable("nouse_container", iVal);
	return !iVal;
}

void SendHelpWndMessage(int iMessageTextID) 
{
	object text;
	@CreateIntVector(text);
	text->add(iMessageTextID);
	@SendWorldWndMessage(c_iWM_HelpMessage, text);
}

void QueueItemAdd(int iItemID, int iAmount) {
	object item;
	@CreateIntVector(item);
	item->add(iItemID);
	item->add(iAmount);
	@SendWorldWndMessage(c_iWM_PlayerAddItem, item);	
}

void QueueItemRemove(int iItemID, int iAmount) {
	object item;
	@CreateIntVector(item);
	item->add(iItemID);
	item->add(iAmount);
	@SendWorldWndMessage(c_iWM_PlayerRemoveItem, item);	
}

void PlayerAddMoney(object player, int iAmount) {
	ModPropertyI(player, "money", iAmount);
	
	if (iAmount > 0) {
		int iItemID;
		@GetInvItemByName(iItemID, "Money");
		QueueItemAdd(iItemID, iAmount);
	}
}

bool PlayerAddItem(object player, object item, int iAmount)
{
	int iItemID;
	item->GetItemID(iItemID);
	int iContainerID;
	@GetInvItemProperty(iContainerID, iItemID, "Category");
	bool bAdded;
	player->AddItem(bAdded, item, iContainerID, iAmount);
	if (bAdded)
		QueueItemAdd(iItemID, iAmount);
	
	return bAdded;
}

void PlayerPutItem(object player, object item, int iAmount)
{
	int iItemID;
	item->GetItemID(iItemID);
	int iContainerID;
	@GetInvItemProperty(iContainerID, iItemID, "Category");
	bool bAdded;
	player->AddItem(bAdded, item, iContainerID, iAmount);
	if (!bAdded) {
		player->DropItems(item, iAmount);
	}
	else {
		QueueItemAdd(iItemID, iAmount);
	}
}

void PlayerPutItemByName(object player, string item_name, int iAmount)
{
	object item;
	@CreateInvItem(item);
	item->SetItemName(item_name);
	PlayerPutItem(player, item, iAmount);
}

bool PlayerHasItem(object player, string item_name)
{
	int iItemID;
	@GetInvItemByName(iItemID, item_name);
	bool bHas;
	player->HasItem(iItemID, bHas);
	return bHas;
}

bool PlayerRemoveItem(object player, string item_name)
{
	int iItemID;
	@GetInvItemByName(iItemID, item_name);
	int iContainerID;
	@GetInvItemProperty(iContainerID, iItemID, "Category");
	bool bRemoved;
	player->RemoveItemByType(bRemoved, iItemID, iContainerID);
	if (bRemoved) {
		QueueItemRemove(iItemID, 1);
	}
	return bRemoved;
}

bool PlayerModReputation(object player, float fMod)
{
	if (!player)
		return false;
		
	if (fMod > 0) {
		@SendWorldWndMessage(c_iWM_PlayerReputationUp);
	}
	else if (fMod < 0) {
		@SendWorldWndMessage(c_iWM_PlayerReputationDown);
	}
	else {
		return false;
	}
	
	ReportReputationChange(fMod);
	ModPropertyF(player, "reputation", fMod, 0, 1);
	return true;
}

void ReportTirednessChange(float fMod)
{
	object data;
	@CreateFloatVector(data);
	data->add(fMod);
	@SendWorldWndMessage(c_iWM_PlayerTirednessChange, data);
}

void ReportHungerChange(float fMod)
{
	object data;
	@CreateFloatVector(data);
	data->add(fMod);
	@SendWorldWndMessage(c_iWM_PlayerHungerChange, data);
}

void ReportImmunityChange(float fMod)
{
	object data;
	@CreateFloatVector(data);
	data->add(fMod);
	@SendWorldWndMessage(c_iWM_PlayerImmunityChange, data);
}

void ReportDiseaseChange(float fMod)
{
	object data;
	@CreateFloatVector(data);
	data->add(fMod);
	@SendWorldWndMessage(c_iWM_PlayerDiseaseChange, data);
}

void ReportHealthChange(float fMod)
{
	object data;
	@CreateFloatVector(data);
	data->add(fMod);
	@SendWorldWndMessage(c_iWM_PlayerHealthChange, data);
}

void ReportReputationChange(float fMod)
{
	object data;
	@CreateFloatVector(data);
	data->add(fMod);
	@SendWorldWndMessage(c_iWM_PlayerReputationChange, data);
}

bool TriggerActor(string actor_name, string trigger_name)
{
	object actor;
	@FindActor(actor, actor_name);
	if (actor == null) {
		return false;
	}
	@Trigger(actor, trigger_name);
	return true;
}

bool TriggerActor2(string actor_name, string trigger_name, string params)
{
	object actor;
	@FindActor(actor, actor_name);
	if (actor == null)
		return false;
	@Trigger(actor, trigger_name, params);
	return true;
}

void TeleportActor(object actor, string scene_name, string loc)
{
	if (!actor)
		return;
	object scene;
	@GetSceneByName(scene, scene_name);
	bool bFound;
	Vector vPos, vDir;
	scene->GetLocator(loc, bFound, vPos, vDir);
	if (!bFound) {
		@Trace("Teleport location '" + loc + "' not found in scene '" + scene_name + "'");
	}
	else {
		@Teleport(actor, scene, vPos, vDir);
	}
}

bool RemoveActorByName(string name)
{
	object actor;
	@FindActor(actor, name);
	if (!actor)
		return false;
	@RemoveActor(actor);
	return true;
}

void Darken(float fBegin, float fEnd, float fDarkenTime) {
	bool bUp = (fEnd > fBegin);
	float fDarkenSpeed = (fEnd - fBegin) / fDarkenTime;
	while ((bUp)? fBegin < fEnd : fEnd < fBegin) {
		@ModDarkenLevel(fBegin);
		float fDeltaTime;
		@sync(fDeltaTime);
		fBegin += fDeltaTime * fDarkenSpeed; 
	}
	@ModDarkenLevel(fEnd);
}

void RemoveActorsFromVector(object actors)
{
	if (actors) {
		int iCount;
		actors->size(iCount);
		for (int i = 0; i < iCount; ++i) {
			object actor;
			actors->get(actor, i);
			if (actor)
				@RemoveActor(actor);
		}
		actors->clear();
	}
}

void RemoveStationaryActorsFromVector(object actors)
{
	if (actors) {
		int iCount;
		actors->size(iCount);
		for (int i = 0; i < iCount; ++i) {
			object actor;
			actors->get(actor, i);
			if (actor)
				actor->Remove();
		}
		actors->clear();
	}
}

void TriggerActorsInVector(object actors, string trigger_name)
{
	if (actors) {
		int iCount;
		actors->size(iCount);
		for (int i = 0; i < iCount; ++i) {
			object actor;
			actors->get(actor, i);
			if (actor)
				@Trigger(actor, trigger_name);
		}
	}
}

void TriggerStationaryActorsInVector(object actors, string trigger_name)
{
	if (actors) {
		int iCount;
		actors->size(iCount);
		for (int i = 0; i < iCount; ++i) {
			object actor;
			actors->get(actor, i);
			if (actor) {
				object real_actor;
				actor->GetActor(real_actor);
				if (real_actor)
					@Trigger(real_actor, trigger_name);
			}
		}
	}
}

float GetGameTime() {
	float fTime;
	@GetGameTime(fTime);
	return fTime;
}

int GetDay()
{
	float fTime;
	@GetGameTime(fTime);
	return 1 + (int)(fTime / 24);
}

int GetHour()
{
	float fTime;
	@GetGameTime(fTime);
	return (int)fTime % 24;
}

int GetMinute()
{
	float fTime;
	@GetGameTime(fTime);
	return (fTime - (int)fTime) * 60;
}

bool IsDay(int iDay) {
	return GetDay() == iDay;
}

bool IsNight(int _iDay) {
	float fTime;
	@GetGameTime(fTime);
	int iDay = 1 + (int)(fTime / 24);
	if (iDay != _iDay)
		return false;
	
	int iHour = (int)fTime % 24;
	return (iHour < 7);
}

void PlayAttackMusic(object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	if (bPlayer) {
		@PlayGlobalMusic("attack");
	}
}

void PlaySoundIfExists(string sound)
{
	bool bExists;
	@IsExistingSound(bExists, sound);
	if (bExists) {
		@PlaySound(sound);
	}
}

void SetSepia(void)
{
	@SetSepia(0.5, 0.886);
}

void DisableSepia(void)
{
	@SetSepia(0, 0);
}

void BroadcastBattle(void)
{
	object scene;
	@GetScene(scene);
	@BroadcastMessage("battle", self(), scene);
}

float SecondsToGameHours(float fSeconds)
{
	float fScale;
	@GetGameTimeScale(fScale);
	return fSeconds * fScale;
}

bool IsGodMode(void)
{
	bool bGodMode;
	@GetVariable("god_mode", bGodMode);
	return bGodMode;
}

object NullObject(void) {
	object tmp = null;
	return tmp;
}