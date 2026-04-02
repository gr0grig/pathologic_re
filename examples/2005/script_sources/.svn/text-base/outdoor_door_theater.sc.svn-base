include outdoor_door_base.sci

bool IsToPlayMovie() 
{
	int iHour = GetHour(); 
	if (iHour < 6) {
		int iDay = GetDay();
		if (iDay > 1) {
			int iPerformance;
			@GetVariable("Performance" + iDay, iPerformance);
			return (iPerformance == 0);
		}
	}
	return false;
}

void PlayMovie() 
{
	int iDay = GetDay();
	int iPerformance;
	@SetVariable("Performance" + iDay, 1);
	@PlayMovie("NightMasks" + (iDay - 1)+ ".wmv");
}

maintask TDoor : TDoorBase
{
	void init(void) {
		@DisableUpdate();
		super.init();
	}
	
	void OnUse(object actor) {
		if (IsToPlayMovie()) {
			PlayMovie();
		}
		super.OnUse(actor);
	}	
}
