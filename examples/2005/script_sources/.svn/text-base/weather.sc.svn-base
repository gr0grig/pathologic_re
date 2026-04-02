include std.sci
include citymanager_base.sci

const float c_fTimeDawnBegin = 6;				// cannot be changed!!!!
const float c_fTimeDawn = 8;
const float c_fTimeDayBegin = 10;
const float c_fTimeDay = 11;
const float c_fTimeSunsetBegin = 18;
const float c_fTimeSunset = 19;
const float c_fTimeNightBegin = 20;
const float c_fTimeNight = 21;

const Vector c_FogColorDawn = [153, 112, 72] / 255.0;
const Vector c_FogColorDawnRain = [124, 87, 54] / 255.0;
const Vector c_SunColorDawn = [130, 70, 46] / 255;
const Vector c_AmbColorDawn = [180, 129, 82] / 255;
const float c_fFogDawnBegin = 3000;
const float c_fFogDawnEnd = 5000;

const Vector c_FogColorDay = [93, 87, 66] / 255.0;
const Vector c_FogColorDayRain = [95, 83, 74] / 255.0;
const Vector c_SunColorDay = [60, 52, 43] / 255;
const Vector c_AmbColorDay = [150, 140, 100] / 255;
const float c_fFogDayBegin = 3000;
const float c_fFogDayEnd = 5000;

const Vector c_FogColorDay12 = [150, 130, 110] / 255.0;
const Vector c_SunColorDay12 = [100, 100, 100] / 255;
const Vector c_AmbColorDay12 = [150, 130, 120] / 255;

const Vector c_FogColorSunset = [153, 112, 72] / 255.0;
const Vector c_FogColorSunsetRain = [124, 87, 54] / 255.0;
const Vector c_SunColorSunset = [130, 70, 46] / 255;
const Vector c_AmbColorSunset = [180, 129, 82] / 255;
const float c_fFogSunsetBegin = 3000;
const float c_fFogSunsetEnd = 5000;

const Vector c_FogColorNight = [50, 50, 50] / 255.0;
const Vector c_FogColorNightRain = [50, 50, 50] / 255.0;
const Vector c_SunColorNight = [0, 0, 0] / 255;
const Vector c_AmbColorNight = [70, 70, 70] / 255;
const float c_fFogNightBegin = 3000;
const float c_fFogNightEnd = 5000;

const Vector c_DiseaseSkyColor = [180, 255, 232] / 255;
const Vector c_DiseaseAmbientColor = c_DiseaseSkyColor;
const Vector c_DiseaseSunColor = c_DiseaseSkyColor;
const float c_fDiseaseFadeSpeed = 0.2;

const Vector c_NailSkyColor = [242, 187, 37] / 255 * 1.64;
const Vector c_NailAmbientColor = c_NailSkyColor;
const Vector c_NailSunColor = c_NailSkyColor;
const float c_fNailFadeSpeed = 0.2;

const Vector c_LightningColor = [255, 255, 183] / 255;
const float c_fLightningDurationMin = 0.01;
const float c_fLightningDurationMax = 0.015;

const int c_iRainBeginTimer = 40;
const int c_iRainEndTimer = 41;
const int c_iRainFinishTimer = 42;
const int c_iLightningTimer = 43;

const int c_iLightningThunderTimer = 50;
const int c_iLightningPostThunderTimer = 51;
const int c_iLightningPhaseTimerBegin = 52;
const int c_iNFlashes = 5;

var bool g_bLightning;

float TimeDelta(float fTime1, float fTime2)
{
	fTime2 %= 24;
	if (fTime1 < fTime2) {
		return fTime1 + 24 - fTime2;
	}
	return fTime1 - fTime2;
}

const int c_iRStateNormal	= 0;
const int c_iRStateDisease	= 1;
const int c_iRStateNail		= 2;

maintask TWeather
{
	var int m_iRState;
	var bool m_bWonderThunder;

	void init(void) {
		BeginRain();
		
		@ForceWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, c_SunColorNight, c_AmbColorNight, c_fFogNightBegin, c_fFogNightEnd, c_FogColorNight, c_FogColorNight);
		
		float fGameTime;
		@GetGameTime(fGameTime);
		if (fGameTime < c_fTimeDawnBegin - 0.01 || fGameTime > c_fTimeDawnBegin + 0.01) {
			@Trace("Wrong time");
			return;
		}
		
		for (;;) {
			@GetGameTime(fGameTime);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, c_SunColorDawn, c_AmbColorDawn, c_fFogDawnBegin, c_fFogDawnEnd, c_FogColorDawn, c_FogColorDawnRain, TimeDelta(c_fTimeDawn, fGameTime));
			@GetGameTime(fGameTime);
			@Sleep(TimeDelta(c_fTimeDayBegin, fGameTime));
			@GetGameTime(fGameTime);
			if (GetDay() < 3 || GetDay() == 12) {
				@ChangeWeather("day_clear_bk.tex", "day_clear_ft.tex", "day_clear_lt.tex", "day_clear_rt.tex", "day_clear_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", false, c_SunColorDay12, c_AmbColorDay12, c_fFogDayBegin, c_fFogDayEnd, c_FogColorDay12, c_FogColorDayRain, TimeDelta(c_fTimeDay, fGameTime));
			}
			else {
				@ChangeWeather("day_bk.tex", "day_ft.tex", "day_lt.tex", "day_rt.tex", "day_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", false, c_SunColorDay, c_AmbColorDay, c_fFogDayBegin, c_fFogDayEnd, c_FogColorDay, c_FogColorDayRain, TimeDelta(c_fTimeDay, fGameTime));
			}
			@GetGameTime(fGameTime);
			@Sleep(TimeDelta(c_fTimeSunsetBegin, fGameTime));
			@GetGameTime(fGameTime);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, c_SunColorSunset, c_AmbColorSunset, c_fFogSunsetBegin, c_fFogSunsetEnd, c_FogColorSunset, c_FogColorSunsetRain, TimeDelta(c_fTimeSunset, fGameTime));
			@GetGameTime(fGameTime);
			@Sleep(TimeDelta(c_fTimeNightBegin, fGameTime));
			@GetGameTime(fGameTime);
			@ChangeWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, c_SunColorNight, c_AmbColorNight, c_fFogNightBegin, c_fFogNightEnd, c_FogColorNight, c_FogColorNight, TimeDelta(c_fTimeNight, fGameTime));
			@GetGameTime(fGameTime);
			@Sleep(TimeDelta(c_fTimeDawnBegin, fGameTime));
		}
	}
	
	void BeginRain(void) {
		float fWaitTime;
		@rand(fWaitTime, 2, 20);
		@SetTimer(c_iRainBeginTimer, fWaitTime);
		@Trace("Forecast: rain begins in " + fWaitTime + " hours");
	}
	
	void EndRain(void) {
		float fWaitTime;
		@rand(fWaitTime, 1, 8);
		@SetTimer(c_iRainEndTimer, fWaitTime);
		@Trace("Forecast: rain ends in " + fWaitTime + " hours");
	}
	
	void BeginThunder(void) {
		float fWaitTime;
		@rand(fWaitTime, 60, 120);
		@SetTimer(c_iLightningTimer, SecondsToGameHours(fWaitTime));
	}
	
	void EndThunder(void) {
		@KillTimer(c_iLightningTimer);
	}

	void OnTimer(int id) {
		if (id == c_iRainBeginTimer) {
			@KillTimer(c_iRainBeginTimer);
			@Rain();
			float fRainPower;
			@rand(fRainPower, 0.2, 1);
			BeginThunder();
			@ModLinear(fRainPower, fRainPower * 2);
			EndRain();
		}
		else if (id == c_iRainEndTimer) {
			@KillTimer(c_iRainEndTimer);
			@ModLinear(0, 2);
			@SetTimer(c_iRainFinishTimer, 2);
		}
		else if (id == c_iRainFinishTimer) {
			EndThunder();
			@KillTimer(c_iRainFinishTimer);
			@Bright();
			@ModNothing();
			BeginRain();
		}
		else if (id == c_iLightningTimer) {
			BeginThunder();
			if (!g_bLightning) {
				float fLevel;
				@GetModifierLevel(fLevel);
				if (fLevel > 0.3) {
					DoLightning(false);
				}
			}
		}
		else if (id >= c_iLightningPhaseTimerBegin && id < c_iLightningPhaseTimerBegin + (c_iNFlashes - 1) * 2) {
			@KillTimer(id);
			if ((id - c_iLightningPhaseTimerBegin) % 2) {
				@SetAmbientMod(c_LightningColor);
			}
			else {
				@SetAmbientMod([0, 0, 0]);
			}
			float fDelay;
			@rand(fDelay, c_fLightningDurationMin, c_fLightningDurationMax);
			@SetTimer(id + 1, SecondsToGameHours(fDelay));
		}
		else if (id == c_iLightningPhaseTimerBegin + (c_iNFlashes - 1) * 2) {
			@KillTimer(id);
			@SetAmbientMod([0, 0, 0]);
			float fDelay;
			if (m_bWonderThunder) {
				m_bWonderThunder = false;
				fDelay = 0.1;
			}
			else
				@rand(fDelay, 2, 3);
			@SetTimer(c_iLightningThunderTimer, SecondsToGameHours(fDelay));
		}
		else if (id == c_iLightningThunderTimer) {
			@KillTimer(c_iLightningThunderTimer);
			object scene;
			@GetActiveScene(scene);
			if (scene->FuncExist("CanPlayThunder", 1)) {
				bool bPlay;
				scene->CanPlayThunder(bPlay);
				if (bPlay) {
					int iThunderType;
					@irand(iThunderType, 3);
					@PlaySound("thunder" + (iThunderType + 1));
				}
			}
			@SetTimer(c_iLightningPostThunderTimer, SecondsToGameHours(6));
		}
		else if (id == c_iLightningPostThunderTimer) {
			@KillTimer(c_iLightningPostThunderTimer);
			g_bLightning = false;
		}
	}
	
	void DoLightning(bool bWonder) {
		g_bLightning = true;
		@SetAmbientMod(c_LightningColor);
		float fDelay;
		if (bWonder)
			fDelay = c_fLightningDurationMax;
		else
			@rand(fDelay, c_fLightningDurationMin, c_fLightningDurationMax);
			
		m_bWonderThunder = bWonder;
			
		@SetTimer(c_iLightningPhaseTimerBegin, SecondsToGameHours(fDelay));
	}
	
	void OnConsole(string strCmd, string strParms) {
		if (strCmd == "rain") {
			OnTimer(c_iRainBeginTimer);
		}
		else if (strCmd == "wmod_level") {
			float fLevel;
			@GetModifierLevel(fLevel);
			@Trace("Level: " + fLevel);
		}
		else if (strCmd == "wdisease") {
			ChangeDiseaseEffectToDiseased();
		}
		else if (strCmd == "wnormal") {
			ChangeDiseaseEffectToNormal();
		}
		else if (strCmd == "lightning") {
			if (!g_bLightning) {
				DoLightning(false);
			}
		}
	}
	
	void OnRegionChange(int id) {
		if (id == -1) {
			ChangeDiseaseEffectToNormal();
		}
		else {
			if (IsRegionDiseased(id)) {
				ChangeDiseaseEffectToDiseased();
			}
			else if (IsRegionClosed(id)) {
				ChangeDiseaseEffectToNailed();
			}
			else {
				ChangeDiseaseEffectToNormal();
			}
		}
	}
	
	void ChangeDiseaseEffectToNormal(void) {
		if (m_iRState == c_iRStateNormal)
			return;
			
		m_iRState = c_iRStateNormal;

		for (int i = 0; i < 3; ++i) {	
			Vector vColor;
			@GetColorMod(vColor, i);
			@LinearColorMod(i, vColor, [1, 1, 1], c_fDiseaseFadeSpeed);
		}
	}
	
	void ChangeDiseaseEffectToNailed(void) {
		if (m_iRState == c_iRStateNail)
			return;
			
		m_iRState = c_iRStateNail;

		Vector vColor;
		@GetColorMod(vColor, 0);
		@LinearColorMod(0, vColor, c_NailSkyColor, c_fNailFadeSpeed);
		@GetColorMod(vColor, 1);
		@LinearColorMod(1, vColor, c_NailAmbientColor, c_fNailFadeSpeed);
		@GetColorMod(vColor, 2);
		@LinearColorMod(2, vColor, c_NailSunColor, c_fNailFadeSpeed);
	}

	void ChangeDiseaseEffectToDiseased(void) {
		if (m_iRState == c_iRStateDisease)
			return;
			
		m_iRState = c_iRStateDisease;

		Vector vColor;
		@GetColorMod(vColor, 0);
		@LinearColorMod(0, vColor, c_DiseaseSkyColor, c_fDiseaseFadeSpeed);
		@GetColorMod(vColor, 1);
		@LinearColorMod(1, vColor, c_DiseaseAmbientColor, c_fDiseaseFadeSpeed);
		@GetColorMod(vColor, 2);
		@LinearColorMod(2, vColor, c_DiseaseSunColor, c_fDiseaseFadeSpeed);
	}
	
	void OnTrigger(string name) {
		if (name == "lightning") {
			if (!g_bLightning)
				DoLightning(true);
		}
	}
}
