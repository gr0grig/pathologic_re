// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:

maintask task_0
{
	void init(void)
	{
		@SetVariable("branch", 1);
		@SetSaveProperty(0, 1);
		func_59();
		func_7858();
		func_8898();
		func_12370();
		float var_4580_float;
		float var_4581_float;
		func_234(var_4581_float);
		var_4581_float = var_4580_float;
		func_13887(var_4580_float);
		object var_4988_object;
		func_111(var_4988_object, "quest_b1_02");
		@AdvanceGameTime(0.6666667);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnGameTime(int iID, float fTime)
	{
		int var_3_int;
		iID = var_3_int;
		float var_4_float;
		fTime = var_4_float;
		func_8843(var_3_int, var_4_float);
		bool var_2_bool;
		if(var_2_bool != 0)
			return 0;
		bool var_4097_bool; int var_4098_int; float var_4099_float;
		iID = var_4098_int;
		fTime = var_4099_float;
		func_12309(var_4098_int, var_4099_float);
		if(var_4097_bool != 0)
			return 0;
		int var_4649_int; float var_4650_float;
		iID = var_4649_int;
		fTime = var_4650_float;
		func_12405(var_4649_int, var_4650_float);
	}

}


void OnTrigger(string name, string var_1_string)
{
	int var_4_int;
	if(name == "playsound") {
		@PlaySound(var_1_string);
	} else if(name == "enable_bonfire") {
			@_strtoi(var_4_int, var_1_string);
			func_7558(var_4_int - 1);
	}
Label_7446:
	for(;;) {

	}
	
	if(!(name == "disable_bonfire")) goto Label_7446;
	int var_5_int;
	@_strtoi(var_5_int, var_1_string);
	func_7635(var_5_int - 1);
}


void OnConsole(string var_0_string, string var_1_string)
{
	int var_12_int; int var_13_int; object var_14_object; int var_15_int; int var_16_int; object var_17_object; object var_18_object; object var_19_object; cvector var_20_cvector; object var_21_object;
	if(var_0_string == "horror") {
		@_strtoi(var_12_int, var_1_string);
		int var_24_int;
		var_12_int = var_24_int;
		func_392(var_24_int);
		var_39_object = GlobalVars[13];
		var_39_object->size(var_13_int);
		bool var_40_bool = false;
		if(var_12_int >= 0) {
			if(var_12_int < var_13_int)
				var_40_bool = true;
		}
		if(var_40_bool != 0) {
			var_44_object = GlobalVars[13];
			var_44_object->get(var_14_object, var_12_int);
			object var_45_object;
			var_14_object = var_45_object;
			func_255(var_45_object, 1);
			@Trace("Replaced");
			var_14_object = null;
		} else {
				@Trace("Invalid region index");
	}
			if(var_0_string == "nail") {
				@_strtoi(var_15_int, var_1_string);
				int var_76_int;
				var_15_int = var_76_int;
				func_422(var_76_int);
				var_88_object = GlobalVars[13];
				var_88_object->size(var_16_int);
				bool var_89_bool = false;
				if(var_15_int >= 0) {
					if(var_15_int < var_16_int)
						var_89_bool = true;
				}
				if(var_89_bool != 0) {
					var_93_object = GlobalVars[13];
					var_93_object->get(var_17_object, var_15_int);
					object var_94_object;
					var_17_object = var_94_object;
					func_255(var_94_object, 2);
					@Trace("Replaced");
					var_17_object = null;
				} else {
				@Trace("Invalid region index");
			}
			if(var_0_string == "fogme") {
				object var_100_object;
				func_81(var_100_object);
				var_100_object = var_18_object;
				var_18_object->GetScene(var_19_object);
				var_18_object->GetPosition(var_20_cvector);
				@AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, [0.0, 0.0, 1.0], "fog_stat.xml");
				var_21_object = null;
				var_19_object = null;
				var_18_object = null;
			} else if(var_0_string == "sepia") {
				func_239();
			} else if(var_0_string == "nosepia") {
				func_244();
			}
			}
	}
	goto Label_7557;
	
Label_7557:
	for(;;) {

	}
	
}


// @pe
void func_10244(int var_5524_int, float var_5525_float)
{
	float var_5529_float;
	var_5525_float = var_5529_float;
	int var_5526_int;
	func_12278(var_5526_int, 530813, 530812, var_5529_float);
	var_5526_int = var_5524_int;
}


// @pe
void func_5126(object var_122_object)
{
	var_122_object->add("dt_house3_08_i2");
	var_122_object->add("dt_house3_09");
	var_122_object->add("dt_house3_09_i2");
	var_122_object->add("house1_se_03l");
	var_122_object->add("house1_se_03r");
	var_122_object->add("house1_se_01l");
	var_122_object->add("house1_se_01r");
	var_122_object->add("house1_se_04l");
	var_122_object->add("house1_se_04r");
	var_122_object->add("house5_11");
	var_122_object->add("house5_09");
	var_122_object->add("house5_13");
	var_122_object->add("house5_12");
	var_122_object->add("house5_14");
	var_122_object->add("house5_unoin03l");
	var_122_object->add("house5_unoin03r");
	var_122_object->add("house5_unoin02l");
	var_122_object->add("house5_unoin02r");
	var_122_object->add("house5_unoin01l");
	var_122_object->add("house5_unoin01r");
}


// @pe
void func_10253(int var_5844_int, float var_5845_float)
{
	float var_5849_float;
	var_5845_float = var_5849_float;
	int var_5846_int;
	func_12278(var_5846_int, 530183, 530182, var_5849_float);
	var_5846_int = var_5844_int;
}


// @pe
void func_1037(int var_1795_int, int var_1796_int)
{
	bool var_1797_bool = true;
	var_1799_bool = var_1796_int >= 22;
	if(var_1799_bool != 1) {
		var_1801_bool = var_1796_int < 6;
		if(var_1801_bool != 1)
			var_1797_bool = false;
	}
	if(var_1797_bool != 0) {
		int var_1802_int;
		var_1795_int = var_1802_int;
		func_729(var_1802_int, true);
	} else {
		int var_1804_int;
		var_1795_int = var_1804_int;
		func_729(var_1804_int, false);
	}
	
}


void func_12303(int var_796_int)
{
	int var_798_int;
	@GetVariable("branch", var_798_int);
	var_798_int = var_796_int;
}


void func_3087(int var_2118_int, int var_2119_int, int var_2120_int)
{
	int var_2123_int; int var_2124_int;
	bool var_2125_bool = false;
	if(var_2120_int > 8) {
		if(var_2120_int < 21)
			var_2125_bool = true;
	}
	if(var_2125_bool != 0) {
		int var_2130_int;
		var_2118_int = var_2130_int;
		func_453(var_2130_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2134_int;
		var_2118_int = var_2134_int;
		func_453(var_2134_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2138_int;
		var_2118_int = var_2138_int;
		func_453(var_2138_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2142_int;
		var_2118_int = var_2142_int;
		func_479(var_2142_int, "fog", "fog.xml", 6);
		if(var_2119_int >= 5) {
			int var_2152_int;
			var_2118_int = var_2152_int;
			func_479(var_2152_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2157_float; int var_2158_int;
		func_1205(var_2157_float, var_2158_int);
		if((1 * var_2157_float) != 0) {
			int var_2204_int; int var_2207_int;
			var_2118_int = var_2204_int;
			var_2123_int = var_2207_int;
			func_453(var_2204_int, "pers_bomber", "bomber.xml", var_2207_int);
		}
	} else {
		int var_2243_int;
		var_2118_int = var_2243_int;
		func_453(var_2243_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2247_int;
		var_2118_int = var_2247_int;
		func_453(var_2247_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2251_int;
		var_2118_int = var_2251_int;
		func_453(var_2251_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2255_int;
		var_2118_int = var_2255_int;
		func_479(var_2255_int, "fog", "fog.xml", 6);
		if(var_2158_int >= 5) {
			int var_2261_int;
			var_2118_int = var_2261_int;
			func_479(var_2261_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2266_float; int var_2267_int;
		var_2119_int = var_2267_int;
		func_1205(var_2266_float, var_2267_int);
		if((2 * var_2266_float) == 0) goto Label_3205;
		int var_2269_int; int var_2272_int;
		var_2118_int = var_2269_int;
		var_2124_int = var_2272_int;
		func_453(var_2269_int, "pers_bomber", "bomber.xml", var_2272_int);
	}
Label_3205:
	bool var_2208_bool; int var_2209_int;
	var_2119_int = var_2209_int;
	func_1322(var_2208_bool, var_2209_int);
	if(var_2208_bool != 0) {
		int var_2211_int;
		var_2118_int = var_2211_int;
		func_453(var_2211_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2215_int;
	var_2118_int = var_2215_int;
	func_466(var_2215_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2225_int;
	var_2118_int = var_2225_int;
	func_466(var_2225_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2231_int;
	var_2118_int = var_2231_int;
	func_466(var_2231_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2237_int;
	var_2118_int = var_2237_int;
	func_466(var_2237_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


// @pe
void func_7184(int var_4129_int, int var_4130_int, object var_4131_object, object var_4132_object, object var_4133_object, object var_4134_object)
{
	if(var_4130_int == 0) {
		func_746(14, false);
		func_763(14, false, 1);
		int var_4143_int; object var_4144_object; object var_4145_object; object var_4146_object;
		var_4129_int = var_4143_int;
		var_4131_object = var_4144_object;
		var_4132_object = var_4145_object;
		var_4133_object = var_4146_object;
		func_670(14, var_4143_int, var_4144_object, var_4145_object, var_4146_object);
		object var_4147_object;
		var_4134_object = var_4147_object;
		func_255(var_4147_object, 2);
		func_820(14, false, 5);
		func_882(14, true, 5);
	}
	func_729(14, false);
	int var_4158_int; int var_4159_int;
	var_4129_int = var_4158_int;
	var_4130_int = var_4159_int;
	func_3421(14, var_4158_int, var_4159_int);
}


// @pe
void func_6163(int var_3964_int, int var_3965_int, object var_3966_object, object var_3967_object, object var_3968_object, object var_3969_object)
{
	if(var_3965_int == 0) {
		func_746(9, false);
		func_763(9, false, 1);
		int var_3978_int; object var_3979_object; object var_3980_object; object var_3981_object;
		var_3964_int = var_3978_int;
		var_3966_object = var_3979_object;
		var_3967_object = var_3980_object;
		var_3968_object = var_3981_object;
		func_670(9, var_3978_int, var_3979_object, var_3980_object, var_3981_object);
		object var_3982_object;
		var_3969_object = var_3982_object;
		func_255(var_3982_object, 2);
		func_820(9, false, 7);
		func_882(9, true, 7);
	}
	func_729(9, false);
	int var_3993_int; int var_3994_int;
	var_3964_int = var_3993_int;
	var_3965_int = var_3994_int;
	func_3609(9, var_3993_int, var_3994_int);
}


void func_12309(bool var_4097_bool, int var_4098_int)
{
	int var_4105_int; int var_4106_int; int var_4107_int;
	bool var_4108_bool = false;
	if(var_4098_int > 42000) {
		if(var_4098_int < 42288)
			var_4108_bool = true;
	}
	if(var_4108_bool != 0) {
		var_4105_int = (var_4098_int - 42000) % 24;
		int var_4120_int;
		var_4105_int = var_4120_int;
		func_8222((((var_4098_int - 42000) / 24) + 1), var_4120_int);
		var_4097_bool = true;
		return 8;
	}
	bool var_4256_bool = false;
	if(var_4098_int > 40000) {
		if(var_4098_int < 40288)
			var_4256_bool = true;
	}
	if(var_4256_bool != 0) {
		var_4106_int = (var_4098_int - 40000) / 24;
		var_4107_int = (var_4098_int - 40000) % 24;
		int var_4268_int;
		var_4107_int = var_4268_int;
		func_8520((var_4106_int + 1), var_4268_int);
		int var_4590_int;
		var_4107_int = var_4590_int;
		func_14634((var_4106_int + 1), var_4590_int);
		var_4097_bool = true;
		return 8;
	}
	var_4097_bool = false;
}


// @pe
void func_10262(int var_4863_int, float var_4864_float)
{
	float var_4868_float;
	var_4864_float = var_4868_float;
	int var_4865_int;
	func_12278(var_4865_int, 530855, 530854, var_4868_float);
	var_4865_int = var_4863_int;
}


void func_8222(int var_4119_int, int var_4120_int)
{
	bool var_4125_bool; int var_4126_int; int var_4127_int;
	if(var_4120_int == 0) {
		var_4125_bool = false;
		if(var_4119_int == 2) {
			int var_4132_int;
			func_12303(var_4132_int);
			if(var_4132_int == 0) {
				@GetVariable("d1q01", var_4126_int);
				if(var_4126_int != 1000) {
					var_4125_bool = true;
					@UnlockAchievement("ACHIEVEMENT_UP");
					@GameOver("gameover_fail.xml");
				}
			} else {
						int var_4248_int;
						func_12303(var_4248_int);
						if(!(var_4248_int == 1)) goto Label_8269;
						@GetVariable("b1q01", var_4127_int);
						if(!(var_4127_int != 1000)) goto Label_8269;
						var_4125_bool = true;
						@UnlockAchievement("ACHIEVEMENT_UP");
						@GameOver("gameover_fail.xml");
			}
		}
	Label_8269:
		if(!var_4125_bool) { //@nz
			int var_4141_int;
			func_12303(var_4141_int);
			if(var_4141_int == 0) {
				if(var_4119_int == 2) {
					@UnlockAchievement("ACHIEVEMENT_BACH_1");
				} else {
						if(var_4119_int == 3)
							@UnlockAchievement("ACHIEVEMENT_BACH_2");

					for(;;) {
						} else {
					if(var_4119_int == 4) {
						@UnlockAchievement("ACHIEVEMENT_BACH_3");
					} else if(var_4119_int == 5) {
						@UnlockAchievement("ACHIEVEMENT_BACH_4");
					} else if(var_4119_int == 6) {
						@UnlockAchievement("ACHIEVEMENT_BACH_5");
					} else if(var_4119_int == 7) {
						@UnlockAchievement("ACHIEVEMENT_BACH_6");
					} else if(var_4119_int == 8) {
						@UnlockAchievement("ACHIEVEMENT_BACH_7");
					} else if(var_4119_int == 9) {
						@UnlockAchievement("ACHIEVEMENT_BACH_8");
					} else if(var_4119_int == 10) {
						@UnlockAchievement("ACHIEVEMENT_BACH_9");
					} else if(var_4119_int == 11) {
						@UnlockAchievement("ACHIEVEMENT_BACH_10");
					} else if(var_4119_int == 12) {
						@UnlockAchievement("ACHIEVEMENT_BACH_11");
					}
			}
				int var_4179_int;
				func_12303(var_4179_int);
				if(var_4179_int == 1) {
					if(var_4119_int == 2) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_1");
					} else if(var_4119_int == 3) {
							@UnlockAchievement("ACHIEVEMENT_BURAH_2");
					}

					for(;;) {
						goto Label_8513;

					}

					if(var_4119_int == 4) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_3");
					} else if(var_4119_int == 5) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_4");
					} else if(var_4119_int == 6) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_5");
					} else if(var_4119_int == 7) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_6");
					} else if(var_4119_int == 8) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_7");
					} else if(var_4119_int == 9) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_8");
					} else if(var_4119_int == 10) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_9");
					} else if(var_4119_int == 11) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_10");
					} else if(var_4119_int == 12) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_11");
					}
				}
				if(var_4119_int == 2) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_1");
				} else if(var_4119_int == 3) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_2");
				} else if(var_4119_int == 4) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_3");
				} else if(var_4119_int == 5) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_4");
				} else if(var_4119_int == 6) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_5");
				} else if(var_4119_int == 7) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_6");
				} else if(var_4119_int == 8) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_7");
				} else if(var_4119_int == 9) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_8");
				} else if(var_4119_int == 10) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_9");
				} else if(var_4119_int == 11) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_10");
				} else if(var_4119_int == 12) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_11");

					}
				}
		}
		Label_8513:
			@SendWorldWndMessage(101);
			@SetVariable("c_iWM_RealDayChange", var_4119_int);
	}
		return 6;

	}
	
}


// @pe
void func_10271(int var_5307_int, float var_5308_float)
{
	float var_5312_float;
	var_5308_float = var_5312_float;
	int var_5309_int;
	func_12278(var_5309_int, 529874, 529873, var_5312_float);
	var_5309_int = var_5307_int;
}


void func_1060(bool var_791_bool, int var_792_int, int var_793_int)
{
	int var_796_int;
	func_12303(var_796_int);
	int var_795_int;
	var_796_int = var_795_int;
	if(var_795_int == 1) {
		bool var_802_bool = false;
		if(var_792_int == 0) {
			if(var_793_int < 21)
				var_802_bool = true;
		}
		if(var_802_bool != 0) {
			var_791_bool = true;
			return 2;
		}
	} else {
		if(!(var_795_int == 2)) goto Label_1089;
		if(!(var_792_int == 5)) goto Label_1089;
		var_791_bool = true;
		return 2;
	}
Label_1089:
	var_791_bool = false;
	
}


// @pe
void func_10280(int var_5315_int, float var_5316_float)
{
	float var_5320_float;
	var_5316_float = var_5320_float;
	int var_5317_int;
	func_12278(var_5317_int, 529872, 529871, var_5320_float);
	var_5317_int = var_5315_int;
}


// @pe
void func_10289(int var_4748_int, float var_4749_float)
{
	float var_4753_float;
	var_4749_float = var_4753_float;
	int var_4750_int;
	func_12278(var_4750_int, 529858, 529857, var_4753_float);
	var_4750_int = var_4748_int;
}


void func_11315(void)
{
	object var_4995_object;
	func_12286(var_4995_object);
	object var_4993_object;
	var_4995_object = var_4993_object;
	object var_4994_object;
	var_4993_object->FindMark(var_4994_object, "b10q04GirlGotoKapella");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	var_4993_object->FindMark(var_4994_object, "b10q04MatGotoMorlok");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	var_4993_object->FindMark(var_4994_object, "b10q04BlockGotoOfficer");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	var_4993_object->FindMark(var_4994_object, "b10q04KapellaGotoBlock");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	var_4993_object->FindMark(var_4994_object, "b10q04MorlokGotoLaska");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	var_4993_object->FindMark(var_4994_object, "b10q04MorlokGotoMishka");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	var_4993_object->FindMark(var_4994_object, "b10q04MorlokGotoNotkin");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	var_4993_object->FindMark(var_4994_object, "b10q04MorlokGotoSpi4ka");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	var_4993_object->FindMark(var_4994_object, "b10q03KapellaGotoMishka");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	var_4993_object->FindMark(var_4994_object, "b10q03MishkaGotoDoll");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	var_4993_object->FindMark(var_4994_object, "b10q01StarshinaGotoKurgan");
	if(var_4994_object != 0)
		var_4994_object->Remove();
	bool var_5018_bool;
	func_12261(var_5018_bool, 305);
	bool var_5020_bool;
	func_12261(var_5020_bool, 545);
	bool var_5022_bool;
	func_12261(var_5022_bool, 594);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10298(int var_5627_int, float var_5628_float)
{
	float var_5632_float;
	var_5628_float = var_5632_float;
	int var_5629_int;
	func_12278(var_5629_int, 530666, 530665, var_5632_float);
	var_5629_int = var_5627_int;
}


void func_59(void)
{
	object var_9_object;
	@FindActor(var_9_object, "player");
	object var_10_object;
	@GetMainOutdoorScene(var_10_object);
	if(!var_10_object) //@nz
		@Trace("Starting scene not found");
	bool var_11_bool;
	cvector var_12_cvector;
	cvector var_13_cvector;
	var_10_object->GetLocator("pt_birth_Burah", var_11_bool, var_12_cvector, var_13_cvector);
	if(var_11_bool != 0)
		@Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_4160(int var_3428_int, int var_3429_int, int var_3430_int)
{
	int var_3435_int; int var_3436_int; int var_3437_int; int var_3438_int;
	bool var_3439_bool = false;
	if(var_3430_int > 8) {
		if(var_3430_int < 21)
			var_3439_bool = true;
	}
	if(var_3439_bool != 0) {
		int var_3444_int;
		var_3428_int = var_3444_int;
		func_453(var_3444_int, "pers_rat", "rat.xml", 4);
		int var_3448_int;
		var_3428_int = var_3448_int;
		func_453(var_3448_int, "pers_alkash", "alkash.xml", 2);
		int var_3452_int;
		var_3428_int = var_3452_int;
		func_453(var_3452_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3457_float; int var_3458_int;
		func_1115(var_3457_float, var_3458_int);
		if((2 * var_3457_float) != 0) {
			int var_3460_int; int var_3463_int;
			var_3428_int = var_3460_int;
			var_3435_int = var_3463_int;
			func_453(var_3460_int, "pers_grabitel", "grabitel.xml", var_3463_int);
		}
		if((var_3458_int + 1) >= 2) {
			int var_3468_int;
			var_3428_int = var_3468_int;
			func_453(var_3468_int, "pers_patrool", "patrol.xml", 2);
			bool var_3472_bool; int var_3473_int;
			var_3429_int = var_3473_int;
			func_1322(var_3472_bool, var_3473_int);
			if(var_3472_bool != 0) {
				int var_3474_int;
				var_3428_int = var_3474_int;
				func_453(var_3474_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3479_float; int var_3480_int;
		var_3429_int = var_3480_int;
		func_1205(var_3479_float, var_3480_int);
		if((1 * var_3479_float) != 0) {
			int var_3482_int; int var_3485_int;
			var_3428_int = var_3482_int;
			var_3436_int = var_3485_int;
			func_453(var_3482_int, "pers_bomber", "bomber.xml", var_3485_int);
		}
	} else {
		int var_3492_int;
		var_3428_int = var_3492_int;
		func_453(var_3492_int, "pers_rat", "rat.xml", 8);
		int var_3496_int;
		var_3428_int = var_3496_int;
		func_453(var_3496_int, "pers_alkash", "alkash.xml", 1);
		int var_3500_int;
		var_3428_int = var_3500_int;
		func_453(var_3500_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3505_float; int var_3506_int;
		func_1115(var_3505_float, var_3506_int);
		if((3 * var_3505_float) != 0) {
			int var_3508_int; int var_3511_int;
			var_3428_int = var_3508_int;
			var_3437_int = var_3511_int;
			func_453(var_3508_int, "pers_grabitel", "grabitel.xml", var_3511_int);
		}
		if((var_3506_int + 1) >= 2) {
			int var_3516_int;
			var_3428_int = var_3516_int;
			func_453(var_3516_int, "pers_patrool", "patrol.xml", 1);
			bool var_3520_bool; int var_3521_int;
			var_3429_int = var_3521_int;
			func_1322(var_3520_bool, var_3521_int);
			if(var_3520_bool != 0) {
				int var_3522_int;
				var_3428_int = var_3522_int;
				func_453(var_3522_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3527_float; int var_3528_int;
		var_3429_int = var_3528_int;
		func_1205(var_3527_float, var_3528_int);
		if((1 * var_3527_float) == 0) goto Label_4322;
		int var_3530_int; int var_3533_int;
		var_3428_int = var_3530_int;
		var_3438_int = var_3533_int;
		func_453(var_3530_int, "pers_bomber", "bomber.xml", var_3533_int);
	}
Label_4322:
	bool var_3486_bool; int var_3487_int;
	var_3429_int = var_3487_int;
	func_1322(var_3486_bool, var_3487_int);
	if(var_3486_bool != 0) {
		int var_3488_int;
		var_3428_int = var_3488_int;
		func_453(var_3488_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_10307(int var_5191_int, float var_5192_float)
{
	float var_5196_float;
	var_5192_float = var_5196_float;
	int var_5193_int;
	func_12278(var_5193_int, 529878, 529877, var_5196_float);
	var_5193_int = var_5191_int;
}


// @pe
void func_1091(float var_768_float, int var_769_int)
{
	if((var_769_int + 1) == 7) {
		var_768_float = 2;
		return 0;
	}
	if((var_769_int + 1) == 8) {
		var_768_float = 0;
		return 0;
	}
	if((var_769_int + 1) == 1) {
		var_768_float = 0;
		return 0;
	}
	var_768_float = 1;
}


// @pe
void func_7236(object var_313_object)
{
	var_313_object->add("lc_house3_05_i2");
	var_313_object->add("lc_house3_05");
	var_313_object->add("lc_house3_06_i2");
	var_313_object->add("lc_house3_06");
	var_313_object->add("lc_House6_06");
	var_313_object->add("lc_house3_04_i2");
	var_313_object->add("lc_house3_04");
	var_313_object->add("house3_plus_03_i2");
}


// @pe
void func_5188(int var_1296_int, int var_1297_int, object var_1298_object, object var_1299_object, object var_1300_object, object var_1301_object)
{
	if(var_1297_int == 0) {
		func_746(4, false);
		func_763(4, false, 1);
		int var_1309_int; int var_1310_int; object var_1311_object; object var_1312_object; object var_1313_object;
		var_1309_int = 4;
		var_1296_int = var_1310_int;
		var_1298_object = var_1311_object;
		var_1299_object = var_1312_object;
		var_1300_object = var_1313_object;
		func_572(var_1310_int, var_1311_object, var_1312_object, var_1313_object);
		object var_1314_object;
		var_1301_object = var_1314_object;
		func_255(var_1314_object, 0);
		func_820(4, false, 4);
		func_882(4, false, 4);
	}
	int var_1323_int;
	var_1297_int = var_1323_int;
	func_970(4, var_1323_int);
	int var_1337_int; int var_1338_int;
	var_1296_int = var_1337_int;
	var_1297_int = var_1338_int;
	func_1847(4, var_1337_int, var_1338_int);
}


// @pe
void func_6215(object var_226_object)
{
	var_226_object->add("r4_house_2_02");
	var_226_object->add("r4_house3_03_i2");
	var_226_object->add("r4_house3_03");
	var_226_object->add("r4_house4_02_i2");
	var_226_object->add("r4_house4_02");
	var_226_object->add("r4_house4_01_i2");
	var_226_object->add("r4_house4_01");
	var_226_object->add("r4_house3_02_i2");
	var_226_object->add("r4_house3_02");
	var_226_object->add("r4_house_2_01");
	var_226_object->add("r4_house3_01_i2");
	var_226_object->add("r4_house3_01");
	var_226_object->add("r4_house7_01");
	var_226_object->add("r4_House6_01");
	var_226_object->add("r4_house_2_03");
	var_226_object->add("r4_House6_03");
	var_226_object->add("r4_house_2_04");
}


// @pe
void func_10316(int var_5245_int, float var_5246_float)
{
	float var_5250_float;
	var_5246_float = var_5250_float;
	int var_5247_int;
	func_12278(var_5247_int, 520962, 520961, var_5250_float);
	var_5247_int = var_5245_int;
}


void func_81(object var_100_object)
{
	object var_102_object;
	@FindActor(var_102_object, "player");
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_12370(void)
{
	float var_4368_float; float var_4370_float;
	@GetGameTime(var_4368_float);
	int var_4369_int = 1;
	
	for(;;) {
		if(var_4369_int < 288) {
			var_4370_float = 1.0 * var_4369_int;
			if(var_4370_float < var_4368_float) {
			} else {
			@SetTimeEvent((40000 + var_4369_int), var_4370_float);
			var_4370_float -= 0.0033333334;
			if(var_4370_float < var_4368_float) {
				goto Label_12395;
			}
			@SetTimeEvent((42000 + var_4369_int), var_4370_float);
		}
		func_8150();
		func_14590();
		}
	Label_12395:
		var_4369_int += 1;
	}
	
}


// @pe
void func_10325(int var_4756_int, float var_4757_float)
{
	float var_4761_float;
	var_4757_float = var_4761_float;
	int var_4758_int;
	func_12278(var_4758_int, 529860, 529859, var_4761_float);
	var_4758_int = var_4756_int;
}


void func_88(bool var_585_bool, object var_586_object, string var_587_string)
{
	var_592_bool = IsFuncExist(var_586_object, "HasProperty", 2);
	if(!var_592_bool) { //@nz
		var_585_bool = false;
		return 2;
	}
	bool var_589_bool;
	var_586_object->HasProperty(var_587_string, var_589_bool);
	var_589_bool = var_585_bool;
}


// @pe
void func_1115(float var_3277_float, int var_3278_int)
{
	if((var_3278_int + 1) == 1) {
		var_3277_float = 0;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	if((var_3278_int + 1) == 2) {
		var_3277_float = 0;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	if((var_3278_int + 1) == 3) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	if((var_3278_int + 1) == 4) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	if((var_3278_int + 1) == 5) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	if((var_3278_int + 1) == 6) {
		var_3277_float = 2;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	if((var_3278_int + 1) == 7) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	if((var_3278_int + 1) == 8) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	if((var_3278_int + 1) == 9) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	if((var_3278_int + 1) == 10) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	if((var_3278_int + 1) == 11) {
		var_3277_float = 1;
		return 0;
	}
	var_3277_float = 0;
}


// @pe
void func_10334(int var_5260_int, float var_5261_float)
{
	float var_5265_float;
	var_5261_float = var_5265_float;
	int var_5262_int;
	func_12278(var_5262_int, 520964, 520963, var_5265_float);
	var_5262_int = var_5260_int;
}


// @pe
void func_7262(int var_1947_int, int var_1948_int, object var_1949_object, object var_1950_object, object var_1951_object, object var_1952_object)
{
	if(var_1948_int == 0) {
		func_746(15, false);
		func_763(15, false, 1);
		int var_1960_int; int var_1961_int; object var_1962_object; object var_1963_object; object var_1964_object;
		var_1960_int = 15;
		var_1947_int = var_1961_int;
		var_1949_object = var_1962_object;
		var_1950_object = var_1963_object;
		var_1951_object = var_1964_object;
		func_572(var_1961_int, var_1962_object, var_1963_object, var_1964_object);
		object var_1965_object;
		var_1952_object = var_1965_object;
		func_255(var_1965_object, 0);
		func_820(15, false, 5);
		func_882(15, false, 5);
	}
	int var_1974_int;
	var_1948_int = var_1974_int;
	func_1037(15, var_1974_int);
	int var_1976_int; int var_1977_int;
	var_1947_int = var_1976_int;
	var_1948_int = var_1977_int;
	func_1326(15, var_1976_int, var_1977_int);
}


void func_100(object var_40_object)
{
	object var_42_object;
	@CreateObjectVector(var_42_object);
	var_42_object = var_40_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10343(int var_5362_int, float var_5363_float)
{
	float var_5367_float;
	var_5363_float = var_5367_float;
	int var_5364_int;
	func_12278(var_5364_int, 529876, 529875, var_5367_float);
	var_5364_int = var_5362_int;
}


void func_106(int var_4658_int, string var_4659_string)
{
	int var_4661_int;
	@GetVariable(var_4659_string, var_4661_int);
	var_4661_int = var_4658_int;
}


void func_2156(int var_750_int, int var_751_int, int var_752_int)
{
	int var_754_int;
	if((var_751_int + 1) == 12)
		return 2;
	bool var_759_bool = false;
	bool var_760_bool = true;
	var_762_bool = var_752_int < 7;
	if(var_762_bool != 1) {
		var_764_bool = var_752_int > 21;
		if(var_764_bool != 1)
			var_760_bool = false;
	}
	if(var_760_bool != 0) {
		if(var_751_int != 0)
			var_759_bool = true;
	}
	if(var_759_bool != 0) {
		float var_768_float; int var_769_int;
		var_751_int = var_769_int;
		func_1091(var_768_float, var_769_int);
		if((1 * var_768_float) != 0) {
			int var_783_int; int var_786_int;
			var_750_int = var_783_int;
			var_754_int = var_786_int;
			func_453(var_783_int, "pers_grabitel", "grabitel.xml", var_786_int);
		}
	}
	bool var_791_bool; int var_792_int; int var_793_int;
	var_751_int = var_792_int;
	var_752_int = var_793_int;
	func_1060(var_791_bool, var_792_int, var_793_int);
	if(var_791_bool != 0) {
		int var_811_int;
		var_750_int = var_811_int;
		func_453(var_811_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_815_int;
		var_750_int = var_815_int;
		func_453(var_815_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_819_int;
		var_750_int = var_819_int;
		func_453(var_819_int, "pers_worker", "worker_attacker.xml", 1);
		int var_823_int;
		var_750_int = var_823_int;
		func_453(var_823_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_827_int;
		var_750_int = var_827_int;
		func_453(var_827_int, "pers_boy", "boy.xml", 1);
		int var_831_int;
		var_750_int = var_831_int;
		func_453(var_831_int, "pers_alkash", "alkash.xml", 1);
		int var_835_int;
		var_750_int = var_835_int;
		func_453(var_835_int, "pers_girl", "girl.xml", 1);
		int var_839_int;
		var_750_int = var_839_int;
		func_453(var_839_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_843_bool = false;
			if(var_752_int > 8) {
				if(var_752_int < 21)
					var_843_bool = true;
			}
			if(var_843_bool == 0) goto Label_2311;
			int var_848_int;
			var_750_int = var_848_int;
			func_453(var_848_int, "pers_boy", "boy.xml", 1);
			int var_852_int;
			var_750_int = var_852_int;
			func_453(var_852_int, "pers_alkash", "alkash.xml", 1);
			int var_856_int;
			var_750_int = var_856_int;
			func_453(var_856_int, "pers_girl", "girl.xml", 1);
			int var_860_int;
			var_750_int = var_860_int;
			func_453(var_860_int, "pers_girl", "girl2.xml", 1);
			int var_864_int;
			var_750_int = var_864_int;
			func_453(var_864_int, "pers_worker", "worker.xml", 2);
			int var_868_int;
			var_750_int = var_868_int;
			func_453(var_868_int, "pers_worker", "worker2.xml", 2);
	}
	for(;;) {
		return 2;

	}
	
Label_2311:
	int var_872_int;
	var_750_int = var_872_int;
	func_453(var_872_int, "pers_alkash", "alkash.xml", 1);
	int var_876_int;
	var_750_int = var_876_int;
	func_453(var_876_int, "pers_worker", "worker.xml", 1);
	int var_880_int;
	var_750_int = var_880_int;
	func_453(var_880_int, "pers_worker", "worker2.xml", 1);
}


void func_9326(int var_1988_int, int var_1989_int, int var_1990_int)
{
	var_1999_object = GlobalVars[8];
	object var_1995_object;
	var_1999_object->get(var_1995_object, var_1988_int);
	var_2000_object = GlobalVars[9];
	object var_1996_object;
	var_2000_object->get(var_1996_object, var_1988_int);
	var_2001_object = GlobalVars[10];
	object var_1997_object;
	var_2001_object->get(var_1997_object, var_1988_int);
	var_2002_object = GlobalVars[13];
	object var_1998_object;
	var_2002_object->get(var_1998_object, var_1988_int);
	if(var_1988_int == 0) {
		int var_2005_int; int var_2006_int; object var_2007_object; object var_2008_object; object var_2009_object; object var_2010_object;
		var_1989_int = var_2005_int;
		var_1990_int = var_2006_int;
		var_1995_object = var_2007_object;
		var_1996_object = var_2008_object;
		var_1997_object = var_2009_object;
		var_1998_object = var_2010_object;
		func_4389(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object);
	} else if(var_1988_int == 1) {
			int var_2275_int; int var_2276_int; object var_2277_object; object var_2278_object; object var_2279_object; object var_2280_object;
			var_1989_int = var_2275_int;
			var_1990_int = var_2276_int;
			var_1995_object = var_2277_object;
			var_1996_object = var_2278_object;
			var_1997_object = var_2279_object;
			var_1998_object = var_2280_object;
			func_4586(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_1988_int == 2) {
		int var_2407_int; int var_2408_int; object var_2409_object; object var_2410_object; object var_2411_object; object var_2412_object;
		var_1989_int = var_2407_int;
		var_1990_int = var_2408_int;
		var_1995_object = var_2409_object;
		var_1996_object = var_2410_object;
		var_1997_object = var_2411_object;
		var_1998_object = var_2412_object;
		func_4792(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object);
	} else if(var_1988_int == 3) {
		int var_2553_int; int var_2554_int; object var_2555_object; object var_2556_object; object var_2557_object; object var_2558_object;
		var_1989_int = var_2553_int;
		var_1990_int = var_2554_int;
		var_1995_object = var_2555_object;
		var_1996_object = var_2556_object;
		var_1997_object = var_2557_object;
		var_1998_object = var_2558_object;
		func_5022(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object);
	} else if(var_1988_int == 4) {
		int var_2586_int; int var_2587_int; object var_2588_object; object var_2589_object; object var_2590_object; object var_2591_object;
		var_1989_int = var_2586_int;
		var_1990_int = var_2587_int;
		var_1995_object = var_2588_object;
		var_1996_object = var_2589_object;
		var_1997_object = var_2590_object;
		var_1998_object = var_2591_object;
		func_5240(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object);
	} else if(var_1988_int == 5) {
		int var_2619_int; int var_2620_int; object var_2621_object; object var_2622_object; object var_2623_object; object var_2624_object;
		var_1989_int = var_2619_int;
		var_1990_int = var_2620_int;
		var_1995_object = var_2621_object;
		var_1996_object = var_2622_object;
		var_1997_object = var_2623_object;
		var_1998_object = var_2624_object;
		func_5485(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object);
	} else if(var_1988_int == 6) {
		int var_2652_int; int var_2653_int; object var_2654_object; object var_2655_object; object var_2656_object; object var_2657_object;
		var_1989_int = var_2652_int;
		var_1990_int = var_2653_int;
		var_1995_object = var_2654_object;
		var_1996_object = var_2655_object;
		var_1997_object = var_2656_object;
		var_1998_object = var_2657_object;
		func_5598();
	} else if(var_1988_int == 7) {
		int var_2662_int; int var_2663_int; object var_2664_object; object var_2665_object; object var_2666_object; object var_2667_object;
		var_1989_int = var_2662_int;
		var_1990_int = var_2663_int;
		var_1995_object = var_2664_object;
		var_1996_object = var_2665_object;
		var_1997_object = var_2666_object;
		var_1998_object = var_2667_object;
		func_5708(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object);
	} else if(var_1988_int == 8) {
		int var_2801_int; int var_2802_int; object var_2803_object; object var_2804_object; object var_2805_object; object var_2806_object;
		var_1989_int = var_2801_int;
		var_1990_int = var_2802_int;
		var_1995_object = var_2803_object;
		var_1996_object = var_2804_object;
		var_1997_object = var_2805_object;
		var_1998_object = var_2806_object;
		func_5908(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object);
	} else if(var_1988_int == 9) {
		int var_2834_int; int var_2835_int; object var_2836_object; object var_2837_object; object var_2838_object; object var_2839_object;
		var_1989_int = var_2834_int;
		var_1990_int = var_2835_int;
		var_1995_object = var_2836_object;
		var_1996_object = var_2837_object;
		var_1997_object = var_2838_object;
		var_1998_object = var_2839_object;
		func_6111(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object);
	} else if(var_1988_int == 10) {
		int var_2867_int; int var_2868_int; object var_2869_object; object var_2870_object; object var_2871_object; object var_2872_object;
		var_1989_int = var_2867_int;
		var_1990_int = var_2868_int;
		var_1995_object = var_2869_object;
		var_1996_object = var_2870_object;
		var_1997_object = var_2871_object;
		var_1998_object = var_2872_object;
		func_6320(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object);
	} else if(var_1988_int == 11) {
		int var_2900_int; int var_2901_int; object var_2902_object; object var_2903_object; object var_2904_object; object var_2905_object;
		var_1989_int = var_2900_int;
		var_1990_int = var_2901_int;
		var_1995_object = var_2902_object;
		var_1996_object = var_2903_object;
		var_1997_object = var_2904_object;
		var_1998_object = var_2905_object;
		func_6532(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object);
	} else if(var_1988_int == 12) {
		int var_2933_int; int var_2934_int; object var_2935_object; object var_2936_object; object var_2937_object; object var_2938_object;
		var_1989_int = var_2933_int;
		var_1990_int = var_2934_int;
		var_1995_object = var_2935_object;
		var_1996_object = var_2936_object;
		var_1997_object = var_2937_object;
		var_1998_object = var_2938_object;
		func_6729(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object);
	} else if(var_1988_int == 13) {
		int var_2966_int; int var_2967_int; object var_2968_object; object var_2969_object; object var_2970_object; object var_2971_object;
		var_1989_int = var_2966_int;
		var_1990_int = var_2967_int;
		var_1995_object = var_2968_object;
		var_1996_object = var_2969_object;
		var_1997_object = var_2970_object;
		var_1998_object = var_2971_object;
		func_6932(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object);
	} else if(var_1988_int == 14) {
		int var_2999_int; int var_3000_int; object var_3001_object; object var_3002_object; object var_3003_object; object var_3004_object;
		var_1989_int = var_2999_int;
		var_1990_int = var_3000_int;
		var_1995_object = var_3001_object;
		var_1996_object = var_3002_object;
		var_1997_object = var_3003_object;
		var_1998_object = var_3004_object;
		func_7132(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object);
	} else if(var_1988_int == 15) {
		int var_3138_int; int var_3139_int; object var_3140_object; object var_3141_object; object var_3142_object; object var_3143_object;
		var_1989_int = var_3138_int;
		var_1990_int = var_3139_int;
		var_1995_object = var_3140_object;
		var_1996_object = var_3141_object;
		var_1997_object = var_3142_object;
		var_1998_object = var_3143_object;
		func_7314(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_111(object var_4956_object, string var_4957_string)
{
	object var_4960_object;
	@GetMainOutdoorScene(var_4960_object);
	object var_4961_object;
	@AddBlankActor(var_4961_object, var_4960_object, var_4957_string, (var_4957_string + ".bin"));
	var_4961_object = var_4956_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10352(int var_5323_int, float var_5324_float)
{
	float var_5328_float;
	var_5324_float = var_5328_float;
	int var_5325_int;
	func_12278(var_5325_int, 521369, 521368, var_5328_float);
	var_5325_int = var_5323_int;
}


void func_12405(int var_4649_int, float var_4650_float)
{
	int var_4652_int;
	if(var_4649_int == 45091) {
		bool var_4655_bool; object var_4656_object;
		var_4657_object = GlobalVars[16];
		var_4657_object = var_4656_object;
		func_11820(var_4656_object);
		if(!var_4655_bool) { //@nz
			int var_4665_int; float var_4666_float;
			var_4650_float = var_4666_float;
			func_9974(var_4665_int, var_4666_float);
		}
	}
	if(var_4649_int == 45116) {
		bool var_4676_bool; object var_4677_object;
		var_4678_object = GlobalVars[16];
		var_4678_object = var_4677_object;
		func_12048(var_4677_object);
		if(!var_4676_bool) { //@nz
			int var_4684_int; float var_4685_float;
			var_4650_float = var_4685_float;
			func_10100(var_4684_int, var_4685_float);
		}
	}
	if(var_4649_int == 45113) {
		int var_4692_int; float var_4693_float;
		var_4650_float = var_4693_float;
		func_10082(var_4692_int, var_4693_float);
	}
	if(var_4649_int == 45090) {
		bool var_4700_bool; object var_4701_object;
		var_4702_object = GlobalVars[16];
		var_4702_object = var_4701_object;
		func_11808(var_4701_object);
		if(!var_4700_bool) { //@nz
			int var_4708_int; float var_4709_float;
			var_4650_float = var_4709_float;
			func_9965(var_4708_int, var_4709_float);
		}
	}
	if(var_4649_int == 45117) {
		int var_4716_int; float var_4717_float;
		var_4650_float = var_4717_float;
		func_10064(var_4716_int, var_4717_float);
	}
	if(var_4649_int == 45118) {
		int var_4724_int; float var_4725_float;
		var_4650_float = var_4725_float;
		func_10127(var_4724_int, var_4725_float);
	}
	if(var_4649_int == 45119) {
		int var_4732_int; float var_4733_float;
		var_4650_float = var_4733_float;
		func_10181(var_4732_int, var_4733_float);
	}
	if(var_4649_int == 45120) {
		int var_4740_int; float var_4741_float;
		var_4650_float = var_4741_float;
		func_10235(var_4740_int, var_4741_float);
	}
	if(var_4649_int == 45121) {
		int var_4748_int; float var_4749_float;
		var_4650_float = var_4749_float;
		func_10289(var_4748_int, var_4749_float);
	}
	if(var_4649_int == 45122) {
		int var_4756_int; float var_4757_float;
		var_4650_float = var_4757_float;
		func_10325(var_4756_int, var_4757_float);
	}
	if(var_4649_int == 45089) {
		bool var_4764_bool; object var_4765_object;
		var_4766_object = GlobalVars[16];
		var_4766_object = var_4765_object;
		func_11796(var_4765_object);
		if(var_4764_bool != 0) {
			int var_4771_int; float var_4772_float;
			var_4650_float = var_4772_float;
			func_9920(var_4771_int, var_4772_float);
		}
	}
	if(var_4649_int == 45080) {
		object var_4779_object; object var_4780_object;
		var_4781_object = GlobalVars[16];
		var_4781_object = var_4779_object;
		var_4782_object = GlobalVars[16];
		var_4782_object = var_4780_object;
		func_11105();
		bool var_4826_bool;
		func_189(var_4826_bool, "quest_b7_01", "cleanup");
		object var_4829_object;
		func_111(var_4829_object, "quest_b8_01");
		object var_4837_object;
		func_111(var_4837_object, "quest_b8_03");
	}
	if(var_4649_int == 45081) {
		object var_4841_object; object var_4842_object;
		var_4843_object = GlobalVars[16];
		var_4843_object = var_4841_object;
		var_4844_object = GlobalVars[16];
		var_4844_object = var_4842_object;
		func_10539();
	}
	if(var_4649_int == 45082) {
		object var_4857_object; object var_4858_object;
		var_4859_object = GlobalVars[16];
		var_4859_object = var_4857_object;
		var_4860_object = GlobalVars[16];
		var_4860_object = var_4858_object;
		func_10553();
		int var_4863_int; float var_4864_float;
		var_4650_float = var_4864_float;
		func_10262(var_4863_int, var_4864_float);
		object var_4869_object;
		func_111(var_4869_object, "quest_b6_02");
		bool var_4871_bool;
		func_189(var_4871_bool, "quest_b6_02", "place_klara");
	}
	if(var_4649_int == 45092) {
		bool var_4876_bool; object var_4877_object;
		var_4878_object = GlobalVars[16];
		var_4878_object = var_4877_object;
		func_11832(var_4877_object);
		if(!var_4876_bool) { //@nz
			int var_4884_int; float var_4885_float;
			var_4650_float = var_4885_float;
			func_9983(var_4884_int, var_4885_float);
		}
	}
	if(var_4649_int == 45093) {
		int var_4892_int; float var_4893_float;
		var_4650_float = var_4893_float;
		func_9956(var_4892_int, var_4893_float);
	}
	if(var_4649_int == 45083) {
		object var_4900_object; object var_4901_object;
		var_4902_object = GlobalVars[16];
		var_4902_object = var_4900_object;
		var_4903_object = GlobalVars[16];
		var_4903_object = var_4901_object;
		func_11451();
		object var_4933_object; object var_4934_object;
		var_4935_object = GlobalVars[16];
		var_4935_object = var_4933_object;
		var_4936_object = GlobalVars[16];
		var_4936_object = var_4934_object;
		func_11181();
		bool var_4958_bool;
		func_189(var_4958_bool, "quest_b8_01", "cleanup");
		object var_4961_object;
		func_122(var_4961_object, "quest_b9_01");
	}
	if(var_4649_int == 45111) {
		int var_4971_int; float var_4972_float;
		var_4650_float = var_4972_float;
		func_10019(var_4971_int, var_4972_float);
	}
	if(var_4649_int == 45079) {
		object var_4979_object; object var_4980_object;
		var_4981_object = GlobalVars[16];
		var_4981_object = var_4979_object;
		var_4982_object = GlobalVars[16];
		var_4982_object = var_4980_object;
		func_11706();
	}
	if(var_4649_int == 45086) {
		object var_4987_object; object var_4988_object;
		var_4989_object = GlobalVars[16];
		var_4989_object = var_4987_object;
		var_4990_object = GlobalVars[16];
		var_4990_object = var_4988_object;
		func_11315();
		bool var_5024_bool;
		func_189(var_5024_bool, "quest_b10_01", "cleanup");
		object var_5027_object;
		func_122(var_5027_object, "quest_b11_01");
	}
	if(var_4649_int == 45087) {
		object var_5031_object; object var_5032_object;
		var_5033_object = GlobalVars[16];
		var_5033_object = var_5031_object;
		var_5034_object = GlobalVars[16];
		var_5034_object = var_5032_object;
		func_11412();
		object var_5050_object; object var_5051_object;
		var_5052_object = GlobalVars[16];
		var_5052_object = var_5050_object;
		var_5053_object = GlobalVars[16];
		var_5053_object = var_5051_object;
		func_11475();
		bool var_5074_bool;
		func_189(var_5074_bool, "quest_b11_01", "cleanup");
		object var_5077_object;
		func_111(var_5077_object, "quest_b12_01");
	}
	if(var_4649_int == 45112) {
		int var_5081_int; float var_5082_float;
		var_4650_float = var_5082_float;
		func_10001(var_5081_int, var_5082_float);
	}
	if(var_4649_int == 45115) {
		int var_5089_int; float var_5090_float;
		var_4650_float = var_5090_float;
		func_10154(var_5089_int, var_5090_float);
	}
	if(var_4649_int == 45114) {
		bool var_5097_bool; object var_5098_object;
		var_5099_object = GlobalVars[16];
		var_5099_object = var_5098_object;
		func_12142(var_5098_object);
		if(var_5097_bool != 0) {
			int var_5104_int; float var_5105_float;
			var_4650_float = var_5105_float;
			func_10037(var_5104_int, var_5105_float);
		}
	}
	if(var_4649_int == 45088) {
		bool var_5112_bool; object var_5113_object;
		var_5114_object = GlobalVars[16];
		var_5114_object = var_5113_object;
		func_11784(var_5113_object);
		if(!var_5112_bool) { //@nz
			int var_5120_int; float var_5121_float;
			var_4650_float = var_5121_float;
			func_9866(var_5120_int, var_5121_float);
		}
	}
	if(var_4649_int == 45084) {
		@GetVariable("b8q03MladVladIsVictim", var_4652_int);
		if(var_4652_int != 0) {
			bool var_5131_bool;
			func_201(var_5131_bool, "volonteers_danko", "kill", "mladvlad");
			@Trace("Mlad Vlad is dead");
		} else {
			bool var_6386_bool;
			func_201(var_6386_bool, "volonteers_danko", "kill", "bigvlad");
			@Trace("Big Vlad is dead");
		}
	}
	if(var_4649_int == 45085) {
		object var_5138_object; object var_5139_object;
		var_5140_object = GlobalVars[16];
		var_5140_object = var_5138_object;
		var_5141_object = GlobalVars[16];
		var_5141_object = var_5139_object;
		func_11236();
		bool var_5169_bool;
		func_189(var_5169_bool, "quest_b9_01", "cleanup");
		object var_5172_object;
		func_111(var_5172_object, "quest_b10_01");
	}
	if(var_4649_int == 45127) {
		int var_5176_int; float var_5177_float;
		var_4650_float = var_5177_float;
		func_10226(var_5176_int, var_5177_float);
	}
	if(var_4649_int == 45133) {
		bool var_5184_bool; object var_5185_object;
		var_5186_object = GlobalVars[16];
		var_5186_object = var_5185_object;
		func_11760(var_5185_object);
		if(var_5184_bool != 0) {
			int var_5191_int; float var_5192_float;
			var_4650_float = var_5192_float;
			func_10307(var_5191_int, var_5192_float);
		}
	}
	if(var_4649_int == 45136) {
		int var_5199_int; float var_5200_float;
		var_4650_float = var_5200_float;
		func_10388(var_5199_int, var_5200_float);
	}
	if(var_4649_int == 45123) {
		bool var_5207_bool; object var_5208_object;
		var_5209_object = GlobalVars[16];
		var_5209_object = var_5208_object;
		func_12094(var_5208_object);
		if(var_5207_bool != 0) {
			int var_5214_int; float var_5215_float;
			var_4650_float = var_5215_float;
			func_10163(var_5214_int, var_5215_float);
		}
	}
	if(var_4649_int == 45124) {
		bool var_5222_bool; object var_5223_object;
		var_5224_object = GlobalVars[16];
		var_5224_object = var_5223_object;
		func_11844(var_5223_object);
		if(!var_5222_bool) { //@nz
			int var_5230_int; float var_5231_float;
			var_4650_float = var_5231_float;
			func_10190(var_5230_int, var_5231_float);
		}
	}
	if(var_4649_int == 45130) {
		bool var_5238_bool; object var_5239_object;
		var_5240_object = GlobalVars[16];
		var_5240_object = var_5239_object;
		func_12166(var_5239_object);
		if(var_5238_bool != 0) {
			int var_5245_int; float var_5246_float;
			var_4650_float = var_5246_float;
			func_10316(var_5245_int, var_5246_float);
		}
	}
	if(var_4649_int == 45131) {
		bool var_5253_bool; object var_5254_object;
		var_5255_object = GlobalVars[16];
		var_5255_object = var_5254_object;
		func_11748(var_5254_object);
		if(var_5253_bool != 0) {
			int var_5260_int; float var_5261_float;
			var_4650_float = var_5261_float;
			func_10334(var_5260_int, var_5261_float);
		}
	}
	if(var_4649_int == 45135) {
		bool var_5268_bool = false;
		bool var_5269_bool; object var_5270_object;
		var_5271_object = GlobalVars[16];
		var_5271_object = var_5270_object;
		func_11772(var_5270_object);
		if(var_5269_bool != 0) {
			bool var_5276_bool; object var_5277_object;
			var_5278_object = GlobalVars[16];
			var_5278_object = var_5277_object;
			func_12072(var_5277_object);
			if(!var_5276_bool) //@nz
				var_5268_bool = true;
		}
		if(var_5268_bool != 0) {
			int var_5284_int; float var_5285_float;
			var_4650_float = var_5285_float;
			func_10361(var_5284_int, var_5285_float);
		}
	}
	if(var_4649_int == 45125) {
		int var_5292_int; float var_5293_float;
		var_4650_float = var_5293_float;
		func_10172(var_5292_int, var_5293_float);
	}
	if(var_4649_int == 45128) {
		bool var_5300_bool; object var_5301_object;
		var_5302_object = GlobalVars[16];
		var_5302_object = var_5301_object;
		func_11856(var_5301_object);
		if(var_5300_bool != 0) {
			int var_5307_int; float var_5308_float;
			var_4650_float = var_5308_float;
			func_10271(var_5307_int, var_5308_float);
		}
	}
	if(var_4649_int == 45129) {
		int var_5315_int; float var_5316_float;
		var_4650_float = var_5316_float;
		func_10280(var_5315_int, var_5316_float);
	}
	if(var_4649_int == 45134) {
		int var_5323_int; float var_5324_float;
		var_4650_float = var_5324_float;
		func_10352(var_5323_int, var_5324_float);
	}
	if(var_4649_int == 45126) {
		bool var_5331_bool; object var_5332_object;
		var_5333_object = GlobalVars[16];
		var_5333_object = var_5332_object;
		func_12106(var_5332_object);
		if(var_5331_bool != 0) {
			int var_5338_int; float var_5339_float;
			var_4650_float = var_5339_float;
			func_10217(var_5338_int, var_5339_float);
		}
	}
	if(var_4649_int == 45137) {
		int var_5346_int; float var_5347_float;
		var_4650_float = var_5347_float;
		func_10415(var_5346_int, var_5347_float);
	}
	if(var_4649_int == 45138) {
		int var_5354_int; float var_5355_float;
		var_4650_float = var_5355_float;
		func_10397(var_5354_int, var_5355_float);
	}
	if(var_4649_int == 45132) {
		int var_5362_int; float var_5363_float;
		var_4650_float = var_5363_float;
		func_10343(var_5362_int, var_5363_float);
	}
	if(var_4649_int == 45198) {
		bool var_5370_bool; object var_5371_object;
		var_5372_object = GlobalVars[16];
		var_5372_object = var_5371_object;
		func_12024(var_5371_object);
		if(!var_5370_bool) { //@nz
			object var_5378_object; object var_5379_object;
			var_5380_object = GlobalVars[16];
			var_5380_object = var_5378_object;
			var_5381_object = GlobalVars[16];
			var_5381_object = var_5379_object;
			func_11683();
		}
	}
	if(var_4649_int == 45262) {
		object var_5420_object; object var_5421_object;
		var_5422_object = GlobalVars[16];
		var_5422_object = var_5420_object;
		var_5423_object = GlobalVars[16];
		var_5423_object = var_5421_object;
		func_11584();
	}
	if(var_4649_int == 45190) {
		int var_5434_int; float var_5435_float;
		var_4650_float = var_5435_float;
		func_10109(var_5434_int, var_5435_float);
	}
	if(var_4649_int == 45263) {
		object var_5442_object; object var_5443_object;
		var_5444_object = GlobalVars[16];
		var_5444_object = var_5442_object;
		var_5445_object = GlobalVars[16];
		var_5445_object = var_5443_object;
		func_11601();
	}
	if(var_4649_int == 45264) {
		object var_5456_object; object var_5457_object;
		var_5458_object = GlobalVars[16];
		var_5458_object = var_5456_object;
		var_5459_object = GlobalVars[16];
		var_5459_object = var_5457_object;
		func_11618();
	}
	if(var_4649_int == 45266) {
		object var_5470_object; object var_5471_object;
		var_5472_object = GlobalVars[16];
		var_5472_object = var_5470_object;
		var_5473_object = GlobalVars[16];
		var_5473_object = var_5471_object;
		func_11652();
	}
	if(var_4649_int == 45185) {
		bool var_5484_bool; object var_5485_object;
		var_5486_object = GlobalVars[16];
		var_5486_object = var_5485_object;
		func_11916(var_5485_object);
		if(!var_5484_bool) { //@nz
			int var_5492_int; float var_5493_float;
			var_4650_float = var_5493_float;
			func_10136(var_5492_int, var_5493_float);
		}
	}
	if(var_4649_int == 45196) {
		bool var_5500_bool; object var_5501_object;
		var_5502_object = GlobalVars[16];
		var_5502_object = var_5501_object;
		func_11988(var_5501_object);
		if(!var_5500_bool) { //@nz
			int var_5508_int; float var_5509_float;
			var_4650_float = var_5509_float;
			func_9776(var_5508_int, var_5509_float);
		}
	}
	if(var_4649_int == 45189) {
		bool var_5516_bool; object var_5517_object;
		var_5518_object = GlobalVars[16];
		var_5518_object = var_5517_object;
		func_12012(var_5517_object);
		if(!var_5516_bool) { //@nz
			int var_5524_int; float var_5525_float;
			var_4650_float = var_5525_float;
			func_10244(var_5524_int, var_5525_float);
		}
	}
	if(var_4649_int == 45265) {
		object var_5532_object; object var_5533_object;
		var_5534_object = GlobalVars[16];
		var_5534_object = var_5532_object;
		var_5535_object = GlobalVars[16];
		var_5535_object = var_5533_object;
		func_11635();
	}
	if(var_4649_int == 45157) {
		bool var_5546_bool; object var_5547_object;
		var_5548_object = GlobalVars[16];
		var_5548_object = var_5547_object;
		func_12084(var_5546_bool, var_5547_object);
		if(var_5546_bool != 0) {
			int var_5551_int; float var_5552_float;
			var_4650_float = var_5552_float;
			func_9830(var_5551_int, var_5552_float);
		}
	}
	if(var_4649_int == 45160) {
		bool var_5559_bool; object var_5560_object;
		var_5561_object = GlobalVars[16];
		var_5561_object = var_5560_object;
		func_12084(var_5559_bool, var_5560_object);
		if(var_5559_bool != 0) {
			int var_5562_int; float var_5563_float;
			var_4650_float = var_5563_float;
			func_9884(var_5562_int, var_5563_float);
		}
	}
	if(var_4649_int == 45161) {
		bool var_5570_bool; object var_5571_object;
		var_5572_object = GlobalVars[16];
		var_5572_object = var_5571_object;
		func_12084(var_5570_bool, var_5571_object);
		if(var_5570_bool != 0) {
			int var_5573_int; float var_5574_float;
			var_4650_float = var_5574_float;
			func_9947(var_5573_int, var_5574_float);
		}
	}
	if(var_4649_int == 45158) {
		bool var_5581_bool; object var_5582_object;
		var_5583_object = GlobalVars[16];
		var_5583_object = var_5582_object;
		func_12084(var_5581_bool, var_5582_object);
		if(var_5581_bool != 0) {
			int var_5584_int; float var_5585_float;
			var_4650_float = var_5585_float;
			func_9839(var_5584_int, var_5585_float);
		}
	}
	if(var_4649_int == 45159) {
		bool var_5592_bool; object var_5593_object;
		var_5594_object = GlobalVars[16];
		var_5594_object = var_5593_object;
		func_12084(var_5592_bool, var_5593_object);
		if(var_5592_bool != 0) {
			int var_5595_int; float var_5596_float;
			var_4650_float = var_5596_float;
			func_9848(var_5595_int, var_5596_float);
		}
	}
	if(var_4649_int == 45187) {
		bool var_5603_bool; object var_5604_object;
		var_5605_object = GlobalVars[16];
		var_5605_object = var_5604_object;
		func_11940(var_5604_object);
		if(!var_5603_bool) { //@nz
			int var_5611_int; float var_5612_float;
			var_4650_float = var_5612_float;
			func_9875(var_5611_int, var_5612_float);
		}
	}
	if(var_4649_int == 45188) {
		bool var_5619_bool; object var_5620_object;
		var_5621_object = GlobalVars[16];
		var_5621_object = var_5620_object;
		func_11952(var_5620_object);
		if(!var_5619_bool) { //@nz
			int var_5627_int; float var_5628_float;
			var_4650_float = var_5628_float;
			func_10298(var_5627_int, var_5628_float);
		}
	}
	if(var_4649_int == 45193) {
		object var_5635_object;
		func_111(var_5635_object, "quest_b1_05");
	}
	if(var_4649_int == 45194) {
		bool var_5639_bool; object var_5640_object;
		var_5641_object = GlobalVars[16];
		var_5641_object = var_5640_object;
		func_11964(var_5640_object);
		if(!var_5639_bool) { //@nz
			object var_5647_object; object var_5648_object;
			var_5649_object = GlobalVars[16];
			var_5649_object = var_5647_object;
			var_5650_object = GlobalVars[16];
			var_5650_object = var_5648_object;
			func_11535();
			int var_5661_int; float var_5662_float;
			var_4650_float = var_5662_float;
			func_10028(var_5661_int, var_5662_float);
		}
	}
	if(var_4649_int == 45197) {
		bool var_5669_bool; object var_5670_object;
		var_5671_object = GlobalVars[16];
		var_5671_object = var_5670_object;
		func_12000(var_5670_object);
		if(!var_5669_bool) { //@nz
			object var_5677_object; object var_5678_object;
			var_5679_object = GlobalVars[16];
			var_5679_object = var_5677_object;
			var_5680_object = GlobalVars[16];
			var_5680_object = var_5678_object;
			func_11519();
			int var_5689_int; float var_5690_float;
			var_4650_float = var_5690_float;
			func_10406(var_5689_int, var_5690_float);
		}
	}
	if(var_4649_int == 45191) {
		int var_5697_int; float var_5698_float;
		var_4650_float = var_5698_float;
		func_10118(var_5697_int, var_5698_float);
	}
	if(var_4649_int == 45235) {
		int var_5705_int; float var_5706_float;
		var_4650_float = var_5706_float;
		func_10208(var_5705_int, var_5706_float);
	}
	if(var_4649_int == 45192) {
		object var_5713_object; object var_5714_object;
		var_5715_object = GlobalVars[16];
		var_5715_object = var_5713_object;
		var_5716_object = GlobalVars[16];
		var_5716_object = var_5714_object;
		func_10546();
	}
	if(var_4649_int == 45186) {
		bool var_5721_bool; object var_5722_object;
		var_5723_object = GlobalVars[16];
		var_5723_object = var_5722_object;
		func_11928(var_5722_object);
		if(!var_5721_bool) { //@nz
			int var_5729_int; float var_5730_float;
			var_4650_float = var_5730_float;
			func_10379(var_5729_int, var_5730_float);
		}
	}
	if(var_4649_int == 45195) {
		bool var_5737_bool; object var_5738_object;
		var_5739_object = GlobalVars[16];
		var_5739_object = var_5738_object;
		func_11976(var_5738_object);
		if(!var_5737_bool) { //@nz
			object var_5745_object; object var_5746_object;
			var_5747_object = GlobalVars[16];
			var_5747_object = var_5745_object;
			var_5748_object = GlobalVars[16];
			var_5748_object = var_5746_object;
			func_11503();
			int var_5757_int; float var_5758_float;
			var_4650_float = var_5758_float;
			func_10199(var_5757_int, var_5758_float);
		}
	}
	if(var_4649_int == 45234) {
		bool var_5765_bool; object var_5766_object;
		var_5767_object = GlobalVars[16];
		var_5767_object = var_5766_object;
		func_12060(var_5766_object);
		if(!var_5765_bool) { //@nz
			int var_5773_int; float var_5774_float;
			var_4650_float = var_5774_float;
			func_10145(var_5773_int, var_5774_float);
		}
	}
	if(var_4649_int == 45237) {
		object var_5781_object; object var_5782_object;
		var_5783_object = GlobalVars[16];
		var_5783_object = var_5781_object;
		var_5784_object = GlobalVars[16];
		var_5784_object = var_5782_object;
		func_11572();
		int var_5787_int; float var_5788_float;
		var_4650_float = var_5788_float;
		func_10370(var_5787_int, var_5788_float);
	}
	if(var_4649_int == 45238) {
		object var_5795_object; object var_5796_object;
		var_5797_object = GlobalVars[16];
		var_5797_object = var_5795_object;
		var_5798_object = GlobalVars[16];
		var_5798_object = var_5796_object;
		func_11578();
		int var_5801_int; float var_5802_float;
		var_4650_float = var_5802_float;
		func_10433(var_5801_int, var_5802_float);
	}
	if(var_4649_int == 45162) {
		bool var_5809_bool; object var_5810_object;
		var_5811_object = GlobalVars[16];
		var_5811_object = var_5810_object;
		func_12084(var_5809_bool, var_5810_object);
		if(var_5809_bool != 0) {
			int var_5812_int; float var_5813_float;
			var_4650_float = var_5813_float;
			func_9992(var_5812_int, var_5813_float);
		}
	}
	if(var_4649_int == 45139) {
		int var_5820_int; float var_5821_float;
		var_4650_float = var_5821_float;
		func_9857(var_5820_int, var_5821_float);
	}
	if(var_4649_int == 45141) {
		int var_5828_int; float var_5829_float;
		var_4650_float = var_5829_float;
		func_9929(var_5828_int, var_5829_float);
	}
	if(var_4649_int == 45140) {
		int var_5836_int; float var_5837_float;
		var_4650_float = var_5837_float;
		func_9902(var_5836_int, var_5837_float);
	}
	if(var_4649_int == 45144) {
		int var_5844_int; float var_5845_float;
		var_4650_float = var_5845_float;
		func_10253(var_5844_int, var_5845_float);
	}
	if(var_4649_int == 45148) {
		object var_5852_object;
		func_122(var_5852_object, "quest_b9_03");
	}
	if(var_4649_int == 45149) {
		object var_5856_object;
		func_111(var_5856_object, "quest_b10_04");
	}
	if(var_4649_int == 45150) {
		object var_5860_object;
		func_111(var_5860_object, "quest_b11_04");
	}
	if(var_4649_int == 45151) {
		bool var_5864_bool; object var_5865_object;
		var_5866_object = GlobalVars[16];
		var_5866_object = var_5865_object;
		func_11904(var_5865_object);
		if(var_5864_bool != 0) {
			int var_5871_int; float var_5872_float;
			var_4650_float = var_5872_float;
			func_9938(var_5871_int, var_5872_float);
		}
	}
	if(var_4649_int == 45155) {
		bool var_5879_bool; object var_5880_object;
		var_5881_object = GlobalVars[16];
		var_5881_object = var_5880_object;
		func_12084(var_5879_bool, var_5880_object);
		if(var_5879_bool != 0) {
			int var_5882_int; float var_5883_float;
			var_4650_float = var_5883_float;
			func_9812(var_5882_int, var_5883_float);
		}
	}
	if(var_4649_int == 45142) {
		int var_5890_int; float var_5891_float;
		var_4650_float = var_5891_float;
		func_9893(var_5890_int, var_5891_float);
	}
	if(var_4649_int == 45147) {
		bool var_5898_bool = false;
		bool var_5899_bool = false;
		bool var_5900_bool; object var_5901_object;
		var_5902_object = GlobalVars[16];
		var_5902_object = var_5901_object;
		func_11868(var_5901_object);
		if(!var_5900_bool) { //@nz
			bool var_5908_bool; object var_5909_object;
			var_5910_object = GlobalVars[16];
			var_5910_object = var_5909_object;
			func_11880(var_5909_object);
			if(var_5908_bool != 0)
				var_5899_bool = true;
		}
		if(var_5899_bool != 0) {
			bool var_5915_bool; object var_5916_object;
			var_5917_object = GlobalVars[16];
			var_5917_object = var_5916_object;
			func_11892(var_5916_object);
			if(!var_5915_bool) //@nz
				var_5898_bool = true;
		}
		if(var_5898_bool != 0) {
			int var_5923_int; float var_5924_float;
			var_4650_float = var_5924_float;
			func_10424(var_5923_int, var_5924_float);
		}
	}
	if(var_4649_int == 45152) {
		bool var_5931_bool; object var_5932_object;
		var_5933_object = GlobalVars[16];
		var_5933_object = var_5932_object;
		func_12084(var_5931_bool, var_5932_object);
		if(var_5931_bool != 0) {
			int var_5934_int; float var_5935_float;
			var_4650_float = var_5935_float;
			func_9785(var_5934_int, var_5935_float);
		}
	}
	if(var_4649_int == 45156) {
		bool var_5942_bool; object var_5943_object;
		var_5944_object = GlobalVars[16];
		var_5944_object = var_5943_object;
		func_12084(var_5942_bool, var_5943_object);
		if(var_5942_bool != 0) {
			int var_5945_int; float var_5946_float;
			var_4650_float = var_5946_float;
			func_9821(var_5945_int, var_5946_float);
		}
	}
	if(var_4649_int == 45153) {
		bool var_5953_bool; object var_5954_object;
		var_5955_object = GlobalVars[16];
		var_5955_object = var_5954_object;
		func_12084(var_5953_bool, var_5954_object);
		if(var_5953_bool != 0) {
			int var_5956_int; float var_5957_float;
			var_4650_float = var_5957_float;
			func_9794(var_5956_int, var_5957_float);
		}
	}
	if(var_4649_int == 45154) {
		bool var_5964_bool; object var_5965_object;
		var_5966_object = GlobalVars[16];
		var_5966_object = var_5965_object;
		func_12084(var_5964_bool, var_5965_object);
		if(var_5964_bool != 0) {
			int var_5967_int; float var_5968_float;
			var_4650_float = var_5968_float;
			func_9803(var_5967_int, var_5968_float);
		}
	}
	if(var_4649_int == 45143) {
		int var_5975_int; float var_5976_float;
		var_4650_float = var_5976_float;
		func_9911(var_5975_int, var_5976_float);
	}
	if(var_4649_int == 45078) {
		object var_5983_object; object var_5984_object;
		var_5985_object = GlobalVars[16];
		var_5985_object = var_5983_object;
		var_5986_object = GlobalVars[16];
		var_5986_object = var_5984_object;
		func_11676();
		object var_5989_object; object var_5990_object;
		var_5991_object = GlobalVars[16];
		var_5991_object = var_5989_object;
		var_5992_object = GlobalVars[16];
		var_5992_object = var_5990_object;
		func_11043();
		bool var_6016_bool;
		func_189(var_6016_bool, "quest_b6_01", "cleanup");
		object var_6019_object;
		func_111(var_6019_object, "quest_b7_01");
	}
	if(var_4649_int == 45070) {
		object var_6023_object; object var_6024_object;
		var_6025_object = GlobalVars[16];
		var_6025_object = var_6023_object;
		var_6026_object = GlobalVars[16];
		var_6026_object = var_6024_object;
		func_10449();
	}
	if(var_4649_int == 45059) {
		object var_6031_object; object var_6032_object;
		var_6033_object = GlobalVars[16];
		var_6033_object = var_6031_object;
		var_6034_object = GlobalVars[16];
		var_6034_object = var_6032_object;
		func_11734();
		object var_6037_object; object var_6038_object;
		var_6039_object = GlobalVars[16];
		var_6039_object = var_6037_object;
		var_6040_object = GlobalVars[16];
		var_6040_object = var_6038_object;
		func_10763();
		bool var_6078_bool;
		func_189(var_6078_bool, "quest_b2_01", "cleanup");
		object var_6081_object;
		func_111(var_6081_object, "quest_b3_01");
	}
	if(var_4649_int == 45071) {
		object var_6085_object; object var_6086_object;
		var_6087_object = GlobalVars[16];
		var_6087_object = var_6085_object;
		var_6088_object = GlobalVars[16];
		var_6088_object = var_6086_object;
		func_10463();
	}
	if(var_4649_int == 45073) {
		object var_6102_object; object var_6103_object;
		var_6104_object = GlobalVars[16];
		var_6104_object = var_6102_object;
		var_6105_object = GlobalVars[16];
		var_6105_object = var_6103_object;
		func_10500();
	}
	if(var_4649_int == 45072) {
		object var_6108_object; object var_6109_object;
		var_6110_object = GlobalVars[16];
		var_6110_object = var_6108_object;
		var_6111_object = GlobalVars[16];
		var_6111_object = var_6109_object;
		func_10477();
		object var_6114_object; object var_6115_object;
		var_6116_object = GlobalVars[16];
		var_6116_object = var_6114_object;
		var_6117_object = GlobalVars[16];
		var_6117_object = var_6115_object;
		func_10491();
	}
	if(var_4649_int == 45076) {
		bool var_6122_bool; object var_6123_object;
		var_6124_object = GlobalVars[16];
		var_6124_object = var_6123_object;
		func_12118(var_6123_object);
		if(var_6122_bool != 0) {
			int var_6129_int; float var_6130_float;
			var_4650_float = var_6130_float;
			func_10046(var_6129_int, var_6130_float);
		}
	}
	if(var_4649_int == 45077) {
		bool var_6137_bool; object var_6138_object;
		var_6139_object = GlobalVars[16];
		var_6139_object = var_6138_object;
		func_12154(var_6138_object);
		if(!var_6137_bool) { //@nz
			int var_6145_int; float var_6146_float;
			var_4650_float = var_6146_float;
			func_10055(var_6145_int, var_6146_float);
		}
	}
	if(var_4649_int == 45075) {
		bool var_6153_bool; object var_6154_object;
		var_6155_object = GlobalVars[16];
		var_6155_object = var_6154_object;
		func_12130(var_6154_object);
		if(!var_6153_bool) { //@nz
			int var_6161_int; float var_6162_float;
			var_4650_float = var_6162_float;
			func_10073(var_6161_int, var_6162_float);
		}
	}
	if(var_4649_int == 45058) {
		object var_6169_object; object var_6170_object;
		var_6171_object = GlobalVars[16];
		var_6171_object = var_6169_object;
		var_6172_object = GlobalVars[16];
		var_6172_object = var_6170_object;
		func_10581();
		bool var_6232_bool;
		func_189(var_6232_bool, "quest_b1_01", "cleanup");
		object var_6235_object;
		func_111(var_6235_object, "quest_b2_01");
		object var_6237_object;
		func_111(var_6237_object, "quest_b2_03");
	}
	if(var_4649_int == 45060) {
		object var_6241_object; object var_6242_object;
		var_6243_object = GlobalVars[16];
		var_6243_object = var_6241_object;
		var_6244_object = GlobalVars[16];
		var_6244_object = var_6242_object;
		func_10871();
		bool var_6274_bool;
		func_189(var_6274_bool, "quest_b3_01", "cleanup");
		object var_6277_object;
		func_122(var_6277_object, "quest_b4_01");
	}
	if(var_4649_int == 45065) {
		object var_6281_object; object var_6282_object;
		var_6283_object = GlobalVars[16];
		var_6283_object = var_6281_object;
		var_6284_object = GlobalVars[16];
		var_6284_object = var_6282_object;
		func_10951();
		bool var_6304_bool;
		func_189(var_6304_bool, "quest_b4_01", "cleanup");
		object var_6307_object;
		func_111(var_6307_object, "quest_b5_01");
	}
	if(var_4649_int == 45061)
		@QueuePlayMovie("aglaja.wmv");
	if(var_4649_int == 45067) {
		bool var_6314_bool; object var_6315_object;
		var_6316_object = GlobalVars[16];
		var_6316_object = var_6315_object;
		func_12036(var_6315_object);
		if(!var_6314_bool) { //@nz
			int var_6322_int; float var_6323_float;
			var_4650_float = var_6323_float;
			func_10091(var_6322_int, var_6323_float);
		}
	}
	if(var_4649_int == 45068) {
		object var_6330_object; object var_6331_object;
		var_6332_object = GlobalVars[16];
		var_6332_object = var_6330_object;
		var_6333_object = GlobalVars[16];
		var_6333_object = var_6331_object;
		func_11720();
		bool var_6336_bool;
		func_189(var_6336_bool, "quest_b1_01", "remove_whitemask");
	}
	if(var_4649_int == 45062)
		@QueuePlayMovie("army.wmv");
	if(var_4649_int == 45069) {
		object var_6344_object; object var_6345_object;
		var_6346_object = GlobalVars[16];
		var_6346_object = var_6344_object;
		var_6347_object = GlobalVars[16];
		var_6347_object = var_6345_object;
		func_11741();
	}
	if(var_4649_int == 45066) {
		object var_6352_object; object var_6353_object;
		var_6354_object = GlobalVars[16];
		var_6354_object = var_6352_object;
		var_6355_object = GlobalVars[16];
		var_6355_object = var_6353_object;
		func_10999();
		bool var_6373_bool;
		func_189(var_6373_bool, "quest_b5_01", "cleanup");
		object var_6376_object;
		func_111(var_6376_object, "quest_b6_01");
	}
	if(var_4649_int == 45074) {
		object var_6380_object; object var_6381_object;
		var_6382_object = GlobalVars[16];
		var_6382_object = var_6380_object;
		var_6383_object = GlobalVars[16];
		var_6383_object = var_6381_object;
		func_10509();
	}
	
}


// @pe
void func_5240(int var_2586_int, int var_2587_int, object var_2588_object, object var_2589_object, object var_2590_object, object var_2591_object)
{
	if(var_2587_int == 0) {
		func_746(4, true);
		func_763(4, true, 1);
		int var_2600_int; object var_2601_object; object var_2602_object; object var_2603_object;
		var_2586_int = var_2600_int;
		var_2588_object = var_2601_object;
		var_2589_object = var_2602_object;
		var_2590_object = var_2603_object;
		func_591(4, var_2600_int, var_2601_object, var_2602_object, var_2603_object);
		object var_2604_object;
		var_2591_object = var_2604_object;
		func_255(var_2604_object, 1);
		func_820(4, true, 4);
		func_882(4, false, 4);
	}
	func_729(4, false);
	int var_2615_int; int var_2616_int;
	var_2586_int = var_2615_int;
	var_2587_int = var_2616_int;
	func_2894(4, var_2615_int, var_2616_int);
}


// @pe
void func_10361(int var_5284_int, float var_5285_float)
{
	float var_5289_float;
	var_5285_float = var_5289_float;
	int var_5286_int;
	func_12278(var_5286_int, 521371, 521370, var_5289_float);
	var_5286_int = var_5284_int;
}


void func_122(object var_4961_object, string var_4962_string)
{
	object var_4965_object;
	@GetMainOutdoorScene(var_4965_object);
	object var_4966_object;
	@AddBlankActorFromXml(var_4966_object, var_4965_object, var_4962_string, (var_4962_string + ".xml"));
	var_4966_object = var_4961_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6268(int var_1637_int, int var_1638_int, object var_1639_object, object var_1640_object, object var_1641_object, object var_1642_object)
{
	if(var_1638_int == 0) {
		func_746(10, false);
		func_763(10, false, 1);
		int var_1650_int; int var_1651_int; object var_1652_object; object var_1653_object; object var_1654_object;
		var_1650_int = 10;
		var_1637_int = var_1651_int;
		var_1639_object = var_1652_object;
		var_1640_object = var_1653_object;
		var_1641_object = var_1654_object;
		func_572(var_1651_int, var_1652_object, var_1653_object, var_1654_object);
		object var_1655_object;
		var_1642_object = var_1655_object;
		func_255(var_1655_object, 0);
		func_820(10, false, 7);
		func_882(10, false, 7);
	}
	int var_1664_int;
	var_1638_int = var_1664_int;
	func_933(10, var_1664_int);
	int var_1666_int; int var_1667_int;
	var_1637_int = var_1666_int;
	var_1638_int = var_1667_int;
	func_1574(10, var_1666_int, var_1667_int);
}


// @pe
void func_10370(int var_5787_int, float var_5788_float)
{
	float var_5792_float;
	var_5788_float = var_5792_float;
	int var_5789_int;
	func_12278(var_5789_int, 533052, 533051, var_5792_float);
	var_5789_int = var_5787_int;
}


void func_133(object var_329_object, object var_330_object, string var_331_string, string var_332_string, string var_333_string)
{
	bool var_339_bool; cvector var_340_cvector; cvector var_341_cvector;
	var_330_object->GetLocator(var_331_string, var_339_bool, var_340_cvector, var_341_cvector);
	if(!var_339_bool) //@nz
		@Trace(("Locator " + var_331_string) + " doesn't exist");
	else
		var_330_object->AddStationaryActor(Obj(), var_340_cvector, var_341_cvector, var_332_string, var_333_string);
	object var_342_object = var_329_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_10379(int var_5729_int, float var_5730_float)
{
	float var_5734_float;
	var_5730_float = var_5734_float;
	int var_5731_int;
	func_12278(var_5731_int, 530654, 530653, var_5734_float);
	var_5731_int = var_5729_int;
}


// @pe
void func_7314(int var_3138_int, int var_3139_int, object var_3140_object, object var_3141_object, object var_3142_object, object var_3143_object)
{
	if(var_3139_int == 0) {
		func_746(15, true);
		func_763(15, true, 1);
		int var_3152_int; object var_3153_object; object var_3154_object; object var_3155_object;
		var_3138_int = var_3152_int;
		var_3140_object = var_3153_object;
		var_3141_object = var_3154_object;
		var_3142_object = var_3155_object;
		func_591(15, var_3152_int, var_3153_object, var_3154_object, var_3155_object);
		object var_3156_object;
		var_3143_object = var_3156_object;
		func_255(var_3156_object, 1);
		func_820(15, true, 5);
		func_882(15, false, 5);
	}
	func_729(15, false);
	int var_3167_int; int var_3168_int;
	var_3138_int = var_3167_int;
	var_3139_int = var_3168_int;
	func_2534(15, var_3167_int, var_3168_int);
}


// @pe
void func_10388(int var_5199_int, float var_5200_float)
{
	float var_5204_float;
	var_5200_float = var_5204_float;
	int var_5201_int;
	func_12278(var_5201_int, 529880, 529879, var_5204_float);
	var_5201_int = var_5199_int;
}


void func_11412(void)
{
	object var_5039_object;
	func_12286(var_5039_object);
	object var_5037_object;
	var_5039_object = var_5037_object;
	object var_5038_object;
	var_5037_object->FindMark(var_5038_object, "b11q04NotkinGotoSanitar");
	if(var_5038_object != 0)
		var_5038_object->Remove();
	var_5037_object->FindMark(var_5038_object, "b11q04SanitarGotoOfficer");
	if(var_5038_object != 0)
		var_5038_object->Remove();
	bool var_5044_bool;
	func_12261(var_5044_bool, 313);
	bool var_5046_bool;
	func_12261(var_5046_bool, 551);
	bool var_5048_bool;
	func_12261(var_5048_bool, 598);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_151(string var_4783_string, bool var_4784_bool)
{
	object var_4786_object;
	@FindActor(var_4786_object, var_4783_string);
	if(!var_4786_object) //@nz
		@Trace(("Door " + var_4783_string) + " not found");
	else
		var_4786_object->SetProperty("locked", var_4784_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_10397(int var_5354_int, float var_5355_float)
{
	float var_5359_float;
	var_5355_float = var_5359_float;
	int var_5356_int;
	func_12278(var_5356_int, 529882, 529881, var_5359_float);
	var_5356_int = var_5354_int;
}


// @pe
void func_10406(int var_5689_int, float var_5690_float)
{
	float var_5694_float;
	var_5690_float = var_5694_float;
	int var_5691_int;
	func_12278(var_5691_int, 531549, 531548, var_5694_float);
	var_5691_int = var_5689_int;
}


void func_168(string var_4815_string, bool var_4816_bool)
{
	object var_4818_object;
	@FindActor(var_4818_object, var_4815_string);
	if(!var_4818_object) { //@nz
		@Trace(("Door " + var_4815_string) + " not found");
	} else {
		if(var_4816_bool != 0)
			var_4818_object->Close();
		var_4818_object->SetProperty("locked", var_4816_bool);
	}
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_5292(int var_3712_int, int var_3713_int, object var_3714_object, object var_3715_object, object var_3716_object, object var_3717_object)
{
	if(var_3713_int == 0) {
		func_746(4, false);
		func_763(4, false, 1);
		int var_3726_int; object var_3727_object; object var_3728_object; object var_3729_object;
		var_3712_int = var_3726_int;
		var_3714_object = var_3727_object;
		var_3715_object = var_3728_object;
		var_3716_object = var_3729_object;
		func_670(4, var_3726_int, var_3727_object, var_3728_object, var_3729_object);
		object var_3730_object;
		var_3717_object = var_3730_object;
		func_255(var_3730_object, 2);
		func_820(4, false, 4);
		func_882(4, true, 4);
	}
	func_729(4, false);
	int var_3741_int; int var_3742_int;
	var_3712_int = var_3741_int;
	var_3713_int = var_3742_int;
	func_3797(4, var_3741_int, var_3742_int);
}


// @pe
void func_10415(int var_5346_int, float var_5347_float)
{
	float var_5351_float;
	var_5347_float = var_5351_float;
	int var_5348_int;
	func_12278(var_5348_int, 529884, 529883, var_5351_float);
	var_5348_int = var_5346_int;
}


// @pe
void func_6320(int var_2867_int, int var_2868_int, object var_2869_object, object var_2870_object, object var_2871_object, object var_2872_object)
{
	if(var_2868_int == 0) {
		func_746(10, true);
		func_763(10, true, 1);
		int var_2881_int; object var_2882_object; object var_2883_object; object var_2884_object;
		var_2867_int = var_2881_int;
		var_2869_object = var_2882_object;
		var_2870_object = var_2883_object;
		var_2871_object = var_2884_object;
		func_591(10, var_2881_int, var_2882_object, var_2883_object, var_2884_object);
		object var_2885_object;
		var_2872_object = var_2885_object;
		func_255(var_2885_object, 1);
		func_820(10, true, 7);
		func_882(10, false, 7);
	}
	func_729(10, false);
	int var_2896_int; int var_2897_int;
	var_2867_int = var_2896_int;
	var_2868_int = var_2897_int;
	func_2714(10, var_2896_int, var_2897_int);
}


// @pe
void func_14516(object var_5392_object, bool var_5393_bool, int var_5394_int)
{
	var_5392_object->add(18);
	var_5392_object->add(24);
	var_5392_object->add(20);
	var_5392_object->add(14);
	if(var_5393_bool == false) {
		var_5392_object->add(10);
		var_5392_object->add(17);
		var_5392_object->add(8);
	} else if(var_5394_int != 1) {
		var_5392_object->add(10);
	}
	
}


// @pe
void func_1205(float var_2157_float, int var_2158_int)
{
	if((var_2158_int + 1) == 1) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x50d";
	}
	if((var_2158_int + 1) == 2) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x50d";
	}
	if((var_2158_int + 1) == 3) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x50d";
	}
	if((var_2158_int + 1) == 4) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x50d";
	}
	if((var_2158_int + 1) == 5) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x50d";
	}
	if((var_2158_int + 1) == 6) {
		var_2157_float = 2;
		return 0;
	EMIT "GOTO 0x50d";
	}
	if((var_2158_int + 1) == 7) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x50d";
	}
	if((var_2158_int + 1) == 8) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x50d";
	}
	if((var_2158_int + 1) == 9) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x50d";
	}
	if((var_2158_int + 1) == 10) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x50d";
	}
	if((var_2158_int + 1) == 11) {
		var_2157_float = 1;
		return 0;
	}
	var_2157_float = 0;
}


void func_3254(int var_2303_int, int var_2304_int, int var_2305_int)
{
	int var_2308_int; int var_2309_int;
	bool var_2310_bool = false;
	if(var_2305_int > 8) {
		if(var_2305_int < 21)
			var_2310_bool = true;
	}
	if(var_2310_bool != 0) {
		int var_2315_int;
		var_2303_int = var_2315_int;
		func_453(var_2315_int, "pers_vaxxabit", "vaxxabit_d.xml", 7);
		int var_2319_int;
		var_2303_int = var_2319_int;
		func_453(var_2319_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 7);
		int var_2323_int;
		var_2303_int = var_2323_int;
		func_453(var_2323_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2327_int;
		var_2303_int = var_2327_int;
		func_479(var_2327_int, "fog", "fog.xml", 7);
		if(var_2304_int >= 5) {
			int var_2333_int;
			var_2303_int = var_2333_int;
			func_479(var_2333_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2338_float; int var_2339_int;
		func_1205(var_2338_float, var_2339_int);
		if((2 * var_2338_float) != 0) {
			int var_2341_int; int var_2344_int;
			var_2303_int = var_2341_int;
			var_2308_int = var_2344_int;
			func_453(var_2341_int, "pers_bomber", "bomber.xml", var_2344_int);
		}
	} else {
		int var_2375_int;
		var_2303_int = var_2375_int;
		func_453(var_2375_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2379_int;
		var_2303_int = var_2379_int;
		func_453(var_2379_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2383_int;
		var_2303_int = var_2383_int;
		func_453(var_2383_int, "pers_rat_big", "rat_big.xml", 4);
		int var_2387_int;
		var_2303_int = var_2387_int;
		func_479(var_2387_int, "fog", "fog.xml", 7);
		if(var_2339_int >= 5) {
			int var_2393_int;
			var_2303_int = var_2393_int;
			func_479(var_2393_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2398_float; int var_2399_int;
		var_2304_int = var_2399_int;
		func_1205(var_2398_float, var_2399_int);
		if((2 * var_2398_float) == 0) goto Label_3372;
		int var_2401_int; int var_2404_int;
		var_2303_int = var_2401_int;
		var_2309_int = var_2404_int;
		func_453(var_2401_int, "pers_bomber", "bomber.xml", var_2404_int);
	}
Label_3372:
	bool var_2345_bool; int var_2346_int;
	var_2304_int = var_2346_int;
	func_1322(var_2345_bool, var_2346_int);
	if(var_2345_bool != 0) {
		int var_2347_int;
		var_2303_int = var_2347_int;
		func_453(var_2347_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2351_int;
	var_2303_int = var_2351_int;
	func_466(var_2351_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2357_int;
	var_2303_int = var_2357_int;
	func_466(var_2357_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2363_int;
	var_2303_int = var_2363_int;
	func_466(var_2363_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2369_int;
	var_2303_int = var_2369_int;
	func_466(var_2369_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


// @pe
void func_11446(void)
{
	func_12181();
}


// @pe
void func_10424(int var_5923_int, float var_5924_float)
{
	float var_5928_float;
	var_5924_float = var_5928_float;
	int var_5925_int;
	func_12278(var_5925_int, 530276, 530275, var_5928_float);
	var_5925_int = var_5923_int;
}


// @pe
void func_11451(void)
{
	int var_4904_int;
	func_106(var_4904_int, "B_Mission3");
	if(var_4904_int == 0) {
		@SetVariable("B_Mission3", 1);
		func_12194();
		bool var_4929_bool;
		func_12261(var_4929_bool, 562);
		bool var_4931_bool;
		func_12261(var_4931_bool, 563);
	}
}


void func_189(bool var_672_bool, string var_673_string, string var_674_string)
{
	object var_676_object;
	@FindActor(var_676_object, var_673_string);
	if(var_676_object == null)
		var_672_bool = false;
	@Trigger(var_676_object, var_674_string);
	var_672_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10433(int var_5801_int, float var_5802_float)
{
	float var_5806_float;
	var_5802_float = var_5806_float;
	int var_5803_int;
	func_12278(var_5803_int, 533054, 533053, var_5806_float);
	var_5803_int = var_5801_int;
}


// @pe
void func_7366(int var_4272_int, int var_4273_int, object var_4274_object, object var_4275_object, object var_4276_object, object var_4277_object)
{
	if(var_4273_int == 0) {
		func_746(15, false);
		func_763(15, false, 1);
		int var_4286_int; object var_4287_object; object var_4288_object; object var_4289_object;
		var_4272_int = var_4286_int;
		var_4274_object = var_4287_object;
		var_4275_object = var_4288_object;
		var_4276_object = var_4289_object;
		func_670(15, var_4286_int, var_4287_object, var_4288_object, var_4289_object);
		object var_4290_object;
		var_4277_object = var_4290_object;
		func_255(var_4290_object, 2);
		func_820(15, false, 5);
		func_882(15, true, 5);
	}
	func_729(15, false);
	int var_4301_int; int var_4302_int;
	var_4272_int = var_4301_int;
	var_4273_int = var_4302_int;
	func_3421(15, var_4301_int, var_4302_int);
}


void func_201(bool var_4470_bool, string var_4471_string, string var_4472_string, string var_4473_string)
{
	object var_4475_object;
	@FindActor(var_4475_object, var_4471_string);
	if(var_4475_object == null)
		var_4470_bool = false;
	@Trigger(var_4475_object, var_4472_string, var_4473_string);
	var_4470_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10442(void)
{
	func_151("cot_lara@door1", true);
}


// @pe
void func_10449(void)
{
	func_151("cot_lara@door1", false);
}


// @pe
void func_11475(void)
{
	int var_5054_int;
	func_106(var_5054_int, "B_Mission4");
	if(var_5054_int == 0) {
		@SetVariable("B_Mission4", 1);
		func_12207();
		bool var_5068_bool;
		func_12261(var_5068_bool, 562);
		bool var_5070_bool;
		func_12261(var_5070_bool, 563);
		bool var_5072_bool;
		func_12261(var_5072_bool, 564);
	}
}


void func_213(object var_599_object)
{
	int var_603_int; int var_604_int; object var_605_object;
	if(var_599_object != 0) {
		var_599_object->size(var_603_int);
		var_604_int = 0;

		while(var_604_int < var_603_int) {
			var_599_object->get(var_605_object, var_604_int);
			if(var_605_object != 0)
				var_605_object->Remove();
			var_605_object = null;
			var_604_int += 1;
		}

		var_599_object->clear();
	}
}


void func_14549(int var_5408_int)
{
	int var_5410_int;
	@GetVariable(("vol_" + var_5408_int), var_5410_int);
	@SetVariable(("vol_" + var_5408_int), (var_5410_int | 8));
}


// @pe
void func_10456(void)
{
	func_168("icot_eva_door", true);
}


// @pe
void func_10463(void)
{
	func_168("icot_eva_door", false);
}


// @pe
void func_5344(object var_144_object)
{
	var_144_object->add("dt_house3_14_i2");
	var_144_object->add("dt_house3_14");
	var_144_object->add("house1_arc_01l");
	var_144_object->add("house1_arc_01r");
	var_144_object->add("dt_House6_01");
	var_144_object->add("dt_house_1_09");
	var_144_object->add("house5_24");
	var_144_object->add("dt_House6_03");
	var_144_object->add("dt_House6_04");
	var_144_object->add("dt_house_1_08");
	var_144_object->add("house5_unoin_solidl");
	var_144_object->add("house5_unoin_solidr");
	var_144_object->add("dt_house2_12");
	var_144_object->add("dt_house2_11");
	var_144_object->add("dt_house2_13");
	var_144_object->add("dt_house2_09");
	var_144_object->add("dt_house2_08");
	var_144_object->add("dt_house2_07");
	var_144_object->add("dt_house2_06");
	var_144_object->add("house5_01");
	var_144_object->add("house5_15");
	var_144_object->add("house5_16");
	var_144_object->add("house5_17");
	var_144_object->add("house5_unoin04l");
	var_144_object->add("house5_unoin04r");
	var_144_object->add("house5_23");
	var_144_object->add("house1_se_05r");
	var_144_object->add("house1_se_05l");
	var_144_object->add("dt_house2_10");
}


void func_14561(void)
{
	object var_5388_object; int var_5391_int;
	@CreateIntVector(var_5388_object);
	object var_5392_object;
	var_5388_object = var_5392_object;
	func_14516(var_5392_object, false, -1);
	int var_5389_int;
	var_5388_object->size(var_5389_int);
	int var_5390_int = 0;
	
	while(var_5390_int < var_5389_int) {
		var_5388_object->get(var_5391_int, var_5390_int);
		int var_5408_int;
		var_5391_int = var_5408_int;
		func_14549(var_5408_int);
		var_5390_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_6372(int var_3997_int, int var_3998_int, object var_3999_object, object var_4000_object, object var_4001_object, object var_4002_object)
{
	if(var_3998_int == 0) {
		func_746(10, false);
		func_763(10, false, 1);
		int var_4011_int; object var_4012_object; object var_4013_object; object var_4014_object;
		var_3997_int = var_4011_int;
		var_3999_object = var_4012_object;
		var_4000_object = var_4013_object;
		var_4001_object = var_4014_object;
		func_670(10, var_4011_int, var_4012_object, var_4013_object, var_4014_object);
		object var_4015_object;
		var_4002_object = var_4015_object;
		func_255(var_4015_object, 2);
		func_820(10, false, 7);
		func_882(10, true, 7);
	}
	func_729(10, false);
	int var_4026_int; int var_4027_int;
	var_3997_int = var_4026_int;
	var_3998_int = var_4027_int;
	func_3609(10, var_4026_int, var_4027_int);
}


// @pe
void func_10470(void)
{
	func_151("cot_alexandr@door1", true);
}


void func_234(float var_4581_float)
{
	float var_4583_float;
	@GetGameTime(var_4583_float);
	var_4583_float = var_4581_float;
}


// @pe
void func_10477(void)
{
	func_151("cot_alexandr@door1", false);
}


void func_239(void)
{
	@SetSepia(0.5, 0.886);
}


// @pe
void func_4335(void)
{
}


// @pe
void func_4337(int var_518_int, int var_519_int, object var_520_object, object var_521_object, object var_522_object, object var_523_object)
{
	if(var_519_int == 0) {
		func_746(0, false);
		func_763(0, false, 1);
		int var_566_int; int var_567_int; object var_568_object; object var_569_object; object var_570_object;
		var_566_int = 0;
		var_518_int = var_567_int;
		var_520_object = var_568_object;
		var_521_object = var_569_object;
		var_522_object = var_570_object;
		func_572(var_567_int, var_568_object, var_569_object, var_570_object);
		object var_612_object;
		var_523_object = var_612_object;
		func_255(var_612_object, 0);
		func_820(0, false, 4);
		func_882(0, false, 4);
	}
	int var_725_int;
	var_519_int = var_725_int;
	func_1000(0, var_725_int);
	int var_751_int; int var_752_int;
	var_518_int = var_751_int;
	var_519_int = var_752_int;
	func_2156(0, var_751_int, var_752_int);
}


void func_11503(void)
{
	object var_5751_object;
	func_12286(var_5751_object);
	object var_5750_object;
	var_5751_object = var_5750_object;
	float var_5756_float;
	func_234(var_5756_float);
	var_5750_object->AddMark("b4Spi4kaMapMark", "pt_map_spi4ka", 3, 531086, var_5756_float);
}
EMIT "Stack[-1] = 0";


void func_244(void)
{
	@SetSepia(0, 0);
}


// @pe
void func_10484(void)
{
	func_151("cot_katerina@door1", true);
}


// @pe
void func_249(string var_446_string, int var_447_int)
{
	var_446_string = ("Region" + var_447_int) + "State";
}


// @pe
void func_14586(void)
{
	func_14561();
}


// @pe
void func_10491(void)
{
	func_151("cot_katerina@door1", false);
}


void func_14590(void)
{
	func_7558(7);
}


void func_255(object var_612_object, int var_613_int)
{
	int var_620_int; string var_621_string; string var_623_string; object var_625_object;
	var_612_object->size(var_620_int);
	if(var_613_int == 1) {
		var_621_string = "s_";
	} else if(var_613_int == 2) {
	}
	int var_622_int = 0;
	
	for(;;) {
		if(var_622_int < var_620_int) {
			var_612_object->get(var_623_string, var_622_int);
			@GetSceneByName(var_625_object, var_623_string);
			if(!var_625_object) //@nz
				@Trace(("City manager: can't replace indoor scene \"" + var_623_string) + "\" because it doesn't exist");
			else
				@ReplaceScene(var_625_object, (("n_" + var_623_string) + ".isc"));

		}
		var_625_object = null;
		var_622_int += 1;
	}
	
}


void func_11519(void)
{
	object var_5683_object;
	func_12286(var_5683_object);
	object var_5682_object;
	var_5683_object = var_5682_object;
	float var_5688_float;
	func_234(var_5688_float);
	var_5682_object->AddMark("b9Block", "pt_map_uprava_admin", 3, 531551, var_5688_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10498(void)
{
}


// @pe
void func_14595(bool var_144_bool, int var_145_int, int var_146_int)
{
	if(var_145_int == 6) {
		var_144_bool = false;
		return 0;
	}
	if(var_146_int == 4) {
		if(var_145_int == 15) {
			var_144_bool = false;
			return 0;
		}
		if(var_145_int == 9) {
			var_144_bool = false;
			return 0;
		}
	} else if(var_146_int == 5) {
			if(var_145_int == 15) {
				var_144_bool = false;
				return 0;
			}
	}
Label_14632:
	for(;;) {
		var_144_bool = true;
		return 0;

	}
	
	if(!(var_146_int == 6)) goto Label_14632;
	if(!(var_145_int == 15)) goto Label_14632;
	var_144_bool = false;
}


// @pe
void func_10500(void)
{
}


// @pe
void func_10502(void)
{
	func_151("burah_home@door1", true);
}


// @pe
void func_10509(void)
{
	func_151("burah_home@door1", false);
}


// @pe
void func_1295(bool var_1128_bool, int var_1129_int, int var_1130_int)
{
	var_1128_bool = false;
	if(var_1129_int >= 10) {
		if(var_1130_int < 6)
			var_1128_bool = true;
	}
}


void func_11535(void)
{
	object var_5653_object;
	func_12286(var_5653_object);
	object var_5652_object;
	var_5653_object = var_5652_object;
	float var_5658_float;
	func_234(var_5658_float);
	var_5652_object->AddMark("b2AndreiKabak", "pt_map_andrei", 0, 531558, var_5658_float);
}
EMIT "Stack[-1] = 0";


void func_10516(void)
{
	object var_4854_object;
	func_12286(var_4854_object);
	object var_4853_object;
	var_4854_object = var_4853_object;
	float var_4865_float;
	func_234(var_4865_float);
	var_4853_object->AddMark("b1BigVlad", "pt_map_bigvlad", 3, 520525, var_4865_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6424(object var_245_object)
{
	var_245_object->add("r5_house2_01");
	var_245_object->add("r5_house2_02");
	var_245_object->add("r5_house2_03");
	var_245_object->add("r5_house3_01_i2");
	var_245_object->add("r5_house3_01");
	var_245_object->add("r5_house3_02_i2");
	var_245_object->add("r5_house3_02");
	var_245_object->add("r5_house3_03_i2");
	var_245_object->add("r5_house3_03");
	var_245_object->add("r5_house3_04_i2");
	var_245_object->add("r5_house3_04");
	var_245_object->add("r5_house3_05_i2");
	var_245_object->add("r5_house3_05");
	var_245_object->add("r5_house3_06_i2");
	var_245_object->add("r5_house3_06");
	var_245_object->add("r5_house3_07_i2");
	var_245_object->add("r5_house3_07");
	var_245_object->add("r5_House6_01");
}


// @pe
void func_1305(bool var_1139_bool, int var_1140_int, int var_1141_int)
{
	var_1139_bool = false;
	if(var_1140_int >= 3) {
		bool var_1144_bool = true;
		var_1146_bool = var_1141_int > 22;
		if(var_1146_bool != 1) {
			var_1148_bool = var_1141_int < 5;
			if(var_1148_bool != 1)
				var_1144_bool = false;
		}
		if(var_1144_bool != 0)
			var_1139_bool = true;
	}
}


void func_2333(int var_914_int, int var_915_int, int var_916_int)
{
	int var_918_int;
	if((var_915_int + 1) == 12)
		return 2;
	bool var_923_bool = false;
	bool var_924_bool = true;
	var_926_bool = var_916_int < 7;
	if(var_926_bool != 1) {
		var_928_bool = var_916_int > 21;
		if(var_928_bool != 1)
			var_924_bool = false;
	}
	if(var_924_bool != 0) {
		if(var_915_int != 0)
			var_923_bool = true;
	}
	if(var_923_bool != 0) {
		float var_932_float; int var_933_int;
		var_915_int = var_933_int;
		func_1091(var_932_float, var_933_int);
		if((1 * var_932_float) != 0) {
			int var_935_int; int var_938_int;
			var_914_int = var_935_int;
			var_918_int = var_938_int;
			func_453(var_935_int, "pers_grabitel", "grabitel.xml", var_938_int);
		}
	}
	bool var_939_bool; int var_940_int; int var_941_int;
	var_916_int = var_941_int;
	func_1060(var_939_bool, var_940_int, var_941_int);
	if(var_939_bool != 0) {
		int var_942_int;
		var_914_int = var_942_int;
		func_453(var_942_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_946_int;
		var_914_int = var_946_int;
		func_453(var_946_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_950_int;
		var_914_int = var_950_int;
		func_453(var_950_int, "pers_worker", "worker_attacker.xml", 1);
		int var_954_int;
		var_914_int = var_954_int;
		func_453(var_954_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_958_int;
		var_914_int = var_958_int;
		func_453(var_958_int, "pers_alkash", "alkash.xml", 1);
		int var_962_int;
		var_914_int = var_962_int;
		func_453(var_962_int, "pers_woman", "woman.xml", 2);
	} else {
			bool var_978_bool = false;
			if(var_916_int > 8) {
				if(var_916_int < 21)
					var_978_bool = true;
			}
			if(var_978_bool == 0) goto Label_2474;
			int var_983_int;
			var_914_int = var_983_int;
			func_453(var_983_int, "pers_worker", "worker.xml", 2);
			int var_987_int;
			var_914_int = var_987_int;
			func_453(var_987_int, "pers_worker", "worker2.xml", 2);
			int var_991_int;
			var_914_int = var_991_int;
			func_453(var_991_int, "pers_alkash", "alkash.xml", 1);
			int var_995_int;
			var_914_int = var_995_int;
			func_453(var_995_int, "pers_woman", "woman.xml", 2);
			int var_999_int;
			var_914_int = var_999_int;
			func_453(var_999_int, "pers_unosha", "unosha.xml", 1);
			int var_1003_int;
			var_914_int = var_1003_int;
			func_453(var_1003_int, "pers_unosha", "unosha2.xml", 1);
	}
	for(;;) {
		bool var_966_bool = false;
		bool var_967_bool = false;
		if(var_940_int == 0) {
			if(var_916_int > 12)
				var_967_bool = true;
		}
		if(var_967_bool != 0) {
			if(var_916_int < 22)
				var_966_bool = true;
		}
		if(var_966_bool != 0) {
			int var_974_int;
			var_914_int = var_974_int;
			func_453(var_974_int, "pers_woman", "woman_killme.xml", 1);
		}
		return 2;

	}
	
Label_2474:
	int var_1007_int;
	var_914_int = var_1007_int;
	func_453(var_1007_int, "pers_alkash", "alkash.xml", 1);
	int var_1011_int;
	var_914_int = var_1011_int;
	func_453(var_1011_int, "pers_worker", "worker.xml", 1);
	int var_1015_int;
	var_914_int = var_1015_int;
	func_453(var_1015_int, "pers_worker", "worker2.xml", 1);
	int var_1019_int;
	var_914_int = var_1019_int;
	func_453(var_1019_int, "pers_unosha", "unosha2.xml", 1);
	int var_1023_int;
	var_914_int = var_1023_int;
	func_453(var_1023_int, "pers_dog", "dog.xml", 1);
}


// @pe
void func_11551(void)
{
	func_151("vagon_army@door1", true);
}


// @pe
void func_10532(void)
{
	func_151("termitnik2@door1", true);
}


// @pe
void func_4389(int var_2005_int, int var_2006_int, object var_2007_object, object var_2008_object, object var_2009_object, object var_2010_object)
{
	if(var_2006_int == 0) {
		func_746(0, true);
		func_763(0, true, 1);
		int var_2019_int; object var_2020_object; object var_2021_object; object var_2022_object;
		var_2005_int = var_2019_int;
		var_2007_object = var_2020_object;
		var_2008_object = var_2021_object;
		var_2009_object = var_2022_object;
		func_591(0, var_2019_int, var_2020_object, var_2021_object, var_2022_object);
		object var_2108_object;
		var_2010_object = var_2108_object;
		func_255(var_2108_object, 1);
		func_820(0, true, 4);
		func_882(0, false, 4);
	}
	func_729(0, false);
	int var_2119_int; int var_2120_int;
	var_2005_int = var_2119_int;
	var_2006_int = var_2120_int;
	func_3087(0, var_2119_int, var_2120_int);
}


void func_293(int var_108_int)
{
	int var_111_int; int var_112_int;
	var_111_int = 0;
	
	while(0 < 16) {
		bool var_115_bool; int var_116_int;
		var_112_int = var_116_int;
		func_380(var_115_bool, var_116_int);
		if(var_115_bool != 0)
			var_111_int += 1;
		var_112_int += 1;
	}
	
	var_111_int = var_108_int;
}


// @pe
void func_11558(void)
{
	func_151("house1_kabak@door1", true);
}


void func_14634(int var_4589_int, int var_4590_int)
{
	object var_4593_object;
	@Trace((("Updating game " + var_4589_int) + " ") + var_4590_int);
	bool var_4599_bool = false;
	if(var_4589_int == 8) {
		if(var_4590_int == 0)
			var_4599_bool = true;
	}
	if(var_4599_bool != 0) {
		@GetSceneByName(var_4593_object, "sobor");
		@Trigger(var_4593_object, "aglaja");
		var_4593_object = null;
	}
	bool var_4606_bool = false;
	if(var_4589_int == 9) {
		if(var_4590_int == 0)
			var_4606_bool = true;
	}
	if(var_4606_bool != 0) {
		func_7635(0);
		func_7635(1);
		func_7635(2);
		func_7635(3);
	}
}


// @pe
void func_10539(void)
{
	func_151("cot_viktor@door1", false);
}


// @pe
void func_1322(bool var_2208_bool, int var_2209_int)
{
	var_2208_bool = var_2209_int >= 8;
}


// @pe
void func_11565(void)
{
	func_151("mnogogrannik_han@door1", true);
}


void func_1326(int var_1806_int, int var_1807_int, int var_1808_int)
{
	int var_1810_int;
	if((var_1807_int + 1) == 12)
		return 2;
	bool var_1815_bool = false;
	bool var_1816_bool = true;
	var_1818_bool = var_1808_int < 7;
	if(var_1818_bool != 1) {
		var_1820_bool = var_1808_int > 21;
		if(var_1820_bool != 1)
			var_1816_bool = false;
	}
	if(var_1816_bool != 0) {
		if(var_1807_int != 0)
			var_1815_bool = true;
	}
	if(var_1815_bool != 0) {
		float var_1823_float; int var_1824_int;
		var_1807_int = var_1824_int;
		func_1091(var_1823_float, var_1824_int);
		var_1823_float = var_1810_int;
		if(var_1810_int != 0) {
			int var_1826_int; int var_1829_int;
			var_1806_int = var_1826_int;
			var_1810_int = var_1829_int;
			func_453(var_1826_int, "pers_grabitel", "grabitel.xml", var_1829_int);
		}
	}
	bool var_1830_bool; int var_1831_int; int var_1832_int;
	var_1808_int = var_1832_int;
	func_1060(var_1830_bool, var_1831_int, var_1832_int);
	if(var_1830_bool != 0) {
		int var_1833_int;
		var_1806_int = var_1833_int;
		func_453(var_1833_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1837_int;
		var_1806_int = var_1837_int;
		func_453(var_1837_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1841_int;
		var_1806_int = var_1841_int;
		func_453(var_1841_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1845_int;
		var_1806_int = var_1845_int;
		func_453(var_1845_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1849_int;
		var_1806_int = var_1849_int;
		func_453(var_1849_int, "pers_wasted_girl", "wasted_girl.xml", 2);
		int var_1853_int;
		var_1806_int = var_1853_int;
		func_453(var_1853_int, "pers_wasted_male", "wasted_male.xml", 3);
		int var_1857_int;
		var_1806_int = var_1857_int;
		func_453(var_1857_int, "pers_woman", "woman.xml", 3);
		int var_1861_int;
		var_1806_int = var_1861_int;
		func_453(var_1861_int, "pers_boy", "boy.xml", 1);
		int var_1865_int;
		var_1806_int = var_1865_int;
		func_453(var_1865_int, "pers_girl", "girl.xml", 1);
		int var_1869_int;
		var_1806_int = var_1869_int;
		func_453(var_1869_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1892_bool = false;
			if(var_1808_int > 8) {
				if(var_1808_int < 21)
					var_1892_bool = true;
			}
			if(var_1892_bool == 0) goto Label_1508;
			int var_1897_int;
			var_1806_int = var_1897_int;
			func_453(var_1897_int, "pers_wasted_girl", "wasted_girl.xml", 2);
			int var_1901_int;
			var_1806_int = var_1901_int;
			func_453(var_1901_int, "pers_wasted_male", "wasted_male.xml", 3);
			int var_1905_int;
			var_1806_int = var_1905_int;
			func_453(var_1905_int, "pers_woman", "woman.xml", 3);
			int var_1909_int;
			var_1806_int = var_1909_int;
			func_453(var_1909_int, "pers_unosha", "unosha.xml", 2);
			int var_1913_int;
			var_1806_int = var_1913_int;
			func_453(var_1913_int, "pers_unosha", "unosha2.xml", 2);
			int var_1917_int;
			var_1806_int = var_1917_int;
			func_453(var_1917_int, "pers_boy", "boy.xml", 2);
			int var_1921_int;
			var_1806_int = var_1921_int;
			func_453(var_1921_int, "pers_girl", "girl.xml", 1);
			int var_1925_int;
			var_1806_int = var_1925_int;
			func_453(var_1925_int, "pers_girl", "girl2.xml", 1);
	}
	for(;;) {
		bool var_1873_bool = false;
		bool var_1874_bool = false;
		if(var_1831_int == 0) {
			if(var_1808_int > 12)
				var_1874_bool = true;
		}
		if(var_1874_bool != 0) {
			if(var_1808_int < 22)
				var_1873_bool = true;
		}
		if(var_1873_bool != 0) {
			int var_1881_int;
			var_1806_int = var_1881_int;
			func_453(var_1881_int, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
		}
		bool var_1885_bool; int var_1886_int; int var_1887_int;
		var_1807_int = var_1886_int;
		var_1808_int = var_1887_int;
		func_1295(var_1885_bool, var_1886_int, var_1887_int);
		if(var_1885_bool != 0) {
			int var_1888_int;
			var_1806_int = var_1888_int;
			func_453(var_1888_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1508:
	int var_1929_int;
	var_1806_int = var_1929_int;
	func_453(var_1929_int, "pers_wasted_girl", "wasted_girl.xml", 1);
	int var_1933_int;
	var_1806_int = var_1933_int;
	func_453(var_1933_int, "pers_wasted_male", "wasted_male.xml", 2);
	int var_1937_int;
	var_1806_int = var_1937_int;
	func_453(var_1937_int, "pers_unosha", "unosha.xml", 1);
	int var_1941_int;
	var_1806_int = var_1941_int;
	func_453(var_1941_int, "pers_unosha", "unosha2.xml", 1);
}


// @pe
void func_10546(void)
{
	func_151("cot_anna@door1", true);
}


// @pe
void func_11572(void)
{
	@SetVariable("b8DankoLetter2", 1);
}


void func_311(int var_121_int)
{
	int var_126_int; int var_128_int;
	@irand(var_126_int, 16);
	int var_127_int = 0;
	
	while(var_127_int < 16) {
		var_128_int = (var_127_int + var_126_int) % 16;
		bool var_134_bool = false;
		bool var_135_bool; int var_136_int;
		var_128_int = var_136_int;
		func_350(var_135_bool, var_136_int);
		if(var_135_bool != 0) {
			bool var_144_bool; int var_145_int; int var_146_int;
			var_128_int = var_145_int;
			var_121_int = var_146_int;
			func_14595(var_144_bool, var_145_int, var_146_int);
			if(var_144_bool != 0)
				var_134_bool = true;
		}
		if(var_134_bool != 0) {
			int var_163_int;
			func_392(var_163_int);
			@Trace("Diseased Region: " + var_163_int);
		}
		var_127_int += 1;
	}
	
}


// @pe
void func_10553(void)
{
	func_151("cot_anna@door1", false);
}


// @pe
void func_5433(int var_1341_int, int var_1342_int, object var_1343_object, object var_1344_object, object var_1345_object, object var_1346_object)
{
	if(var_1342_int == 0) {
		func_746(5, false);
		func_763(5, false, 1);
		int var_1354_int; int var_1355_int; object var_1356_object; object var_1357_object; object var_1358_object;
		var_1354_int = 5;
		var_1341_int = var_1355_int;
		var_1343_object = var_1356_object;
		var_1344_object = var_1357_object;
		var_1345_object = var_1358_object;
		func_572(var_1355_int, var_1356_object, var_1357_object, var_1358_object);
		object var_1359_object;
		var_1346_object = var_1359_object;
		func_255(var_1359_object, 0);
		func_820(5, false, 4);
		func_882(5, false, 4);
	}
	int var_1368_int;
	var_1342_int = var_1368_int;
	func_933(5, var_1368_int);
	int var_1370_int; int var_1371_int;
	var_1341_int = var_1370_int;
	var_1342_int = var_1371_int;
	func_1847(5, var_1370_int, var_1371_int);
}


// @pe
void func_11578(void)
{
	@SetVariable("b9KlaraLetter", 1);
}


// @pe
void func_10560(void)
{
	func_151("house_vlad@door2", true);
}


// @pe
void func_11584(void)
{
	int var_5424_int;
	func_106(var_5424_int, "map_chertez_state");
	if(var_5424_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_10567(void)
{
	func_151("cot_maria@door1", true);
}


void func_8520(int var_4267_int, int var_4268_int)
{
	object var_4276_object; object var_4277_object; string var_4278_string; int var_4279_int; int var_4280_int; int var_4281_int;
	bool var_4282_bool = false;
	if(var_4268_int == 5) {
		if(var_4267_int >= 7)
			var_4282_bool = true;
	}
	if(var_4282_bool != 0) {
		int var_4287_int;
		func_12303(var_4287_int);
		if(var_4287_int != 2)
			func_7731();
	} else {
		bool var_4564_bool = false;
		if(var_4268_int == 22) {
			if(var_4267_int >= 7)
				var_4564_bool = true;
		}
		if(var_4564_bool == 0) goto Label_8560;
		int var_4569_int;
		func_12303(var_4569_int);
		if(!(var_4569_int != 2)) goto Label_8560;
		func_7794();
	}
Label_8560:
	bool var_4336_bool = false;
	if(var_4268_int == 7) {
		if(var_4267_int != 1)
			var_4336_bool = true;
	}
	if(var_4336_bool != 0)
		@SendWorldWndMessage(100);
	if(var_4268_int == 0) {
		func_8698();
		func_8773();
		if(var_4267_int == 6) {
			@GetMainOutdoorScene(var_4276_object);
			@AddScriptedActor(var_4277_object, "shed_corpse", "splash_object_wo_pf.bin", var_4276_object, [0.0, 0.0, 0.0]);
			var_4277_object = null;
			var_4276_object = null;
		}
		if(var_4267_int == 9)
			func_8822();
		if(var_4267_int != 1) {
			int var_4459_int;
			func_12303(var_4459_int);
			if(var_4459_int == 1) {
				@GetVariable((("b" + (var_4267_int - 1)) + "q01"), var_4279_int);
				var_4278_string = "volonteers_burah";
			} else {
					int var_4549_int;
					func_12303(var_4549_int);
					if(!(var_4549_int == 0)) goto Label_8635;
					@GetVariable((("d" + (var_4267_int - 1)) + "q01"), var_4279_int);
					var_4278_string = "volonteers_danko";
			}
			for(;;) {
				@Trace(var_4278_string);
				if(var_4279_int == 1000) {
					bool var_4470_bool; string var_4471_string;
					var_4278_string = var_4471_string;
					func_201(var_4470_bool, var_4471_string, "rescue_locked", "");
				}
				bool var_4477_bool; string var_4478_string;
				var_4278_string = var_4478_string;
				func_201(var_4477_bool, var_4478_string, "update", "");
		}
	}
		bool var_4481_bool = false;
		if(var_4267_int == 6) {
			if(var_4268_int == 0)
				var_4481_bool = true;
		}
		if(var_4481_bool != 0)
			func_7851();
		bool var_4488_bool = false;
		if(var_4267_int == 7) {
			if(var_4268_int == 0)
				var_4488_bool = true;
		}
		if(var_4488_bool != 0) {
			var_4493_object = GlobalVars[14];
			var_4493_object->size(var_4280_int);

			for(;;) {
				if(!(0 < var_4280_int)) goto Label_8697;
				int var_4495_int;
				var_4281_int = var_4495_int;
				func_7558(var_4495_int);
				var_4281_int += 1;
			}
		}
	Label_8697:

	}
	
Label_8635:
	@GetVariable((("k" + (var_4267_int - 1)) + "q01"), var_4279_int);
	var_4278_string = "volonteers_klara";
	
}


// @pe
void func_10574(void)
{
	func_151("warehouse_rubin@door1", true);
}


void func_9551(int var_3169_int, int var_3170_int, int var_3171_int)
{
	var_3180_object = GlobalVars[8];
	object var_3176_object;
	var_3180_object->get(var_3176_object, var_3169_int);
	var_3181_object = GlobalVars[9];
	object var_3177_object;
	var_3181_object->get(var_3177_object, var_3169_int);
	var_3182_object = GlobalVars[10];
	object var_3178_object;
	var_3182_object->get(var_3178_object, var_3169_int);
	var_3183_object = GlobalVars[13];
	object var_3179_object;
	var_3183_object->get(var_3179_object, var_3169_int);
	if(var_3169_int == 0) {
		int var_3186_int; int var_3187_int; object var_3188_object; object var_3189_object; object var_3190_object; object var_3191_object;
		var_3170_int = var_3186_int;
		var_3171_int = var_3187_int;
		var_3176_object = var_3188_object;
		var_3177_object = var_3189_object;
		var_3178_object = var_3190_object;
		var_3179_object = var_3191_object;
		func_4441(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object);
	} else if(var_3169_int == 1) {
			int var_3400_int; int var_3401_int; object var_3402_object; object var_3403_object; object var_3404_object; object var_3405_object;
			var_3170_int = var_3400_int;
			var_3171_int = var_3401_int;
			var_3176_object = var_3402_object;
			var_3177_object = var_3403_object;
			var_3178_object = var_3404_object;
			var_3179_object = var_3405_object;
			func_4638(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_3169_int == 2) {
		int var_3536_int; int var_3537_int; object var_3538_object; object var_3539_object; object var_3540_object; object var_3541_object;
		var_3170_int = var_3536_int;
		var_3171_int = var_3537_int;
		var_3176_object = var_3538_object;
		var_3177_object = var_3539_object;
		var_3178_object = var_3540_object;
		var_3179_object = var_3541_object;
		func_4844(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object);
	} else if(var_3169_int == 3) {
		int var_3679_int; int var_3680_int; object var_3681_object; object var_3682_object; object var_3683_object; object var_3684_object;
		var_3170_int = var_3679_int;
		var_3171_int = var_3680_int;
		var_3176_object = var_3681_object;
		var_3177_object = var_3682_object;
		var_3178_object = var_3683_object;
		var_3179_object = var_3684_object;
		func_5074(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object);
	} else if(var_3169_int == 4) {
		int var_3712_int; int var_3713_int; object var_3714_object; object var_3715_object; object var_3716_object; object var_3717_object;
		var_3170_int = var_3712_int;
		var_3171_int = var_3713_int;
		var_3176_object = var_3714_object;
		var_3177_object = var_3715_object;
		var_3178_object = var_3716_object;
		var_3179_object = var_3717_object;
		func_5292(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object);
	} else if(var_3169_int == 5) {
		int var_3745_int; int var_3746_int; object var_3747_object; object var_3748_object; object var_3749_object; object var_3750_object;
		var_3170_int = var_3745_int;
		var_3171_int = var_3746_int;
		var_3176_object = var_3747_object;
		var_3177_object = var_3748_object;
		var_3178_object = var_3749_object;
		var_3179_object = var_3750_object;
		func_5537(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object);
	} else if(var_3169_int == 6) {
		int var_3778_int; int var_3779_int; object var_3780_object; object var_3781_object; object var_3782_object; object var_3783_object;
		var_3170_int = var_3778_int;
		var_3171_int = var_3779_int;
		var_3176_object = var_3780_object;
		var_3177_object = var_3781_object;
		var_3178_object = var_3782_object;
		var_3179_object = var_3783_object;
		func_5605();
	} else if(var_3169_int == 7) {
		int var_3788_int; int var_3789_int; object var_3790_object; object var_3791_object; object var_3792_object; object var_3793_object;
		var_3170_int = var_3788_int;
		var_3171_int = var_3789_int;
		var_3176_object = var_3790_object;
		var_3177_object = var_3791_object;
		var_3178_object = var_3792_object;
		var_3179_object = var_3793_object;
		func_5760(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object);
	} else if(var_3169_int == 8) {
		int var_3931_int; int var_3932_int; object var_3933_object; object var_3934_object; object var_3935_object; object var_3936_object;
		var_3170_int = var_3931_int;
		var_3171_int = var_3932_int;
		var_3176_object = var_3933_object;
		var_3177_object = var_3934_object;
		var_3178_object = var_3935_object;
		var_3179_object = var_3936_object;
		func_5960(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object);
	} else if(var_3169_int == 9) {
		int var_3964_int; int var_3965_int; object var_3966_object; object var_3967_object; object var_3968_object; object var_3969_object;
		var_3170_int = var_3964_int;
		var_3171_int = var_3965_int;
		var_3176_object = var_3966_object;
		var_3177_object = var_3967_object;
		var_3178_object = var_3968_object;
		var_3179_object = var_3969_object;
		func_6163(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object);
	} else if(var_3169_int == 10) {
		int var_3997_int; int var_3998_int; object var_3999_object; object var_4000_object; object var_4001_object; object var_4002_object;
		var_3170_int = var_3997_int;
		var_3171_int = var_3998_int;
		var_3176_object = var_3999_object;
		var_3177_object = var_4000_object;
		var_3178_object = var_4001_object;
		var_3179_object = var_4002_object;
		func_6372(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object);
	} else if(var_3169_int == 11) {
		int var_4030_int; int var_4031_int; object var_4032_object; object var_4033_object; object var_4034_object; object var_4035_object;
		var_3170_int = var_4030_int;
		var_3171_int = var_4031_int;
		var_3176_object = var_4032_object;
		var_3177_object = var_4033_object;
		var_3178_object = var_4034_object;
		var_3179_object = var_4035_object;
		func_6584(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object);
	} else if(var_3169_int == 12) {
		int var_4063_int; int var_4064_int; object var_4065_object; object var_4066_object; object var_4067_object; object var_4068_object;
		var_3170_int = var_4063_int;
		var_3171_int = var_4064_int;
		var_3176_object = var_4065_object;
		var_3177_object = var_4066_object;
		var_3178_object = var_4067_object;
		var_3179_object = var_4068_object;
		func_6781(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object);
	} else if(var_3169_int == 13) {
		int var_4096_int; int var_4097_int; object var_4098_object; object var_4099_object; object var_4100_object; object var_4101_object;
		var_3170_int = var_4096_int;
		var_3171_int = var_4097_int;
		var_3176_object = var_4098_object;
		var_3177_object = var_4099_object;
		var_3178_object = var_4100_object;
		var_3179_object = var_4101_object;
		func_6984(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object);
	} else if(var_3169_int == 14) {
		int var_4129_int; int var_4130_int; object var_4131_object; object var_4132_object; object var_4133_object; object var_4134_object;
		var_3170_int = var_4129_int;
		var_3171_int = var_4130_int;
		var_3176_object = var_4131_object;
		var_3177_object = var_4132_object;
		var_3178_object = var_4133_object;
		var_3179_object = var_4134_object;
		func_7184(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object);
	} else if(var_3169_int == 15) {
		int var_4272_int; int var_4273_int; object var_4274_object; object var_4275_object; object var_4276_object; object var_4277_object;
		var_3170_int = var_4272_int;
		var_3171_int = var_4273_int;
		var_3176_object = var_4274_object;
		var_3177_object = var_4275_object;
		var_3178_object = var_4276_object;
		var_3179_object = var_4277_object;
		func_7366(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_6480(int var_1670_int, int var_1671_int, object var_1672_object, object var_1673_object, object var_1674_object, object var_1675_object)
{
	if(var_1671_int == 0) {
		func_746(11, false);
		func_763(11, false, 1);
		int var_1683_int; int var_1684_int; object var_1685_object; object var_1686_object; object var_1687_object;
		var_1683_int = 11;
		var_1670_int = var_1684_int;
		var_1672_object = var_1685_object;
		var_1673_object = var_1686_object;
		var_1674_object = var_1687_object;
		func_572(var_1684_int, var_1685_object, var_1686_object, var_1687_object);
		object var_1688_object;
		var_1675_object = var_1688_object;
		func_255(var_1688_object, 0);
		func_820(11, false, 5);
		func_882(11, false, 5);
	}
	int var_1697_int;
	var_1671_int = var_1697_int;
	func_933(11, var_1697_int);
	int var_1699_int; int var_1700_int;
	var_1670_int = var_1699_int;
	var_1671_int = var_1700_int;
	func_1574(11, var_1699_int, var_1700_int);
}


// @pe
void func_11601(void)
{
	int var_5446_int;
	func_106(var_5446_int, "map_chertez_state");
	if(var_5446_int <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_10581(void)
{
	object var_6177_object;
	func_12286(var_6177_object);
	object var_6175_object;
	var_6177_object = var_6175_object;
	object var_6176_object;
	var_6175_object->FindMark(var_6176_object, "b1BigVlad");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1BigVlad11Hours");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1KapellaGotoLaska");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1KapellaGotoNotkin");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1MladVladGotoGrif");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q01BakWillBeAt18");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q01BigVladGotoKapella");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q01BigVladGotoMladVlad");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q01GrifGotoDanko");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q01NotkinGotoGrif");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q02GrifGotoLaska");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q02LaskaGotoGorbin");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q02LaskaSelf");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q03GrifGotoDoberman");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q03NotkinGotoDoberman");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1GrifGotoNotkin");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q03NotkinGotoDobermanSelf");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1LaskaGotoMishka");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q05Spi4kaGotoLaska");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q05Spi4kaGotoMishka");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1q05PatrolGroup");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	var_6175_object->FindMark(var_6176_object, "b1BurahFatherHome");
	if(var_6176_object != 0)
		var_6176_object->Remove();
	bool var_6222_bool;
	func_12261(var_6222_bool, 200);
	bool var_6224_bool;
	func_12261(var_6224_bool, 205);
	bool var_6226_bool;
	func_12261(var_6226_bool, 209);
	bool var_6228_bool;
	func_12261(var_6228_bool, 242);
	bool var_6230_bool;
	func_12261(var_6230_bool, 582);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4441(int var_3186_int, int var_3187_int, object var_3188_object, object var_3189_object, object var_3190_object, object var_3191_object)
{
	if(var_3187_int == 0) {
		func_746(0, false);
		func_763(0, false, 1);
		int var_3200_int; object var_3201_object; object var_3202_object; object var_3203_object;
		var_3186_int = var_3200_int;
		var_3188_object = var_3201_object;
		var_3189_object = var_3202_object;
		var_3190_object = var_3203_object;
		func_670(0, var_3200_int, var_3201_object, var_3202_object, var_3203_object);
		object var_3238_object;
		var_3191_object = var_3238_object;
		func_255(var_3238_object, 2);
		func_820(0, false, 4);
		func_882(0, true, 4);
	}
	func_729(0, false);
	int var_3249_int; int var_3250_int;
	var_3186_int = var_3249_int;
	var_3187_int = var_3250_int;
	func_3985(0, var_3249_int, var_3250_int);
}


void func_3421(int var_4157_int, int var_4158_int, int var_4159_int)
{
	int var_4164_int; int var_4165_int; int var_4166_int; int var_4167_int;
	bool var_4168_bool = false;
	if(var_4159_int > 8) {
		if(var_4159_int < 21)
			var_4168_bool = true;
	}
	if(var_4168_bool != 0) {
		int var_4173_int;
		var_4157_int = var_4173_int;
		func_453(var_4173_int, "pers_rat", "rat.xml", 3);
		int var_4177_int;
		var_4157_int = var_4177_int;
		func_453(var_4177_int, "pers_alkash", "alkash.xml", 2);
		int var_4181_int;
		var_4157_int = var_4181_int;
		func_453(var_4181_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_4186_float; int var_4187_int;
		func_1115(var_4186_float, var_4187_int);
		if((2 * var_4186_float) != 0) {
			int var_4189_int; int var_4192_int;
			var_4157_int = var_4189_int;
			var_4164_int = var_4192_int;
			func_453(var_4189_int, "pers_grabitel", "grabitel.xml", var_4192_int);
		}
		if((var_4187_int + 1) >= 2) {
			int var_4197_int;
			var_4157_int = var_4197_int;
			func_453(var_4197_int, "pers_patrool", "patrol.xml", 2);
			bool var_4201_bool; int var_4202_int;
			var_4158_int = var_4202_int;
			func_1322(var_4201_bool, var_4202_int);
			if(var_4201_bool != 0) {
				int var_4203_int;
				var_4157_int = var_4203_int;
				func_453(var_4203_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_4208_float; int var_4209_int;
		func_1205(var_4208_float, var_4209_int);
		if((1 * var_4208_float) != 0) {
			int var_4211_int; int var_4214_int;
			var_4157_int = var_4211_int;
			var_4165_int = var_4214_int;
			func_453(var_4211_int, "pers_bomber", "bomber.xml", var_4214_int);
		}
	} else {
		int var_4228_int;
		var_4157_int = var_4228_int;
		func_453(var_4228_int, "pers_rat", "rat.xml", 5);
		int var_4232_int;
		var_4157_int = var_4232_int;
		func_453(var_4232_int, "pers_alkash", "alkash.xml", 1);
		if((var_4209_int + 1) >= 2) {
			int var_4240_int;
			var_4157_int = var_4240_int;
			func_453(var_4240_int, "pers_patrool", "patrol.xml", 1);
			bool var_4244_bool; int var_4245_int;
			var_4158_int = var_4245_int;
			func_1322(var_4244_bool, var_4245_int);
			if(var_4244_bool != 0) {
				int var_4246_int;
				var_4157_int = var_4246_int;
				func_453(var_4246_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		int var_4250_int;
		var_4157_int = var_4250_int;
		func_453(var_4250_int, "pers_rat", "rat.xml", 2);
		float var_4255_float; int var_4256_int;
		var_4158_int = var_4256_int;
		func_1115(var_4255_float, var_4256_int);
		if((3 * var_4255_float) != 0) {
			int var_4258_int; int var_4261_int;
			var_4157_int = var_4258_int;
			var_4166_int = var_4261_int;
			func_453(var_4258_int, "pers_grabitel", "grabitel.xml", var_4261_int);
		}
		float var_4263_float; int var_4264_int;
		var_4158_int = var_4264_int;
		func_1205(var_4263_float, var_4264_int);
		if((1 * var_4263_float) == 0) goto Label_3583;
		int var_4266_int; int var_4269_int;
		var_4157_int = var_4266_int;
		var_4167_int = var_4269_int;
		func_453(var_4266_int, "pers_bomber", "bomber.xml", var_4269_int);
	}
Label_3583:
	bool var_4215_bool; int var_4216_int; int var_4217_int;
	var_4158_int = var_4216_int;
	var_4159_int = var_4217_int;
	func_1295(var_4215_bool, var_4216_int, var_4217_int);
	if(var_4215_bool != 0) {
		int var_4218_int;
		var_4157_int = var_4218_int;
		func_453(var_4218_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_4222_bool; int var_4223_int;
	var_4158_int = var_4223_int;
	func_1322(var_4222_bool, var_4223_int);
	if(var_4222_bool != 0) {
		int var_4224_int;
		var_4157_int = var_4224_int;
		func_453(var_4224_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


void func_350(bool var_492_bool, int var_493_int)
{
	int var_497_int;
	var_493_int = var_497_int;
	string var_496_string;
	func_249(var_496_string, var_497_int);
	int var_495_int;
	@GetVariable(var_496_string, var_495_int);
	var_492_bool = (var_495_int & 3) == 0;
}


void func_14686(int var_23_int)
{
	int var_31_int; int var_32_int; int var_34_int; int var_35_int;
	@Trace("Disease update");
	int var_30_int = 0;
	if(var_23_int == 0) {
		var_30_int = 0;
	} else if(var_23_int == 1) {
				var_30_int = 0;
	}

	for(;;) {
		if((var_23_int + 1) != 12) {
			@Trace("Diseased regions : " + var_30_int);

			for(;;) {
				if(0 < 16) {
					bool var_47_bool; int var_48_int;
					var_31_int = var_48_int;
					func_380(var_47_bool, var_48_int);
					if(var_47_bool != 0) {
						int var_59_int;
						var_31_int = var_59_int;
						func_422(var_59_int);
					} else {
					bool var_72_bool; int var_73_int;
					var_31_int = var_73_int;
					func_410(var_72_bool, var_73_int);
					if(var_72_bool != 0) {
						int var_81_int;
						var_31_int = var_81_int;
						func_362(var_81_int);
				}
					if(var_23_int == 2) {
						@Trace("Special diseased region: 6");
						func_392(5);
					}
					int var_108_int;
					func_293(var_108_int);
					var_108_int = var_32_int;
					if(var_32_int < var_30_int) {
						var_34_int = 0;

						for(;;) {
							if(!(var_34_int < (var_30_int - var_32_int))) goto Label_14813;
							func_311(var_23_int + 1);
							var_34_int += 1;
						}
					}
				Label_14813:
				} else {
					var_31_int += 1;
				}
			Label_14839:
				return 12;
		}

			for(;;) {
				if(!(0 < 16)) goto Label_14839;
				bool var_170_bool = true;
				bool var_171_bool; int var_172_int;
				var_35_int = var_172_int;
				func_380(var_171_bool, var_172_int);
				if(var_171_bool != 1) {
					bool var_173_bool; int var_174_int;
					var_35_int = var_174_int;
					func_410(var_173_bool, var_174_int);
					if(var_173_bool != 1)
						var_170_bool = false;
				}
				if(var_170_bool != 0) {
					int var_175_int;
					var_35_int = var_175_int;
					func_362(var_175_int);
				}
				var_35_int += 1;
			}

			}
		}

	}
	
	if(var_23_int == 2) {
		var_30_int = 1;
	} else if(var_23_int == 3) {
		var_30_int = 2;
	} else if(var_23_int == 4) {
		var_30_int = 3;
	} else if(var_23_int == 5) {
		var_30_int = 4;
	} else if(var_23_int == 6) {
		var_30_int = 5;
	} else if(var_23_int == 7) {
		var_30_int = 5;
	} else if(var_23_int == 8) {
		var_30_int = 6;
	} else if(var_23_int == 9) {
		var_30_int = 6;
	} else if(var_23_int == 10) {
		var_30_int = 7;
	} else if(var_23_int == 11) {
		var_30_int = 8;
	}
}


// @pe
void func_11618(void)
{
	int var_5460_int;
	func_106(var_5460_int, "map_chertez_state");
	if(var_5460_int <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_362(int var_81_int)
{
	int var_87_int;
	var_81_int = var_87_int;
	string var_86_string;
	func_249(var_86_string, var_87_int);
	int var_84_int;
	@GetVariable(var_86_string, var_84_int);
	string var_91_string; int var_92_int;
	var_81_int = var_92_int;
	func_249(var_91_string, var_92_int);
	@SetVariable(var_91_string, ((var_84_int & 252) | 0));
}


// @pe
void func_5485(int var_2619_int, int var_2620_int, object var_2621_object, object var_2622_object, object var_2623_object, object var_2624_object)
{
	if(var_2620_int == 0) {
		func_746(5, true);
		func_763(5, true, 1);
		int var_2633_int; object var_2634_object; object var_2635_object; object var_2636_object;
		var_2619_int = var_2633_int;
		var_2621_object = var_2634_object;
		var_2622_object = var_2635_object;
		var_2623_object = var_2636_object;
		func_591(5, var_2633_int, var_2634_object, var_2635_object, var_2636_object);
		object var_2637_object;
		var_2624_object = var_2637_object;
		func_255(var_2637_object, 1);
		func_820(5, true, 4);
		func_882(5, false, 4);
	}
	func_729(5, false);
	int var_2648_int; int var_2649_int;
	var_2619_int = var_2648_int;
	var_2620_int = var_2649_int;
	func_2894(5, var_2648_int, var_2649_int);
}


// @pe
void func_11635(void)
{
	int var_5536_int;
	func_106(var_5536_int, "map_chertez_state");
	if(var_5536_int <= 5) {
		@SetVariable("map_chertez_state", 5);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_380(bool var_1979_bool, int var_1980_int)
{
	int var_1984_int;
	var_1980_int = var_1984_int;
	string var_1983_string;
	func_249(var_1983_string, var_1984_int);
	int var_1982_int;
	@GetVariable(var_1983_string, var_1982_int);
	var_1979_bool = (var_1982_int & 3) == 1;
}


// @pe
void func_6532(int var_2900_int, int var_2901_int, object var_2902_object, object var_2903_object, object var_2904_object, object var_2905_object)
{
	if(var_2901_int == 0) {
		func_746(11, false);
		func_763(11, true, 1);
		int var_2914_int; object var_2915_object; object var_2916_object; object var_2917_object;
		var_2900_int = var_2914_int;
		var_2902_object = var_2915_object;
		var_2903_object = var_2916_object;
		var_2904_object = var_2917_object;
		func_591(11, var_2914_int, var_2915_object, var_2916_object, var_2917_object);
		object var_2918_object;
		var_2905_object = var_2918_object;
		func_255(var_2918_object, 1);
		func_820(11, true, 5);
		func_882(11, false, 5);
	}
	func_729(11, false);
	int var_2929_int; int var_2930_int;
	var_2900_int = var_2929_int;
	var_2901_int = var_2930_int;
	func_2714(11, var_2929_int, var_2930_int);
}


// @pe
void func_11652(void)
{
	int var_5474_int;
	func_106(var_5474_int, "map_chertez_state");
	if(var_5474_int <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_7558(int var_4527_int)
{
	object var_4543_object;
	var_4544_object = GlobalVars[14];
	int var_4536_int;
	var_4544_object->size(var_4536_int);
	bool var_4545_bool = true;
	var_4546_bool = var_4527_int >= var_4536_int;
	if(var_4546_bool != 1) {
		var_4548_bool = var_4527_int == -1;
		if(var_4548_bool != 1)
			var_4545_bool = false;
	}
	if(var_4545_bool != 0) {
		@Trace("Wrong bonfire index " + var_4527_int);
		return 16;
	}
	var_4551_object = GlobalVars[14];
	object var_4537_object;
	var_4551_object->get(var_4537_object, var_4527_int);
	object var_4538_object;
	@FindActor(var_4538_object, ("bonfire_light" + (var_4527_int + 1)));
	if(!var_4538_object) //@nz
		@Trace(("Bofire  light " + (var_4527_int + 1)) + " not found");
	else
		var_4538_object->Switch(true);
	object var_4539_object;
	@GetMainOutdoorScene(var_4539_object);
	cvector var_4540_cvector;
	cvector var_4541_cvector;
	bool var_4542_bool;
	var_4539_object->GetLocator(("pt_bonfire" + (var_4527_int + 1)), var_4542_bool, var_4540_cvector, var_4541_cvector);
	if(!var_4542_bool) { //@nz
		@Trace("Locator for bonfire doesn't exist");
		return 16;
	}
	if(!var_4537_object) { //@nz
		@AddActorByType(var_4543_object, "scripted", var_4539_object, var_4540_cvector, var_4541_cvector, "bonfire_big.xml");
		var_4572_object = GlobalVars[14];
		var_4572_object->set(var_4527_int, var_4543_object);
		var_4543_object = null;
	}
	@Trace(("Setting bonfire " + (var_4527_int + 1)) + "... ok");
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


void func_392(int var_24_int)
{
	int var_30_int;
	var_24_int = var_30_int;
	string var_29_string;
	func_249(var_29_string, var_30_int);
	int var_27_int;
	@GetVariable(var_29_string, var_27_int);
	string var_37_string; int var_38_int;
	var_24_int = var_38_int;
	func_249(var_37_string, var_38_int);
	@SetVariable(var_37_string, ((var_27_int & 252) | 1));
}


// @pe
void func_4493(object var_63_object)
{
	var_63_object->add("dt_house3_05_i2");
	var_63_object->add("dt_house3_05");
	var_63_object->add("dt_house3_06_i2");
	var_63_object->add("dt_house_1_10");
	var_63_object->add("house5_10");
	var_63_object->add("house5_07");
	var_63_object->add("dt_house_1_03");
	var_63_object->add("dt_house1_union2_04l");
	var_63_object->add("dt_house1_union2_04r");
	var_63_object->add("house5_22");
	var_63_object->add("house5_08");
	var_63_object->add("dt_house1_union2_02l");
	var_63_object->add("dt_house1_union2_02r");
}


// @pe
void func_11669(void)
{
	func_151("termitnik@door1", true);
}


void func_410(bool var_72_bool, int var_73_int)
{
	int var_77_int;
	var_73_int = var_77_int;
	string var_76_string;
	func_249(var_76_string, var_77_int);
	int var_75_int;
	@GetVariable(var_76_string, var_75_int);
	var_72_bool = (var_75_int & 3) == 2;
}


// @pe
void func_11676(void)
{
	func_151("termitnik@door1", false);
}


// @pe
void func_5537(int var_3745_int, int var_3746_int, object var_3747_object, object var_3748_object, object var_3749_object, object var_3750_object)
{
	if(var_3746_int == 0) {
		func_746(5, false);
		func_763(5, false, 1);
		int var_3759_int; object var_3760_object; object var_3761_object; object var_3762_object;
		var_3745_int = var_3759_int;
		var_3747_object = var_3760_object;
		var_3748_object = var_3761_object;
		var_3749_object = var_3762_object;
		func_670(5, var_3759_int, var_3760_object, var_3761_object, var_3762_object);
		object var_3763_object;
		var_3750_object = var_3763_object;
		func_255(var_3763_object, 2);
		func_820(5, false, 4);
		func_882(5, true, 4);
	}
	func_729(5, false);
	int var_3774_int; int var_3775_int;
	var_3745_int = var_3774_int;
	var_3746_int = var_3775_int;
	func_3797(5, var_3774_int, var_3775_int);
}


// @pe
void func_11683(void)
{
	@SetVariable("resque_list", 1);
	func_14586();
}


void func_422(int var_76_int)
{
	int var_82_int;
	var_76_int = var_82_int;
	string var_81_string;
	func_249(var_81_string, var_82_int);
	int var_79_int;
	@GetVariable(var_81_string, var_79_int);
	string var_86_string; int var_87_int;
	var_76_int = var_87_int;
	func_249(var_86_string, var_87_int);
	@SetVariable(var_86_string, ((var_79_int & 252) | 2));
}


// @pe
void func_11692(void)
{
	func_151("mnogogrannik@door1", true);
}


// @pe
void func_11699(void)
{
	func_151("sobor@door1", true);
}


// @pe
void func_4534(int var_886_int, int var_887_int, object var_888_object, object var_889_object, object var_890_object, object var_891_object)
{
	if(var_887_int == 0) {
		func_746(1, false);
		func_763(1, false, 1);
		int var_899_int; int var_900_int; object var_901_object; object var_902_object; object var_903_object;
		var_899_int = 1;
		var_886_int = var_900_int;
		var_888_object = var_901_object;
		var_889_object = var_902_object;
		var_890_object = var_903_object;
		func_572(var_900_int, var_901_object, var_902_object, var_903_object);
		object var_904_object;
		var_891_object = var_904_object;
		func_255(var_904_object, 0);
		func_820(1, false, 8);
		func_882(1, false, 8);
	}
	int var_913_int;
	var_887_int = var_913_int;
	func_1000(1, var_913_int);
	int var_915_int; int var_916_int;
	var_886_int = var_915_int;
	var_887_int = var_916_int;
	func_2333(1, var_915_int, var_916_int);
}


void func_440(int var_487_int)
{
	object var_489_object;
	@GetMainOutdoorScene(var_489_object);
	if(var_489_object == null)
		@Trace("City manager: main outdoor scene not found");
	var_489_object->RemoveAllRegionActors(var_487_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6584(int var_4030_int, int var_4031_int, object var_4032_object, object var_4033_object, object var_4034_object, object var_4035_object)
{
	if(var_4031_int == 0) {
		func_746(11, true);
		func_763(11, false, 1);
		int var_4044_int; object var_4045_object; object var_4046_object; object var_4047_object;
		var_4030_int = var_4044_int;
		var_4032_object = var_4045_object;
		var_4033_object = var_4046_object;
		var_4034_object = var_4047_object;
		func_670(11, var_4044_int, var_4045_object, var_4046_object, var_4047_object);
		object var_4048_object;
		var_4035_object = var_4048_object;
		func_255(var_4048_object, 2);
		func_820(11, false, 5);
		func_882(11, true, 5);
	}
	func_729(11, false);
	int var_4059_int; int var_4060_int;
	var_4030_int = var_4059_int;
	var_4031_int = var_4060_int;
	func_3609(11, var_4059_int, var_4060_int);
}


// @pe
void func_11706(void)
{
	func_151("sobor@door1", false);
}


// @pe
void func_11713(void)
{
	func_151("cot_bigvlad@door1", true);
}


void func_453(int var_783_int, string var_784_string, string var_785_string, int var_786_int)
{
	object var_788_object;
	@GetMainOutdoorScene(var_788_object);
	if(var_788_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_788_object->SetRegionActorCount(var_783_int, var_784_string, var_785_string, var_786_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11720(void)
{
	func_151("cot_bigvlad@door1", false);
}


// @pe
void func_11727(void)
{
	func_151("vagon_mishka@door1", true);
}


void func_466(int var_2215_int, string var_2216_string, string var_2217_string, int var_2218_int, int var_2219_int, int var_2220_int)
{
	object var_2222_object;
	@GetMainOutdoorScene(var_2222_object);
	if(var_2222_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2222_object->SetRegionActorCount(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int);
}
EMIT "Stack[-1] = 0";


void func_7635(int var_379_int)
{
	var_386_object = GlobalVars[14];
	int var_383_int;
	var_386_object->size(var_383_int);
	bool var_387_bool = true;
	var_388_bool = var_379_int >= var_383_int;
	if(var_388_bool != 1) {
		var_390_bool = var_379_int == -1;
		if(var_390_bool != 1)
			var_387_bool = false;
	}
	if(var_387_bool != 0)
		@Trace("Wrong bonfire index " + var_379_int);
	var_393_object = GlobalVars[14];
	object var_384_object;
	var_393_object->get(var_384_object, var_379_int);
	object var_385_object;
	@FindActor(var_385_object, ("bonfire_light" + (var_379_int + 1)));
	if(!var_385_object) //@nz
		@Trace(("Bofire  light " + (var_379_int + 1)) + " not found");
	else
		var_385_object->Switch(false);
	if(var_384_object != 0)
		@RemoveActor(var_384_object);
	var_406_object = GlobalVars[14];
	var_406_object->set(var_379_int, Obj());
	@Trace(("Cleanup bonfire " + (var_379_int + 1)) + "... ok");
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5589(void)
{
}


// @pe
void func_11734(void)
{
	func_151("warehouse_notkin@door1", true);
}


// @pe
void func_5591(int var_1375_int)
{
	int var_1381_int;
	var_1375_int = var_1381_int;
	func_1000(6, var_1381_int);
}


// @pe
void func_11741(void)
{
	func_151("warehouse_notkin@door1", false);
}


// @pe
void func_5598(void)
{
	func_729(6, false);
}


void func_479(int var_2142_int, string var_2143_string, string var_2144_string, int var_2145_int)
{
	object var_2147_object;
	@GetMainOutdoorScene(var_2147_object);
	if(var_2147_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2147_object->SetRegionActorCountByType(var_2142_int, var_2143_string, var_2144_string, var_2145_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11748(bool var_5253_bool)
{
	int var_5256_int;
	func_106(var_5256_int, "b7q02");
	if(var_5256_int == 0) {
		var_5253_bool = true;
		return 0;
	}
	var_5253_bool = false;
}


// @pe
void func_5605(void)
{
	func_729(6, false);
}


void func_2534(int var_3027_int, int var_3028_int, int var_3029_int)
{
	int var_3032_int; int var_3033_int;
	bool var_3034_bool = false;
	if(var_3029_int > 8) {
		if(var_3029_int < 21)
			var_3034_bool = true;
	}
	if(var_3034_bool != 0) {
		int var_3039_int;
		var_3027_int = var_3039_int;
		func_453(var_3039_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3043_int;
		var_3027_int = var_3043_int;
		func_453(var_3043_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_3047_int;
		var_3027_int = var_3047_int;
		func_453(var_3047_int, "pers_rat_big", "rat_big.xml", 3);
		int var_3051_int;
		var_3027_int = var_3051_int;
		func_479(var_3051_int, "fog", "fog.xml", 8);
		if(var_3028_int >= 5) {
			int var_3057_int;
			var_3027_int = var_3057_int;
			func_479(var_3057_int, "fog", "fog_hunter.xml", 3);
		}
		float var_3062_float; int var_3063_int;
		func_1205(var_3062_float, var_3063_int);
		if((1 * var_3062_float) != 0) {
			int var_3065_int; int var_3068_int;
			var_3027_int = var_3065_int;
			var_3032_int = var_3068_int;
			func_453(var_3065_int, "pers_bomber", "bomber.xml", var_3068_int);
		}
	} else {
		int var_3106_int;
		var_3027_int = var_3106_int;
		func_453(var_3106_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3110_int;
		var_3027_int = var_3110_int;
		func_453(var_3110_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_3114_int;
		var_3027_int = var_3114_int;
		func_453(var_3114_int, "pers_rat_big", "rat_big.xml", 4);
		int var_3118_int;
		var_3027_int = var_3118_int;
		func_479(var_3118_int, "fog", "fog.xml", 6);
		if(var_3063_int >= 5) {
			int var_3124_int;
			var_3027_int = var_3124_int;
			func_479(var_3124_int, "fog", "fog_hunter.xml", 2);
		}
		float var_3129_float; int var_3130_int;
		var_3028_int = var_3130_int;
		func_1205(var_3129_float, var_3130_int);
		if((1 * var_3129_float) == 0) goto Label_2652;
		int var_3132_int; int var_3135_int;
		var_3027_int = var_3132_int;
		var_3033_int = var_3135_int;
		func_453(var_3132_int, "pers_bomber", "bomber.xml", var_3135_int);
	}
Label_2652:
	int var_3069_int;
	var_3027_int = var_3069_int;
	func_466(var_3069_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_3075_int;
	var_3027_int = var_3075_int;
	func_466(var_3075_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_3081_int;
	var_3027_int = var_3081_int;
	func_466(var_3081_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_3087_int;
	var_3027_int = var_3087_int;
	func_466(var_3087_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_3093_bool; int var_3094_int; int var_3095_int;
	var_3028_int = var_3094_int;
	var_3029_int = var_3095_int;
	func_1295(var_3093_bool, var_3094_int, var_3095_int);
	if(var_3093_bool != 0) {
		int var_3096_int;
		var_3027_int = var_3096_int;
		func_453(var_3096_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3100_bool; int var_3101_int;
	var_3028_int = var_3101_int;
	func_1322(var_3100_bool, var_3101_int);
	if(var_3100_bool != 0) {
		int var_3102_int;
		var_3027_int = var_3102_int;
		func_453(var_3102_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_4586(int var_2275_int, int var_2276_int, object var_2277_object, object var_2278_object, object var_2279_object, object var_2280_object)
{
	if(var_2276_int == 0) {
		func_746(1, true);
		func_763(1, true, 1);
		int var_2289_int; object var_2290_object; object var_2291_object; object var_2292_object;
		var_2275_int = var_2289_int;
		var_2277_object = var_2290_object;
		var_2278_object = var_2291_object;
		var_2279_object = var_2292_object;
		func_591(1, var_2289_int, var_2290_object, var_2291_object, var_2292_object);
		object var_2293_object;
		var_2280_object = var_2293_object;
		func_255(var_2293_object, 1);
		func_820(1, true, 8);
		func_882(1, false, 8);
	}
	func_729(1, false);
	int var_2304_int; int var_2305_int;
	var_2275_int = var_2304_int;
	var_2276_int = var_2305_int;
	func_3254(1, var_2304_int, var_2305_int);
}


void func_492(int var_571_int, bool var_572_bool)
{
	object var_577_object; bool var_579_bool; object var_580_object;
	@GetMainOutdoorScene(var_577_object);
	object var_578_object;
	var_577_object->GetGroupActors(var_578_object, (101 + var_571_int));
	if(var_578_object != 0) {

		for(;;) {
			var_578_object->Next(var_579_bool, var_580_object);
			if(var_579_bool != 0) {
				bool var_585_bool; object var_586_object;
				var_580_object = var_586_object;
				func_88(var_585_bool, var_586_object, "locked");
				if(var_585_bool != 0)
					var_580_object->SetProperty("locked", var_572_bool);
				else
					@Trace(("Actor \"" + var_580_object) + "\" can't be locked");
			var_580_object = null;
	}
		}
	}
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_6636(object var_265_object)
{
	var_265_object->add("r6_house2_03");
	var_265_object->add("r6_house4_01_i2");
	var_265_object->add("r6_house4_02_i2");
	var_265_object->add("r6_house4_02");
	var_265_object->add("r6_house3_02_i2");
	var_265_object->add("r6_house3_02");
	var_265_object->add("r6_house3_01_i2");
	var_265_object->add("r6_house3_01");
	var_265_object->add("r6_house2_01");
	var_265_object->add("r6_house7_01");
	var_265_object->add("r6_house7_02");
	var_265_object->add("r6_House6_01");
	var_265_object->add("r6_house2_02");
}


// @pe
void func_5612(object var_177_object)
{
	var_177_object->add("House6_02");
	var_177_object->add("House6_01");
	var_177_object->add("house_2_01");
	var_177_object->add("house7_03");
	var_177_object->add("house7_02");
	var_177_object->add("house3_01_i2");
	var_177_object->add("house3_01");
	var_177_object->add("house_2_03");
	var_177_object->add("house_2_02");
	var_177_object->add("house4_01_i2");
	var_177_object->add("house4_01");
	var_177_object->add("House6_05");
	var_177_object->add("House6_04");
	var_177_object->add("House6_03");
}


// @pe
void func_11760(bool var_5184_bool)
{
	int var_5187_int;
	func_106(var_5187_int, "b7q01");
	if(var_5187_int == 1000)
		var_5184_bool = true;
	var_5184_bool = false;
}


void func_14840(int var_4305_int)
{
	object var_4310_object; object var_4311_object; object var_4312_object; object var_4313_object;
	if(var_4305_int == 3) {
		@Trace("Special diseased house: house5_unoin03l");
		@Trace("Special diseased house: house5_unoin03r");
		@GetSceneByName(var_4310_object, "house5_unoin03l");
		@ReplaceScene(var_4310_object, "s_house5_unoin03l.isc");
		@GetSceneByName(var_4310_object, "house5_unoin03r");
		@ReplaceScene(var_4310_object, "s_house5_unoin03r.isc");
		var_4310_object = null;
	} else if(var_4305_int == 4) {
			@GetSceneByName(var_4311_object, "theater");
			@ReplaceScene(var_4311_object, "dtheater_burah.isc");
			var_4311_object = null;
	}

	for(;;) {
		return 8;

	}
	
	if(var_4305_int == 8) {
		@Trace("Special replaced house: uprava_admin");
		@GetSceneByName(var_4312_object, "uprava_admin");
		@ReplaceScene(var_4312_object, "uprava_admin_army_burah.isc");
		var_4312_object = null;
	} else if(var_4305_int == 11) {
		@GetSceneByName(var_4313_object, "theater");
		@ReplaceScene(var_4313_object, "theater_burah.isc");
		var_4313_object = null;
	}
}


void func_8698(void)
{
	object var_4444_object; bool var_4445_bool; cvector var_4446_cvector; cvector var_4447_cvector; string var_4448_string;
	int var_4449_int;
	func_12303(var_4449_int);
	if(var_4449_int == 0)
		return 16;
	var_4452_object = GlobalVars[6];
	int var_4441_int;
	var_4452_object->size(var_4441_int);
	object var_4442_object;
	@GetMainOutdoorScene(var_4442_object);
	int var_4443_int = 0;
	
	for(;;) {
		if(var_4443_int < var_4441_int) {
			var_4454_object = GlobalVars[6];
			var_4454_object->get(var_4444_object, var_4443_int);
			if(var_4444_object != 0) {
			} else {
			var_4442_object->GetLocator(("pt_plant" + (var_4443_int + 1)), var_4445_bool, var_4446_cvector, var_4447_cvector);
			if(!var_4445_bool) { //@nz
				@Trace("Plant point not found");
				goto Label_8768;
			}
			@RandOneOf(var_4448_string, 6, 3, 3, 3, 1, 1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
			if(var_4448_string != 0) {
				var_4442_object->AddStationaryActorByType(var_4444_object, var_4446_cvector, var_4447_cvector, "scripted", (("item_" + var_4448_string) + "_stat.xml"));
				var_4481_object = GlobalVars[6];
				var_4481_object->set(var_4443_int, var_4444_object);
				@Trace((("New plant: \"" + var_4448_string) + "\" at location #") + (var_4443_int + 1));
			}
			var_4444_object = null;
		}
		return 16;
		}
	Label_8768:
		var_4443_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_11772(bool var_5269_bool)
{
	int var_5272_int;
	func_106(var_5272_int, "b8q01");
	if(var_5272_int == 0) {
		var_5269_bool = true;
		return 0;
	}
	var_5269_bool = false;
}


// @pe
void func_11784(bool var_5112_bool)
{
	int var_5115_int;
	func_106(var_5115_int, "b10q01DankoTalk");
	if(var_5115_int == 1)
		var_5112_bool = true;
	var_5112_bool = false;
}


void func_10763(void)
{
	object var_6045_object;
	func_12286(var_6045_object);
	object var_6043_object;
	var_6045_object = var_6043_object;
	object var_6044_object;
	var_6043_object->FindMark(var_6044_object, "b2BurahHome");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2DankoGotoMladVlad");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2q01AlexandrGotoOspina");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2q01BigVladGotoAlexandr");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2q01BigVladGotoKaterina");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2q01BigVladGotoMladVlad");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2Travnik1");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2Travnik2");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2Travnik3");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2q01BigVladGotoDanko");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2q03GoodShop");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	var_6043_object->FindMark(var_6044_object, "b2AndreiKabak");
	if(var_6044_object != 0)
		var_6044_object->Remove();
	bool var_6070_bool;
	func_12261(var_6070_bool, 245);
	bool var_6072_bool;
	func_12261(var_6072_bool, 456);
	bool var_6074_bool;
	func_12261(var_6074_bool, 585);
	bool var_6076_bool;
	func_12261(var_6076_bool, 588);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_526(string var_2030_string, object var_2031_object, string var_2032_string, string var_2033_string)
{
	object var_2045_object; bool var_2047_bool; cvector var_2048_cvector; cvector var_2049_cvector; object var_2050_object;
	@GetMainOutdoorScene(var_2045_object);
	int var_2046_int = 0;
	
	for(;;) {
		var_2045_object->GetLocator((var_2030_string + (var_2046_int + 1)), var_2047_bool, var_2048_cvector, var_2049_cvector);
		if(!var_2047_bool) //@nz
			break;
		var_2045_object->AddStationaryActor(var_2050_object, var_2048_cvector, var_2049_cvector, var_2032_string, var_2033_string);
		var_2031_object->add(var_2050_object);
		var_2050_object = null;
		var_2046_int += 1;
	}
}
EMIT "Stack[-6] = 0";


void func_7695(object var_4388_object, object var_4389_object, string var_4390_string, string var_4391_string, string var_4392_string)
{
	bool var_4398_bool; cvector var_4399_cvector; cvector var_4400_cvector; object var_4401_object;
	var_4389_object->GetLocator(("pt_guard_" + var_4390_string), var_4398_bool, var_4399_cvector, var_4400_cvector);
	if(!var_4398_bool) //@nz
		@Trace("Locator doesn't exist for guard " + var_4390_string);
	else
		var_4389_object->AddStationaryActor(var_4401_object, var_4399_cvector, var_4400_cvector, var_4391_string, var_4392_string);
	var_4401_object = var_4388_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_11796(bool var_4764_bool)
{
	int var_4767_int;
	func_106(var_4767_int, "b11q01");
	if(var_4767_int == 0) {
		var_4764_bool = true;
		return 0;
	}
	var_4764_bool = false;
}


// @pe
void func_6677(int var_1703_int, int var_1704_int, object var_1705_object, object var_1706_object, object var_1707_object, object var_1708_object)
{
	if(var_1704_int == 0) {
		func_746(12, false);
		func_763(12, false, 1);
		int var_1716_int; int var_1717_int; object var_1718_object; object var_1719_object; object var_1720_object;
		var_1716_int = 12;
		var_1703_int = var_1717_int;
		var_1705_object = var_1718_object;
		var_1706_object = var_1719_object;
		var_1707_object = var_1720_object;
		func_572(var_1717_int, var_1718_object, var_1719_object, var_1720_object);
		object var_1721_object;
		var_1708_object = var_1721_object;
		func_255(var_1721_object, 0);
		func_820(12, false, 4);
		func_882(12, false, 4);
	}
	int var_1730_int;
	var_1704_int = var_1730_int;
	func_970(12, var_1730_int);
	int var_1732_int; int var_1733_int;
	var_1703_int = var_1732_int;
	var_1704_int = var_1733_int;
	func_1574(12, var_1732_int, var_1733_int);
}


// @pe
void func_5656(int var_1384_int, int var_1385_int, object var_1386_object, object var_1387_object, object var_1388_object, object var_1389_object)
{
	if(var_1385_int == 0) {
		func_746(7, false);
		func_763(7, false, 1);
		int var_1397_int; int var_1398_int; object var_1399_object; object var_1400_object; object var_1401_object;
		var_1397_int = 7;
		var_1384_int = var_1398_int;
		var_1386_object = var_1399_object;
		var_1387_object = var_1400_object;
		var_1388_object = var_1401_object;
		func_572(var_1398_int, var_1399_object, var_1400_object, var_1401_object);
		object var_1402_object;
		var_1389_object = var_1402_object;
		func_255(var_1402_object, 0);
		func_820(7, false, 6);
		func_882(7, false, 6);
	}
	int var_1411_int;
	var_1385_int = var_1411_int;
	func_970(7, var_1411_int);
	int var_1413_int; int var_1414_int;
	var_1384_int = var_1413_int;
	var_1385_int = var_1414_int;
	func_1574(7, var_1413_int, var_1414_int);
}


void func_3609(int var_3816_int, int var_3817_int, int var_3818_int)
{
	int var_3823_int; int var_3824_int; int var_3825_int; int var_3826_int;
	bool var_3827_bool = false;
	if(var_3818_int > 8) {
		if(var_3818_int < 21)
			var_3827_bool = true;
	}
	if(var_3827_bool != 0) {
		int var_3832_int;
		var_3816_int = var_3832_int;
		func_453(var_3832_int, "pers_rat", "rat.xml", 1);
		int var_3836_int;
		var_3816_int = var_3836_int;
		func_453(var_3836_int, "pers_alkash", "alkash.xml", 2);
		int var_3840_int;
		var_3816_int = var_3840_int;
		func_453(var_3840_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3845_float; int var_3846_int;
		func_1115(var_3845_float, var_3846_int);
		if((2 * var_3845_float) != 0) {
			int var_3848_int; int var_3851_int;
			var_3816_int = var_3848_int;
			var_3823_int = var_3851_int;
			func_453(var_3848_int, "pers_grabitel", "grabitel.xml", var_3851_int);
		}
		if((var_3846_int + 1) >= 2) {
			int var_3856_int;
			var_3816_int = var_3856_int;
			func_453(var_3856_int, "pers_patrool", "patrol.xml", 1);
			bool var_3860_bool; int var_3861_int;
			var_3817_int = var_3861_int;
			func_1322(var_3860_bool, var_3861_int);
			if(var_3860_bool != 0) {
				int var_3862_int;
				var_3816_int = var_3862_int;
				func_453(var_3862_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3867_float; int var_3868_int;
		var_3817_int = var_3868_int;
		func_1205(var_3867_float, var_3868_int);
		if((1 * var_3867_float) != 0) {
			int var_3870_int; int var_3873_int;
			var_3816_int = var_3870_int;
			var_3824_int = var_3873_int;
			func_453(var_3870_int, "pers_bomber", "bomber.xml", var_3873_int);
		}
	} else {
		int var_3887_int;
		var_3816_int = var_3887_int;
		func_453(var_3887_int, "pers_rat", "rat.xml", 3);
		int var_3891_int;
		var_3816_int = var_3891_int;
		func_453(var_3891_int, "pers_alkash", "alkash.xml", 1);
		int var_3895_int;
		var_3816_int = var_3895_int;
		func_453(var_3895_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3900_float; int var_3901_int;
		func_1115(var_3900_float, var_3901_int);
		if((3 * var_3900_float) != 0) {
			int var_3903_int; int var_3906_int;
			var_3816_int = var_3903_int;
			var_3825_int = var_3906_int;
			func_453(var_3903_int, "pers_grabitel", "grabitel.xml", var_3906_int);
		}
		if((var_3901_int + 1) >= 2) {
			int var_3911_int;
			var_3816_int = var_3911_int;
			func_453(var_3911_int, "pers_patrool", "patrol.xml", 1);
			bool var_3915_bool; int var_3916_int;
			var_3817_int = var_3916_int;
			func_1322(var_3915_bool, var_3916_int);
			if(var_3915_bool != 0) {
				int var_3917_int;
				var_3816_int = var_3917_int;
				func_453(var_3917_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3922_float; int var_3923_int;
		var_3817_int = var_3923_int;
		func_1205(var_3922_float, var_3923_int);
		if((1 * var_3922_float) == 0) goto Label_3771;
		int var_3925_int; int var_3928_int;
		var_3816_int = var_3925_int;
		var_3826_int = var_3928_int;
		func_453(var_3925_int, "pers_bomber", "bomber.xml", var_3928_int);
	}
Label_3771:
	bool var_3874_bool; int var_3875_int; int var_3876_int;
	var_3817_int = var_3875_int;
	var_3818_int = var_3876_int;
	func_1295(var_3874_bool, var_3875_int, var_3876_int);
	if(var_3874_bool != 0) {
		int var_3877_int;
		var_3816_int = var_3877_int;
		func_453(var_3877_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3881_bool; int var_3882_int;
	var_3817_int = var_3882_int;
	func_1322(var_3881_bool, var_3882_int);
	if(var_3881_bool != 0) {
		int var_3883_int;
		var_3816_int = var_3883_int;
		func_453(var_3883_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_4638(int var_3400_int, int var_3401_int, object var_3402_object, object var_3403_object, object var_3404_object, object var_3405_object)
{
	if(var_3401_int == 0) {
		func_746(1, false);
		func_763(1, false, 1);
		int var_3414_int; object var_3415_object; object var_3416_object; object var_3417_object;
		var_3400_int = var_3414_int;
		var_3402_object = var_3415_object;
		var_3403_object = var_3416_object;
		var_3404_object = var_3417_object;
		func_670(1, var_3414_int, var_3415_object, var_3416_object, var_3417_object);
		object var_3418_object;
		var_3405_object = var_3418_object;
		func_255(var_3418_object, 2);
		func_820(1, false, 8);
		func_882(1, true, 8);
	}
	func_729(1, false);
	int var_3429_int; int var_3430_int;
	var_3400_int = var_3429_int;
	var_3401_int = var_3430_int;
	func_4160(1, var_3429_int, var_3430_int);
}


// @pe
void func_7712(object var_4385_object, object var_4386_object, int var_4387_int)
{
	object var_4389_object;
	var_4386_object = var_4389_object;
	object var_4388_object;
	func_7695(var_4388_object, var_4389_object, ("term" + var_4387_int), "pers_patrool", "guard_term.xml");
	var_4388_object = var_4385_object;
}


// @pe
void func_11808(bool var_4700_bool)
{
	int var_4703_int;
	func_106(var_4703_int, "b12q01BlockVisit");
	if(var_4703_int != 0) {
		var_4700_bool = true;
		return 0;
	}
	var_4700_bool = false;
}


void func_548(string var_2056_string, object var_2057_object)
{
	object var_2070_object; bool var_2072_bool; cvector var_2073_cvector; cvector var_2074_cvector; object var_2075_object;
	@GetMainOutdoorScene(var_2070_object);
	int var_2071_int = 0;
	
	for(;;) {
		var_2070_object->GetLocator((var_2056_string + (var_2071_int + 1)), var_2072_bool, var_2073_cvector, var_2074_cvector);
		if(!var_2072_bool) //@nz
			break;
		var_2070_object->AddStationaryActorByType(var_2075_object, var_2073_cvector, var_2074_cvector, "fog", "fog_stat.xml");
		var_2057_object->add(var_2075_object);
		var_2075_object = null;
		var_2071_int += 1;
	}
}
EMIT "Stack[-7] = 0";


void func_1574(int var_1412_int, int var_1413_int, int var_1414_int)
{
	int var_1416_int;
	if((var_1413_int + 1) == 12)
		return 2;
	bool var_1421_bool = false;
	bool var_1422_bool = true;
	var_1424_bool = var_1414_int < 7;
	if(var_1424_bool != 1) {
		var_1426_bool = var_1414_int > 21;
		if(var_1426_bool != 1)
			var_1422_bool = false;
	}
	if(var_1422_bool != 0) {
		if(var_1413_int != 0)
			var_1421_bool = true;
	}
	if(var_1421_bool != 0) {
		float var_1430_float; int var_1431_int;
		var_1413_int = var_1431_int;
		func_1091(var_1430_float, var_1431_int);
		if((1 * var_1430_float) != 0) {
			int var_1433_int; int var_1436_int;
			var_1412_int = var_1433_int;
			var_1416_int = var_1436_int;
			func_453(var_1433_int, "pers_grabitel", "grabitel.xml", var_1436_int);
		}
	}
	bool var_1437_bool; int var_1438_int; int var_1439_int;
	var_1414_int = var_1439_int;
	func_1060(var_1437_bool, var_1438_int, var_1439_int);
	if(var_1437_bool != 0) {
		int var_1440_int;
		var_1412_int = var_1440_int;
		func_453(var_1440_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1444_int;
		var_1412_int = var_1444_int;
		func_453(var_1444_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1448_int;
		var_1412_int = var_1448_int;
		func_453(var_1448_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1452_int;
		var_1412_int = var_1452_int;
		func_453(var_1452_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1456_int;
		var_1412_int = var_1456_int;
		func_453(var_1456_int, "pers_woman", "woman.xml", 1);
		int var_1460_int;
		var_1412_int = var_1460_int;
		func_453(var_1460_int, "pers_alkash", "alkash.xml", 1);
		bool var_1464_bool = false;
		if(var_1414_int > 8) {
			if(var_1414_int < 21)
				var_1464_bool = true;
		}
		if(var_1464_bool != 0) {
			int var_1469_int;
			var_1412_int = var_1469_int;
			func_453(var_1469_int, "pers_boy", "boy.xml", 1);
			int var_1473_int;
			var_1412_int = var_1473_int;
			func_453(var_1473_int, "pers_girl", "girl.xml", 1);
			int var_1477_int;
			var_1412_int = var_1477_int;
			func_453(var_1477_int, "pers_girl", "girl2.xml", 1);
			int var_1481_int;
			var_1412_int = var_1481_int;
			func_453(var_1481_int, "pers_littleboy", "littleboy.xml", 1);
			int var_1485_int;
			var_1412_int = var_1485_int;
			func_453(var_1485_int, "pers_littlegirl", "littlegirl.xml", 1);
		}
	} else {
			bool var_1496_bool = false;
			if(var_1414_int > 8) {
				if(var_1414_int < 21)
					var_1496_bool = true;
			}
			if(var_1496_bool == 0) goto Label_1793;
			int var_1501_int;
			var_1412_int = var_1501_int;
			func_453(var_1501_int, "pers_woman", "woman.xml", 1);
			int var_1505_int;
			var_1412_int = var_1505_int;
			func_453(var_1505_int, "pers_unosha", "unosha.xml", 1);
			int var_1509_int;
			var_1412_int = var_1509_int;
			func_453(var_1509_int, "pers_unosha", "unosha2.xml", 1);
			int var_1513_int;
			var_1412_int = var_1513_int;
			func_453(var_1513_int, "pers_boy", "boy.xml", 1);
			int var_1517_int;
			var_1412_int = var_1517_int;
			func_453(var_1517_int, "pers_girl", "girl.xml", 1);
			int var_1521_int;
			var_1412_int = var_1521_int;
			func_453(var_1521_int, "pers_girl", "girl2.xml", 1);
			int var_1525_int;
			var_1412_int = var_1525_int;
			func_453(var_1525_int, "pers_littleboy", "littleboy.xml", 1);
			int var_1529_int;
			var_1412_int = var_1529_int;
			func_453(var_1529_int, "pers_littlegirl", "littlegirl.xml", 1);
			int var_1533_int;
			var_1412_int = var_1533_int;
			func_453(var_1533_int, "pers_alkash", "alkash.xml", 1);
			if((var_1438_int + 1) >= 3) {
				int var_1541_int;
				var_1412_int = var_1541_int;
				func_453(var_1541_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
	}
Label_1833:
	for(;;) {
		bool var_1489_bool; int var_1490_int; int var_1491_int;
		var_1413_int = var_1490_int;
		var_1414_int = var_1491_int;
		func_1295(var_1489_bool, var_1490_int, var_1491_int);
		if(var_1489_bool != 0) {
			int var_1492_int;
			var_1412_int = var_1492_int;
			func_453(var_1492_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1793:
	int var_1545_int;
	var_1412_int = var_1545_int;
	func_453(var_1545_int, "pers_woman", "woman.xml", 1);
	int var_1549_int;
	var_1412_int = var_1549_int;
	func_453(var_1549_int, "pers_unosha", "unosha.xml", 1);
	int var_1553_int;
	var_1412_int = var_1553_int;
	func_453(var_1553_int, "pers_unosha", "unosha2.xml", 1);
	int var_1557_int;
	var_1412_int = var_1557_int;
	func_453(var_1557_int, "pers_alkash", "alkash.xml", 1);
	if(!((var_1413_int + 1) >= 3)) goto Label_1833;
	int var_1565_int;
	var_1412_int = var_1565_int;
	func_453(var_1565_int, "pers_dohodyaga", "dohodyaga.xml", 1);
}


void func_7723(bool var_4429_bool)
{
	object var_4431_object;
	@FindActor(var_4431_object, "arena_light");
	var_4431_object->Switch(var_4429_bool);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11820(bool var_4655_bool)
{
	int var_4658_int;
	func_106(var_4658_int, "b12q01DankoVisit");
	if(var_4658_int != 0) {
		var_4655_bool = true;
		return 0;
	}
	var_4655_bool = false;
}


// @pe
void func_9776(int var_5508_int, float var_5509_float)
{
	float var_5513_float;
	var_5509_float = var_5513_float;
	int var_5510_int;
	func_12278(var_5510_int, 531503, 531502, var_5513_float);
	var_5510_int = var_5508_int;
}


void func_7731(void)
{
	object var_4296_object; bool var_4297_bool; cvector var_4298_cvector; cvector var_4299_cvector; int var_4300_int; object var_4301_object;
	@Trace("Setting arena...");
	var_4303_object = GlobalVars[11];
	if(var_4303_object == null) {
		@GetMainOutdoorScene(var_4296_object);
		var_4296_object->GetLocator("pt_arena_manager", var_4297_bool, var_4298_cvector, var_4299_cvector);
		if(!var_4297_bool) { //@nz
			@Trace("Locator doesn't exist for arena manager");
		} else {
				var_4327_object = GlobalVars[11];
				object var_4328_object; object var_4329_object; cvector var_4330_cvector; cvector var_4331_cvector;
				var_4296_object = var_4329_object;
				var_4298_cvector = var_4330_cvector;
				var_4299_cvector = var_4331_cvector;
				func_14900(var_4328_object, var_4329_object, var_4330_cvector, var_4331_cvector);
				var_4328_object = var_4327_object;
				GlobalVars[11] = var_4327_object;
		}
		var_4300_int = 0;

		for(;;) {
			if(var_4300_int < 6) {
				var_4296_object->GetLocator(("pt_arena_torch" + (var_4300_int + 1)), var_4297_bool, var_4298_cvector, var_4299_cvector);
				if(!var_4297_bool) { //@nz
					@Trace("Locator doesn't exist for arena torch " + (var_4300_int + 1));
				} else {
				@AddActorByType(var_4301_object, "scripted", var_4296_object, var_4298_cvector, var_4299_cvector, "torch.xml");
				var_4322_object = GlobalVars[12];
				var_4322_object->add(var_4301_object);
				var_4301_object = null;
			}
			func_7723(true);
			var_4296_object = null;
	}
		return 12;

		}
		var_4300_int += 1;
	}
	
}


void func_14900(object var_4328_object, object var_4329_object, cvector var_4330_cvector, cvector var_4331_cvector)
{
	object var_4333_object;
	var_4329_object->AddStationaryActor(var_4333_object, var_4330_cvector, var_4331_cvector, "pers_morlok", "Burah_arena_manager.xml");
	var_4333_object = var_4328_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_11832(bool var_4876_bool)
{
	int var_4879_int;
	func_106(var_4879_int, "b12q01KlaraVisit");
	if(var_4879_int != 0) {
		var_4876_bool = true;
		return 0;
	}
	var_4876_bool = false;
}


// @pe
void func_9785(int var_5934_int, float var_5935_float)
{
	float var_5939_float;
	var_5935_float = var_5939_float;
	int var_5936_int;
	func_12278(var_5936_int, 530554, 530553, var_5939_float);
	var_5936_int = var_5934_int;
}


// @pe
void func_572(int var_566_int, object var_568_object, object var_569_object, object var_570_object)
{
	int var_571_int;
	var_566_int = var_571_int;
	func_492(var_571_int, true);
	object var_599_object;
	var_568_object = var_599_object;
	func_213(var_599_object);
	object var_610_object;
	var_569_object = var_610_object;
	func_213(var_610_object);
	object var_611_object;
	var_570_object = var_611_object;
	func_213(var_611_object);
}


// @pe
void func_13887(float var_4580_float)
{
	var_4584_object = GlobalVars[16];
	GlobalVars[16] = Obj();
	@SetTimeEvent(45091, 271.5);
	@SetTimeEvent(45116, 58.0);
	@SetTimeEvent(45113, 36.0);
	@SetTimeEvent(45090, 281.0);
	@SetTimeEvent(45117, 48.08);
	@SetTimeEvent(45118, 72.08);
	@SetTimeEvent(45119, 96.08);
	@SetTimeEvent(45120, 120.08);
	@SetTimeEvent(45121, 144.08);
	@SetTimeEvent(45122, 168.08);
	@SetTimeEvent(45089, 247.25);
	@SetTimeEvent(45080, 168.0);
	@SetTimeEvent(45081, 144.0);
	@SetTimeEvent(45082, 127.0);
	@SetTimeEvent(45092, 271.25);
	@SetTimeEvent(45093, 282.0);
	@SetTimeEvent(45083, 192.0);
	@SetTimeEvent(45111, 12.0);
	@SetTimeEvent(45079, 168.0);
	@SetTimeEvent(45086, 240.0);
	@SetTimeEvent(45087, 264.0);
	@SetTimeEvent(45112, 24.05);
	@SetTimeEvent(45115, 60.0);
	@SetTimeEvent(45114, 48.05);
	@SetTimeEvent(45088, 223.25);
	@SetTimeEvent(45084, 192.0);
	@SetTimeEvent(45085, 216.0);
	@SetTimeEvent(45127, 120.05);
	@SetTimeEvent(45133, 168.05);
	@SetTimeEvent(45136, 180.0);
	@SetTimeEvent(45123, 79.25);
	@SetTimeEvent(45124, 84.0);
	@SetTimeEvent(45130, 151.25);
	@SetTimeEvent(45131, 152.0);
	@SetTimeEvent(45135, 175.25);
	@SetTimeEvent(45125, 96.05);
	@SetTimeEvent(45128, 127.25);
	@SetTimeEvent(45129, 144.05);
	@SetTimeEvent(45134, 192.05);
	@SetTimeEvent(45126, 103.25);
	@SetTimeEvent(45137, 199.25);
	@SetTimeEvent(45138, 216.05);
	@SetTimeEvent(45132, 156.0);
	@SetTimeEvent(45198, 24.0);
	@SetTimeEvent(45262, 168.0);
	@SetTimeEvent(45190, 64.0);
	@SetTimeEvent(45263, 192.0);
	@SetTimeEvent(45264, 216.0);
	@SetTimeEvent(45266, 264.0);
	@SetTimeEvent(45185, 63.0);
	@SetTimeEvent(45196, 227.5);
	@SetTimeEvent(45189, 111.5);
	@SetTimeEvent(45265, 240.0);
	@SetTimeEvent(45157, 151.02);
	@SetTimeEvent(45160, 223.02);
	@SetTimeEvent(45161, 247.02);
	@SetTimeEvent(45158, 175.02);
	@SetTimeEvent(45159, 199.02);
	@SetTimeEvent(45187, 230.0);
	@SetTimeEvent(45188, 135.0);
	@SetTimeEvent(45193, 11.0);
	@SetTimeEvent(45194, 39.0);
	@SetTimeEvent(45197, 199.33);
	@SetTimeEvent(45191, 64.25);
	@SetTimeEvent(45235, 90.0);
	@SetTimeEvent(45192, 120.0);
	@SetTimeEvent(45186, 184.5);
	@SetTimeEvent(45195, 82.5);
	@SetTimeEvent(45234, 67.5);
	@SetTimeEvent(45237, 178.5);
	@SetTimeEvent(45238, 205.25);
	@SetTimeEvent(45162, 271.02);
	@SetTimeEvent(45139, 240.05);
	@SetTimeEvent(45141, 263.5);
	@SetTimeEvent(45140, 263.25);
	@SetTimeEvent(45144, 108.0);
	@SetTimeEvent(45148, 210.0);
	@SetTimeEvent(45149, 222.0);
	@SetTimeEvent(45150, 240.0);
	@SetTimeEvent(45151, 250.5);
	@SetTimeEvent(45155, 103.02);
	@SetTimeEvent(45142, 264.05);
	@SetTimeEvent(45147, 210.0);
	@SetTimeEvent(45152, 31.02);
	@SetTimeEvent(45156, 127.02);
	@SetTimeEvent(45153, 55.02);
	@SetTimeEvent(45154, 79.02);
	@SetTimeEvent(45143, 252.0);
	@SetTimeEvent(45078, 144.0);
	@SetTimeEvent(45070, 72.0);
	@SetTimeEvent(45059, 48.0);
	@SetTimeEvent(45071, 18.0);
	@SetTimeEvent(45073, 48.0);
	@SetTimeEvent(45072, 48.0);
	@SetTimeEvent(45076, 31.25);
	@SetTimeEvent(45077, 33.0);
	@SetTimeEvent(45075, 41.0);
	object var_4779_object; object var_4780_object;
	var_4781_object = GlobalVars[16];
	var_4781_object = var_4779_object;
	var_4782_object = GlobalVars[16];
	var_4782_object = var_4780_object;
	func_11713();
	object var_4793_object; object var_4794_object;
	var_4795_object = GlobalVars[16];
	var_4795_object = var_4793_object;
	var_4796_object = GlobalVars[16];
	var_4796_object = var_4794_object;
	func_11727();
	object var_4799_object; object var_4800_object;
	var_4801_object = GlobalVars[16];
	var_4801_object = var_4799_object;
	var_4802_object = GlobalVars[16];
	var_4802_object = var_4800_object;
	func_10574();
	object var_4805_object; object var_4806_object;
	var_4807_object = GlobalVars[16];
	var_4807_object = var_4805_object;
	var_4808_object = GlobalVars[16];
	var_4808_object = var_4806_object;
	func_10442();
	object var_4811_object; object var_4812_object;
	var_4813_object = GlobalVars[16];
	var_4813_object = var_4811_object;
	var_4814_object = GlobalVars[16];
	var_4814_object = var_4812_object;
	func_10456();
	object var_4826_object; object var_4827_object;
	var_4828_object = GlobalVars[16];
	var_4828_object = var_4826_object;
	var_4829_object = GlobalVars[16];
	var_4829_object = var_4827_object;
	func_10470();
	object var_4832_object; object var_4833_object;
	var_4834_object = GlobalVars[16];
	var_4834_object = var_4832_object;
	var_4835_object = GlobalVars[16];
	var_4835_object = var_4833_object;
	func_10484();
	object var_4838_object; object var_4839_object;
	var_4840_object = GlobalVars[16];
	var_4840_object = var_4838_object;
	var_4841_object = GlobalVars[16];
	var_4841_object = var_4839_object;
	func_10498();
	object var_4842_object; object var_4843_object;
	var_4844_object = GlobalVars[16];
	var_4844_object = var_4842_object;
	var_4845_object = GlobalVars[16];
	var_4845_object = var_4843_object;
	func_10502();
	object var_4848_object; object var_4849_object;
	var_4850_object = GlobalVars[16];
	var_4850_object = var_4848_object;
	var_4851_object = GlobalVars[16];
	var_4851_object = var_4849_object;
	func_10516();
	object var_4866_object; object var_4867_object;
	var_4868_object = GlobalVars[16];
	var_4868_object = var_4866_object;
	var_4869_object = GlobalVars[16];
	var_4869_object = var_4867_object;
	func_10532();
	object var_4872_object; object var_4873_object;
	var_4874_object = GlobalVars[16];
	var_4874_object = var_4872_object;
	var_4875_object = GlobalVars[16];
	var_4875_object = var_4873_object;
	func_11669();
	object var_4878_object; object var_4879_object;
	var_4880_object = GlobalVars[16];
	var_4880_object = var_4878_object;
	var_4881_object = GlobalVars[16];
	var_4881_object = var_4879_object;
	func_11446();
	object var_4905_object; object var_4906_object;
	var_4907_object = GlobalVars[16];
	var_4907_object = var_4905_object;
	var_4908_object = GlobalVars[16];
	var_4908_object = var_4906_object;
	func_11699();
	object var_4911_object; object var_4912_object;
	var_4913_object = GlobalVars[16];
	var_4913_object = var_4911_object;
	var_4914_object = GlobalVars[16];
	var_4914_object = var_4912_object;
	func_10560();
	object var_4917_object; object var_4918_object;
	var_4919_object = GlobalVars[16];
	var_4919_object = var_4917_object;
	var_4920_object = GlobalVars[16];
	var_4920_object = var_4918_object;
	func_11551();
	object var_4923_object; object var_4924_object;
	var_4925_object = GlobalVars[16];
	var_4925_object = var_4923_object;
	var_4926_object = GlobalVars[16];
	var_4926_object = var_4924_object;
	func_10567();
	object var_4929_object; object var_4930_object;
	var_4931_object = GlobalVars[16];
	var_4931_object = var_4929_object;
	var_4932_object = GlobalVars[16];
	var_4932_object = var_4930_object;
	func_11558();
	object var_4935_object; object var_4936_object;
	var_4937_object = GlobalVars[16];
	var_4937_object = var_4935_object;
	var_4938_object = GlobalVars[16];
	var_4938_object = var_4936_object;
	func_11565();
	object var_4941_object; object var_4942_object;
	var_4943_object = GlobalVars[16];
	var_4943_object = var_4941_object;
	var_4944_object = GlobalVars[16];
	var_4944_object = var_4942_object;
	func_11692();
	int var_4947_int; float var_4948_float;
	var_4580_float = var_4948_float;
	func_10010(var_4947_int, var_4948_float);
	object var_4956_object;
	func_111(var_4956_object, "volonteers_burah");
	object var_4964_object;
	func_111(var_4964_object, "quest_b1_01");
	object var_4966_object;
	func_111(var_4966_object, "quest_b1_05");
	@SetTimeEvent(45058, 24.0);
	@SetTimeEvent(45060, 72.0);
	@SetTimeEvent(45065, 96.0);
	@SetTimeEvent(45061, 144.0);
	@SetTimeEvent(45067, 55.25);
	@SetTimeEvent(45068, 11.0);
	@SetTimeEvent(45062, 192.0);
	@SetTimeEvent(45069, 72.0);
	@SetTimeEvent(45066, 120.0);
	@SetTimeEvent(45074, 48.0);
}


// @pe
void func_9794(int var_5956_int, float var_5957_float)
{
	float var_5961_float;
	var_5957_float = var_5961_float;
	int var_5958_int;
	func_12278(var_5958_int, 530556, 530555, var_5961_float);
	var_5958_int = var_5956_int;
}


// @pe
void func_11844(bool var_5222_bool)
{
	int var_5225_int;
	func_106(var_5225_int, "b4NotkinMapVisit");
	if(var_5225_int != 0) {
		var_5222_bool = true;
		return 0;
	}
	var_5222_bool = false;
}


void func_8773(void)
{
	object var_4497_object; object var_4500_object; bool var_4501_bool; cvector var_4502_cvector; cvector var_4503_cvector; string var_4504_string;
	@GetMainOutdoorScene(var_4497_object);
	var_4505_object = GlobalVars[7];
	int var_4498_int;
	var_4505_object->size(var_4498_int);
	int var_4499_int = 0;
	
	for(;;) {
		if(var_4499_int < var_4498_int) {
			var_4507_object = GlobalVars[7];
			var_4507_object->get(var_4500_object, var_4499_int);
			if(var_4500_object != 0) {
			} else {
			var_4497_object->GetLocator(("pt_grave_supply" + (var_4499_int + 1)), var_4501_bool, var_4502_cvector, var_4503_cvector);
			if(!var_4501_bool) { //@nz
				@Trace("Grave supply point not found");
				goto Label_8817;
			}
			@RandOneOf(var_4504_string, 1, 1, "bread", "milk");
			var_4497_object->AddStationaryActorByType(var_4500_object, var_4502_cvector, var_4503_cvector, "scripted", (("item_" + var_4504_string) + "_stat.xml"));
			var_4525_object = GlobalVars[7];
			var_4525_object->set(var_4499_int, var_4500_object);
			var_4500_object = null;
		}
		}
	Label_8817:
		var_4499_int += 1;
	}
	
}
EMIT "Stack[-8] = 0";


// @pe
void func_6729(int var_2933_int, int var_2934_int, object var_2935_object, object var_2936_object, object var_2937_object, object var_2938_object)
{
	if(var_2934_int == 0) {
		func_746(12, true);
		func_763(12, true, 1);
		int var_2947_int; object var_2948_object; object var_2949_object; object var_2950_object;
		var_2933_int = var_2947_int;
		var_2935_object = var_2948_object;
		var_2936_object = var_2949_object;
		var_2937_object = var_2950_object;
		func_591(12, var_2947_int, var_2948_object, var_2949_object, var_2950_object);
		object var_2951_object;
		var_2938_object = var_2951_object;
		func_255(var_2951_object, 1);
		func_820(12, true, 4);
		func_882(12, false, 4);
	}
	func_729(12, false);
	int var_2962_int; int var_2963_int;
	var_2933_int = var_2962_int;
	var_2934_int = var_2963_int;
	func_2714(12, var_2962_int, var_2963_int);
}


// @pe
void func_9803(int var_5967_int, float var_5968_float)
{
	float var_5972_float;
	var_5968_float = var_5972_float;
	int var_5969_int;
	func_12278(var_5969_int, 530558, 530557, var_5972_float);
	var_5969_int = var_5967_int;
}


// @pe
void func_5708(int var_2662_int, int var_2663_int, object var_2664_object, object var_2665_object, object var_2666_object, object var_2667_object)
{
	if(var_2663_int == 0) {
		func_746(7, true);
		func_763(7, true, 1);
		int var_2676_int; object var_2677_object; object var_2678_object; object var_2679_object;
		var_2662_int = var_2676_int;
		var_2664_object = var_2677_object;
		var_2665_object = var_2678_object;
		var_2666_object = var_2679_object;
		func_591(7, var_2676_int, var_2677_object, var_2678_object, var_2679_object);
		object var_2680_object;
		var_2667_object = var_2680_object;
		func_255(var_2680_object, 1);
		func_820(7, true, 6);
		func_882(7, false, 6);
	}
	func_729(7, false);
	int var_2691_int; int var_2692_int;
	var_2662_int = var_2691_int;
	var_2663_int = var_2692_int;
	func_2714(7, var_2691_int, var_2692_int);
}


// @pe
void func_591(int var_2018_int, int var_2019_int, object var_2020_object, object var_2021_object, object var_2022_object)
{
	int var_2023_int;
	var_2018_int = var_2023_int;
	func_492(var_2023_int, false);
	object var_2025_object;
	var_2020_object = var_2025_object;
	func_213(var_2025_object);
	object var_2026_object;
	var_2021_object = var_2026_object;
	func_213(var_2026_object);
	object var_2027_object;
	var_2022_object = var_2027_object;
	func_213(var_2027_object);
	if(var_2019_int < 8) {
		object var_2031_object;
		var_2020_object = var_2031_object;
		func_526((("pt_blockpost" + (var_2018_int + 1)) + "_1_"), var_2031_object, "pers_patrool", "patrol_stat.xml");
		object var_2057_object;
		var_2022_object = var_2057_object;
		func_548((("pt_fog" + (var_2018_int + 1)) + "_"), var_2057_object);
	} else {
		object var_2084_object;
		var_2020_object = var_2084_object;
		func_526((("pt_blockpost" + (var_2018_int + 1)) + "_1_"), var_2084_object, "pers_soldat", "soldier.xml");
		object var_2093_object;
		var_2021_object = var_2093_object;
		func_526((("pt_blockpost" + (var_2018_int + 1)) + "_2_"), var_2093_object, "pers_sanitar", "sanitar_stat.xml");
		object var_2102_object;
		var_2022_object = var_2102_object;
		func_548((("pt_fog" + (var_2018_int + 1)) + "_"), var_2102_object);
	}
	
}


// @pe
void func_11856(bool var_5300_bool)
{
	int var_5303_int;
	func_106(var_5303_int, "b6q01");
	if(var_5303_int == 0) {
		var_5300_bool = true;
		return 0;
	}
	var_5300_bool = false;
}


// @pe
void func_4690(object var_78_object)
{
	var_78_object->add("dt_house1_union2_05l");
	var_78_object->add("dt_house1_union2_05r");
	var_78_object->add("dt_house2_01");
	var_78_object->add("dt_house2_02");
	var_78_object->add("dt_house2_03");
	var_78_object->add("dt_house2_04");
	var_78_object->add("dt_house2_05");
	var_78_object->add("dt_house3_10_i2");
	var_78_object->add("dt_house3_10");
	var_78_object->add("dt_house3_11_i2");
	var_78_object->add("dt_house3_11");
	var_78_object->add("dt_house3_12_i2");
	var_78_object->add("dt_house3_12");
	var_78_object->add("dt_house_1_06");
	var_78_object->add("dt_house3_07_i2");
	var_78_object->add("dt_house3_07");
}


// @pe
void func_9812(int var_5882_int, float var_5883_float)
{
	float var_5887_float;
	var_5883_float = var_5887_float;
	int var_5884_int;
	func_12278(var_5884_int, 530560, 530559, var_5887_float);
	var_5884_int = var_5882_int;
}


// @pe
void func_11868(bool var_5900_bool)
{
	int var_5903_int;
	func_106(var_5903_int, "b9q03AglajaTalk");
	if(var_5903_int != 0) {
		var_5900_bool = true;
		return 0;
	}
	var_5900_bool = false;
}


// @pe
void func_9821(int var_5945_int, float var_5946_float)
{
	float var_5950_float;
	var_5946_float = var_5950_float;
	int var_5947_int;
	func_12278(var_5947_int, 530562, 530561, var_5950_float);
	var_5947_int = var_5945_int;
}


// @pe
void func_9830(int var_5551_int, float var_5552_float)
{
	float var_5556_float;
	var_5552_float = var_5556_float;
	int var_5553_int;
	func_12278(var_5553_int, 530564, 530563, var_5556_float);
	var_5553_int = var_5551_int;
}


// @pe
void func_11880(bool var_5908_bool)
{
	int var_5911_int;
	func_106(var_5911_int, "b9q03");
	if(var_5911_int == 0) {
		var_5908_bool = true;
		return 0;
	}
	var_5908_bool = false;
}


// @pe
void func_9839(int var_5584_int, float var_5585_float)
{
	float var_5589_float;
	var_5585_float = var_5589_float;
	int var_5586_int;
	func_12278(var_5586_int, 530566, 530565, var_5589_float);
	var_5586_int = var_5584_int;
}


void func_7794(void)
{
	int var_4575_int; int var_4576_int; object var_4577_object;
	@Trace("Cleaning arena...");
	var_4579_object = GlobalVars[11];
	if(var_4579_object != null) {
		var_4581_object = GlobalVars[11];
		var_4581_object->Remove();
		var_4582_object = GlobalVars[12];
		var_4582_object->size(var_4575_int);
		var_4576_int = 0;

		while(var_4576_int < var_4575_int) {
			var_4584_object = GlobalVars[12];
			var_4584_object->get(var_4577_object, var_4576_int);
			@Trigger(var_4577_object, "remove");
			var_4577_object = null;
			var_4576_int += 1;
		}

		var_4587_object = GlobalVars[12];
		var_4587_object->clear();
		func_7723(false);
	}
}


// @pe
void func_11892(bool var_5915_bool)
{
	int var_5918_int;
	func_106(var_5918_int, "b9q03BadInit");
	if(var_5918_int != 0) {
		var_5915_bool = true;
		return 0;
	}
	var_5915_bool = false;
}


void func_8822(void)
{
	object var_4446_object;
	@GetMainOutdoorScene(var_4446_object);
	object var_4447_object;
	@AddScriptedActor(var_4447_object, "big_gun", "big_gun.bin", var_4446_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4447_object, "vagon_martira", "big_gun.bin", var_4446_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4447_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_4446_object, [0.0, 0.0, 0.0]);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_10871(void)
{
	object var_6249_object;
	func_12286(var_6249_object);
	object var_6247_object;
	var_6249_object = var_6247_object;
	object var_6248_object;
	var_6247_object->FindMark(var_6248_object, "b3q01BigVladGotoOspina");
	if(var_6248_object != 0)
		var_6248_object->Remove();
	var_6247_object->FindMark(var_6248_object, "b3q01ButcherGotoBigVlad");
	if(var_6248_object != 0)
		var_6248_object->Remove();
	var_6247_object->FindMark(var_6248_object, "b3q01OspinaGotoButcher");
	if(var_6248_object != 0)
		var_6248_object->Remove();
	var_6247_object->FindMark(var_6248_object, "b3q02GrifGotoDanko");
	if(var_6248_object != 0)
		var_6248_object->Remove();
	var_6247_object->FindMark(var_6248_object, "b3q02GrifGotoNotkin");
	if(var_6248_object != 0)
		var_6248_object->Remove();
	var_6247_object->FindMark(var_6248_object, "b3q02KapellaGotoNotkin");
	if(var_6248_object != 0)
		var_6248_object->Remove();
	var_6247_object->FindMark(var_6248_object, "b3q02NotkinGotoKapella");
	if(var_6248_object != 0)
		var_6248_object->Remove();
	var_6247_object->FindMark(var_6248_object, "b3q03BurahHome");
	if(var_6248_object != 0)
		var_6248_object->Remove();
	bool var_6266_bool;
	func_12261(var_6266_bool, 221);
	bool var_6268_bool;
	func_12261(var_6268_bool, 227);
	bool var_6270_bool;
	func_12261(var_6270_bool, 235);
	bool var_6272_bool;
	func_12261(var_6272_bool, 631);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9848(int var_5595_int, float var_5596_float)
{
	float var_5600_float;
	var_5596_float = var_5600_float;
	int var_5597_int;
	func_12278(var_5597_int, 530568, 530567, var_5600_float);
	var_5597_int = var_5595_int;
}


// @pe
void func_6781(int var_4063_int, int var_4064_int, object var_4065_object, object var_4066_object, object var_4067_object, object var_4068_object)
{
	if(var_4064_int == 0) {
		func_746(12, false);
		func_763(12, false, 1);
		int var_4077_int; object var_4078_object; object var_4079_object; object var_4080_object;
		var_4063_int = var_4077_int;
		var_4065_object = var_4078_object;
		var_4066_object = var_4079_object;
		var_4067_object = var_4080_object;
		func_670(12, var_4077_int, var_4078_object, var_4079_object, var_4080_object);
		object var_4081_object;
		var_4068_object = var_4081_object;
		func_255(var_4081_object, 2);
		func_820(12, false, 4);
		func_882(12, true, 4);
	}
	func_729(12, false);
	int var_4092_int; int var_4093_int;
	var_4063_int = var_4092_int;
	var_4064_int = var_4093_int;
	func_3609(12, var_4092_int, var_4093_int);
}


// @pe
void func_5760(int var_3788_int, int var_3789_int, object var_3790_object, object var_3791_object, object var_3792_object, object var_3793_object)
{
	if(var_3789_int == 0) {
		func_746(7, false);
		func_763(7, false, 1);
		int var_3802_int; object var_3803_object; object var_3804_object; object var_3805_object;
		var_3788_int = var_3802_int;
		var_3790_object = var_3803_object;
		var_3791_object = var_3804_object;
		var_3792_object = var_3805_object;
		func_670(7, var_3802_int, var_3803_object, var_3804_object, var_3805_object);
		object var_3806_object;
		var_3793_object = var_3806_object;
		func_255(var_3806_object, 2);
		func_820(7, false, 6);
		func_882(7, true, 6);
	}
	func_729(7, false);
	int var_3817_int; int var_3818_int;
	var_3788_int = var_3817_int;
	var_3789_int = var_3818_int;
	func_3609(7, var_3817_int, var_3818_int);
}


// @pe
void func_9857(int var_5820_int, float var_5821_float)
{
	float var_5825_float;
	var_5821_float = var_5825_float;
	int var_5822_int;
	func_12278(var_5822_int, 529886, 529885, var_5825_float);
	var_5822_int = var_5820_int;
}


// @pe
void func_11904(bool var_5864_bool)
{
	int var_5867_int;
	func_106(var_5867_int, "b11q04");
	if(var_5867_int == 0) {
		var_5864_bool = true;
		return 0;
	}
	var_5864_bool = false;
}


// @pe
void func_4740(int var_1029_int, int var_1030_int, object var_1031_object, object var_1032_object, object var_1033_object, object var_1034_object)
{
	if(var_1030_int == 0) {
		func_746(2, false);
		func_763(2, false, 1);
		int var_1042_int; int var_1043_int; object var_1044_object; object var_1045_object; object var_1046_object;
		var_1042_int = 2;
		var_1029_int = var_1043_int;
		var_1031_object = var_1044_object;
		var_1032_object = var_1045_object;
		var_1033_object = var_1046_object;
		func_572(var_1043_int, var_1044_object, var_1045_object, var_1046_object);
		object var_1047_object;
		var_1034_object = var_1047_object;
		func_255(var_1047_object, 0);
		func_820(2, false, 5);
		func_882(2, false, 5);
	}
	int var_1056_int;
	var_1030_int = var_1056_int;
	func_1000(2, var_1056_int);
	int var_1058_int; int var_1059_int;
	var_1029_int = var_1058_int;
	var_1030_int = var_1059_int;
	func_1847(2, var_1058_int, var_1059_int);
}


// @pe
void func_9866(int var_5120_int, float var_5121_float)
{
	float var_5125_float;
	var_5121_float = var_5125_float;
	int var_5122_int;
	func_12278(var_5122_int, 521908, 521907, var_5125_float);
	var_5122_int = var_5120_int;
}


void func_8843(bool var_2_bool, int var_3_int)
{
	int var_11_int; int var_12_int; int var_13_int; float var_14_float; int var_15_int; int var_16_int;
	bool var_17_bool = false;
	if(var_3_int > 16384) {
		if(var_3_int < 16396)
			var_17_bool = true;
	}
	if(var_17_bool != 0) {
		var_11_int = var_3_int - 16384;
		int var_23_int;
		var_11_int = var_23_int;
		func_14686(var_23_int);
		var_2_bool = true;
		return 12;
	}
	bool var_199_bool = false;
	if(var_3_int > 32768) {
		if(var_3_int < 33056)
			var_199_bool = true;
	}
	if(var_199_bool != 0) {
		var_12_int = (var_3_int - 32768) / 24;
		var_13_int = (var_3_int - 32768) % 24;
		@GetGameTime(var_14_float);
		var_15_int = var_14_float / 24;
		var_14_float = var_16_int;
		var_16_int = var_16_int % 24;
		int var_212_int; int var_213_int; int var_214_int; int var_215_int;
		var_12_int = var_212_int;
		var_13_int = var_213_int;
		var_15_int = var_214_int;
		var_16_int = var_215_int;
		func_8981(var_212_int, var_213_int, var_214_int, var_215_int);
		var_2_bool = true;
		return 12;
	}
	var_2_bool = false;
}


// @pe
void func_11916(bool var_5484_bool)
{
	int var_5487_int;
	func_106(var_5487_int, "b3KapellaVisit");
	if(var_5487_int != 0) {
		var_5484_bool = true;
		return 0;
	}
	var_5484_bool = false;
}


// @pe
void func_9875(int var_5611_int, float var_5612_float)
{
	float var_5616_float;
	var_5612_float = var_5616_float;
	int var_5613_int;
	func_12278(var_5613_int, 530492, 530491, var_5616_float);
	var_5613_int = var_5611_int;
}


void func_7828(void)
{
	object var_324_object;
	@GetMainOutdoorScene(var_324_object);
	int var_325_int = 1;
	
	while(var_325_int <= 17) {
		var_328_object = GlobalVars[15];
		object var_329_object; object var_330_object;
		var_324_object = var_330_object;
		func_133(var_329_object, var_330_object, ("pt_bull" + var_325_int), "pers_bull", "bull.xml");
		var_328_object->add(var_329_object);
		var_325_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";


// @pe
void func_11928(bool var_5721_bool)
{
	int var_5724_int;
	func_106(var_5724_int, "b8GeorgVisit");
	if(var_5724_int != 0) {
		var_5721_bool = true;
		return 0;
	}
	var_5721_bool = false;
}


void func_2714(int var_2690_int, int var_2691_int, int var_2692_int)
{
	int var_2695_int; int var_2696_int;
	bool var_2697_bool = false;
	if(var_2692_int > 8) {
		if(var_2692_int < 21)
			var_2697_bool = true;
	}
	if(var_2697_bool != 0) {
		int var_2702_int;
		var_2690_int = var_2702_int;
		func_453(var_2702_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2706_int;
		var_2690_int = var_2706_int;
		func_453(var_2706_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2710_int;
		var_2690_int = var_2710_int;
		func_453(var_2710_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2714_int;
		var_2690_int = var_2714_int;
		func_479(var_2714_int, "fog", "fog.xml", 6);
		if(var_2691_int >= 5) {
			int var_2720_int;
			var_2690_int = var_2720_int;
			func_479(var_2720_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2725_float; int var_2726_int;
		func_1205(var_2725_float, var_2726_int);
		if((1 * var_2725_float) != 0) {
			int var_2728_int; int var_2731_int;
			var_2690_int = var_2728_int;
			var_2695_int = var_2731_int;
			func_453(var_2728_int, "pers_bomber", "bomber.xml", var_2731_int);
		}
	} else {
		int var_2769_int;
		var_2690_int = var_2769_int;
		func_453(var_2769_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2773_int;
		var_2690_int = var_2773_int;
		func_453(var_2773_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2777_int;
		var_2690_int = var_2777_int;
		func_453(var_2777_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2781_int;
		var_2690_int = var_2781_int;
		func_479(var_2781_int, "fog", "fog.xml", 6);
		if(var_2726_int >= 5) {
			int var_2787_int;
			var_2690_int = var_2787_int;
			func_479(var_2787_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2792_float; int var_2793_int;
		var_2691_int = var_2793_int;
		func_1205(var_2792_float, var_2793_int);
		if((1 * var_2792_float) == 0) goto Label_2832;
		int var_2795_int; int var_2798_int;
		var_2690_int = var_2795_int;
		var_2696_int = var_2798_int;
		func_453(var_2795_int, "pers_bomber", "bomber.xml", var_2798_int);
	}
Label_2832:
	int var_2732_int;
	var_2690_int = var_2732_int;
	func_466(var_2732_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2738_int;
	var_2690_int = var_2738_int;
	func_466(var_2738_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2744_int;
	var_2690_int = var_2744_int;
	func_466(var_2744_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2750_int;
	var_2690_int = var_2750_int;
	func_466(var_2750_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2756_bool; int var_2757_int; int var_2758_int;
	var_2691_int = var_2757_int;
	var_2692_int = var_2758_int;
	func_1295(var_2756_bool, var_2757_int, var_2758_int);
	if(var_2756_bool != 0) {
		int var_2759_int;
		var_2690_int = var_2759_int;
		func_453(var_2759_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2763_bool; int var_2764_int;
	var_2691_int = var_2764_int;
	func_1322(var_2763_bool, var_2764_int);
	if(var_2763_bool != 0) {
		int var_2765_int;
		var_2690_int = var_2765_int;
		func_453(var_2765_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_9884(int var_5562_int, float var_5563_float)
{
	float var_5567_float;
	var_5563_float = var_5567_float;
	int var_5564_int;
	func_12278(var_5564_int, 530570, 530569, var_5567_float);
	var_5564_int = var_5562_int;
}


// @pe
void func_670(int var_3199_int, int var_3200_int, object var_3201_object, object var_3202_object, object var_3203_object)
{
	int var_3204_int;
	var_3199_int = var_3204_int;
	func_492(var_3204_int, false);
	object var_3206_object;
	var_3201_object = var_3206_object;
	func_213(var_3206_object);
	object var_3207_object;
	var_3202_object = var_3207_object;
	func_213(var_3207_object);
	object var_3208_object;
	var_3203_object = var_3208_object;
	func_213(var_3208_object);
	if(var_3200_int < 8) {
		object var_3212_object;
		var_3201_object = var_3212_object;
		func_526((("pt_blockpost" + (var_3199_int + 1)) + "_1_"), var_3212_object, "pers_patrool", "patrol_stat.xml");
	} else {
		object var_3221_object;
		var_3201_object = var_3221_object;
		func_526((("pt_blockpost" + (var_3199_int + 1)) + "_1_"), var_3221_object, "pers_soldat", "soldier.xml");
		object var_3230_object;
		var_3202_object = var_3230_object;
		func_526((("pt_blockpost" + (var_3199_int + 1)) + "_2_"), var_3230_object, "pers_sanitar", "sanitar_stat.xml");
	}
	
}


// @pe
void func_11940(bool var_5603_bool)
{
	int var_5606_int;
	func_106(var_5606_int, "b10MatVisit");
	if(var_5606_int != 0) {
		var_5603_bool = true;
		return 0;
	}
	var_5603_bool = false;
}


// @pe
void func_9893(int var_5890_int, float var_5891_float)
{
	float var_5895_float;
	var_5891_float = var_5895_float;
	int var_5892_int;
	func_12278(var_5892_int, 529890, 529889, var_5895_float);
	var_5892_int = var_5890_int;
}


void func_7851(void)
{
	var_4487_object = GlobalVars[15];
	object var_4486_object;
	var_4487_object = var_4486_object;
	func_213(var_4486_object);
}


// @pe
void func_9902(int var_5836_int, float var_5837_float)
{
	float var_5841_float;
	var_5837_float = var_5841_float;
	int var_5838_int;
	func_12278(var_5838_int, 529894, 529893, var_5841_float);
	var_5838_int = var_5836_int;
}


// @pe
void func_11952(bool var_5619_bool)
{
	int var_5622_int;
	func_106(var_5622_int, "b6ViktorVisit");
	if(var_5622_int != 0) {
		var_5619_bool = true;
		return 0;
	}
	var_5619_bool = false;
}


// @pe
void func_6833(object var_280_object)
{
	var_280_object->add("r7_house2_01");
	var_280_object->add("r7_house2_02");
	var_280_object->add("r7_house2_03");
	var_280_object->add("r7_house2_04");
	var_280_object->add("r7_house3_03_i2");
	var_280_object->add("r7_house3_03");
	var_280_object->add("r7_house3_04_i2");
	var_280_object->add("r7_house3_04");
	var_280_object->add("r7_house3_05_i2");
	var_280_object->add("r7_house3_05");
	var_280_object->add("r7_house3_06_i2");
	var_280_object->add("r7_house3_01_i2");
	var_280_object->add("r7_house3_01");
	var_280_object->add("r7_house3_02_i2");
	var_280_object->add("r7_house3_02");
}


void func_7858(void)
{
	bool var_33_bool; int var_34_int; bool var_35_bool; int var_36_int; bool var_37_bool; object var_38_object;
	var_39_object = GlobalVars[15];
	object var_40_object;
	func_100(var_40_object);
	var_40_object = var_39_object;
	GlobalVars[15] = var_39_object;
	var_43_object = GlobalVars[13];
	object var_44_object;
	func_100(var_44_object);
	var_44_object = var_43_object;
	GlobalVars[13] = var_43_object;
	var_45_object = GlobalVars[8];
	object var_46_object;
	func_100(var_46_object);
	var_46_object = var_45_object;
	GlobalVars[8] = var_45_object;
	var_47_object = GlobalVars[9];
	object var_48_object;
	func_100(var_48_object);
	var_48_object = var_47_object;
	GlobalVars[9] = var_47_object;
	var_49_object = GlobalVars[10];
	object var_50_object;
	func_100(var_50_object);
	var_50_object = var_49_object;
	GlobalVars[10] = var_49_object;
	int var_29_int = 0;
	
	while(var_29_int < 16) {
		var_53_object = GlobalVars[8];
		object var_54_object;
		func_100(var_54_object);
		var_53_object->add(var_54_object);
		var_55_object = GlobalVars[9];
		object var_56_object;
		func_100(var_56_object);
		var_55_object->add(var_56_object);
		var_57_object = GlobalVars[10];
		object var_58_object;
		func_100(var_58_object);
		var_57_object->add(var_58_object);
		var_29_int += 1;
	}
	
	object var_30_object;
	@CreateStringVector(var_30_object);
	var_60_object = GlobalVars[13];
	var_60_object->add(var_30_object);
	object var_61_object;
	var_30_object = var_61_object;
	func_4335();
	@CreateStringVector(var_30_object);
	var_62_object = GlobalVars[13];
	var_62_object->add(var_30_object);
	object var_63_object;
	var_30_object = var_63_object;
	func_4493(var_63_object);
	@CreateStringVector(var_30_object);
	var_77_object = GlobalVars[13];
	var_77_object->add(var_30_object);
	object var_78_object;
	var_30_object = var_78_object;
	func_4690(var_78_object);
	@CreateStringVector(var_30_object);
	var_95_object = GlobalVars[13];
	var_95_object->add(var_30_object);
	object var_96_object;
	var_30_object = var_96_object;
	func_4896(var_96_object);
	@CreateStringVector(var_30_object);
	var_121_object = GlobalVars[13];
	var_121_object->add(var_30_object);
	object var_122_object;
	var_30_object = var_122_object;
	func_5126(var_122_object);
	@CreateStringVector(var_30_object);
	var_143_object = GlobalVars[13];
	var_143_object->add(var_30_object);
	object var_144_object;
	var_30_object = var_144_object;
	func_5344(var_144_object);
	@CreateStringVector(var_30_object);
	var_174_object = GlobalVars[13];
	var_174_object->add(var_30_object);
	object var_175_object;
	var_30_object = var_175_object;
	func_5589();
	@CreateStringVector(var_30_object);
	var_176_object = GlobalVars[13];
	var_176_object->add(var_30_object);
	object var_177_object;
	var_30_object = var_177_object;
	func_5612(var_177_object);
	@CreateStringVector(var_30_object);
	var_192_object = GlobalVars[13];
	var_192_object->add(var_30_object);
	object var_193_object;
	var_30_object = var_193_object;
	func_5812(var_193_object);
	@CreateStringVector(var_30_object);
	var_208_object = GlobalVars[13];
	var_208_object->add(var_30_object);
	object var_209_object;
	var_30_object = var_209_object;
	func_6012(var_209_object);
	@CreateStringVector(var_30_object);
	var_225_object = GlobalVars[13];
	var_225_object->add(var_30_object);
	object var_226_object;
	var_30_object = var_226_object;
	func_6215(var_226_object);
	@CreateStringVector(var_30_object);
	var_244_object = GlobalVars[13];
	var_244_object->add(var_30_object);
	object var_245_object;
	var_30_object = var_245_object;
	func_6424(var_245_object);
	@CreateStringVector(var_30_object);
	var_264_object = GlobalVars[13];
	var_264_object->add(var_30_object);
	object var_265_object;
	var_30_object = var_265_object;
	func_6636(var_265_object);
	@CreateStringVector(var_30_object);
	var_279_object = GlobalVars[13];
	var_279_object->add(var_30_object);
	object var_280_object;
	var_30_object = var_280_object;
	func_6833(var_280_object);
	@CreateStringVector(var_30_object);
	var_296_object = GlobalVars[13];
	var_296_object->add(var_30_object);
	object var_297_object;
	var_30_object = var_297_object;
	func_7036(var_297_object);
	@CreateStringVector(var_30_object);
	var_312_object = GlobalVars[13];
	var_312_object->add(var_30_object);
	object var_313_object;
	var_30_object = var_313_object;
	func_7236(var_313_object);
	func_7828();
	object var_31_object;
	@GetMainOutdoorScene(var_31_object);
	var_349_object = GlobalVars[6];
	object var_350_object;
	func_100(var_350_object);
	var_350_object = var_349_object;
	GlobalVars[6] = var_349_object;
	int var_32_int = 0;
	
	for(;;) {
		var_31_object->GetLocator(("pt_plant" + (var_32_int + 1)), var_33_bool);
		if(!var_33_bool) { //@nz
		} else {
			var_32_int += 1;
		}
		var_356_object = GlobalVars[6];
		var_356_object->resize(var_32_int);
		@Trace("Total plants: " + var_32_int);
		var_359_object = GlobalVars[7];
		object var_360_object;
		func_100(var_360_object);
		var_360_object = var_359_object;
		GlobalVars[7] = var_359_object;
		var_34_int = 0;

		for(;;) {
			var_31_object->GetLocator(("pt_grave_supply" + (var_34_int + 1)), var_35_bool);
			if(!var_35_bool) { //@nz
			} else {
				var_34_int += 1;
			}
			var_366_object = GlobalVars[7];
			var_366_object->resize(var_34_int);
			@Trace("Total grave supplies: " + var_34_int);
			var_369_object = GlobalVars[14];
			object var_370_object;
			func_100(var_370_object);
			var_370_object = var_369_object;
			GlobalVars[14] = var_369_object;

			for(;;) {
				var_31_object->GetLocator(("pt_bonfire" + (0 + 1)), var_37_bool);
				if(!var_37_bool) //@nz
					break;
				var_378_object = GlobalVars[14];
				var_378_object->add(Obj());
				int var_379_int;
				var_36_int = var_379_int;
				func_7635(var_379_int);
				var_38_object = null;
				var_36_int += 1;
			}
			@Trace("Total bonfires: " + var_36_int);

		}

	}
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


// @pe
void func_5812(object var_193_object)
{
	var_193_object->add("r2_house_2_01");
	var_193_object->add("r2_house_2_02");
	var_193_object->add("r2_house_2_03");
	var_193_object->add("r2_house7_02");
	var_193_object->add("r2_house01_01");
	var_193_object->add("r2_house7_01");
	var_193_object->add("r2_house3_01_i2");
	var_193_object->add("r2_house3_01");
	var_193_object->add("r2_house3_02_i2");
	var_193_object->add("r2_house3_02");
	var_193_object->add("r2_house3_03_i2");
	var_193_object->add("r2_house3_03");
	var_193_object->add("r3_house7_01");
	var_193_object->add("r3_house7_02");
}


// @pe
void func_9911(int var_5975_int, float var_5976_float)
{
	float var_5980_float;
	var_5976_float = var_5980_float;
	int var_5977_int;
	func_12278(var_5977_int, 529888, 529887, var_5980_float);
	var_5977_int = var_5975_int;
}


// @pe
void func_4792(int var_2407_int, int var_2408_int, object var_2409_object, object var_2410_object, object var_2411_object, object var_2412_object)
{
	if(var_2408_int == 0) {
		func_746(2, true);
		func_763(2, true, 1);
		int var_2421_int; object var_2422_object; object var_2423_object; object var_2424_object;
		var_2407_int = var_2421_int;
		var_2409_object = var_2422_object;
		var_2410_object = var_2423_object;
		var_2411_object = var_2424_object;
		func_591(2, var_2421_int, var_2422_object, var_2423_object, var_2424_object);
		object var_2425_object;
		var_2412_object = var_2425_object;
		func_255(var_2425_object, 1);
		func_820(2, true, 5);
		func_882(2, false, 5);
	}
	func_729(2, false);
	int var_2436_int; int var_2437_int;
	var_2407_int = var_2436_int;
	var_2408_int = var_2437_int;
	func_2894(2, var_2436_int, var_2437_int);
}


// @pe
void func_11964(bool var_5639_bool)
{
	int var_5642_int;
	func_106(var_5642_int, "b2AndreiVisit");
	if(var_5642_int != 0) {
		var_5639_bool = true;
		return 0;
	}
	var_5639_bool = false;
}


// @pe
void func_9920(int var_4771_int, float var_4772_float)
{
	float var_4776_float;
	var_4772_float = var_4776_float;
	int var_4773_int;
	func_12278(var_4773_int, 522099, 522098, var_4776_float);
	var_4773_int = var_4771_int;
}


void func_8898(void)
{
	float var_424_float; int var_426_int; float var_427_float; int var_428_int; object var_429_object; object var_430_object;
	@GetGameTime(var_424_float);
	int var_425_int = 1;
	
	while(var_425_int < 12) {
		@SetTimeEvent((16384 + var_425_int), (24 * var_425_int));
		var_425_int += 1;
	}
	
	
	for(;;) {
		if(0 < 288) {
			var_426_int = var_427_float;
			if(var_427_float < var_424_float) {
			} else {
			@SetTimeEvent((32768 + var_426_int), var_427_float);
		}

		while(0 < 16) {
			string var_446_string; int var_447_int;
			var_428_int = var_447_int;
			func_249(var_446_string, var_447_int);
			@SetVariable(var_446_string, 0);
			int var_452_int;
			var_428_int = var_452_int;
			func_746(var_452_int, false);
			var_428_int += 1;
		}

		int var_465_int; int var_467_int;
		var_465_int = var_424_float % 24;
		var_467_int = var_424_float % 24;
		func_8981(0, var_465_int, 0, var_467_int);
		@FindActor(var_429_object, "dt_house_1_07");
		var_429_object->EnableSubset(200, false);
		@GetMainOutdoorScene(var_430_object);
		bool var_4360_bool = true;
		var_4362_bool = var_424_float < 7;
		if(var_4362_bool != 1) {
			var_4364_bool = var_424_float >= 20;
			if(var_4364_bool != 1)
				var_4360_bool = false;
		}
		var_430_object->SwitchLights(0, var_4360_bool);
		}
		var_426_int += 1;
	}
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_10951(void)
{
	object var_6289_object;
	func_12286(var_6289_object);
	object var_6287_object;
	var_6289_object = var_6287_object;
	object var_6288_object;
	var_6287_object->FindMark(var_6288_object, "b4q01DankoGotoLara");
	if(var_6288_object != 0)
		var_6288_object->Remove();
	var_6287_object->FindMark(var_6288_object, "b4q01DankoGotoLaraSelf");
	if(var_6288_object != 0)
		var_6288_object->Remove();
	var_6287_object->FindMark(var_6288_object, "b4q01LaraGotoRubin");
	if(var_6288_object != 0)
		var_6288_object->Remove();
	var_6287_object->FindMark(var_6288_object, "b4Spi4kaMapMark");
	if(var_6288_object != 0)
		var_6288_object->Remove();
	bool var_6298_bool;
	func_12261(var_6298_bool, 213);
	bool var_6300_bool;
	func_12261(var_6300_bool, 216);
	bool var_6302_bool;
	func_12261(var_6302_bool, 527);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_11976(bool var_5737_bool)
{
	int var_5740_int;
	func_106(var_5740_int, "b4Spi4kaVisit");
	if(var_5740_int != 0) {
		var_5737_bool = true;
		return 0;
	}
	var_5737_bool = false;
}


// @pe
void func_9929(int var_5828_int, float var_5829_float)
{
	float var_5833_float;
	var_5829_float = var_5833_float;
	int var_5830_int;
	func_12278(var_5830_int, 529892, 529891, var_5833_float);
	var_5830_int = var_5828_int;
}


// @pe
void func_9938(int var_5871_int, float var_5872_float)
{
	float var_5876_float;
	var_5872_float = var_5876_float;
	int var_5873_int;
	func_12278(var_5873_int, 530533, 530532, var_5876_float);
	var_5873_int = var_5871_int;
}


// @pe
void func_11988(bool var_5500_bool)
{
	int var_5503_int;
	func_106(var_5503_int, "b10KapellaVisit");
	if(var_5503_int != 0) {
		var_5500_bool = true;
		return 0;
	}
	var_5500_bool = false;
}


void func_3797(int var_3564_int, int var_3565_int, int var_3566_int)
{
	int var_3571_int; int var_3572_int; int var_3573_int; int var_3574_int;
	bool var_3575_bool = false;
	if(var_3566_int > 8) {
		if(var_3566_int < 21)
			var_3575_bool = true;
	}
	if(var_3575_bool != 0) {
		int var_3580_int;
		var_3564_int = var_3580_int;
		func_453(var_3580_int, "pers_rat", "rat.xml", 2);
		int var_3584_int;
		var_3564_int = var_3584_int;
		func_453(var_3584_int, "pers_alkash", "alkash.xml", 2);
		int var_3588_int;
		var_3564_int = var_3588_int;
		func_453(var_3588_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3593_float; int var_3594_int;
		func_1115(var_3593_float, var_3594_int);
		if((2 * var_3593_float) != 0) {
			int var_3596_int; int var_3599_int;
			var_3564_int = var_3596_int;
			var_3571_int = var_3599_int;
			func_453(var_3596_int, "pers_grabitel", "grabitel.xml", var_3599_int);
		}
		if((var_3594_int + 1) >= 2) {
			int var_3604_int;
			var_3564_int = var_3604_int;
			func_453(var_3604_int, "pers_patrool", "patrol.xml", 2);
			bool var_3608_bool; int var_3609_int;
			var_3565_int = var_3609_int;
			func_1322(var_3608_bool, var_3609_int);
			if(var_3608_bool != 0) {
				int var_3610_int;
				var_3564_int = var_3610_int;
				func_453(var_3610_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3615_float; int var_3616_int;
		var_3565_int = var_3616_int;
		func_1205(var_3615_float, var_3616_int);
		if((1 * var_3615_float) != 0) {
			int var_3618_int; int var_3621_int;
			var_3564_int = var_3618_int;
			var_3572_int = var_3621_int;
			func_453(var_3618_int, "pers_bomber", "bomber.xml", var_3621_int);
		}
	} else {
		int var_3635_int;
		var_3564_int = var_3635_int;
		func_453(var_3635_int, "pers_rat", "rat.xml", 4);
		int var_3639_int;
		var_3564_int = var_3639_int;
		func_453(var_3639_int, "pers_alkash", "alkash.xml", 1);
		int var_3643_int;
		var_3564_int = var_3643_int;
		func_453(var_3643_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3648_float; int var_3649_int;
		func_1115(var_3648_float, var_3649_int);
		if((3 * var_3648_float) != 0) {
			int var_3651_int; int var_3654_int;
			var_3564_int = var_3651_int;
			var_3573_int = var_3654_int;
			func_453(var_3651_int, "pers_grabitel", "grabitel.xml", var_3654_int);
		}
		if((var_3649_int + 1) >= 2) {
			int var_3659_int;
			var_3564_int = var_3659_int;
			func_453(var_3659_int, "pers_patrool", "patrol.xml", 1);
			bool var_3663_bool; int var_3664_int;
			var_3565_int = var_3664_int;
			func_1322(var_3663_bool, var_3664_int);
			if(var_3663_bool != 0) {
				int var_3665_int;
				var_3564_int = var_3665_int;
				func_453(var_3665_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3670_float; int var_3671_int;
		var_3565_int = var_3671_int;
		func_1205(var_3670_float, var_3671_int);
		if((1 * var_3670_float) == 0) goto Label_3959;
		int var_3673_int; int var_3676_int;
		var_3564_int = var_3673_int;
		var_3574_int = var_3676_int;
		func_453(var_3673_int, "pers_bomber", "bomber.xml", var_3676_int);
	}
Label_3959:
	bool var_3622_bool; int var_3623_int; int var_3624_int;
	var_3565_int = var_3623_int;
	var_3566_int = var_3624_int;
	func_1295(var_3622_bool, var_3623_int, var_3624_int);
	if(var_3622_bool != 0) {
		int var_3625_int;
		var_3564_int = var_3625_int;
		func_453(var_3625_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3629_bool; int var_3630_int;
	var_3565_int = var_3630_int;
	func_1322(var_3629_bool, var_3630_int);
	if(var_3629_bool != 0) {
		int var_3631_int;
		var_3564_int = var_3631_int;
		func_453(var_3631_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


void func_729(int var_737_int, bool var_738_bool)
{
	object var_741_object;
	@GetMainOutdoorScene(var_741_object);
	if(var_741_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_741_object->EnableSubsets((var_737_int + 1), 100, var_738_bool, true);
}
EMIT "Stack[-2] = 0";


// @pe
void func_9947(int var_5573_int, float var_5574_float)
{
	float var_5578_float;
	var_5574_float = var_5578_float;
	int var_5575_int;
	func_12278(var_5575_int, 530572, 530571, var_5578_float);
	var_5575_int = var_5573_int;
}


// @pe
void func_6880(int var_1736_int, int var_1737_int, object var_1738_object, object var_1739_object, object var_1740_object, object var_1741_object)
{
	if(var_1737_int == 0) {
		func_746(13, false);
		func_763(13, false, 1);
		int var_1749_int; int var_1750_int; object var_1751_object; object var_1752_object; object var_1753_object;
		var_1749_int = 13;
		var_1736_int = var_1750_int;
		var_1738_object = var_1751_object;
		var_1739_object = var_1752_object;
		var_1740_object = var_1753_object;
		func_572(var_1750_int, var_1751_object, var_1752_object, var_1753_object);
		object var_1754_object;
		var_1741_object = var_1754_object;
		func_255(var_1754_object, 0);
		func_820(13, false, 4);
		func_882(13, false, 4);
	}
	int var_1763_int;
	var_1737_int = var_1763_int;
	func_1000(13, var_1763_int);
	int var_1765_int; int var_1766_int;
	var_1736_int = var_1765_int;
	var_1737_int = var_1766_int;
	func_1574(13, var_1765_int, var_1766_int);
}


// @pe
void func_5856(int var_1571_int, int var_1572_int, object var_1573_object, object var_1574_object, object var_1575_object, object var_1576_object)
{
	if(var_1572_int == 0) {
		func_746(8, false);
		func_763(8, false, 1);
		int var_1584_int; int var_1585_int; object var_1586_object; object var_1587_object; object var_1588_object;
		var_1584_int = 8;
		var_1571_int = var_1585_int;
		var_1573_object = var_1586_object;
		var_1574_object = var_1587_object;
		var_1575_object = var_1588_object;
		func_572(var_1585_int, var_1586_object, var_1587_object, var_1588_object);
		object var_1589_object;
		var_1576_object = var_1589_object;
		func_255(var_1589_object, 0);
		func_820(8, false, 4);
		func_882(8, false, 4);
	}
	int var_1598_int;
	var_1572_int = var_1598_int;
	func_933(8, var_1598_int);
	int var_1600_int; int var_1601_int;
	var_1571_int = var_1600_int;
	var_1572_int = var_1601_int;
	func_1574(8, var_1600_int, var_1601_int);
}


// @pe
void func_12000(bool var_5669_bool)
{
	int var_5672_int;
	func_106(var_5672_int, "b9BlockVisit");
	if(var_5672_int != 0) {
		var_5669_bool = true;
		return 0;
	}
	var_5669_bool = false;
}


// @pe
void func_9956(int var_4892_int, float var_4893_float)
{
	float var_4897_float;
	var_4893_float = var_4897_float;
	int var_4894_int;
	func_12278(var_4894_int, 522713, 522712, var_4897_float);
	var_4894_int = var_4892_int;
}


void func_746(int var_452_int, bool var_453_bool)
{
	object var_456_object;
	@GetMainOutdoorScene(var_456_object);
	if(var_456_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_456_object->EnableSubsets((var_452_int + 1), 200, var_453_bool, false);
}
EMIT "Stack[-2] = 0";


// @pe
void func_4844(int var_3536_int, int var_3537_int, object var_3538_object, object var_3539_object, object var_3540_object, object var_3541_object)
{
	if(var_3537_int == 0) {
		func_746(2, false);
		func_763(2, false, 1);
		int var_3550_int; object var_3551_object; object var_3552_object; object var_3553_object;
		var_3536_int = var_3550_int;
		var_3538_object = var_3551_object;
		var_3539_object = var_3552_object;
		var_3540_object = var_3553_object;
		func_670(2, var_3550_int, var_3551_object, var_3552_object, var_3553_object);
		object var_3554_object;
		var_3541_object = var_3554_object;
		func_255(var_3554_object, 2);
		func_820(2, false, 5);
		func_882(2, true, 5);
	}
	func_729(2, false);
	int var_3565_int; int var_3566_int;
	var_3536_int = var_3565_int;
	var_3537_int = var_3566_int;
	func_3797(2, var_3565_int, var_3566_int);
}


// @pe
void func_12012(bool var_5516_bool)
{
	int var_5519_int;
	func_106(var_5519_int, "b5MladVladVisit");
	if(var_5519_int != 0) {
		var_5516_bool = true;
		return 0;
	}
	var_5516_bool = false;
}


// @pe
void func_9965(int var_4708_int, float var_4709_float)
{
	float var_4713_float;
	var_4709_float = var_4713_float;
	int var_4710_int;
	func_12278(var_4710_int, 522715, 522714, var_4713_float);
	var_4710_int = var_4708_int;
}


// @pe
void func_9974(int var_4665_int, float var_4666_float)
{
	float var_4670_float;
	var_4666_float = var_4670_float;
	int var_4667_int;
	func_12278(var_4667_int, 522719, 522718, var_4670_float);
	var_4667_int = var_4665_int;
}


void func_10999(void)
{
	object var_6360_object;
	func_12286(var_6360_object);
	object var_6358_object;
	var_6360_object = var_6358_object;
	object var_6359_object;
	var_6358_object->FindMark(var_6359_object, "b5q01DankoGotoAndrei");
	if(var_6359_object != 0)
		var_6359_object->Remove();
	var_6358_object->FindMark(var_6359_object, "b5q01DankoGotoOspina");
	if(var_6359_object != 0)
		var_6359_object->Remove();
	var_6358_object->FindMark(var_6359_object, "b5q01VeraGotoStvorki");
	if(var_6359_object != 0)
		var_6359_object->Remove();
	var_6358_object->FindMark(var_6359_object, "b5q01GathererWife");
	if(var_6359_object != 0)
		var_6359_object->Remove();
	bool var_6369_bool;
	func_12261(var_6369_bool, 238);
	bool var_6371_bool;
	func_12261(var_6371_bool, 249);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_12024(bool var_5370_bool)
{
	int var_5373_int;
	func_106(var_5373_int, "resque_list");
	if(var_5373_int != 0) {
		var_5370_bool = true;
		return 0;
	}
	var_5370_bool = false;
}


void func_763(int var_528_int, bool var_529_bool, int var_530_int)
{
	string var_538_string; object var_539_object; int var_540_int; string var_541_string; object var_542_object; int var_543_int; object var_544_object;
	var_538_string = "street_rags" + (var_528_int + 1);
	if(var_529_bool != 0) {
		@GetMainOutdoorScene(var_539_object);
		if(var_539_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_540_int = 1;

		for(;;) {
			if(var_540_int <= var_530_int) {
				var_541_string = (var_538_string + "_") + var_540_int;
				@FindActor(var_542_object, var_541_string);
				if(!var_542_object) //@nz
					@AddActor(var_542_object, var_541_string, var_539_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "do_invis.xml");
				else
					var_542_object->RemoveOnUnload(false);
			var_539_object = null;
	} else {
			var_543_int = 1;

			for(;;) {
				if(!(var_543_int <= var_530_int)) goto Label_819;
				@FindActor(var_544_object, ((var_538_string + "_") + var_543_int));
				if(var_544_object != 0)
					var_544_object->RemoveOnUnload();
				var_544_object = null;
				var_543_int += 1;
			}
	}
	Label_819:
		return 14;

		}
		var_542_object = null;
		var_540_int += 1;
	}
	
}


// @pe
void func_9983(int var_4884_int, float var_4885_float)
{
	float var_4889_float;
	var_4885_float = var_4889_float;
	int var_4886_int;
	func_12278(var_4886_int, 522717, 522716, var_4889_float);
	var_4886_int = var_4884_int;
}


// @pe
void func_12036(bool var_6314_bool)
{
	int var_6317_int;
	func_106(var_6317_int, "b3BigVladVisit");
	if(var_6317_int != 0) {
		var_6314_bool = true;
		return 0;
	}
	var_6314_bool = false;
}


// @pe
void func_9992(int var_5812_int, float var_5813_float)
{
	float var_5817_float;
	var_5813_float = var_5817_float;
	int var_5814_int;
	func_12278(var_5814_int, 530574, 530573, var_5817_float);
	var_5814_int = var_5812_int;
}


// @pe
void func_12048(bool var_4676_bool)
{
	int var_4679_int;
	func_106(var_4679_int, "b3DankoVisit");
	if(var_4679_int != 0) {
		var_4676_bool = true;
		return 0;
	}
	var_4676_bool = false;
}


// @pe
void func_10001(int var_5081_int, float var_5082_float)
{
	float var_5086_float;
	var_5082_float = var_5086_float;
	int var_5083_int;
	func_12278(var_5083_int, 529840, 529839, var_5086_float);
	var_5083_int = var_5081_int;
}


// @pe
void func_6932(int var_2966_int, int var_2967_int, object var_2968_object, object var_2969_object, object var_2970_object, object var_2971_object)
{
	if(var_2967_int == 0) {
		func_746(13, true);
		func_763(13, true, 1);
		int var_2980_int; object var_2981_object; object var_2982_object; object var_2983_object;
		var_2966_int = var_2980_int;
		var_2968_object = var_2981_object;
		var_2969_object = var_2982_object;
		var_2970_object = var_2983_object;
		func_591(13, var_2980_int, var_2981_object, var_2982_object, var_2983_object);
		object var_2984_object;
		var_2971_object = var_2984_object;
		func_255(var_2984_object, 1);
		func_820(13, true, 4);
		func_882(13, false, 4);
	}
	func_729(13, false);
	int var_2995_int; int var_2996_int;
	var_2966_int = var_2995_int;
	var_2967_int = var_2996_int;
	func_2714(13, var_2995_int, var_2996_int);
}


void func_8981(int var_464_int, int var_465_int, int var_466_int, int var_467_int)
{
	int var_475_int; object var_476_object; object var_477_object; object var_478_object; object var_479_object;
	@Trace("City update");
	bool var_481_bool = false;
	if(var_464_int == var_466_int) {
		if(var_465_int == var_467_int)
			var_481_bool = true;
	}
	if(var_481_bool != 0)
		@PlaySound("kolokol");
	
	for(;;) {
		if(0 < 16) {
			int var_487_int;
			var_475_int = var_487_int;
			func_440(var_487_int);
			bool var_492_bool; int var_493_int;
			var_475_int = var_493_int;
			func_350(var_492_bool, var_493_int);
			if(var_492_bool != 0) {
				int var_501_int; int var_502_int; int var_503_int;
				var_475_int = var_501_int;
				var_464_int = var_502_int;
				var_465_int = var_503_int;
				func_9101(var_501_int, var_502_int, var_503_int);
			} else {
			bool var_1979_bool; int var_1980_int;
			var_475_int = var_1980_int;
			func_380(var_1979_bool, var_1980_int);
			if(var_1979_bool != 0) {
				int var_1988_int; int var_1989_int; int var_1990_int;
				var_475_int = var_1988_int;
				var_464_int = var_1989_int;
				var_465_int = var_1990_int;
				func_9326(var_1988_int, var_1989_int, var_1990_int);
				goto Label_9034;
			}
			int var_3169_int; int var_3170_int; int var_3171_int;
			var_475_int = var_3169_int;
			var_464_int = var_3170_int;
			var_465_int = var_3171_int;
			func_9551(var_3169_int, var_3170_int, var_3171_int);
		}
		if(var_465_int == 0) {
			int var_4305_int;
			func_14840(var_4305_int);
			bool var_4335_bool = true;
			var_4337_bool = var_4305_int == 1;
			if(var_4337_bool != 1) {
				bool var_4338_bool;
				func_380(var_4338_bool, 5);
				if(var_4338_bool != 1)
					var_4335_bool = false;
			}
			if(var_4335_bool != 0) {
				@FindActor(var_476_object, "dt_house_1_07");
				var_476_object->EnableSubset(200, true);
				var_476_object = null;
			} else {
					@FindActor(var_477_object, "dt_house_1_07");
					var_477_object->EnableSubset(200, false);
					var_477_object = null;
			}
		}
		if(var_465_int == 7) {
			@Trace("day time");
			@GetMainOutdoorScene(var_478_object);
			var_478_object->SwitchLights(0, false);
			var_478_object = null;
		} else if(var_465_int == 20) {
			@Trace("night time");
			@GetMainOutdoorScene(var_479_object);
			var_479_object->SwitchLights(0, true);
			var_479_object = null;

		}
		}
	Label_9034:
		var_475_int += 1;
	}
	
}


// @pe
void func_5908(int var_2801_int, int var_2802_int, object var_2803_object, object var_2804_object, object var_2805_object, object var_2806_object)
{
	if(var_2802_int == 0) {
		func_746(8, true);
		func_763(8, true, 1);
		int var_2815_int; object var_2816_object; object var_2817_object; object var_2818_object;
		var_2801_int = var_2815_int;
		var_2803_object = var_2816_object;
		var_2804_object = var_2817_object;
		var_2805_object = var_2818_object;
		func_591(8, var_2815_int, var_2816_object, var_2817_object, var_2818_object);
		object var_2819_object;
		var_2806_object = var_2819_object;
		func_255(var_2819_object, 1);
		func_820(8, true, 4);
		func_882(8, false, 4);
	}
	func_729(8, false);
	int var_2830_int; int var_2831_int;
	var_2801_int = var_2830_int;
	var_2802_int = var_2831_int;
	func_2714(8, var_2830_int, var_2831_int);
}


// @pe
void func_10010(int var_4947_int, float var_4948_float)
{
	float var_4952_float;
	var_4948_float = var_4952_float;
	int var_4949_int;
	func_12278(var_4949_int, 518132, 518131, var_4952_float);
	var_4949_int = var_4947_int;
}


// @pe
void func_12060(bool var_5765_bool)
{
	int var_5768_int;
	func_106(var_5768_int, "b3NotkinVisit");
	if(var_5768_int != 0) {
		var_5765_bool = true;
		return 0;
	}
	var_5765_bool = false;
}


// @pe
void func_4896(object var_96_object)
{
	var_96_object->add("house5_02");
	var_96_object->add("dt_house1_union2_03l");
	var_96_object->add("dt_house1_union2_03r");
	var_96_object->add("dt_house1_union2_01l");
	var_96_object->add("dt_house1_union2_01r");
	var_96_object->add("house5_unoinl");
	var_96_object->add("house5_unoinr");
	var_96_object->add("dt_house_1_01");
	var_96_object->add("house5_05");
	var_96_object->add("house5_06");
	var_96_object->add("dt_house_1_02");
	var_96_object->add("house5_unoin_solid01l");
	var_96_object->add("house5_unoin_solid01r");
	var_96_object->add("house5_03");
	var_96_object->add("house5_04");
	var_96_object->add("house1_se_02l");
	var_96_object->add("house1_se_02r");
	var_96_object->add("dt_house3_01_i2");
	var_96_object->add("dt_house3_02_i2");
	var_96_object->add("dt_house3_02");
	var_96_object->add("dt_house3_03_i2");
	var_96_object->add("dt_house3_03");
	var_96_object->add("dt_house3_04_i2");
	var_96_object->add("house5_21");
}


void func_11043(void)
{
	object var_5997_object;
	func_12286(var_5997_object);
	object var_5995_object;
	var_5997_object = var_5995_object;
	object var_5996_object;
	var_5995_object->FindMark(var_5996_object, "b6q01KlaraGotoTermitnik2");
	if(var_5996_object != 0)
		var_5996_object->Remove();
	var_5995_object->FindMark(var_5996_object, "b6q02KlaraGotoRat");
	if(var_5996_object != 0)
		var_5996_object->Remove();
	var_5995_object->FindMark(var_5996_object, "b6q03MariaGotoNina");
	if(var_5996_object != 0)
		var_5996_object->Remove();
	var_5995_object->FindMark(var_5996_object, "b6q03ViktorGotoMaria");
	if(var_5996_object != 0)
		var_5996_object->Remove();
	var_5995_object->FindMark(var_5996_object, "b6q02LetterGotoAnna");
	if(var_5996_object != 0)
		var_5996_object->Remove();
	var_5995_object->FindMark(var_5996_object, "b6q01MatGotoByk");
	if(var_5996_object != 0)
		var_5996_object->Remove();
	bool var_6010_bool;
	func_12261(var_6010_bool, 265);
	bool var_6012_bool;
	func_12261(var_6012_bool, 266);
	bool var_6014_bool;
	func_12261(var_6014_bool, 276);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10019(int var_4971_int, float var_4972_float)
{
	float var_4976_float;
	var_4972_float = var_4976_float;
	int var_4973_int;
	func_12278(var_4973_int, 529838, 529837, var_4976_float);
	var_4973_int = var_4971_int;
}


// @pe
void func_12072(bool var_5276_bool)
{
	int var_5279_int;
	func_106(var_5279_int, "b8DankoVisit");
	if(var_5279_int != 0) {
		var_5276_bool = true;
		return 0;
	}
	var_5276_bool = false;
}


// @pe
void func_10028(int var_5661_int, float var_5662_float)
{
	float var_5666_float;
	var_5662_float = var_5666_float;
	int var_5663_int;
	func_12278(var_5663_int, 531053, 531052, var_5666_float);
	var_5663_int = var_5661_int;
}


void func_820(int var_639_int, bool var_640_bool, int var_641_int)
{
	string var_650_string; object var_651_object; int var_652_int; string var_653_string; object var_654_object; int var_655_int; string var_656_string; object var_657_object;
	var_650_string = "dr_mark" + (var_639_int + 1);
	if(var_640_bool != 0) {
		@GetMainOutdoorScene(var_651_object);
		if(var_651_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 16;
		}
		var_652_int = 1;

		for(;;) {
			if(var_652_int <= var_641_int) {
				var_653_string = (var_650_string + "_") + var_652_int;
				@FindActor(var_654_object, var_653_string);
				if(!var_654_object) { //@nz
					@AddActor(var_654_object, var_653_string, var_651_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "disease_object.xml");
				} else {
				bool var_672_bool; string var_673_string;
				var_653_string = var_673_string;
				func_189(var_672_bool, var_673_string, "restore");
			}
			var_651_object = null;
	} else {
			var_655_int = 1;

			for(;;) {
				if(!(var_655_int <= var_641_int)) goto Label_881;
				@FindActor(var_657_object, ((var_650_string + "_") + var_655_int));
				if(var_657_object != 0) {
					bool var_682_bool; string var_683_string;
					var_656_string = var_683_string;
					func_189(var_682_bool, var_683_string, "cleanup");
				}
				var_657_object = null;
				var_655_int += 1;
			}
	}
	Label_881:
		return 16;

		}
		var_654_object = null;
		var_652_int += 1;
	}
	
}


// @pe
void func_12084(bool var_5546_bool, object var_5547_object)
{
	object var_5550_object;
	var_5547_object = var_5550_object;
	func_12178(var_5550_object);
	bool var_5549_bool;
	if(var_5549_bool != 0) {
		var_5546_bool = true;
		return 0;
	}
	var_5546_bool = false;
}


// @pe
void func_10037(int var_5104_int, float var_5105_float)
{
	float var_5109_float;
	var_5105_float = var_5109_float;
	int var_5106_int;
	func_12278(var_5106_int, 529844, 529843, var_5109_float);
	var_5106_int = var_5104_int;
}


void func_1847(int var_1057_int, int var_1058_int, int var_1059_int)
{
	int var_1061_int;
	if((var_1058_int + 1) == 12)
		return 2;
	bool var_1066_bool = false;
	bool var_1067_bool = true;
	var_1069_bool = var_1059_int < 7;
	if(var_1069_bool != 1) {
		var_1071_bool = var_1059_int > 21;
		if(var_1071_bool != 1)
			var_1067_bool = false;
	}
	if(var_1067_bool != 0) {
		if(var_1058_int != 0)
			var_1066_bool = true;
	}
	if(var_1066_bool != 0) {
		float var_1074_float; int var_1075_int;
		var_1058_int = var_1075_int;
		func_1091(var_1074_float, var_1075_int);
		var_1074_float = var_1061_int;
		if(var_1061_int != 0) {
			int var_1077_int; int var_1080_int;
			var_1057_int = var_1077_int;
			var_1061_int = var_1080_int;
			func_453(var_1077_int, "pers_grabitel", "grabitel.xml", var_1080_int);
		}
	}
	bool var_1081_bool; int var_1082_int; int var_1083_int;
	var_1058_int = var_1082_int;
	var_1059_int = var_1083_int;
	func_1060(var_1081_bool, var_1082_int, var_1083_int);
	if(var_1081_bool != 0) {
		int var_1084_int;
		var_1057_int = var_1084_int;
		func_453(var_1084_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1088_int;
		var_1057_int = var_1088_int;
		func_453(var_1088_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1092_int;
		var_1057_int = var_1092_int;
		func_453(var_1092_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1096_int;
		var_1057_int = var_1096_int;
		func_453(var_1096_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1100_int;
		var_1057_int = var_1100_int;
		func_453(var_1100_int, "pers_woman", "woman.xml", 1);
		int var_1104_int;
		var_1057_int = var_1104_int;
		func_453(var_1104_int, "pers_alkash", "alkash.xml", 1);
		int var_1108_int;
		var_1057_int = var_1108_int;
		func_453(var_1108_int, "pers_girl", "girl.xml", 1);
		int var_1112_int;
		var_1057_int = var_1112_int;
		func_453(var_1112_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1153_bool = false;
			if(var_1059_int > 8) {
				if(var_1059_int < 21)
					var_1153_bool = true;
			}
			if(var_1153_bool == 0) goto Label_2039;
			int var_1158_int;
			var_1057_int = var_1158_int;
			func_453(var_1158_int, "pers_woman", "woman.xml", 1);
			int var_1162_int;
			var_1057_int = var_1162_int;
			func_453(var_1162_int, "pers_unosha", "unosha.xml", 1);
			int var_1166_int;
			var_1057_int = var_1166_int;
			func_453(var_1166_int, "pers_unosha", "unosha2.xml", 1);
			int var_1170_int;
			var_1057_int = var_1170_int;
			func_453(var_1170_int, "pers_worker", "worker.xml", 1);
			int var_1174_int;
			var_1057_int = var_1174_int;
			func_453(var_1174_int, "pers_worker", "worker2.xml", 1);
			int var_1178_int;
			var_1057_int = var_1178_int;
			func_453(var_1178_int, "pers_alkash", "alkash.xml", 1);
			int var_1182_int;
			var_1057_int = var_1182_int;
			func_453(var_1182_int, "pers_girl", "girl.xml", 1);
			int var_1186_int;
			var_1057_int = var_1186_int;
			func_453(var_1186_int, "pers_girl", "girl2.xml", 1);
			if((var_1058_int + 1) >= 3) {
				int var_1194_int;
				var_1057_int = var_1194_int;
				func_453(var_1194_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if((var_1058_int + 1) >= 7) {
				int var_1202_int;
				var_1057_int = var_1202_int;
				func_453(var_1202_int, "pers_butcher", "butcher.xml", 2);
			}
	}
Label_2105:
	for(;;) {
		bool var_1116_bool = false;
		bool var_1117_bool = false;
		if(var_1058_int == 0) {
			if(var_1059_int > 12)
				var_1117_bool = true;
		}
		if(var_1117_bool != 0) {
			if(var_1059_int < 22)
				var_1116_bool = true;
		}
		if(var_1116_bool != 0) {
			int var_1124_int;
			var_1057_int = var_1124_int;
			func_453(var_1124_int, "pers_woman", "woman_killme.xml", 1);
		}
		bool var_1128_bool; int var_1129_int; int var_1130_int;
		var_1058_int = var_1129_int;
		var_1059_int = var_1130_int;
		func_1295(var_1128_bool, var_1129_int, var_1130_int);
		if(var_1128_bool != 0) {
			int var_1135_int;
			var_1057_int = var_1135_int;
			func_453(var_1135_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		bool var_1139_bool; int var_1140_int; int var_1141_int;
		var_1058_int = var_1140_int;
		var_1059_int = var_1141_int;
		func_1305(var_1139_bool, var_1140_int, var_1141_int);
		if(var_1139_bool != 0) {
			int var_1149_int;
			var_1057_int = var_1149_int;
			func_453(var_1149_int, "pers_nudegirl", "nudegirl.xml", 1);
		}
		return 2;

	}
	
Label_2039:
	int var_1206_int;
	var_1057_int = var_1206_int;
	func_453(var_1206_int, "pers_woman", "woman.xml", 1);
	int var_1210_int;
	var_1057_int = var_1210_int;
	func_453(var_1210_int, "pers_unosha", "unosha.xml", 1);
	int var_1214_int;
	var_1057_int = var_1214_int;
	func_453(var_1214_int, "pers_unosha", "unosha2.xml", 1);
	int var_1218_int;
	var_1057_int = var_1218_int;
	func_453(var_1218_int, "pers_worker", "worker.xml", 1);
	int var_1222_int;
	var_1057_int = var_1222_int;
	func_453(var_1222_int, "pers_worker", "worker2.xml", 1);
	int var_1226_int;
	var_1057_int = var_1226_int;
	func_453(var_1226_int, "pers_alkash", "alkash.xml", 1);
	if((var_1058_int + 1) >= 3) {
		int var_1234_int;
		var_1057_int = var_1234_int;
		func_453(var_1234_int, "pers_dohodyaga", "dohodyaga.xml", 1);
	}
	if(!((var_1058_int + 1) >= 7)) goto Label_2105;
	int var_1242_int;
	var_1057_int = var_1242_int;
	func_453(var_1242_int, "pers_butcher", "butcher.xml", 3);
}


// @pe
void func_12094(bool var_5207_bool)
{
	int var_5210_int;
	func_106(var_5210_int, "b4q01");
	if(var_5210_int == 0) {
		var_5207_bool = true;
		return 0;
	}
	var_5207_bool = false;
}


// @pe
void func_10046(int var_6129_int, float var_6130_float)
{
	float var_6134_float;
	var_6130_float = var_6134_float;
	int var_6131_int;
	func_12278(var_6131_int, 518218, 518217, var_6134_float);
	var_6131_int = var_6129_int;
}


// @pe
void func_10055(int var_6145_int, float var_6146_float)
{
	float var_6150_float;
	var_6146_float = var_6150_float;
	int var_6147_int;
	func_12278(var_6147_int, 518220, 518219, var_6150_float);
	var_6147_int = var_6145_int;
}


// @pe
void func_6984(int var_4096_int, int var_4097_int, object var_4098_object, object var_4099_object, object var_4100_object, object var_4101_object)
{
	if(var_4097_int == 0) {
		func_746(13, false);
		func_763(13, false, 1);
		int var_4110_int; object var_4111_object; object var_4112_object; object var_4113_object;
		var_4096_int = var_4110_int;
		var_4098_object = var_4111_object;
		var_4099_object = var_4112_object;
		var_4100_object = var_4113_object;
		func_670(13, var_4110_int, var_4111_object, var_4112_object, var_4113_object);
		object var_4114_object;
		var_4101_object = var_4114_object;
		func_255(var_4114_object, 2);
		func_820(13, false, 4);
		func_882(13, true, 4);
	}
	func_729(13, false);
	int var_4125_int; int var_4126_int;
	var_4096_int = var_4125_int;
	var_4097_int = var_4126_int;
	func_3609(13, var_4125_int, var_4126_int);
}


// @pe
void func_5960(int var_3931_int, int var_3932_int, object var_3933_object, object var_3934_object, object var_3935_object, object var_3936_object)
{
	if(var_3932_int == 0) {
		func_746(8, false);
		func_763(8, false, 1);
		int var_3945_int; object var_3946_object; object var_3947_object; object var_3948_object;
		var_3931_int = var_3945_int;
		var_3933_object = var_3946_object;
		var_3934_object = var_3947_object;
		var_3935_object = var_3948_object;
		func_670(8, var_3945_int, var_3946_object, var_3947_object, var_3948_object);
		object var_3949_object;
		var_3936_object = var_3949_object;
		func_255(var_3949_object, 2);
		func_820(8, false, 4);
		func_882(8, true, 4);
	}
	func_729(8, false);
	int var_3960_int; int var_3961_int;
	var_3931_int = var_3960_int;
	var_3932_int = var_3961_int;
	func_3609(8, var_3960_int, var_3961_int);
}


// @pe
void func_12106(bool var_5331_bool)
{
	int var_5334_int;
	func_106(var_5334_int, "b5q01");
	if(var_5334_int == 0) {
		var_5331_bool = true;
		return 0;
	}
	var_5331_bool = false;
}


void func_2894(int var_2435_int, int var_2436_int, int var_2437_int)
{
	int var_2440_int; int var_2441_int;
	bool var_2442_bool = false;
	if(var_2437_int > 8) {
		if(var_2437_int < 21)
			var_2442_bool = true;
	}
	if(var_2442_bool != 0) {
		int var_2447_int;
		var_2435_int = var_2447_int;
		func_453(var_2447_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2451_int;
		var_2435_int = var_2451_int;
		func_453(var_2451_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_2455_int;
		var_2435_int = var_2455_int;
		func_453(var_2455_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2459_int;
		var_2435_int = var_2459_int;
		func_479(var_2459_int, "fog", "fog.xml", 6);
		if(var_2436_int >= 5) {
			int var_2465_int;
			var_2435_int = var_2465_int;
			func_479(var_2465_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2470_float; int var_2471_int;
		func_1205(var_2470_float, var_2471_int);
		if((1 * var_2470_float) != 0) {
			int var_2473_int; int var_2476_int;
			var_2435_int = var_2473_int;
			var_2440_int = var_2476_int;
			func_453(var_2473_int, "pers_bomber", "bomber.xml", var_2476_int);
		}
	} else {
		int var_2521_int;
		var_2435_int = var_2521_int;
		func_453(var_2521_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2525_int;
		var_2435_int = var_2525_int;
		func_453(var_2525_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2529_int;
		var_2435_int = var_2529_int;
		func_453(var_2529_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2533_int;
		var_2435_int = var_2533_int;
		func_479(var_2533_int, "fog", "fog.xml", 6);
		if(var_2471_int >= 5) {
			int var_2539_int;
			var_2435_int = var_2539_int;
			func_479(var_2539_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2544_float; int var_2545_int;
		var_2436_int = var_2545_int;
		func_1205(var_2544_float, var_2545_int);
		if((1 * var_2544_float) == 0) goto Label_3012;
		int var_2547_int; int var_2550_int;
		var_2435_int = var_2547_int;
		var_2441_int = var_2550_int;
		func_453(var_2547_int, "pers_bomber", "bomber.xml", var_2550_int);
	}
Label_3012:
	int var_2477_int;
	var_2435_int = var_2477_int;
	func_466(var_2477_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2483_int;
	var_2435_int = var_2483_int;
	func_466(var_2483_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2489_int;
	var_2435_int = var_2489_int;
	func_466(var_2489_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2495_int;
	var_2435_int = var_2495_int;
	func_466(var_2495_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2501_bool; int var_2502_int; int var_2503_int;
	var_2436_int = var_2502_int;
	var_2437_int = var_2503_int;
	func_1295(var_2501_bool, var_2502_int, var_2503_int);
	if(var_2501_bool != 0) {
		int var_2504_int;
		var_2435_int = var_2504_int;
		func_453(var_2504_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2508_bool; int var_2509_int; int var_2510_int;
	var_2436_int = var_2509_int;
	var_2437_int = var_2510_int;
	func_1305(var_2508_bool, var_2509_int, var_2510_int);
	if(var_2508_bool != 0) {
		int var_2511_int;
		var_2435_int = var_2511_int;
		func_453(var_2511_int, "pers_nudegirl", "nudegirl.xml", 1);
	}
	bool var_2515_bool; int var_2516_int;
	var_2436_int = var_2516_int;
	func_1322(var_2515_bool, var_2516_int);
	if(var_2515_bool != 0) {
		int var_2517_int;
		var_2435_int = var_2517_int;
		func_453(var_2517_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_10064(int var_4716_int, float var_4717_float)
{
	float var_4721_float;
	var_4717_float = var_4721_float;
	int var_4718_int;
	func_12278(var_4718_int, 529846, 529845, var_4721_float);
	var_4718_int = var_4716_int;
}


// @pe
void func_12118(bool var_6122_bool)
{
	int var_6125_int;
	func_106(var_6125_int, "b2q01");
	if(var_6125_int == 0) {
		var_6122_bool = true;
		return 0;
	}
	var_6122_bool = false;
}


// @pe
void func_10073(int var_6161_int, float var_6162_float)
{
	float var_6166_float;
	var_6162_float = var_6166_float;
	int var_6163_int;
	func_12278(var_6163_int, 520462, 520461, var_6166_float);
	var_6163_int = var_6161_int;
}


void func_11105(void)
{
	object var_4787_object;
	func_12286(var_4787_object);
	object var_4785_object;
	var_4787_object = var_4785_object;
	object var_4786_object;
	var_4785_object->FindMark(var_4786_object, "b7q01AglajaGotoStarshina");
	if(var_4786_object != 0)
		var_4786_object->Remove();
	var_4785_object->FindMark(var_4786_object, "b7q01BirdmaskGotoMat");
	if(var_4786_object != 0)
		var_4786_object->Remove();
	var_4785_object->FindMark(var_4786_object, "b7q01DankoGotoSobor");
	if(var_4786_object != 0)
		var_4786_object->Remove();
	var_4785_object->FindMark(var_4786_object, "b7q01MatGotoPrison");
	if(var_4786_object != 0)
		var_4786_object->Remove();
	var_4785_object->FindMark(var_4786_object, "b7q01PatrolGotoGorbun");
	if(var_4786_object != 0)
		var_4786_object->Remove();
	var_4785_object->FindMark(var_4786_object, "b7q01ViktorGotoSobor");
	if(var_4786_object != 0)
		var_4786_object->Remove();
	var_4785_object->FindMark(var_4786_object, "b7q01WastedGotoViktor");
	if(var_4786_object != 0)
		var_4786_object->Remove();
	var_4785_object->FindMark(var_4786_object, "b7q03AglajaGotoTheater");
	if(var_4786_object != 0)
		var_4786_object->Remove();
	bool var_4810_bool;
	func_12261(var_4810_bool, 253);
	bool var_4822_bool;
	func_12261(var_4822_bool, 270);
	bool var_4824_bool;
	func_12261(var_4824_bool, 280);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10082(int var_4692_int, float var_4693_float)
{
	float var_4697_float;
	var_4693_float = var_4697_float;
	int var_4694_int;
	func_12278(var_4694_int, 529842, 529841, var_4697_float);
	var_4694_int = var_4692_int;
}


// @pe
void func_12130(bool var_6153_bool)
{
	int var_6156_int;
	func_106(var_6156_int, "b2MladVladBurahHomeTalk");
	if(var_6156_int == 1)
		var_6153_bool = true;
	var_6153_bool = false;
}


// @pe
void func_4970(int var_1248_int, int var_1249_int, object var_1250_object, object var_1251_object, object var_1252_object, object var_1253_object)
{
	if(var_1249_int == 0) {
		func_746(3, false);
		func_763(3, false, 1);
		int var_1261_int; int var_1262_int; object var_1263_object; object var_1264_object; object var_1265_object;
		var_1261_int = 3;
		var_1248_int = var_1262_int;
		var_1250_object = var_1263_object;
		var_1251_object = var_1264_object;
		var_1252_object = var_1265_object;
		func_572(var_1262_int, var_1263_object, var_1264_object, var_1265_object);
		object var_1266_object;
		var_1253_object = var_1266_object;
		func_255(var_1266_object, 0);
		func_820(3, false, 7);
		func_882(3, false, 7);
	}
	int var_1275_int;
	var_1249_int = var_1275_int;
	func_933(3, var_1275_int);
	int var_1292_int; int var_1293_int;
	var_1248_int = var_1292_int;
	var_1249_int = var_1293_int;
	func_1847(3, var_1292_int, var_1293_int);
}


// @pe
void func_10091(int var_6322_int, float var_6323_float)
{
	float var_6327_float;
	var_6323_float = var_6327_float;
	int var_6324_int;
	func_12278(var_6324_int, 519684, 519683, var_6327_float);
	var_6324_int = var_6322_int;
}


// @pe
void func_12142(bool var_5097_bool)
{
	int var_5100_int;
	func_106(var_5100_int, "b2q01");
	if(var_5100_int == 1000)
		var_5097_bool = true;
	var_5097_bool = false;
}


void func_882(int var_686_int, bool var_687_bool, int var_688_int)
{
	object var_696_object; object var_697_object; string var_699_string; object var_700_object;
	@FindActor(var_696_object, ("br_" + (var_686_int + 1)));
	if(var_687_bool != 0) {
		if(!var_696_object) { //@nz
			@GetMainOutdoorScene(var_697_object);
			@AddActor(var_696_object, ("br_" + (var_686_int + 1)), var_697_object, [0.0, 0.0, 0.0]);
			var_697_object = null;
		}
	} else if(var_696_object != 0) {
		@RemoveActor(var_696_object);
	}
	int var_698_int = 1;
	
	while(var_698_int <= var_688_int) {
		@FindActor(var_700_object, ((("dr_mark" + (var_686_int + 1)) + "_") + var_698_int));
		if(var_700_object != 0) {
			bool var_719_bool; string var_720_string;
			var_699_string = var_720_string;
			func_189(var_719_bool, var_720_string, "cleanup");
		}
		var_700_object = null;
		var_698_int += 1;
	}
	
	
}
EMIT "Stack[-5] = 0";


// @pe
void func_10100(int var_4684_int, float var_4685_float)
{
	float var_4689_float;
	var_4685_float = var_4689_float;
	int var_4686_int;
	func_12278(var_4686_int, 529848, 529847, var_4689_float);
	var_4686_int = var_4684_int;
}


// @pe
void func_12154(bool var_6137_bool)
{
	int var_6140_int;
	func_106(var_6140_int, "b2DankoTalk");
	if(var_6140_int == 1)
		var_6137_bool = true;
	var_6137_bool = false;
}


// @pe
void func_7036(object var_297_object)
{
	var_297_object->add("lc_house7_02");
	var_297_object->add("lc_house7_03");
	var_297_object->add("lc_house7_04");
	var_297_object->add("lc_house7_05");
	var_297_object->add("lc_house7_06");
	var_297_object->add("lc_house7_07");
	var_297_object->add("lc_House6_02");
	var_297_object->add("lc_house7_01");
	var_297_object->add("lc_house_2_02");
	var_297_object->add("lc_House6_01");
	var_297_object->add("lc_house3_03_i2");
	var_297_object->add("lc_house3_03");
	var_297_object->add("lc_House6_03");
	var_297_object->add("lc_House6_04");
}


// @pe
void func_6012(object var_209_object)
{
	var_209_object->add("r3_house_2_02");
	var_209_object->add("r3_house3_02_i2");
	var_209_object->add("r3_house3_02");
	var_209_object->add("r3_house4_05_i2");
	var_209_object->add("r3_house4_05");
	var_209_object->add("r3_house4_03_i2");
	var_209_object->add("r3_house4_04_i2");
	var_209_object->add("r3_house4_04");
	var_209_object->add("r3_house4_01_i2");
	var_209_object->add("r3_house4_01");
	var_209_object->add("r3_house_2_01");
	var_209_object->add("r3_house4_02_i2");
	var_209_object->add("r3_house4_02");
	var_209_object->add("r3_house3_01_i2");
	var_209_object->add("r3_house3_01");
}


// @pe
void func_10109(int var_5434_int, float var_5435_float)
{
	float var_5439_float;
	var_5435_float = var_5439_float;
	int var_5436_int;
	func_12278(var_5436_int, 530678, 530677, var_5439_float);
	var_5436_int = var_5434_int;
}


// @pe
void func_12166(bool var_5238_bool)
{
	int var_5241_int;
	func_106(var_5241_int, "b7q01");
	if(var_5241_int == 0) {
		var_5238_bool = true;
		return 0;
	}
	var_5238_bool = false;
}


// @pe
void func_10118(int var_5697_int, float var_5698_float)
{
	float var_5702_float;
	var_5698_float = var_5702_float;
	int var_5699_int;
	func_12278(var_5699_int, 530680, 530679, var_5702_float);
	var_5699_int = var_5697_int;
}


void func_9101(int var_501_int, int var_502_int, int var_503_int)
{
	var_512_object = GlobalVars[8];
	object var_508_object;
	var_512_object->get(var_508_object, var_501_int);
	var_513_object = GlobalVars[9];
	object var_509_object;
	var_513_object->get(var_509_object, var_501_int);
	var_514_object = GlobalVars[10];
	object var_510_object;
	var_514_object->get(var_510_object, var_501_int);
	var_515_object = GlobalVars[13];
	object var_511_object;
	var_515_object->get(var_511_object, var_501_int);
	if(var_501_int == 0) {
		int var_518_int; int var_519_int; object var_520_object; object var_521_object; object var_522_object; object var_523_object;
		var_502_int = var_518_int;
		var_503_int = var_519_int;
		var_508_object = var_520_object;
		var_509_object = var_521_object;
		var_510_object = var_522_object;
		var_511_object = var_523_object;
		func_4337(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object);
	} else if(var_501_int == 1) {
			int var_886_int; int var_887_int; object var_888_object; object var_889_object; object var_890_object; object var_891_object;
			var_502_int = var_886_int;
			var_503_int = var_887_int;
			var_508_object = var_888_object;
			var_509_object = var_889_object;
			var_510_object = var_890_object;
			var_511_object = var_891_object;
			func_4534(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_501_int == 2) {
		int var_1029_int; int var_1030_int; object var_1031_object; object var_1032_object; object var_1033_object; object var_1034_object;
		var_502_int = var_1029_int;
		var_503_int = var_1030_int;
		var_508_object = var_1031_object;
		var_509_object = var_1032_object;
		var_510_object = var_1033_object;
		var_511_object = var_1034_object;
		func_4740(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object);
	} else if(var_501_int == 3) {
		int var_1248_int; int var_1249_int; object var_1250_object; object var_1251_object; object var_1252_object; object var_1253_object;
		var_502_int = var_1248_int;
		var_503_int = var_1249_int;
		var_508_object = var_1250_object;
		var_509_object = var_1251_object;
		var_510_object = var_1252_object;
		var_511_object = var_1253_object;
		func_4970(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object);
	} else if(var_501_int == 4) {
		int var_1296_int; int var_1297_int; object var_1298_object; object var_1299_object; object var_1300_object; object var_1301_object;
		var_502_int = var_1296_int;
		var_503_int = var_1297_int;
		var_508_object = var_1298_object;
		var_509_object = var_1299_object;
		var_510_object = var_1300_object;
		var_511_object = var_1301_object;
		func_5188(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object);
	} else if(var_501_int == 5) {
		int var_1341_int; int var_1342_int; object var_1343_object; object var_1344_object; object var_1345_object; object var_1346_object;
		var_502_int = var_1341_int;
		var_503_int = var_1342_int;
		var_508_object = var_1343_object;
		var_509_object = var_1344_object;
		var_510_object = var_1345_object;
		var_511_object = var_1346_object;
		func_5433(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object);
	} else if(var_501_int == 6) {
		int var_1374_int; int var_1375_int; object var_1376_object; object var_1377_object; object var_1378_object; object var_1379_object;
		var_502_int = var_1374_int;
		var_503_int = var_1375_int;
		var_508_object = var_1376_object;
		var_509_object = var_1377_object;
		var_510_object = var_1378_object;
		var_511_object = var_1379_object;
		func_5591(var_1379_object);
	} else if(var_501_int == 7) {
		int var_1384_int; int var_1385_int; object var_1386_object; object var_1387_object; object var_1388_object; object var_1389_object;
		var_502_int = var_1384_int;
		var_503_int = var_1385_int;
		var_508_object = var_1386_object;
		var_509_object = var_1387_object;
		var_510_object = var_1388_object;
		var_511_object = var_1389_object;
		func_5656(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object);
	} else if(var_501_int == 8) {
		int var_1571_int; int var_1572_int; object var_1573_object; object var_1574_object; object var_1575_object; object var_1576_object;
		var_502_int = var_1571_int;
		var_503_int = var_1572_int;
		var_508_object = var_1573_object;
		var_509_object = var_1574_object;
		var_510_object = var_1575_object;
		var_511_object = var_1576_object;
		func_5856(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object);
	} else if(var_501_int == 9) {
		int var_1604_int; int var_1605_int; object var_1606_object; object var_1607_object; object var_1608_object; object var_1609_object;
		var_502_int = var_1604_int;
		var_503_int = var_1605_int;
		var_508_object = var_1606_object;
		var_509_object = var_1607_object;
		var_510_object = var_1608_object;
		var_511_object = var_1609_object;
		func_6059(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object);
	} else if(var_501_int == 10) {
		int var_1637_int; int var_1638_int; object var_1639_object; object var_1640_object; object var_1641_object; object var_1642_object;
		var_502_int = var_1637_int;
		var_503_int = var_1638_int;
		var_508_object = var_1639_object;
		var_509_object = var_1640_object;
		var_510_object = var_1641_object;
		var_511_object = var_1642_object;
		func_6268(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object);
	} else if(var_501_int == 11) {
		int var_1670_int; int var_1671_int; object var_1672_object; object var_1673_object; object var_1674_object; object var_1675_object;
		var_502_int = var_1670_int;
		var_503_int = var_1671_int;
		var_508_object = var_1672_object;
		var_509_object = var_1673_object;
		var_510_object = var_1674_object;
		var_511_object = var_1675_object;
		func_6480(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object);
	} else if(var_501_int == 12) {
		int var_1703_int; int var_1704_int; object var_1705_object; object var_1706_object; object var_1707_object; object var_1708_object;
		var_502_int = var_1703_int;
		var_503_int = var_1704_int;
		var_508_object = var_1705_object;
		var_509_object = var_1706_object;
		var_510_object = var_1707_object;
		var_511_object = var_1708_object;
		func_6677(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object);
	} else if(var_501_int == 13) {
		int var_1736_int; int var_1737_int; object var_1738_object; object var_1739_object; object var_1740_object; object var_1741_object;
		var_502_int = var_1736_int;
		var_503_int = var_1737_int;
		var_508_object = var_1738_object;
		var_509_object = var_1739_object;
		var_510_object = var_1740_object;
		var_511_object = var_1741_object;
		func_6880(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object);
	} else if(var_501_int == 14) {
		int var_1769_int; int var_1770_int; object var_1771_object; object var_1772_object; object var_1773_object; object var_1774_object;
		var_502_int = var_1769_int;
		var_503_int = var_1770_int;
		var_508_object = var_1771_object;
		var_509_object = var_1772_object;
		var_510_object = var_1773_object;
		var_511_object = var_1774_object;
		func_7080(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object);
	} else if(var_501_int == 15) {
		int var_1947_int; int var_1948_int; object var_1949_object; object var_1950_object; object var_1951_object; object var_1952_object;
		var_502_int = var_1947_int;
		var_503_int = var_1948_int;
		var_508_object = var_1949_object;
		var_509_object = var_1950_object;
		var_510_object = var_1951_object;
		var_511_object = var_1952_object;
		func_7262(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_10127(int var_4724_int, float var_4725_float)
{
	float var_4729_float;
	var_4725_float = var_4729_float;
	int var_4726_int;
	func_12278(var_4726_int, 529852, 529851, var_4729_float);
	var_4726_int = var_4724_int;
}


void func_3985(int var_3248_int, int var_3249_int, int var_3250_int)
{
	int var_3255_int; int var_3256_int; int var_3257_int; int var_3258_int;
	bool var_3259_bool = false;
	if(var_3250_int > 8) {
		if(var_3250_int < 21)
			var_3259_bool = true;
	}
	if(var_3259_bool != 0) {
		int var_3264_int;
		var_3248_int = var_3264_int;
		func_453(var_3264_int, "pers_rat", "rat.xml", 4);
		int var_3268_int;
		var_3248_int = var_3268_int;
		func_453(var_3268_int, "pers_alkash", "alkash.xml", 2);
		int var_3272_int;
		var_3248_int = var_3272_int;
		func_453(var_3272_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3277_float; int var_3278_int;
		func_1115(var_3277_float, var_3278_int);
		if((2 * var_3277_float) != 0) {
			int var_3324_int; int var_3327_int;
			var_3248_int = var_3324_int;
			var_3255_int = var_3327_int;
			func_453(var_3324_int, "pers_grabitel", "grabitel.xml", var_3327_int);
		}
		if((var_3278_int + 1) >= 2) {
			int var_3332_int;
			var_3248_int = var_3332_int;
			func_453(var_3332_int, "pers_patrool", "patrol.xml", 2);
			bool var_3336_bool; int var_3337_int;
			var_3249_int = var_3337_int;
			func_1322(var_3336_bool, var_3337_int);
			if(var_3336_bool != 0) {
				int var_3338_int;
				var_3248_int = var_3338_int;
				func_453(var_3338_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3343_float; int var_3344_int;
		var_3249_int = var_3344_int;
		func_1205(var_3343_float, var_3344_int);
		if((1 * var_3343_float) != 0) {
			int var_3346_int; int var_3349_int;
			var_3248_int = var_3346_int;
			var_3256_int = var_3349_int;
			func_453(var_3346_int, "pers_bomber", "bomber.xml", var_3349_int);
		}
	} else {
		int var_3356_int;
		var_3248_int = var_3356_int;
		func_453(var_3356_int, "pers_rat", "rat.xml", 7);
		int var_3360_int;
		var_3248_int = var_3360_int;
		func_453(var_3360_int, "pers_alkash", "alkash.xml", 1);
		int var_3364_int;
		var_3248_int = var_3364_int;
		func_453(var_3364_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3369_float; int var_3370_int;
		func_1115(var_3369_float, var_3370_int);
		if((2 * var_3369_float) != 0) {
			int var_3372_int; int var_3375_int;
			var_3248_int = var_3372_int;
			var_3257_int = var_3375_int;
			func_453(var_3372_int, "pers_grabitel", "grabitel.xml", var_3375_int);
		}
		if((var_3370_int + 1) >= 2) {
			int var_3380_int;
			var_3248_int = var_3380_int;
			func_453(var_3380_int, "pers_patrool", "patrol.xml", 1);
			bool var_3384_bool; int var_3385_int;
			var_3249_int = var_3385_int;
			func_1322(var_3384_bool, var_3385_int);
			if(var_3384_bool != 0) {
				int var_3386_int;
				var_3248_int = var_3386_int;
				func_453(var_3386_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3391_float; int var_3392_int;
		var_3249_int = var_3392_int;
		func_1205(var_3391_float, var_3392_int);
		if((1 * var_3391_float) == 0) goto Label_4147;
		int var_3394_int; int var_3397_int;
		var_3248_int = var_3394_int;
		var_3258_int = var_3397_int;
		func_453(var_3394_int, "pers_bomber", "bomber.xml", var_3397_int);
	}
Label_4147:
	bool var_3350_bool; int var_3351_int;
	var_3249_int = var_3351_int;
	func_1322(var_3350_bool, var_3351_int);
	if(var_3350_bool != 0) {
		int var_3352_int;
		var_3248_int = var_3352_int;
		func_453(var_3352_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_12178(bool var_5549_bool)
{
	var_5549_bool = false;
}


void func_12181(void)
{
	object var_4883_object;
	@CreateDiaryEntry(var_4883_object, 562, 0, 530576);
	bool var_4887_bool; object var_4888_object;
	var_4883_object = var_4888_object;
	func_12233(var_4887_bool, var_4888_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10136(int var_5492_int, float var_5493_float)
{
	float var_5497_float;
	var_5493_float = var_5497_float;
	int var_5494_int;
	func_12278(var_5494_int, 530601, 530600, var_5497_float);
	var_5494_int = var_5492_int;
}


// @pe
void func_5022(int var_2553_int, int var_2554_int, object var_2555_object, object var_2556_object, object var_2557_object, object var_2558_object)
{
	if(var_2554_int == 0) {
		func_746(3, true);
		func_763(3, true, 1);
		int var_2567_int; object var_2568_object; object var_2569_object; object var_2570_object;
		var_2553_int = var_2567_int;
		var_2555_object = var_2568_object;
		var_2556_object = var_2569_object;
		var_2557_object = var_2570_object;
		func_591(3, var_2567_int, var_2568_object, var_2569_object, var_2570_object);
		object var_2571_object;
		var_2558_object = var_2571_object;
		func_255(var_2571_object, 1);
		func_820(3, true, 7);
		func_882(3, false, 7);
	}
	func_729(3, false);
	int var_2582_int; int var_2583_int;
	var_2553_int = var_2582_int;
	var_2554_int = var_2583_int;
	func_2894(3, var_2582_int, var_2583_int);
}


// @pe
void func_10145(int var_5773_int, float var_5774_float)
{
	float var_5778_float;
	var_5774_float = var_5778_float;
	int var_5775_int;
	func_12278(var_5775_int, 533050, 533049, var_5778_float);
	var_5775_int = var_5773_int;
}


void func_12194(void)
{
	object var_4911_object;
	@CreateDiaryEntry(var_4911_object, 564, 0, 530578);
	bool var_4915_bool; object var_4916_object;
	var_4911_object = var_4916_object;
	func_12233(var_4915_bool, var_4916_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_933(int var_1274_int, int var_1275_int)
{
	bool var_1276_bool = true;
	bool var_1277_bool = true;
	var_1279_bool = var_1275_int >= 20;
	if(var_1279_bool != 1) {
		var_1281_bool = var_1275_int < 2;
		if(var_1281_bool != 1)
			var_1277_bool = false;
	}
	if(var_1277_bool != 1) {
		bool var_1282_bool = false;
		if(var_1275_int >= 6) {
			if(var_1275_int < 10)
				var_1282_bool = true;
		}
		if(var_1282_bool != 1)
			var_1276_bool = false;
	}
	if(var_1276_bool != 0) {
		int var_1287_int;
		var_1274_int = var_1287_int;
		func_729(var_1287_int, true);
	} else {
		int var_1289_int;
		var_1274_int = var_1289_int;
		func_729(var_1289_int, false);
	}
	
}


// @pe
void func_7080(int var_1769_int, int var_1770_int, object var_1771_object, object var_1772_object, object var_1773_object, object var_1774_object)
{
	if(var_1770_int == 0) {
		func_746(14, false);
		func_763(14, false, 1);
		int var_1782_int; int var_1783_int; object var_1784_object; object var_1785_object; object var_1786_object;
		var_1782_int = 14;
		var_1769_int = var_1783_int;
		var_1771_object = var_1784_object;
		var_1772_object = var_1785_object;
		var_1773_object = var_1786_object;
		func_572(var_1783_int, var_1784_object, var_1785_object, var_1786_object);
		object var_1787_object;
		var_1774_object = var_1787_object;
		func_255(var_1787_object, 0);
		func_820(14, false, 5);
		func_882(14, false, 5);
	}
	int var_1796_int;
	var_1770_int = var_1796_int;
	func_1037(14, var_1796_int);
	int var_1807_int; int var_1808_int;
	var_1769_int = var_1807_int;
	var_1770_int = var_1808_int;
	func_1326(14, var_1807_int, var_1808_int);
}


// @pe
void func_10154(int var_5089_int, float var_5090_float)
{
	float var_5094_float;
	var_5090_float = var_5094_float;
	int var_5091_int;
	func_12278(var_5091_int, 529850, 529849, var_5094_float);
	var_5091_int = var_5089_int;
}


// @pe
void func_6059(int var_1604_int, int var_1605_int, object var_1606_object, object var_1607_object, object var_1608_object, object var_1609_object)
{
	if(var_1605_int == 0) {
		func_746(9, false);
		func_763(9, false, 1);
		int var_1617_int; int var_1618_int; object var_1619_object; object var_1620_object; object var_1621_object;
		var_1617_int = 9;
		var_1604_int = var_1618_int;
		var_1606_object = var_1619_object;
		var_1607_object = var_1620_object;
		var_1608_object = var_1621_object;
		func_572(var_1618_int, var_1619_object, var_1620_object, var_1621_object);
		object var_1622_object;
		var_1609_object = var_1622_object;
		func_255(var_1622_object, 0);
		func_820(9, false, 7);
		func_882(9, false, 7);
	}
	int var_1631_int;
	var_1605_int = var_1631_int;
	func_1000(9, var_1631_int);
	int var_1633_int; int var_1634_int;
	var_1604_int = var_1633_int;
	var_1605_int = var_1634_int;
	func_1574(9, var_1633_int, var_1634_int);
}


void func_11181(void)
{
	object var_4941_object;
	func_12286(var_4941_object);
	object var_4939_object;
	var_4941_object = var_4939_object;
	object var_4940_object;
	var_4939_object->FindMark(var_4940_object, "b8q01GrifGotoKlara");
	if(var_4940_object != 0)
		var_4940_object->Remove();
	var_4939_object->FindMark(var_4940_object, "b8q01KapellaGotoKlara");
	if(var_4940_object != 0)
		var_4940_object->Remove();
	var_4939_object->FindMark(var_4940_object, "b8q01NotkinGotoKlara");
	if(var_4940_object != 0)
		var_4940_object->Remove();
	var_4939_object->FindMark(var_4940_object, "b8q03GeorgGotoKaterina");
	if(var_4940_object != 0)
		var_4940_object->Remove();
	var_4939_object->FindMark(var_4940_object, "b8q03KaterinaGotoMat");
	if(var_4940_object != 0)
		var_4940_object->Remove();
	bool var_4952_bool;
	func_12261(var_4952_bool, 293);
	bool var_4954_bool;
	func_12261(var_4954_bool, 284);
	bool var_4956_bool;
	func_12261(var_4956_bool, 575);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_12207(void)
{
	object var_5061_object;
	@CreateDiaryEntry(var_5061_object, 565, 0, 530579);
	bool var_5065_bool; object var_5066_object;
	var_5061_object = var_5066_object;
	func_12233(var_5065_bool, var_5066_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10163(int var_5214_int, float var_5215_float)
{
	float var_5219_float;
	var_5215_float = var_5219_float;
	int var_5216_int;
	func_12278(var_5216_int, 529862, 529861, var_5219_float);
	var_5216_int = var_5214_int;
}


void func_12220(object var_4896_object)
{
	object var_4898_object;
	@GetDiaryRoot(var_4898_object);
	if(!var_4898_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_4896_object = false;
	}
	var_4898_object = var_4896_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10172(int var_5292_int, float var_5293_float)
{
	float var_5297_float;
	var_5293_float = var_5297_float;
	int var_5294_int;
	func_12278(var_5294_int, 529866, 529865, var_5297_float);
	var_5294_int = var_5292_int;
}


// @pe
void func_10181(int var_4732_int, float var_4733_float)
{
	float var_4737_float;
	var_4733_float = var_4737_float;
	int var_4734_int;
	func_12278(var_4734_int, 529854, 529853, var_4737_float);
	var_4734_int = var_4732_int;
}


void func_12233(bool var_4887_bool, object var_4888_object, int var_4889_int)
{
	object var_4896_object;
	func_12220(var_4896_object);
	object var_4893_object;
	var_4896_object = var_4893_object;
	object var_4894_object;
	var_4893_object->Find(var_4889_int, var_4894_object);
	if(!var_4894_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_4889_int);
		var_4887_bool = false;
	}
	var_4894_object->AddChild(var_4888_object);
	@SendWorldWndMessage(7);
	int var_4895_int;
	var_4888_object->GetCategory(var_4895_int);
	@SetDiarySection(var_4895_int);
	var_4887_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_970(int var_1322_int, int var_1323_int)
{
	bool var_1324_bool = true;
	var_1326_bool = var_1323_int >= 20;
	if(var_1326_bool != 1) {
		bool var_1327_bool = false;
		if(var_1323_int >= 6) {
			if(var_1323_int < 10)
				var_1327_bool = true;
		}
		if(var_1327_bool != 1)
			var_1324_bool = false;
	}
	if(var_1324_bool != 0) {
		int var_1332_int;
		var_1322_int = var_1332_int;
		func_729(var_1332_int, true);
	} else {
		int var_1334_int;
		var_1322_int = var_1334_int;
		func_729(var_1334_int, false);
	}
	
}


// @pe
void func_10190(int var_5230_int, float var_5231_float)
{
	float var_5235_float;
	var_5231_float = var_5235_float;
	int var_5232_int;
	func_12278(var_5232_int, 529864, 529863, var_5235_float);
	var_5232_int = var_5230_int;
}


// @pe
void func_5074(int var_3679_int, int var_3680_int, object var_3681_object, object var_3682_object, object var_3683_object, object var_3684_object)
{
	if(var_3680_int == 0) {
		func_746(3, false);
		func_763(3, false, 1);
		int var_3693_int; object var_3694_object; object var_3695_object; object var_3696_object;
		var_3679_int = var_3693_int;
		var_3681_object = var_3694_object;
		var_3682_object = var_3695_object;
		var_3683_object = var_3696_object;
		func_670(3, var_3693_int, var_3694_object, var_3695_object, var_3696_object);
		object var_3697_object;
		var_3684_object = var_3697_object;
		func_255(var_3697_object, 2);
		func_820(3, false, 7);
		func_882(3, true, 7);
	}
	func_729(3, false);
	int var_3708_int; int var_3709_int;
	var_3679_int = var_3708_int;
	var_3680_int = var_3709_int;
	func_3797(3, var_3708_int, var_3709_int);
}


void func_8150(void)
{
	object var_4383_object;
	@GetMainOutdoorScene(var_4383_object);
	var_4384_object = GlobalVars[0];
	object var_4385_object; object var_4386_object;
	var_4383_object = var_4386_object;
	func_7712(var_4385_object, var_4386_object, 1);
	var_4385_object = var_4384_object;
	GlobalVars[0] = var_4384_object;
	var_4407_object = GlobalVars[1];
	object var_4408_object; object var_4409_object;
	var_4383_object = var_4409_object;
	func_7712(var_4408_object, var_4409_object, 2);
	var_4408_object = var_4407_object;
	GlobalVars[1] = var_4407_object;
	var_4411_object = GlobalVars[2];
	object var_4412_object; object var_4413_object;
	var_4383_object = var_4413_object;
	func_7712(var_4412_object, var_4413_object, 3);
	var_4412_object = var_4411_object;
	GlobalVars[2] = var_4411_object;
	var_4415_object = GlobalVars[3];
	object var_4416_object; object var_4417_object;
	var_4383_object = var_4417_object;
	func_7712(var_4416_object, var_4417_object, 4);
	var_4416_object = var_4415_object;
	GlobalVars[3] = var_4415_object;
	var_4419_object = GlobalVars[4];
	object var_4420_object; object var_4421_object;
	var_4383_object = var_4421_object;
	func_7712(var_4420_object, var_4421_object, 5);
	var_4420_object = var_4419_object;
	GlobalVars[4] = var_4419_object;
	var_4423_object = GlobalVars[5];
	object var_4424_object; object var_4425_object;
	var_4383_object = var_4425_object;
	func_7712(var_4424_object, var_4425_object, 6);
	var_4424_object = var_4423_object;
	GlobalVars[5] = var_4423_object;
	var_4427_object = GlobalVars[12];
	object var_4428_object;
	func_100(var_4428_object);
	var_4428_object = var_4427_object;
	GlobalVars[12] = var_4427_object;
	func_7723(false);
	func_8698();
	func_8773();
	@SendWorldWndMessage(100);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10199(int var_5757_int, float var_5758_float)
{
	float var_5762_float;
	var_5758_float = var_5762_float;
	int var_5759_int;
	func_12278(var_5759_int, 531085, 531084, var_5762_float);
	var_5759_int = var_5757_int;
}


// @pe
void func_7132(int var_2999_int, int var_3000_int, object var_3001_object, object var_3002_object, object var_3003_object, object var_3004_object)
{
	if(var_3000_int == 0) {
		func_746(14, true);
		func_763(14, true, 1);
		int var_3013_int; object var_3014_object; object var_3015_object; object var_3016_object;
		var_2999_int = var_3013_int;
		var_3001_object = var_3014_object;
		var_3002_object = var_3015_object;
		var_3003_object = var_3016_object;
		func_591(14, var_3013_int, var_3014_object, var_3015_object, var_3016_object);
		object var_3017_object;
		var_3004_object = var_3017_object;
		func_255(var_3017_object, 1);
		func_820(14, true, 5);
		func_882(14, false, 5);
	}
	func_729(14, false);
	int var_3028_int; int var_3029_int;
	var_2999_int = var_3028_int;
	var_3000_int = var_3029_int;
	func_2534(14, var_3028_int, var_3029_int);
}


// @pe
void func_6111(int var_2834_int, int var_2835_int, object var_2836_object, object var_2837_object, object var_2838_object, object var_2839_object)
{
	if(var_2835_int == 0) {
		func_746(9, true);
		func_763(9, true, 1);
		int var_2848_int; object var_2849_object; object var_2850_object; object var_2851_object;
		var_2834_int = var_2848_int;
		var_2836_object = var_2849_object;
		var_2837_object = var_2850_object;
		var_2838_object = var_2851_object;
		func_591(9, var_2848_int, var_2849_object, var_2850_object, var_2851_object);
		object var_2852_object;
		var_2839_object = var_2852_object;
		func_255(var_2852_object, 1);
		func_820(9, true, 7);
		func_882(9, false, 7);
	}
	func_729(9, false);
	int var_2863_int; int var_2864_int;
	var_2834_int = var_2863_int;
	var_2835_int = var_2864_int;
	func_2714(9, var_2863_int, var_2864_int);
}


// @pe
void func_10208(int var_5705_int, float var_5706_float)
{
	float var_5710_float;
	var_5706_float = var_5710_float;
	int var_5707_int;
	func_12278(var_5707_int, 538402, 538401, var_5710_float);
	var_5707_int = var_5705_int;
}


void func_11236(void)
{
	object var_5146_object;
	func_12286(var_5146_object);
	object var_5144_object;
	var_5146_object = var_5144_object;
	object var_5145_object;
	var_5144_object->FindMark(var_5145_object, "b9q01MDobermanGotoFactory");
	if(var_5145_object != 0)
		var_5145_object->Remove();
	var_5144_object->FindMark(var_5145_object, "b9q03Bonfire1");
	if(var_5145_object != 0)
		var_5145_object->Remove();
	var_5144_object->FindMark(var_5145_object, "b9q03Bonfire2");
	if(var_5145_object != 0)
		var_5145_object->Remove();
	var_5144_object->FindMark(var_5145_object, "b9q03Bonfire3");
	if(var_5145_object != 0)
		var_5145_object->Remove();
	var_5144_object->FindMark(var_5145_object, "b9q03Bonfire4");
	if(var_5145_object != 0)
		var_5145_object->Remove();
	var_5144_object->FindMark(var_5145_object, "b9q03DobermanGotoFollower");
	if(var_5145_object != 0)
		var_5145_object->Remove();
	var_5144_object->FindMark(var_5145_object, "b9q03KapellaGotoSpi4ka");
	if(var_5145_object != 0)
		var_5145_object->Remove();
	var_5144_object->FindMark(var_5145_object, "b9q01BlockGotoBoiny");
	if(var_5145_object != 0)
		var_5145_object->Remove();
	var_5144_object->FindMark(var_5145_object, "b9Block");
	if(var_5145_object != 0)
		var_5145_object->Remove();
	bool var_5165_bool;
	func_12261(var_5165_bool, 297);
	bool var_5167_bool;
	func_12261(var_5167_bool, 532);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_12261(bool var_4810_bool, int var_4811_int)
{
	object var_4816_object;
	func_12220(var_4816_object);
	object var_4814_object;
	var_4816_object = var_4814_object;
	object var_4815_object;
	var_4814_object->Find(var_4811_int, var_4815_object);
	if(!var_4815_object) //@nz
		var_4810_bool = false;
	var_4815_object->Remove();
	var_4810_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1000(int var_724_int, int var_725_int)
{
	bool var_726_bool = true;
	bool var_727_bool = true;
	var_729_bool = var_725_int >= 22;
	if(var_729_bool != 1) {
		var_731_bool = var_725_int < 4;
		if(var_731_bool != 1)
			var_727_bool = false;
	}
	if(var_727_bool != 1) {
		bool var_732_bool = false;
		if(var_725_int >= 6) {
			if(var_725_int < 8)
				var_732_bool = true;
		}
		if(var_732_bool != 1)
			var_726_bool = false;
	}
	if(var_726_bool != 0) {
		int var_737_int;
		var_724_int = var_737_int;
		func_729(var_737_int, true);
	} else {
		int var_748_int;
		var_724_int = var_748_int;
		func_729(var_748_int, false);
	}
	
}


// @pe
void func_10217(int var_5338_int, float var_5339_float)
{
	float var_5343_float;
	var_5339_float = var_5343_float;
	int var_5340_int;
	func_12278(var_5340_int, 529868, 529867, var_5343_float);
	var_5340_int = var_5338_int;
}


// @pe
void func_10226(int var_5176_int, float var_5177_float)
{
	float var_5181_float;
	var_5177_float = var_5181_float;
	int var_5178_int;
	func_12278(var_5178_int, 529870, 529869, var_5181_float);
	var_5178_int = var_5176_int;
}


void func_12278(int var_4949_int, int var_4950_int, int var_4951_int, float var_4952_float)
{
	int var_4954_int;
	@AddMessage(var_4950_int, var_4951_int, var_4952_float, var_4954_int);
	@SendWorldWndMessage(6);
	var_4954_int = var_4949_int;
}


// @pe
void func_10235(int var_4740_int, float var_4741_float)
{
	float var_4745_float;
	var_4741_float = var_4745_float;
	int var_4742_int;
	func_12278(var_4742_int, 529856, 529855, var_4745_float);
	var_4742_int = var_4740_int;
}


void func_12286(object var_4854_object)
{
	object var_4857_object; object var_4858_object;
	@GetMainOutdoorScene(var_4857_object);
	if(var_4857_object == null) {
		@Trace("Can't find main outdoor scene");
		var_4858_object = null;
		var_4858_object = var_4854_object;
	}
	var_4857_object->GetMap(var_4858_object);
	var_4858_object = var_4854_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


