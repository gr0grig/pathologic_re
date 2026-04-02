include std.sci
include citymanager.sci
include messages.sci
include dialogs.sci
include diary.sci
include dairy_logic.sci
include message_logic.sci
include worldmap_logic.sci
include item_base.sci
include game_ext.sci
include dialog_return_actions.sci

////////////////////////////////////////////////////////
// Game
// PerformGameUpdate must be implemented outside
////////////////////////////////////////////////////////

// CONSTANTS
const int c_iGameUpdatesPerDay = 24;
const int c_iGameUpdateTimer = 40000;
const int c_iGamePreUpdateTimer = 42000;
const int c_iTimelineTimer = 45000;

const int c_iQuestDisabled = 0;
const int c_iQuestEnabled = 1;
const int c_iQuestCompleted = 1000;
const int c_iQuestFailed = -1;

bool IsNormalQuestState(int iState)
{
	return iState >= c_iQuestEnabled && iState < c_iQuestCompleted;
}

bool IsQuestFinished(string name)
{
	int iVal = GetVariable(name);
	return iVal == c_iQuestCompleted || iVal == c_iQuestFailed;
}

bool IsActiveDialogState() {
	int iVal = GetVariable("ads");
	return (iVal == 0);
}

void SetActiveDialogState(bool bActive) {
	@SetVariable("ads", bActive ? 0 : 1);
}

bool HandleGameTimer(int iID, float fTime)
{
	if (iID > c_iGamePreUpdateTimer && iID < c_iGamePreUpdateTimer + c_iGameDays * c_iGameUpdatesPerDay) {
		int iDay = (iID - c_iGamePreUpdateTimer) / c_iGameUpdatesPerDay;
		int iPart = (iID - c_iGamePreUpdateTimer) % c_iGameUpdatesPerDay;
		
		PerformCommonGamePreUpdate(iDay + 1, iPart);
		return true;
	}

	if (iID > c_iGameUpdateTimer && iID < c_iGameUpdateTimer + c_iGameDays * c_iGameUpdatesPerDay) {
		int iDay = (iID - c_iGameUpdateTimer) / c_iGameUpdatesPerDay;
		int iPart = (iID - c_iGameUpdateTimer) % c_iGameUpdatesPerDay;
		
		PerformCommonGameUpdate(iDay + 1, iPart);
		PerformGameUpdate(iDay + 1, iPart);
		return true;
	}
	
	return false;
}

//////////////////////////////////////////////////////////////
// timer updates
//////////////////////////////////////////////////////////////
void PerformGameInit()
{
	float fCurTime;
	@GetGameTime(fCurTime);
	
	// setting city update timers
	for (int i = 1; i < c_iGameDays * c_iGameUpdatesPerDay; ++i) {
		float fTime = 24.0 / c_iGameUpdatesPerDay * i;
		if (fTime < fCurTime)
			continue;
		@SetTimeEvent(c_iGameUpdateTimer + i, fTime); 
		
		fTime -= 12.0 / 3600.0;
		if (fTime < fCurTime)
			continue;
		@SetTimeEvent(c_iGamePreUpdateTimer + i, fTime); 
	}
	
	PerformCommonGamePostInit();
	PerformGamePostInit();
}

float GetPlayerReputation() {
	object player;
	@FindActor(player, "player");
	if (!player)
		return 0;
	float fRep;
	player->GetProperty("reputation", fRep);
	return fRep;	
}
