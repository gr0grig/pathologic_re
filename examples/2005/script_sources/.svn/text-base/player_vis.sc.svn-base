include std.sci
include day_time.sci

const float c_fNightVisibility = 40.0 / 255;
const float c_fDayVisibility = 120.0 / 255;

maintask TPlayerVis
{
	void init(void) {
		for (;;) {
			float fGameTime;
			@GetGameTime(fGameTime);
			fGameTime %= 24;
			float fVisAmount;
			if (fGameTime <= c_fTimeDawnBegin) {
				fVisAmount = c_fNightVisibility;
			}
			else if (fGameTime <= c_fTimeDawn) {
				fVisAmount = LinInterpolate(fGameTime, c_fTimeDawnBegin, c_fTimeDawn, c_fNightVisibility, c_fDayVisibility);
			}
			else if (fGameTime <= c_fTimeNightBegin) {
				fVisAmount = c_fDayVisibility;
			}
			else if (fGameTime <= c_fTimeNight) {
				fVisAmount = LinInterpolate(fGameTime, c_fTimeNightBegin, c_fTimeNight, c_fDayVisibility, c_fNightVisibility);
			}
			else {
				fVisAmount = c_fNightVisibility;
			}
			@SetBaseVisibility(fVisAmount);
			@Sleep(5);
		}
	}
}