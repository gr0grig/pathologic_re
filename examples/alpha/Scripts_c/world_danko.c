// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:,17:object:,18:object:

maintask task_0
{
	void init(void)
	{
		@SetVariable("branch", 0);
		func_44();
		func_6791();
		func_7208();
		func_10100();
		func_11007();
	
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
		func_7162(var_3_int, var_4_float);
		bool var_2_bool;
		if(var_2_bool != 0)
			return 0;
		bool var_3588_bool; int var_3589_int; float var_3590_float;
		iID = var_3589_int;
		fTime = var_3590_float;
		func_10065(var_3589_int, var_3590_float);
		if(var_3588_bool != 0)
			return 0;
		int var_3783_int; float var_3784_float;
		iID = var_3783_int;
		fTime = var_3784_float;
		func_10142(var_3784_float);
	}

}


// @pe
void OnTrigger(string name, string var_1_string)
{
	if(name == "playsound")
		@PlaySound(var_1_string);
}


void OnConsole(string var_0_string, string var_1_string)
{
	int var_12_int; int var_13_int; object var_14_object; int var_15_int; int var_16_int; object var_17_object; object var_18_object; object var_19_object; cvector var_20_cvector; object var_21_object;
	if(var_0_string == "horror") {
		@_strtoi(var_12_int, var_1_string);
		var_24_object = GlobalVars[17];
		var_24_object->size(var_13_int);
		bool var_25_bool = false;
		if(var_12_int >= 0) {
			if(var_12_int < var_13_int)
				var_25_bool = true;
		}
		if(var_25_bool != 0) {
			var_29_object = GlobalVars[17];
			var_29_object->get(var_14_object, var_12_int);
			object var_30_object;
			var_14_object = var_30_object;
			func_229(var_30_object, 1);
			@Trace("Replaced");
			var_14_object = null;
		} else {
				@Trace("Invalid region index");
	}
			if(var_0_string == "nail") {
				@_strtoi(var_15_int, var_1_string);
				var_61_object = GlobalVars[17];
				var_61_object->size(var_16_int);
				bool var_62_bool = false;
				if(var_15_int >= 0) {
					if(var_15_int < var_16_int)
						var_62_bool = true;
				}
				if(var_62_bool != 0) {
					var_66_object = GlobalVars[17];
					var_66_object->get(var_17_object, var_15_int);
					object var_67_object;
					var_17_object = var_67_object;
					func_229(var_67_object, 2);
					@Trace("Replaced");
					var_17_object = null;
				} else {
				@Trace("Invalid region index");
			}
			if(!(var_0_string == "fogme")) goto Label_6544;
			object var_73_object;
			func_67(var_73_object);
			var_73_object = var_18_object;
			var_18_object->GetScene(var_19_object);
			var_18_object->GetPosition(var_20_cvector);
			@AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, [0.0, 0.0, 1.0], "fog_stat.xml");
			var_21_object = null;
			var_19_object = null;
			var_18_object = null;
			}
	}
	goto Label_6544;
	
Label_6544:
	for(;;) {

	}
	
}


void func_9728(void)
{
	object var_4191_object;
	func_10048(var_4191_object);
	object var_4189_object;
	var_4191_object = var_4189_object;
	object var_4190_object;
	var_4189_object->FindMark(var_4190_object, "d10q01AglajaGotoPetr");
	if(var_4190_object != 0)
		var_4190_object->Remove();
	var_4189_object->FindMark(var_4190_object, "d10q01SoldierGotoPetr");
	if(var_4190_object != 0)
		var_4190_object->Remove();
	bool var_4196_bool;
	func_10031(var_4196_bool, 186);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2052(int var_2151_int, int var_2152_int, int var_2153_int)
{
	int var_2156_int; int var_2157_int;
	bool var_2158_bool = false;
	if(var_2153_int > 8) {
		if(var_2153_int < 21)
			var_2158_bool = true;
	}
	if(var_2158_bool != 0) {
		int var_2163_int;
		var_2151_int = var_2163_int;
		func_438(var_2163_int, "pers_woman", "woman_d.xml", 1);
		int var_2167_int;
		var_2151_int = var_2167_int;
		func_438(var_2167_int, "pers_unosha", "unosha_d.xml", 1);
		int var_2171_int;
		var_2151_int = var_2171_int;
		func_438(var_2171_int, "pers_unosha", "unosha2_d.xml", 1);
		int var_2175_int;
		var_2151_int = var_2175_int;
		func_438(var_2175_int, "pers_boy", "boy_d.xml", 1);
		int var_2179_int;
		var_2151_int = var_2179_int;
		func_438(var_2179_int, "pers_girl", "girl_d.xml", 1);
		int var_2183_int;
		var_2151_int = var_2183_int;
		func_438(var_2183_int, "pers_girl", "girl2_d.xml", 1);
		int var_2187_int;
		var_2151_int = var_2187_int;
		func_438(var_2187_int, "pers_alkash", "alkash_d.xml", 1);
		int var_2191_int;
		var_2151_int = var_2191_int;
		func_438(var_2191_int, "pers_vaxxabit", "vaxxabit.xml", 1);
		int var_2195_int;
		var_2151_int = var_2195_int;
		func_438(var_2195_int, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		int var_2199_int;
		var_2151_int = var_2199_int;
		func_438(var_2199_int, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		int var_2203_int;
		var_2151_int = var_2203_int;
		func_438(var_2203_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		if((var_2152_int + 1) >= 3) {
		}
		int var_2211_int;
		var_2151_int = var_2211_int;
		func_464(var_2211_int, "fog", "fog.xml", 4);
		float var_2216_float; int var_2217_int;
		func_1022(var_2216_float, var_2217_int);
		if((1 * var_2216_float) != 0) {
			int var_2219_int; int var_2222_int;
			var_2151_int = var_2219_int;
			var_2156_int = var_2222_int;
			func_438(var_2219_int, "pers_bomber", "bomber.xml", var_2222_int);
		}
	} else {
		int var_2260_int;
		var_2151_int = var_2260_int;
		func_438(var_2260_int, "pers_woman", "woman_d.xml", 1);
		int var_2264_int;
		var_2151_int = var_2264_int;
		func_438(var_2264_int, "pers_unosha", "unosha_d.xml", 1);
		int var_2268_int;
		var_2151_int = var_2268_int;
		func_438(var_2268_int, "pers_unosha", "unosha2_d.xml", 1);
		int var_2272_int;
		var_2151_int = var_2272_int;
		func_438(var_2272_int, "pers_alkash", "alkash_d.xml", 1);
		int var_2276_int;
		var_2151_int = var_2276_int;
		func_438(var_2276_int, "pers_vaxxabit", "vaxxabit.xml", 1);
		int var_2280_int;
		var_2151_int = var_2280_int;
		func_438(var_2280_int, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		int var_2284_int;
		var_2151_int = var_2284_int;
		func_438(var_2284_int, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		int var_2288_int;
		var_2151_int = var_2288_int;
		func_438(var_2288_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		if((var_2217_int + 1) >= 3) {
		}
		int var_2296_int;
		var_2151_int = var_2296_int;
		func_464(var_2296_int, "fog", "fog.xml", 4);
		float var_2301_float; int var_2302_int;
		var_2152_int = var_2302_int;
		func_1022(var_2301_float, var_2302_int);
		if((1 * var_2301_float) == 0) goto Label_2251;
		int var_2304_int; int var_2307_int;
		var_2151_int = var_2304_int;
		var_2157_int = var_2307_int;
		func_438(var_2304_int, "pers_bomber", "bomber.xml", var_2307_int);
	}
Label_2251:
	int var_2223_int;
	var_2151_int = var_2223_int;
	func_451(var_2223_int, "pers_worker", "agony1.xml", 2, 4, 4);
	int var_2229_int;
	var_2151_int = var_2229_int;
	func_451(var_2229_int, "pers_unosha", "agony1.xml", 2, 4, 4);
	int var_2235_int;
	var_2151_int = var_2235_int;
	func_451(var_2235_int, "pers_woman", "agony1.xml", 2, 4, 4);
	int var_2241_int;
	var_2151_int = var_2241_int;
	func_451(var_2241_int, "pers_vaxxabitka", "agony1.xml", 2, 4, 4);
	int var_2247_int;
	var_2151_int = var_2247_int;
	func_451(var_2247_int, "pers_wasted_girl", "agony1.xml", 2, 4, 4);
	bool var_2253_bool; int var_2254_int; int var_2255_int;
	var_2152_int = var_2254_int;
	var_2153_int = var_2255_int;
	func_1112(var_2253_bool, var_2254_int, var_2255_int);
	if(var_2253_bool != 0) {
		int var_2256_int;
		var_2151_int = var_2256_int;
		func_438(var_2256_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
}


void func_11268(int var_4710_int)
{
	int var_4712_int;
	@GetVariable(("vol_" + var_4710_int), var_4712_int);
	@SetVariable(("vol_" + var_4710_int), (var_4712_int | 8));
}


void func_8200(int var_4558_int)
{
	int var_4560_int;
	@AddMessage(15489, 15488, var_4560_int);
	@SetVariable("player_mail", 1);
	var_4560_int = var_4558_int;
}


// @pe
void func_5641(object var_223_object)
{
	var_223_object->add("r5_house2_01");
	var_223_object->add("r5_house2_02");
	var_223_object->add("r5_house2_03");
	var_223_object->add("r5_house3_01_i2");
	var_223_object->add("r5_house3_01");
	var_223_object->add("r5_house3_02_i2");
	var_223_object->add("r5_house3_02");
	var_223_object->add("r5_house3_03_i2");
	var_223_object->add("r5_house3_03");
	var_223_object->add("r5_house3_04_i2");
	var_223_object->add("r5_house3_04");
	var_223_object->add("r5_house3_05_i2");
	var_223_object->add("r5_house3_05");
	var_223_object->add("r5_house3_06_i2");
	var_223_object->add("r5_house3_06");
	var_223_object->add("r5_house3_07_i2");
	var_223_object->add("r5_house3_07");
	var_223_object->add("r5_House6_01");
}


void func_8718(void)
{
	object var_4977_object;
	func_10048(var_4977_object);
	object var_4975_object;
	var_4977_object = var_4975_object;
	object var_4976_object;
	var_4975_object->FindMark(var_4976_object, "d2q01AlexandrGotoAnna");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q01AlexandrGotoBigVlad");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q01AlexandrGotoGeorg");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q01AnnaGotoKapella");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q01KapellaGotoSpi4ka");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q01WomanDGotoAlexandr");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02AndreiGotoGrif");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02AndreiGotoGrifSelf");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02AndreiGotoPetr");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02AndreiGotoPetrSelf");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02EvaGotoAndrei");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02EvaGotoAndreiSelf");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02EvaGotoMaria");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02MariaGotoPetr");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02PetrGotoAndrei");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02PetrGotoAndreiSelf");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02PetrRefusedSelf");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q02ReadyAndrei");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q03BirdmaskGotoLara");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q03BirdmaskGotoLaraSelf");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q03LaraGotoJulia");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q03LaraGotoMaria");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q03LaraGotoMladVlad");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q03LaraGotoMoneyFoodSelf");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q03LaraGotoSklad");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	var_4975_object->FindMark(var_4976_object, "d2q03LaraGotoSkladSelf");
	if(var_4976_object != 0)
		var_4976_object->Remove();
	bool var_5030_bool;
	func_10031(var_5030_bool, 10);
	bool var_5032_bool;
	func_10031(var_5032_bool, 11);
	bool var_5034_bool;
	func_10031(var_5034_bool, 12);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_11280(void)
{
	int var_4703_int; int var_4704_int;
	var_4703_int = 0;
	
	for(;;) {
		if(var_4703_int < 3) {
			@irand(var_4704_int, 13);
			if(var_4704_int == 0) {
				func_11268(11);
			} else {
			if(var_4704_int == 1) {
				func_11268(18);
			} else if(var_4704_int == 2) {
				func_11268(21);
			} else if(var_4704_int == 3) {
				func_11268(2);
			} else if(var_4704_int == 4) {
				func_11268(9);
			} else if(var_4704_int == 5) {
				func_11268(13);
			} else if(var_4704_int == 6) {
				func_11268(24);
			} else if(var_4704_int == 7) {
				func_11268(10);
			} else if(var_4704_int == 8) {
				func_11268(20);
			} else if(var_4704_int == 9) {
				func_11268(21);
			} else if(var_4704_int == 10) {
				func_11268(3);
			} else if(var_4704_int == 11) {
				func_11268(19);
			} else if(var_4704_int == 12) {
				func_11268(26);
			}
		}
		return 4;
		}
		var_4703_int += 1;
	}
	
}


void func_8211(int var_4578_int)
{
	int var_4580_int;
	@AddMessage(15491, 15490, var_4580_int);
	@SetVariable("player_mail", 1);
	var_4580_int = var_4578_int;
}


// @pe
void func_5140(object var_172_object)
{
	var_172_object->add("r2_house_2_02");
	var_172_object->add("r2_house_2_03");
	var_172_object->add("r2_house7_02");
	var_172_object->add("r2_house01_01");
	var_172_object->add("r2_house7_01");
	var_172_object->add("r2_house3_01_i2");
	var_172_object->add("r2_house3_01");
	var_172_object->add("r2_house3_02_i2");
	var_172_object->add("r2_house3_02");
	var_172_object->add("r2_house3_03_i2");
	var_172_object->add("r2_house3_03");
}


void func_533(string var_1457_string, object var_1458_object)
{
	object var_1471_object; bool var_1473_bool; cvector var_1474_cvector; cvector var_1475_cvector; object var_1476_object;
	@GetMainOutdoorScene(var_1471_object);
	int var_1472_int = 0;
	
	for(;;) {
		var_1471_object->GetLocator((var_1457_string + (var_1472_int + 1)), var_1473_bool, var_1474_cvector, var_1475_cvector);
		if(!var_1473_bool) //@nz
			break;
		var_1471_object->AddStationaryActorByType(var_1476_object, var_1474_cvector, var_1475_cvector, "fog", "fog_stat.xml");
		var_1458_object->add(var_1476_object);
		var_1476_object = null;
		var_1472_int += 1;
	}
}
EMIT "Stack[-7] = 0";


// @pe
void func_4632(int var_3187_int, int var_3188_int, object var_3189_object, object var_3190_object, object var_3191_object, object var_3192_object)
{
	if(var_3188_int == 0) {
		func_731(4, true);
		func_748(4, true, 1);
		int var_3201_int; object var_3202_object; object var_3203_object; object var_3204_object;
		var_3187_int = var_3201_int;
		var_3189_object = var_3202_object;
		var_3190_object = var_3203_object;
		var_3191_object = var_3204_object;
		func_655(4, var_3201_int, var_3202_object, var_3203_object, var_3204_object);
		object var_3205_object;
		var_3192_object = var_3205_object;
		func_229(var_3205_object, 2);
	}
	func_714(4, false);
	int var_3210_int; int var_3211_int;
	var_3187_int = var_3210_int;
	var_3188_int = var_3211_int;
	func_3338(4, var_3210_int, var_3211_int);
}


// @pe
void func_9754(void)
{
	bool var_4815_bool;
	func_10031(var_4815_bool, 192);
	bool var_4817_bool;
	func_10031(var_4817_bool, 197);
}


// @pe
void func_4126(object var_60_object)
{
	var_60_object->add("dt_house1_union2_05l");
	var_60_object->add("dt_house1_union2_05r");
	var_60_object->add("dt_house2_04");
	var_60_object->add("dt_house2_05");
	var_60_object->add("dt_house2_02");
	var_60_object->add("dt_house2_01");
	var_60_object->add("dt_house3_10_i2");
	var_60_object->add("dt_house3_10");
	var_60_object->add("dt_house3_11_i2");
	var_60_object->add("dt_house3_11");
	var_60_object->add("dt_house3_12_i2");
	var_60_object->add("dt_house3_12");
	var_60_object->add("dt_house_1_06");
	var_60_object->add("dt_house3_07_i2");
	var_60_object->add("dt_house3_07");
	var_60_object->add("house5_21");
	var_60_object->add("house1_se_02l");
	var_60_object->add("house1_se_02r");
	var_60_object->add("dt_house3_01_i2");
	var_60_object->add("dt_house3_02_i2");
	var_60_object->add("dt_house3_02");
	var_60_object->add("dt_house3_03_i2");
	var_60_object->add("dt_house3_03");
}


void func_8222(int var_3889_int)
{
	int var_3891_int;
	@AddMessage(1160, 1159, var_3891_int);
	@SetVariable("player_mail", 1);
	var_3891_int = var_3889_int;
}


void func_2592(int var_1513_int, int var_1514_int, int var_1515_int)
{
	int var_1518_int; int var_1519_int;
	bool var_1520_bool = false;
	if(var_1515_int > 8) {
		if(var_1515_int < 21)
			var_1520_bool = true;
	}
	if(var_1520_bool != 0) {
		int var_1525_int;
		var_1513_int = var_1525_int;
		func_438(var_1525_int, "pers_boy", "boy_d.xml", 1);
		int var_1529_int;
		var_1513_int = var_1529_int;
		func_438(var_1529_int, "pers_alkash", "alkash_d.xml", 1);
		int var_1533_int;
		var_1513_int = var_1533_int;
		func_438(var_1533_int, "pers_girl", "girl_d.xml", 1);
		int var_1537_int;
		var_1513_int = var_1537_int;
		func_438(var_1537_int, "pers_worker", "worker_d.xml", 1);
		int var_1541_int;
		var_1513_int = var_1541_int;
		func_438(var_1541_int, "pers_worker", "worker2_d.xml", 1);
		int var_1545_int;
		var_1513_int = var_1545_int;
		func_438(var_1545_int, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		int var_1549_int;
		var_1513_int = var_1549_int;
		func_438(var_1549_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		int var_1553_int;
		var_1513_int = var_1553_int;
		func_464(var_1553_int, "fog", "fog.xml", 6);
		float var_1562_float; int var_1563_int;
		var_1514_int = var_1563_int;
		func_1022(var_1562_float, var_1563_int);
		if((1 * var_1562_float) != 0) {
			int var_1609_int; int var_1612_int;
			var_1513_int = var_1609_int;
			var_1518_int = var_1612_int;
			func_438(var_1609_int, "pers_bomber", "bomber.xml", var_1612_int);
		}
	} else {
		int var_1647_int;
		var_1513_int = var_1647_int;
		func_438(var_1647_int, "pers_boy", "boy_d.xml", 1);
		int var_1651_int;
		var_1513_int = var_1651_int;
		func_438(var_1651_int, "pers_alkash", "alkash_d.xml", 1);
		int var_1655_int;
		var_1513_int = var_1655_int;
		func_438(var_1655_int, "pers_girl", "girl_d.xml", 1);
		int var_1659_int;
		var_1513_int = var_1659_int;
		func_438(var_1659_int, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		int var_1663_int;
		var_1513_int = var_1663_int;
		func_438(var_1663_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		int var_1667_int;
		var_1513_int = var_1667_int;
		func_464(var_1667_int, "fog", "fog.xml", 6);
		float var_1672_float; int var_1673_int;
		var_1514_int = var_1673_int;
		func_1022(var_1672_float, var_1673_int);
		if((2 * var_1672_float) == 0) goto Label_2732;
		int var_1675_int; int var_1678_int;
		var_1513_int = var_1675_int;
		var_1519_int = var_1678_int;
		func_438(var_1675_int, "pers_bomber", "bomber.xml", var_1678_int);
	}
Label_2732:
	int var_1613_int;
	var_1513_int = var_1613_int;
	func_451(var_1613_int, "pers_worker", "agony1.xml", 2, 4, 4);
	int var_1623_int;
	var_1513_int = var_1623_int;
	func_451(var_1623_int, "pers_unosha", "agony1.xml", 2, 4, 4);
	int var_1629_int;
	var_1513_int = var_1629_int;
	func_451(var_1629_int, "pers_woman", "agony1.xml", 2, 4, 4);
	int var_1635_int;
	var_1513_int = var_1635_int;
	func_451(var_1635_int, "pers_vaxxabitka", "agony1.xml", 2, 4, 4);
	int var_1641_int;
	var_1513_int = var_1641_int;
	func_451(var_1641_int, "pers_wasted_girl", "agony1.xml", 2, 4, 4);
	
}


void func_6688(void)
{
	object var_3876_object; bool var_3877_bool; cvector var_3878_cvector; cvector var_3879_cvector; int var_3880_int; object var_3881_object; object var_3882_object;
	@Trace("Setting arena...");
	var_3884_object = GlobalVars[15];
	if(var_3884_object == null) {
		@GetMainOutdoorScene(var_3876_object);
		var_3876_object->GetLocator("pt_arena_manager", var_3877_bool, var_3878_cvector, var_3879_cvector);
		if(!var_3877_bool) { //@nz
			@Trace("Locator doesn't exist for arena manager");
		} else {
				var_3906_object = GlobalVars[15];
				object var_3907_object; object var_3908_object; cvector var_3909_cvector; cvector var_3910_cvector;
				var_3876_object = var_3908_object;
				var_3878_cvector = var_3909_cvector;
				var_3879_cvector = var_3910_cvector;
				func_11636(var_3907_object, var_3908_object, var_3909_cvector, var_3910_cvector);
				var_3907_object = var_3906_object;
				GlobalVars[15] = var_3906_object;
		}
		var_3880_int = 0;

		for(;;) {
			if(var_3880_int < 6) {
				var_3876_object->GetLocator(("pt_arena_torch" + (var_3880_int + 1)), var_3877_bool, var_3878_cvector, var_3879_cvector);
				if(!var_3877_bool) { //@nz
					@Trace("Locator doesn't exist for arena torch " + (var_3880_int + 1));
				} else {
				@AddActorByType(var_3881_object, "scripted", var_3876_object, var_3878_cvector, var_3879_cvector, "torch.xml");
				var_3903_object = GlobalVars[16];
				var_3903_object->add(var_3881_object);
				var_3881_object = null;
			}
			@FindActor(var_3882_object, "arena_light");
			var_3882_object->Switch(true);
			var_3882_object = null;
			var_3876_object = null;
	}

		}
		var_3880_int += 1;
	}
	
}


// @pe
void func_9764(void)
{
	bool var_4555_bool;
	func_153(var_4555_bool, "quest_d12_01", "init_mnogogrannik");
}


void func_7208(void)
{
	float var_326_float; int var_328_int; float var_329_float; int var_330_int; object var_331_object;
	@GetGameTime(var_326_float);
	int var_327_int = 1;
	
	while(var_327_int < 12) {
		@SetTimeEvent((16384 + var_327_int), (24 * var_327_int));
		var_327_int += 1;
	}
	
	
	for(;;) {
		if(0 < 288) {
			var_328_int = var_329_float;
			if(var_329_float < var_326_float) {
			} else {
			@SetTimeEvent((32768 + var_328_int), var_329_float);
		}

		while(0 < 16) {
			string var_347_string; int var_348_int;
			var_330_int = var_348_int;
			func_223(var_347_string, var_348_int);
			@SetVariable(var_347_string, 0);
			int var_353_int;
			var_330_int = var_353_int;
			func_731(var_353_int, false);
			var_330_int += 1;
		}

		int var_366_int = var_326_float % 24;
		func_7280(0, var_366_int);
		@GetMainOutdoorScene(var_331_object);
		bool var_3771_bool = true;
		var_3773_bool = var_326_float < 10;
		if(var_3773_bool != 1) {
			var_3775_bool = var_326_float >= 18;
			if(var_3775_bool != 1)
				var_3771_bool = false;
		}
		var_331_object->SwitchLights(0, var_3771_bool);
		return 12;
		}
		var_328_int += 1;
	}
	
}
EMIT "Stack[-1] = 0";


void func_8233(int var_4836_int)
{
	int var_4838_int;
	@AddMessage(1158, 1157, var_4838_int);
	@SetVariable("player_mail", 1);
	var_4838_int = var_4836_int;
}


// @pe
void func_6186(int var_1237_int, int var_1238_int, object var_1239_object, object var_1240_object, object var_1241_object, object var_1242_object)
{
	if(var_1238_int == 0) {
		func_731(14, false);
		func_748(14, false, 1);
		int var_1250_int; int var_1251_int; object var_1252_object; object var_1253_object; object var_1254_object;
		var_1250_int = 14;
		var_1237_int = var_1251_int;
		var_1239_object = var_1252_object;
		var_1240_object = var_1253_object;
		var_1241_object = var_1254_object;
		func_557(var_1251_int, var_1252_object, var_1253_object, var_1254_object);
		object var_1255_object;
		var_1242_object = var_1255_object;
		func_229(var_1255_object, 0);
	}
	int var_1258_int;
	var_1238_int = var_1258_int;
	func_909(14, var_1258_int);
	int var_1269_int; int var_1270_int;
	var_1237_int = var_1269_int;
	var_1238_int = var_1270_int;
	func_1122(14, var_1269_int, var_1270_int);
}


// @pe
void func_9771(void)
{
	bool var_4575_bool;
	func_153(var_4575_bool, "quest_d12_01", "init_theater");
}


void func_44(void)
{
	object var_7_object;
	@FindActor(var_7_object, "player");
	object var_8_object;
	@GetSceneByName(var_8_object, "cot_eva");
	if(!var_8_object) //@nz
		@Trace("Starting scene not found");
	bool var_9_bool;
	cvector var_10_cvector;
	cvector var_11_cvector;
	var_8_object->GetLocator("pt_Danko", var_9_bool, var_10_cvector, var_11_cvector);
	if(var_9_bool != 0)
		@Teleport(var_7_object, var_8_object, var_10_cvector, var_11_cvector);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


// @pe
void func_557(int var_457_int, object var_459_object, object var_460_object, object var_461_object)
{
	int var_462_int;
	var_457_int = var_462_int;
	func_477(var_462_int, true);
	object var_490_object;
	var_459_object = var_490_object;
	func_189(var_490_object);
	object var_500_object;
	var_460_object = var_500_object;
	func_189(var_500_object);
	object var_501_object;
	var_461_object = var_501_object;
	func_189(var_501_object);
}


// @pe
void func_9778(void)
{
	func_137("sobor@door1", true);
}


void func_8244(int var_4352_int)
{
	int var_4354_int;
	@AddMessage(1154, 1153, var_4354_int);
	@SetVariable("player_mail", 1);
	var_4354_int = var_4352_int;
}


// @pe
void func_5175(int var_1075_int, int var_1076_int, object var_1077_object, object var_1078_object, object var_1079_object, object var_1080_object)
{
	if(var_1076_int == 0) {
		func_731(8, false);
		func_748(8, false, 1);
		int var_1088_int; int var_1089_int; object var_1090_object; object var_1091_object; object var_1092_object;
		var_1088_int = 8;
		var_1075_int = var_1089_int;
		var_1077_object = var_1090_object;
		var_1078_object = var_1091_object;
		var_1079_object = var_1092_object;
		func_557(var_1089_int, var_1090_object, var_1091_object, var_1092_object);
		object var_1093_object;
		var_1080_object = var_1093_object;
		func_229(var_1093_object, 0);
	}
	int var_1096_int;
	var_1076_int = var_1096_int;
	func_805(8, var_1096_int);
	int var_1098_int; int var_1099_int;
	var_1075_int = var_1098_int;
	var_1076_int = var_1099_int;
	func_1270(8, var_1098_int, var_1099_int);
}


// @pe
void func_9785(void)
{
	bool var_4380_bool;
	func_153(var_4380_bool, "quest_d12_01", "place_birdmask");
}


void func_8255(int var_3985_int)
{
	int var_3987_int;
	@AddMessage(1152, 1151, var_3987_int);
	@SetVariable("player_mail", 1);
	var_3987_int = var_3985_int;
}


// @pe
void func_576(int var_1419_int, int var_1420_int, object var_1421_object, object var_1422_object, object var_1423_object)
{
	int var_1424_int;
	var_1419_int = var_1424_int;
	func_477(var_1424_int, false);
	object var_1426_object;
	var_1421_object = var_1426_object;
	func_189(var_1426_object);
	object var_1427_object;
	var_1422_object = var_1427_object;
	func_189(var_1427_object);
	object var_1428_object;
	var_1423_object = var_1428_object;
	func_189(var_1428_object);
	if(var_1420_int <= 8) {
		object var_1432_object;
		var_1421_object = var_1432_object;
		func_511((("pt_blockpost" + (var_1419_int + 1)) + "_1_"), var_1432_object, "pers_patrool", "patrol_stat.xml");
		object var_1458_object;
		var_1423_object = var_1458_object;
		func_533((("pt_fog" + (var_1419_int + 1)) + "_"), var_1458_object);
	} else {
		object var_1485_object;
		var_1421_object = var_1485_object;
		func_511((("pt_blockpost" + (var_1419_int + 1)) + "_1_"), var_1485_object, "pers_soldat", "soldier.xml");
		object var_1494_object;
		var_1422_object = var_1494_object;
		func_511((("pt_blockpost" + (var_1419_int + 1)) + "_2_"), var_1494_object, "pers_sanitar", "sanitar_stat.xml");
		object var_1503_object;
		var_1423_object = var_1503_object;
		func_533((("pt_fog" + (var_1419_int + 1)) + "_"), var_1503_object);
	}
	
}


// @pe
void func_4672(object var_126_object)
{
	var_126_object->add("dt_house3_14_i2");
	var_126_object->add("dt_house3_14");
	var_126_object->add("house1_arc_01l");
	var_126_object->add("house1_arc_01r");
	var_126_object->add("dt_House6_01");
	var_126_object->add("dt_house_1_09");
	var_126_object->add("house5_24");
	var_126_object->add("dt_House6_03");
	var_126_object->add("dt_House6_04");
	var_126_object->add("dt_house_1_08");
	var_126_object->add("house5_unoin_solidl");
	var_126_object->add("house5_unoin_solidr");
	var_126_object->add("dt_house2_12");
	var_126_object->add("dt_house2_11");
	var_126_object->add("dt_house2_13");
	var_126_object->add("dt_house2_09");
	var_126_object->add("dt_house2_08");
	var_126_object->add("dt_house2_07");
	var_126_object->add("dt_house2_06");
	var_126_object->add("house5_01");
	var_126_object->add("house5_15");
	var_126_object->add("house5_16");
	var_126_object->add("house5_17");
	var_126_object->add("house5_unoin04l");
	var_126_object->add("house5_unoin04r");
	var_126_object->add("house5_23");
}


// @pe
void func_5697(int var_1156_int, int var_1157_int, object var_1158_object, object var_1159_object, object var_1160_object, object var_1161_object)
{
	if(var_1157_int == 0) {
		func_731(11, false);
		func_748(11, false, 1);
		int var_1169_int; int var_1170_int; object var_1171_object; object var_1172_object; object var_1173_object;
		var_1169_int = 11;
		var_1156_int = var_1170_int;
		var_1158_object = var_1171_object;
		var_1159_object = var_1172_object;
		var_1160_object = var_1173_object;
		func_557(var_1170_int, var_1171_object, var_1172_object, var_1173_object);
		object var_1174_object;
		var_1161_object = var_1174_object;
		func_229(var_1174_object, 0);
	}
	int var_1177_int;
	var_1157_int = var_1177_int;
	func_805(11, var_1177_int);
	int var_1179_int; int var_1180_int;
	var_1156_int = var_1179_int;
	var_1157_int = var_1180_int;
	func_1270(11, var_1179_int, var_1180_int);
}


void func_67(object var_73_object)
{
	object var_75_object;
	@FindActor(var_75_object, "player");
	var_75_object = var_73_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_9792(bool var_4345_bool)
{
	int var_4348_int;
	func_92(var_4348_int, "d1q01");
	if(var_4348_int == 0) {
		var_4345_bool = true;
		return 0;
	}
	var_4345_bool = false;
}


// @pe
void func_1607(int var_555_int, int var_557_int)
{
	bool var_558_bool = false;
	if(var_557_int > 8) {
		if(var_557_int < 21)
			var_558_bool = true;
	}
	if(var_558_bool != 0) {
		int var_563_int;
		var_555_int = var_563_int;
		func_438(var_563_int, "pers_boy", "boy.xml", 1);
		int var_571_int;
		var_555_int = var_571_int;
		func_438(var_571_int, "pers_alkash", "alkash.xml", 1);
		int var_575_int;
		var_555_int = var_575_int;
		func_438(var_575_int, "pers_girl", "girl.xml", 1);
		int var_579_int;
		var_555_int = var_579_int;
		func_438(var_579_int, "pers_girl", "girl2.xml", 1);
		int var_583_int;
		var_555_int = var_583_int;
		func_438(var_583_int, "pers_worker", "worker.xml", 2);
		int var_587_int;
		var_555_int = var_587_int;
		func_438(var_587_int, "pers_worker", "worker2.xml", 2);
		int var_591_int;
		var_555_int = var_591_int;
		func_438(var_591_int, "pers_dog", "dog.xml", 1);
	} else {
		int var_595_int;
		var_555_int = var_595_int;
		func_438(var_595_int, "pers_alkash", "alkash.xml", 2);
		int var_599_int;
		var_555_int = var_599_int;
		func_438(var_599_int, "pers_worker", "worker.xml", 1);
		int var_603_int;
		var_555_int = var_603_int;
		func_438(var_603_int, "pers_worker", "worker2.xml", 1);
		int var_607_int;
		var_555_int = var_607_int;
		func_438(var_607_int, "pers_dog", "dog.xml", 1);
	}
	
}


void func_74(bool var_476_bool, object var_477_object, string var_478_string)
{
	var_483_bool = IsFuncExist(var_477_object, "HasProperty", 2);
	if(!var_483_bool) { //@nz
		var_476_bool = false;
		return 2;
	}
	bool var_480_bool;
	var_477_object->HasProperty(var_478_string, var_480_bool);
	var_480_bool = var_476_bool;
}


void func_8266(int var_4665_int)
{
	int var_4667_int;
	@AddMessage(1156, 1155, var_4667_int);
	@SetVariable("player_mail", 1);
	var_4667_int = var_4665_int;
}


// @pe
void func_9804(bool var_4657_bool)
{
	int var_4660_int;
	func_92(var_4660_int, "d1q01KaterinaUHave1day");
	if(var_4660_int == 1)
		var_4657_bool = true;
	var_4657_bool = false;
}


// @pe
void func_6226(int var_2472_int, int var_2473_int, object var_2474_object, object var_2475_object, object var_2476_object, object var_2477_object)
{
	if(var_2473_int == 0) {
		func_731(14, true);
		func_748(14, true, 1);
		int var_2486_int; object var_2487_object; object var_2488_object; object var_2489_object;
		var_2472_int = var_2486_int;
		var_2474_object = var_2487_object;
		var_2475_object = var_2488_object;
		var_2476_object = var_2489_object;
		func_576(14, var_2486_int, var_2487_object, var_2488_object, var_2489_object);
		object var_2490_object;
		var_2477_object = var_2490_object;
		func_229(var_2490_object, 1);
	}
	func_714(14, false);
	int var_2495_int; int var_2496_int;
	var_2472_int = var_2495_int;
	var_2473_int = var_2496_int;
	func_1797(14, var_2495_int, var_2496_int);
}


void func_8277(int var_4591_int)
{
	int var_4593_int;
	@AddMessage(1175, 1174, var_4593_int);
	@SetVariable("player_mail", 1);
	var_4593_int = var_4591_int;
}


void func_3158(int var_3287_int, int var_3288_int, int var_3289_int)
{
	int var_3294_int; int var_3295_int; int var_3296_int; int var_3297_int;
	bool var_3298_bool = false;
	if(var_3289_int > 8) {
		if(var_3289_int < 21)
			var_3298_bool = true;
	}
	if(var_3298_bool != 0) {
		int var_3303_int;
		var_3287_int = var_3303_int;
		func_438(var_3303_int, "pers_woman", "woman.xml", 1);
		int var_3307_int;
		var_3287_int = var_3307_int;
		func_438(var_3307_int, "pers_unosha", "unosha.xml", 1);
		int var_3311_int;
		var_3287_int = var_3311_int;
		func_438(var_3311_int, "pers_unosha", "unosha2.xml", 1);
		int var_3315_int;
		var_3287_int = var_3315_int;
		func_438(var_3315_int, "pers_boy", "boy.xml", 1);
		if((var_3288_int + 1) >= 2) {
			int var_3323_int;
			var_3287_int = var_3323_int;
			func_438(var_3323_int, "pers_patrool", "patrol.xml", 2);
		}
		int var_3327_int;
		var_3287_int = var_3327_int;
		func_438(var_3327_int, "pers_rat", "rat.xml", 2);
		float var_3332_float; int var_3333_int;
		var_3288_int = var_3333_int;
		func_932(var_3332_float, var_3333_int);
		if((1 * var_3332_float) != 0) {
			int var_3335_int; int var_3338_int;
			var_3287_int = var_3335_int;
			var_3294_int = var_3338_int;
			func_438(var_3335_int, "pers_grabitel", "grabitel.xml", var_3338_int);
		}
		float var_3340_float; int var_3341_int;
		func_1022(var_3340_float, var_3341_int);
		if((1 * var_3340_float) != 0) {
			int var_3343_int; int var_3346_int;
			var_3287_int = var_3343_int;
			var_3295_int = var_3346_int;
			func_438(var_3343_int, "pers_bomber", "bomber.xml", var_3346_int);
		}
	} else {
		int var_3354_int;
		var_3287_int = var_3354_int;
		func_438(var_3354_int, "pers_woman", "woman.xml", 1);
		int var_3358_int;
		var_3287_int = var_3358_int;
		func_438(var_3358_int, "pers_unosha", "unosha.xml", 1);
		int var_3362_int;
		var_3287_int = var_3362_int;
		func_438(var_3362_int, "pers_unosha", "unosha2.xml", 1);
		int var_3366_int;
		var_3287_int = var_3366_int;
		func_438(var_3366_int, "pers_boy", "boy.xml", 1);
		if((var_3341_int + 1) >= 2) {
			int var_3374_int;
			var_3287_int = var_3374_int;
			func_438(var_3374_int, "pers_patrool", "patrol.xml", 2);
		}
		int var_3378_int;
		var_3287_int = var_3378_int;
		func_438(var_3378_int, "pers_rat", "rat.xml", 2);
		float var_3383_float; int var_3384_int;
		var_3288_int = var_3384_int;
		func_932(var_3383_float, var_3384_int);
		if((2 * var_3383_float) != 0) {
			int var_3386_int; int var_3389_int;
			var_3287_int = var_3386_int;
			var_3296_int = var_3389_int;
			func_438(var_3386_int, "pers_grabitel", "grabitel.xml", var_3389_int);
		}
		float var_3391_float; int var_3392_int;
		var_3288_int = var_3392_int;
		func_1022(var_3391_float, var_3392_int);
		if((1 * var_3391_float) == 0) goto Label_3324;
		int var_3394_int; int var_3397_int;
		var_3287_int = var_3394_int;
		var_3297_int = var_3397_int;
		func_438(var_3394_int, "pers_bomber", "bomber.xml", var_3397_int);
	}
Label_3324:
	bool var_3347_bool; int var_3348_int; int var_3349_int;
	var_3288_int = var_3348_int;
	var_3289_int = var_3349_int;
	func_1112(var_3347_bool, var_3348_int, var_3349_int);
	if(var_3347_bool != 0) {
		int var_3350_int;
		var_3287_int = var_3350_int;
		func_438(var_3350_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
}


void func_86(object var_27_object)
{
	object var_29_object;
	@CreateObjectVector(var_29_object);
	var_29_object = var_27_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1112(bool var_783_bool, int var_784_int, int var_785_int)
{
	var_783_bool = false;
	if(var_784_int == 10) {
		if(var_785_int < 6)
			var_783_bool = true;
	}
}


// @pe
void func_9816(bool var_3913_bool)
{
	int var_3916_int;
	func_92(var_3916_int, "d6q03");
	if(var_3916_int == 0) {
		var_3913_bool = true;
		return 0;
	}
	var_3913_bool = false;
}


void func_92(int var_3916_int, string var_3917_string)
{
	int var_3919_int;
	@GetVariable(var_3917_string, var_3919_int);
	var_3919_int = var_3916_int;
}


void func_9310(void)
{
	object var_4046_object;
	func_10048(var_4046_object);
	object var_4044_object;
	var_4046_object = var_4044_object;
	object var_4045_object;
	var_4044_object->FindMark(var_4045_object, "d5q01AlexandrGotoKaterina");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q01BigVladGotoAlexandr");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q01BurahMeeting1");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q01BurahMeeting2");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q01GrifWantsMoney");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q01GrifWillHelp");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q01KaterinaGotoLara");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q01PatrolGotoGrif");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q01RubinGotoBigVlad");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q01RubinGotoBigVladSelf");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q02AnnaGotoGorbun");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q02AnnaGotoGorbunSelf");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q02AnnaGotoKabak");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q02GorbunFindTheDaughter");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q02NudeMeeting");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q03BirdmaskBringMoneySelf");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q03BirdmaskGotoMladVlad");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q03BirdmaskGotoViktor");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q03MladVladSavePrisonersSelf");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q03SavePrisoners");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	var_4044_object->FindMark(var_4045_object, "d5q03ViktorSavePrisonersSelf");
	if(var_4045_object != 0)
		var_4045_object->Remove();
	bool var_4089_bool;
	func_10031(var_4089_bool, 139);
	bool var_4091_bool;
	func_10031(var_4091_bool, 148);
	bool var_4093_bool;
	func_10031(var_4093_bool, 154);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5215(int var_2310_int, int var_2311_int, object var_2312_object, object var_2313_object, object var_2314_object, object var_2315_object)
{
	if(var_2311_int == 0) {
		func_731(8, true);
		func_748(8, true, 1);
		int var_2324_int; object var_2325_object; object var_2326_object; object var_2327_object;
		var_2310_int = var_2324_int;
		var_2312_object = var_2325_object;
		var_2313_object = var_2326_object;
		var_2314_object = var_2327_object;
		func_576(8, var_2324_int, var_2325_object, var_2326_object, var_2327_object);
		object var_2328_object;
		var_2315_object = var_2328_object;
		func_229(var_2328_object, 1);
	}
	func_714(8, false);
	int var_2333_int; int var_2334_int;
	var_2310_int = var_2333_int;
	var_2311_int = var_2334_int;
	func_2052(8, var_2333_int, var_2334_int);
}


void func_8288(int var_4682_int)
{
	int var_4684_int;
	@AddMessage(14525, 14524, var_4684_int);
	@SetVariable("player_mail", 1);
	var_4684_int = var_4682_int;
}


void func_97(object var_3992_object, string var_3993_string)
{
	object var_3996_object;
	@GetMainOutdoorScene(var_3996_object);
	object var_3997_object;
	@AddBlankActor(var_3997_object, var_3996_object, var_3993_string, (var_3993_string + ".bin"));
	var_3997_object = var_3992_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1122(int var_1268_int, int var_1269_int, int var_1270_int)
{
	bool var_1271_bool = false;
	if(var_1270_int > 8) {
		if(var_1270_int < 21)
			var_1271_bool = true;
	}
	if(var_1271_bool != 0) {
		int var_1276_int;
		var_1268_int = var_1276_int;
		func_438(var_1276_int, "pers_wasted_girl", "wasted_girl.xml", 2);
		int var_1280_int;
		var_1268_int = var_1280_int;
		func_438(var_1280_int, "pers_wasted_male", "wasted_male.xml", 3);
		int var_1284_int;
		var_1268_int = var_1284_int;
		func_438(var_1284_int, "pers_woman", "woman.xml", 3);
		int var_1288_int;
		var_1268_int = var_1288_int;
		func_438(var_1288_int, "pers_unosha", "unosha.xml", 2);
		int var_1292_int;
		var_1268_int = var_1292_int;
		func_438(var_1292_int, "pers_unosha", "unosha2.xml", 2);
		int var_1296_int;
		var_1268_int = var_1296_int;
		func_438(var_1296_int, "pers_boy", "boy.xml", 2);
		int var_1300_int;
		var_1268_int = var_1300_int;
		func_438(var_1300_int, "pers_girl", "girl.xml", 1);
		int var_1304_int;
		var_1268_int = var_1304_int;
		func_438(var_1304_int, "pers_girl", "girl2.xml", 1);
		int var_1308_int;
		var_1268_int = var_1308_int;
		func_438(var_1308_int, "pers_dog", "dog.xml", 1);
	} else {
		int var_1331_int;
		var_1268_int = var_1331_int;
		func_438(var_1331_int, "pers_wasted_girl", "wasted_girl.xml", 1);
		int var_1335_int;
		var_1268_int = var_1335_int;
		func_438(var_1335_int, "pers_wasted_male", "wasted_male.xml", 2);
		int var_1339_int;
		var_1268_int = var_1339_int;
		func_438(var_1339_int, "pers_unosha", "unosha.xml", 1);
		int var_1343_int;
		var_1268_int = var_1343_int;
		func_438(var_1343_int, "pers_unosha", "unosha2.xml", 1);
		int var_1347_int;
		var_1268_int = var_1347_int;
		func_438(var_1347_int, "pers_dog", "dog.xml", 1);
	}
	bool var_1312_bool = false;
	bool var_1313_bool = false;
	if(var_1269_int == 0) {
		if(var_1270_int > 12)
			var_1313_bool = true;
	}
	if(var_1313_bool != 0) {
		if(var_1270_int < 22)
			var_1312_bool = true;
	}
	if(var_1312_bool != 0) {
		int var_1320_int;
		var_1268_int = var_1320_int;
		func_438(var_1320_int, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
	}
	bool var_1324_bool; int var_1325_int; int var_1326_int;
	var_1269_int = var_1325_int;
	var_1270_int = var_1326_int;
	func_1112(var_1324_bool, var_1325_int, var_1326_int);
	if(var_1324_bool != 0) {
		int var_1327_int;
		var_1268_int = var_1327_int;
		func_438(var_1327_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
}


void func_6754(void)
{
	int var_3759_int; int var_3760_int; object var_3761_object; object var_3762_object;
	@Trace("Cleaning arena...");
	var_3764_object = GlobalVars[15];
	if(var_3764_object != null) {
		var_3766_object = GlobalVars[15];
		var_3766_object->Remove();
		var_3767_object = GlobalVars[16];
		var_3767_object->size(var_3759_int);
		var_3760_int = 0;

		while(var_3760_int < var_3759_int) {
			var_3769_object = GlobalVars[16];
			var_3769_object->get(var_3761_object, var_3760_int);
			@Trigger(var_3761_object, "remove");
			var_3761_object = null;
			var_3760_int += 1;
		}

		var_3772_object = GlobalVars[16];
		var_3772_object->clear();
		@FindActor(var_3762_object, "arena_light");
		var_3762_object->Switch(false);
		var_3762_object = null;
	}
}


// @pe
void func_9828(bool var_4674_bool)
{
	int var_4677_int;
	func_92(var_4677_int, "resque_list");
	if(var_4677_int != 0) {
		var_4674_bool = true;
		return 0;
	}
	var_4674_bool = false;
}


void func_3685(int var_2919_int, int var_2920_int, int var_2921_int)
{
	int var_2926_int; int var_2927_int; int var_2928_int; int var_2929_int;
	bool var_2930_bool = false;
	if(var_2921_int > 8) {
		if(var_2921_int < 21)
			var_2930_bool = true;
	}
	if(var_2930_bool != 0) {
		int var_2935_int;
		var_2919_int = var_2935_int;
		func_438(var_2935_int, "pers_woman", "woman.xml", 1);
		int var_2939_int;
		var_2919_int = var_2939_int;
		func_438(var_2939_int, "pers_unosha", "unosha.xml", 1);
		int var_2943_int;
		var_2919_int = var_2943_int;
		func_438(var_2943_int, "pers_unosha", "unosha2.xml", 1);
		int var_2947_int;
		var_2919_int = var_2947_int;
		func_438(var_2947_int, "pers_boy", "boy.xml", 1);
		if((var_2920_int + 1) >= 2) {
			int var_2955_int;
			var_2919_int = var_2955_int;
			func_438(var_2955_int, "pers_patrool", "patrol.xml", 3);
		}
		int var_2959_int;
		var_2919_int = var_2959_int;
		func_438(var_2959_int, "pers_rat", "rat.xml", 4);
		float var_2964_float; int var_2965_int;
		var_2920_int = var_2965_int;
		func_932(var_2964_float, var_2965_int);
		if((3 * var_2964_float) != 0) {
			int var_2967_int; int var_2970_int;
			var_2919_int = var_2967_int;
			var_2926_int = var_2970_int;
			func_438(var_2967_int, "pers_grabitel", "grabitel.xml", var_2970_int);
		}
		float var_2972_float; int var_2973_int;
		func_1022(var_2972_float, var_2973_int);
		if((2 * var_2972_float) != 0) {
			int var_2975_int; int var_2978_int;
			var_2919_int = var_2975_int;
			var_2927_int = var_2978_int;
			func_438(var_2975_int, "pers_bomber", "bomber.xml", var_2978_int);
		}
	} else {
		int var_2979_int;
		var_2919_int = var_2979_int;
		func_438(var_2979_int, "pers_woman", "woman.xml", 1);
		int var_2983_int;
		var_2919_int = var_2983_int;
		func_438(var_2983_int, "pers_unosha", "unosha.xml", 1);
		int var_2987_int;
		var_2919_int = var_2987_int;
		func_438(var_2987_int, "pers_unosha", "unosha2.xml", 1);
		int var_2991_int;
		var_2919_int = var_2991_int;
		func_438(var_2991_int, "pers_boy", "boy.xml", 1);
		if((var_2973_int + 1) >= 2) {
			int var_2999_int;
			var_2919_int = var_2999_int;
			func_438(var_2999_int, "pers_patrool", "patrol.xml", 3);
		}
		int var_3003_int;
		var_2919_int = var_3003_int;
		func_438(var_3003_int, "pers_rat", "rat.xml", 4);
		float var_3008_float; int var_3009_int;
		var_2920_int = var_3009_int;
		func_932(var_3008_float, var_3009_int);
		if((4 * var_3008_float) != 0) {
			int var_3011_int; int var_3014_int;
			var_2919_int = var_3011_int;
			var_2928_int = var_3014_int;
			func_438(var_3011_int, "pers_grabitel", "grabitel.xml", var_3014_int);
		}
		float var_3016_float; int var_3017_int;
		var_2920_int = var_3017_int;
		func_1022(var_3016_float, var_3017_int);
		if((3 * var_3016_float) == 0) goto Label_3851;
		int var_3019_int; int var_3022_int;
		var_2919_int = var_3019_int;
		var_2929_int = var_3022_int;
		func_438(var_3019_int, "pers_bomber", "bomber.xml", var_3022_int);
	}
Label_3851:
	
}


// @pe
void func_4197(int var_693_int, int var_694_int, object var_695_object, object var_696_object, object var_697_object, object var_698_object)
{
	if(var_694_int == 0) {
		func_731(2, false);
		func_748(2, false, 1);
		int var_706_int; int var_707_int; object var_708_object; object var_709_object; object var_710_object;
		var_706_int = 2;
		var_693_int = var_707_int;
		var_695_object = var_708_object;
		var_696_object = var_709_object;
		var_697_object = var_710_object;
		func_557(var_707_int, var_708_object, var_709_object, var_710_object);
		object var_711_object;
		var_698_object = var_711_object;
		func_229(var_711_object, 0);
	}
	int var_714_int;
	var_694_int = var_714_int;
	func_872(2, var_714_int);
	int var_716_int; int var_717_int;
	var_693_int = var_716_int;
	var_694_int = var_717_int;
	func_1411(2, var_716_int, var_717_int);
}


// @pe
void func_5737(int var_2391_int, int var_2392_int, object var_2393_object, object var_2394_object, object var_2395_object, object var_2396_object)
{
	if(var_2392_int == 0) {
		func_731(11, true);
		func_748(11, true, 1);
		int var_2405_int; object var_2406_object; object var_2407_object; object var_2408_object;
		var_2391_int = var_2405_int;
		var_2393_object = var_2406_object;
		var_2394_object = var_2407_object;
		var_2395_object = var_2408_object;
		func_576(11, var_2405_int, var_2406_object, var_2407_object, var_2408_object);
		object var_2409_object;
		var_2396_object = var_2409_object;
		func_229(var_2409_object, 1);
	}
	func_714(11, false);
	int var_2414_int; int var_2415_int;
	var_2391_int = var_2414_int;
	var_2392_int = var_2415_int;
	func_2052(11, var_2414_int, var_2415_int);
}


void func_8299(int var_4756_int)
{
	int var_4758_int;
	@AddMessage(14527, 14526, var_4758_int);
	@SetVariable("player_mail", 1);
	var_4758_int = var_4756_int;
}


void func_108(object var_4288_object, string var_4289_string)
{
	object var_4292_object;
	@GetMainOutdoorScene(var_4292_object);
	object var_4293_object;
	@AddBlankActorFromXml(var_4293_object, var_4292_object, var_4289_string, (var_4289_string + ".xml"));
	var_4293_object = var_4288_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_7280(int var_365_int, int var_366_int)
{
	int var_371_int; object var_372_object; object var_373_object;
	@Trace("City update");
	
	for(;;) {
		if(0 < 16) {
			int var_377_int;
			var_371_int = var_377_int;
			func_425(var_377_int);
			bool var_382_bool; int var_383_int;
			var_371_int = var_383_int;
			func_323(var_382_bool, var_383_int);
			if(var_382_bool != 0) {
				int var_392_int; int var_393_int; int var_394_int;
				var_371_int = var_392_int;
				var_365_int = var_393_int;
				var_366_int = var_394_int;
				func_7360(var_392_int, var_393_int, var_394_int);
			} else {
			bool var_1379_bool; int var_1380_int;
			var_371_int = var_1380_int;
			func_357(var_1379_bool, var_1380_int);
			if(var_1379_bool != 0) {
				int var_1389_int; int var_1390_int; int var_1391_int;
				var_371_int = var_1389_int;
				var_365_int = var_1390_int;
				var_366_int = var_1391_int;
				func_7585(var_1389_int, var_1390_int, var_1391_int);
				goto Label_7322;
			}
			int var_2674_int; int var_2675_int; int var_2676_int;
			var_371_int = var_2674_int;
			var_365_int = var_2675_int;
			var_366_int = var_2676_int;
			func_7810(var_2674_int, var_2675_int, var_2676_int);
		}
		if(var_366_int == 0) {
			int var_3724_int;
			var_365_int = var_3724_int;
			func_11565(var_3724_int);
		}
		if(var_366_int == 10) {
			@Trace("day time");
			@GetMainOutdoorScene(var_372_object);
			var_372_object->SwitchLights(0, false);
			var_372_object = null;
		} else if(var_366_int == 18) {
			@Trace("night time");
			@GetMainOutdoorScene(var_373_object);
			var_373_object->SwitchLights(0, true);
			var_373_object = null;
		}
		}
	Label_7322:
		var_371_int += 1;
	}
	
}


// @pe
void func_9840(bool var_4788_bool)
{
	int var_4791_int;
	func_92(var_4791_int, "d11q03BurahVisit");
	if(var_4791_int != 0) {
		var_4788_bool = true;
		return 0;
	}
	var_4788_bool = false;
}


void func_8310(int var_4631_int)
{
	int var_4633_int;
	@AddMessage(15303, 15302, var_4633_int);
	@SetVariable("player_mail", 1);
	var_4633_int = var_4631_int;
}


void func_119(object var_300_object, object var_301_object, string var_302_string, string var_303_string, string var_304_string)
{
	bool var_310_bool; cvector var_311_cvector; cvector var_312_cvector;
	var_301_object->GetLocator(var_302_string, var_310_bool, var_311_cvector, var_312_cvector);
	if(!var_310_bool) //@nz
		@Trace(("Locator " + var_302_string) + " doesn't exist");
	else
		var_301_object->AddStationaryActor(Obj(), var_311_cvector, var_312_cvector, var_303_string, var_304_string);
	object var_313_object = var_300_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_6266(int var_3562_int, int var_3563_int, object var_3564_object, object var_3565_object, object var_3566_object, object var_3567_object)
{
	if(var_3563_int == 0) {
		func_731(14, true);
		func_748(14, true, 1);
		int var_3576_int; object var_3577_object; object var_3578_object; object var_3579_object;
		var_3562_int = var_3576_int;
		var_3564_object = var_3577_object;
		var_3565_object = var_3578_object;
		var_3566_object = var_3579_object;
		func_655(14, var_3576_int, var_3577_object, var_3578_object, var_3579_object);
		object var_3580_object;
		var_3567_object = var_3580_object;
		func_229(var_3580_object, 2);
	}
	func_714(14, false);
	int var_3585_int; int var_3586_int;
	var_3562_int = var_3585_int;
	var_3563_int = var_3586_int;
	func_2978(14, var_3585_int, var_3586_int);
}


// @pe
void func_9852(bool var_4765_bool)
{
	int var_4768_int;
	func_92(var_4768_int, "d11q04KlaraVisit");
	if(var_4768_int != 0) {
		var_4765_bool = true;
		return 0;
	}
	var_4765_bool = false;
}


void func_8321(int var_4614_int)
{
	int var_4616_int;
	@AddMessage(2851, 2850, var_4616_int);
	@SetVariable("player_mail", 1);
	var_4616_int = var_4614_int;
}


void func_7810(int var_2674_int, int var_2675_int, int var_2676_int)
{
	var_2685_object = GlobalVars[12];
	object var_2681_object;
	var_2685_object->get(var_2681_object, var_2674_int);
	var_2686_object = GlobalVars[13];
	object var_2682_object;
	var_2686_object->get(var_2682_object, var_2674_int);
	var_2687_object = GlobalVars[14];
	object var_2683_object;
	var_2687_object->get(var_2683_object, var_2674_int);
	var_2688_object = GlobalVars[17];
	object var_2684_object;
	var_2688_object->get(var_2684_object, var_2674_int);
	if(var_2674_int == 0) {
		int var_2691_int; int var_2692_int; object var_2693_object; object var_2694_object; object var_2695_object; object var_2696_object;
		var_2675_int = var_2691_int;
		var_2676_int = var_2692_int;
		var_2681_object = var_2693_object;
		var_2682_object = var_2694_object;
		var_2683_object = var_2695_object;
		var_2684_object = var_2696_object;
		func_3934(var_2691_int, var_2692_int, var_2693_object, var_2694_object, var_2695_object, var_2696_object);
	} else if(var_2674_int == 1) {
			int var_2897_int; int var_2898_int; object var_2899_object; object var_2900_object; object var_2901_object; object var_2902_object;
			var_2675_int = var_2897_int;
			var_2676_int = var_2898_int;
			var_2681_object = var_2899_object;
			var_2682_object = var_2900_object;
			var_2683_object = var_2901_object;
			var_2684_object = var_2902_object;
			func_4086(var_2897_int, var_2898_int, var_2899_object, var_2900_object, var_2901_object, var_2902_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_2674_int == 2) {
		int var_3025_int; int var_3026_int; object var_3027_object; object var_3028_object; object var_3029_object; object var_3030_object;
		var_2675_int = var_3025_int;
		var_2676_int = var_3026_int;
		var_2681_object = var_3027_object;
		var_2682_object = var_3028_object;
		var_2683_object = var_3029_object;
		var_2684_object = var_3030_object;
		func_4277(var_3025_int, var_3026_int, var_3027_object, var_3028_object, var_3029_object, var_3030_object);
	} else if(var_2674_int == 3) {
		int var_3160_int; int var_3161_int; object var_3162_object; object var_3163_object; object var_3164_object; object var_3165_object;
		var_2675_int = var_3160_int;
		var_2676_int = var_3161_int;
		var_2681_object = var_3162_object;
		var_2682_object = var_3163_object;
		var_2683_object = var_3164_object;
		var_2684_object = var_3165_object;
		func_4450(var_3160_int, var_3161_int, var_3162_object, var_3163_object, var_3164_object, var_3165_object);
	} else if(var_2674_int == 4) {
		int var_3187_int; int var_3188_int; object var_3189_object; object var_3190_object; object var_3191_object; object var_3192_object;
		var_2675_int = var_3187_int;
		var_2676_int = var_3188_int;
		var_2681_object = var_3189_object;
		var_2682_object = var_3190_object;
		var_2683_object = var_3191_object;
		var_2684_object = var_3192_object;
		func_4632(var_3187_int, var_3188_int, var_3189_object, var_3190_object, var_3191_object, var_3192_object);
	} else if(var_2674_int == 5) {
		int var_3214_int; int var_3215_int; object var_3216_object; object var_3217_object; object var_3218_object; object var_3219_object;
		var_2675_int = var_3214_int;
		var_2676_int = var_3215_int;
		var_2681_object = var_3216_object;
		var_2682_object = var_3217_object;
		var_2683_object = var_3218_object;
		var_2684_object = var_3219_object;
		func_4832(var_3214_int, var_3215_int, var_3216_object, var_3217_object, var_3218_object, var_3219_object);
	} else if(var_2674_int == 6) {
		int var_3241_int; int var_3242_int; object var_3243_object; object var_3244_object; object var_3245_object; object var_3246_object;
		var_2675_int = var_3241_int;
		var_2676_int = var_3242_int;
		var_2681_object = var_3243_object;
		var_2682_object = var_3244_object;
		var_2683_object = var_3245_object;
		var_2684_object = var_3246_object;
		func_4942(var_3241_int, var_3242_int, var_3243_object, var_3244_object, var_3245_object, var_3246_object);
	} else if(var_2674_int == 7) {
		int var_3265_int; int var_3266_int; object var_3267_object; object var_3268_object; object var_3269_object; object var_3270_object;
		var_2675_int = var_3265_int;
		var_2676_int = var_3266_int;
		var_2681_object = var_3267_object;
		var_2682_object = var_3268_object;
		var_2683_object = var_3269_object;
		var_2684_object = var_3270_object;
		func_5100(var_3265_int, var_3266_int, var_3267_object, var_3268_object, var_3269_object, var_3270_object);
	} else if(var_2674_int == 8) {
		int var_3400_int; int var_3401_int; object var_3402_object; object var_3403_object; object var_3404_object; object var_3405_object;
		var_2675_int = var_3400_int;
		var_2676_int = var_3401_int;
		var_2681_object = var_3402_object;
		var_2682_object = var_3403_object;
		var_2683_object = var_3404_object;
		var_2684_object = var_3405_object;
		func_5255(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object);
	} else if(var_2674_int == 9) {
		int var_3427_int; int var_3428_int; object var_3429_object; object var_3430_object; object var_3431_object; object var_3432_object;
		var_2675_int = var_3427_int;
		var_2676_int = var_3428_int;
		var_2681_object = var_3429_object;
		var_2682_object = var_3430_object;
		var_2683_object = var_3431_object;
		var_2684_object = var_3432_object;
		func_5428(var_3427_int, var_3428_int, var_3429_object, var_3430_object, var_3431_object, var_3432_object);
	} else if(var_2674_int == 10) {
		int var_3454_int; int var_3455_int; object var_3456_object; object var_3457_object; object var_3458_object; object var_3459_object;
		var_2675_int = var_3454_int;
		var_2676_int = var_3455_int;
		var_2681_object = var_3456_object;
		var_2682_object = var_3457_object;
		var_2683_object = var_3458_object;
		var_2684_object = var_3459_object;
		func_5601(var_3454_int, var_3455_int, var_3456_object, var_3457_object, var_3458_object, var_3459_object);
	} else if(var_2674_int == 11) {
		int var_3481_int; int var_3482_int; object var_3483_object; object var_3484_object; object var_3485_object; object var_3486_object;
		var_2675_int = var_3481_int;
		var_2676_int = var_3482_int;
		var_2681_object = var_3483_object;
		var_2682_object = var_3484_object;
		var_2683_object = var_3485_object;
		var_2684_object = var_3486_object;
		func_5777(var_3481_int, var_3482_int, var_3483_object, var_3484_object, var_3485_object, var_3486_object);
	} else if(var_2674_int == 12) {
		int var_3508_int; int var_3509_int; object var_3510_object; object var_3511_object; object var_3512_object; object var_3513_object;
		var_2675_int = var_3508_int;
		var_2676_int = var_3509_int;
		var_2681_object = var_3510_object;
		var_2682_object = var_3511_object;
		var_2683_object = var_3512_object;
		var_2684_object = var_3513_object;
		func_5935(var_3508_int, var_3509_int, var_3510_object, var_3511_object, var_3512_object, var_3513_object);
	} else if(var_2674_int == 13) {
		int var_3535_int; int var_3536_int; object var_3537_object; object var_3538_object; object var_3539_object; object var_3540_object;
		var_2675_int = var_3535_int;
		var_2676_int = var_3536_int;
		var_2681_object = var_3537_object;
		var_2682_object = var_3538_object;
		var_2683_object = var_3539_object;
		var_2684_object = var_3540_object;
		func_6102(var_3535_int, var_3536_int, var_3537_object, var_3538_object, var_3539_object, var_3540_object);
	} else if(var_2674_int == 14) {
		int var_3562_int; int var_3563_int; object var_3564_object; object var_3565_object; object var_3566_object; object var_3567_object;
		var_2675_int = var_3562_int;
		var_2676_int = var_3563_int;
		var_2681_object = var_3564_object;
		var_2682_object = var_3565_object;
		var_2683_object = var_3566_object;
		var_2684_object = var_3567_object;
		func_6266(var_3562_int, var_3563_int, var_3564_object, var_3565_object, var_3566_object, var_3567_object);
	} else if(var_2674_int == 15) {
		int var_3697_int; int var_3698_int; object var_3699_object; object var_3700_object; object var_3701_object; object var_3702_object;
		var_2675_int = var_3697_int;
		var_2676_int = var_3698_int;
		var_2681_object = var_3699_object;
		var_2682_object = var_3700_object;
		var_2683_object = var_3701_object;
		var_2684_object = var_3702_object;
		func_6409(var_3697_int, var_3698_int, var_3699_object, var_3700_object, var_3701_object, var_3702_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_11395(void)
{
	@SetVariable("player", 0);
}


void func_6791(void)
{
	var_26_object = GlobalVars[17];
	object var_27_object;
	func_86(var_27_object);
	var_27_object = var_26_object;
	GlobalVars[17] = var_26_object;
	var_30_object = GlobalVars[12];
	object var_31_object;
	func_86(var_31_object);
	var_31_object = var_30_object;
	GlobalVars[12] = var_30_object;
	var_32_object = GlobalVars[13];
	object var_33_object;
	func_86(var_33_object);
	var_33_object = var_32_object;
	GlobalVars[13] = var_32_object;
	var_34_object = GlobalVars[14];
	object var_35_object;
	func_86(var_35_object);
	var_35_object = var_34_object;
	GlobalVars[14] = var_34_object;
	int var_22_int = 0;
	
	while(var_22_int < 16) {
		var_38_object = GlobalVars[12];
		object var_39_object;
		func_86(var_39_object);
		var_38_object->add(var_39_object);
		var_40_object = GlobalVars[13];
		object var_41_object;
		func_86(var_41_object);
		var_40_object->add(var_41_object);
		var_42_object = GlobalVars[14];
		object var_43_object;
		func_86(var_43_object);
		var_42_object->add(var_43_object);
		var_22_int += 1;
	}
	
	object var_23_object;
	@CreateStringVector(var_23_object);
	var_45_object = GlobalVars[17];
	var_45_object->add(var_23_object);
	object var_46_object;
	var_23_object = var_46_object;
	func_3852();
	@CreateStringVector(var_23_object);
	var_47_object = GlobalVars[17];
	var_47_object->add(var_23_object);
	object var_48_object;
	var_23_object = var_48_object;
	func_3974(var_48_object);
	@CreateStringVector(var_23_object);
	var_59_object = GlobalVars[17];
	var_59_object->add(var_23_object);
	object var_60_object;
	var_23_object = var_60_object;
	func_4126(var_60_object);
	@CreateStringVector(var_23_object);
	var_84_object = GlobalVars[17];
	var_84_object->add(var_23_object);
	object var_85_object;
	var_23_object = var_85_object;
	func_4317(var_85_object);
	@CreateStringVector(var_23_object);
	var_103_object = GlobalVars[17];
	var_103_object->add(var_23_object);
	object var_104_object;
	var_23_object = var_104_object;
	func_4490(var_104_object);
	@CreateStringVector(var_23_object);
	var_125_object = GlobalVars[17];
	var_125_object->add(var_23_object);
	object var_126_object;
	var_23_object = var_126_object;
	func_4672(var_126_object);
	@CreateStringVector(var_23_object);
	var_153_object = GlobalVars[17];
	var_153_object->add(var_23_object);
	object var_154_object;
	var_23_object = var_154_object;
	func_4872();
	@CreateStringVector(var_23_object);
	var_155_object = GlobalVars[17];
	var_155_object->add(var_23_object);
	object var_156_object;
	var_23_object = var_156_object;
	func_4976(var_156_object);
	@CreateStringVector(var_23_object);
	var_171_object = GlobalVars[17];
	var_171_object->add(var_23_object);
	object var_172_object;
	var_23_object = var_172_object;
	func_5140(var_172_object);
	@CreateStringVector(var_23_object);
	var_184_object = GlobalVars[17];
	var_184_object->add(var_23_object);
	object var_185_object;
	var_23_object = var_185_object;
	func_5295(var_185_object);
	@CreateStringVector(var_23_object);
	var_203_object = GlobalVars[17];
	var_203_object->add(var_23_object);
	object var_204_object;
	var_23_object = var_204_object;
	func_5468(var_204_object);
	@CreateStringVector(var_23_object);
	var_222_object = GlobalVars[17];
	var_222_object->add(var_23_object);
	object var_223_object;
	var_23_object = var_223_object;
	func_5641(var_223_object);
	@CreateStringVector(var_23_object);
	var_242_object = GlobalVars[17];
	var_242_object->add(var_23_object);
	object var_243_object;
	var_23_object = var_243_object;
	func_5817(var_243_object);
	@CreateStringVector(var_23_object);
	var_256_object = GlobalVars[17];
	var_256_object->add(var_23_object);
	object var_257_object;
	var_23_object = var_257_object;
	func_5975(var_257_object);
	@CreateStringVector(var_23_object);
	var_273_object = GlobalVars[17];
	var_273_object->add(var_23_object);
	object var_274_object;
	var_23_object = var_274_object;
	func_6142(var_274_object);
	@CreateStringVector(var_23_object);
	var_289_object = GlobalVars[17];
	var_289_object->add(var_23_object);
	object var_290_object;
	var_23_object = var_290_object;
	func_6306(var_290_object);
	object var_24_object;
	@GetMainOutdoorScene(var_24_object);
	int var_25_int = 1;
	
	while(var_25_int <= 17) {
		object var_300_object; object var_301_object;
		var_24_object = var_301_object;
		func_119(var_300_object, var_301_object, ("pt_bull" + var_25_int), "pers_bull", "bull.xml");
		var_25_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_11400(bool var_118_bool, int var_119_int)
{
	if(var_119_int == 6) {
		var_118_bool = false;
		return 0;
	}
	bool var_122_bool;
	func_217(var_122_bool, 4);
	if(var_122_bool != 0) {
		if(var_119_int == 15) {
			var_118_bool = false;
			return 0;
		}
		if(var_119_int == 9) {
			var_118_bool = false;
			return 0;
		}
	} else {
			bool var_134_bool;
			func_217(var_134_bool, 5);
			if(var_134_bool == 0) goto Label_11433;
			if(var_119_int == 15) {
				var_118_bool = false;
				return 0;
			}
	}
Label_11443:
	for(;;) {
		var_118_bool = true;
		return 0;

	}
	
Label_11433:
	bool var_138_bool;
	func_217(var_138_bool, 6);
	if(var_138_bool == 0) goto Label_11443;
	if(!(var_119_int == 15)) goto Label_11443;
	var_118_bool = false;
}


void func_137(string var_3922_string, bool var_3923_bool)
{
	object var_3925_object;
	@FindActor(var_3925_object, var_3922_string);
	if(!var_3925_object) //@nz
		@Trace(("Door " + var_3922_string) + " not found");
	var_3925_object->SetProperty("locked", var_3923_bool);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5255(int var_3400_int, int var_3401_int, object var_3402_object, object var_3403_object, object var_3404_object, object var_3405_object)
{
	if(var_3401_int == 0) {
		func_731(8, true);
		func_748(8, true, 1);
		int var_3414_int; object var_3415_object; object var_3416_object; object var_3417_object;
		var_3400_int = var_3414_int;
		var_3402_object = var_3415_object;
		var_3403_object = var_3416_object;
		var_3404_object = var_3417_object;
		func_655(8, var_3414_int, var_3415_object, var_3416_object, var_3417_object);
		object var_3418_object;
		var_3405_object = var_3418_object;
		func_229(var_3418_object, 2);
	}
	func_714(8, false);
	int var_3423_int; int var_3424_int;
	var_3400_int = var_3423_int;
	var_3401_int = var_3424_int;
	func_3158(8, var_3423_int, var_3424_int);
}


// @pe
void func_9864(bool var_4587_bool)
{
	var_4587_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


void func_8332(int var_4648_int)
{
	int var_4650_int;
	@AddMessage(15334, 15333, var_4650_int);
	@SetVariable("player_mail", 1);
	var_4650_int = var_4648_int;
}


// @pe
void func_4237(int var_1827_int, int var_1828_int, object var_1829_object, object var_1830_object, object var_1831_object, object var_1832_object)
{
	if(var_1828_int == 0) {
		func_731(2, true);
		func_748(2, true, 1);
		int var_1841_int; object var_1842_object; object var_1843_object; object var_1844_object;
		var_1827_int = var_1841_int;
		var_1829_object = var_1842_object;
		var_1830_object = var_1843_object;
		var_1831_object = var_1844_object;
		func_576(2, var_1841_int, var_1842_object, var_1843_object, var_1844_object);
		object var_1845_object;
		var_1832_object = var_1845_object;
		func_229(var_1845_object, 1);
	}
	func_714(2, false);
	int var_1850_int; int var_1851_int;
	var_1827_int = var_1850_int;
	var_1828_int = var_1851_int;
	func_2310(2, var_1850_int, var_1851_int);
}


// @pe
void func_9869(bool var_4600_bool)
{
	int var_4603_int;
	func_92(var_4603_int, "d3RubinVisit");
	if(var_4603_int == 1)
		var_4600_bool = true;
	var_4600_bool = false;
}


// @pe
void func_655(int var_2704_int, int var_2705_int, object var_2706_object, object var_2707_object, object var_2708_object)
{
	int var_2709_int;
	var_2704_int = var_2709_int;
	func_477(var_2709_int, false);
	object var_2711_object;
	var_2706_object = var_2711_object;
	func_189(var_2711_object);
	object var_2712_object;
	var_2707_object = var_2712_object;
	func_189(var_2712_object);
	object var_2713_object;
	var_2708_object = var_2713_object;
	func_189(var_2713_object);
	if(var_2705_int <= 8) {
		object var_2717_object;
		var_2706_object = var_2717_object;
		func_511((("pt_blockpost" + (var_2704_int + 1)) + "_1_"), var_2717_object, "pers_patrool", "patrol_stat.xml");
	} else {
		object var_2726_object;
		var_2706_object = var_2726_object;
		func_511((("pt_blockpost" + (var_2704_int + 1)) + "_1_"), var_2726_object, "pers_soldat", "soldier.xml");
		object var_2735_object;
		var_2707_object = var_2735_object;
		func_511((("pt_blockpost" + (var_2704_int + 1)) + "_2_"), var_2735_object, "pers_sanitar", "sanitar_stat.xml");
	}
	
}


// @pe
void func_4752(int var_917_int, int var_918_int, object var_919_object, object var_920_object, object var_921_object, object var_922_object)
{
	if(var_918_int == 0) {
		func_731(5, false);
		func_748(5, false, 1);
		int var_930_int; int var_931_int; object var_932_object; object var_933_object; object var_934_object;
		var_930_int = 5;
		var_917_int = var_931_int;
		var_919_object = var_932_object;
		var_920_object = var_933_object;
		var_921_object = var_934_object;
		func_557(var_931_int, var_932_object, var_933_object, var_934_object);
		object var_935_object;
		var_922_object = var_935_object;
		func_229(var_935_object, 0);
	}
	int var_938_int;
	var_918_int = var_938_int;
	func_805(5, var_938_int);
	int var_940_int; int var_941_int;
	var_917_int = var_940_int;
	var_918_int = var_941_int;
	func_1411(5, var_940_int, var_941_int);
}


// @pe
void func_5777(int var_3481_int, int var_3482_int, object var_3483_object, object var_3484_object, object var_3485_object, object var_3486_object)
{
	if(var_3482_int == 0) {
		func_731(11, true);
		func_748(11, true, 1);
		int var_3495_int; object var_3496_object; object var_3497_object; object var_3498_object;
		var_3481_int = var_3495_int;
		var_3483_object = var_3496_object;
		var_3484_object = var_3497_object;
		var_3485_object = var_3498_object;
		func_655(11, var_3495_int, var_3496_object, var_3497_object, var_3498_object);
		object var_3499_object;
		var_3486_object = var_3499_object;
		func_229(var_3499_object, 2);
	}
	func_714(11, false);
	int var_3504_int; int var_3505_int;
	var_3481_int = var_3504_int;
	var_3482_int = var_3505_int;
	func_3158(11, var_3504_int, var_3505_int);
}


void func_8343(int var_4853_int)
{
	int var_4855_int;
	@AddMessage(2853, 2852, var_4855_int);
	@SetVariable("player_mail", 1);
	var_4855_int = var_4853_int;
}


void func_153(bool var_4380_bool, string var_4381_string, string var_4382_string)
{
	object var_4384_object;
	@FindActor(var_4384_object, var_4381_string);
	if(var_4384_object == null)
		var_4380_bool = false;
	@Trigger(var_4384_object, var_4382_string);
	var_4380_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_9881(bool var_4623_bool)
{
	int var_4626_int;
	func_92(var_4626_int, "d3GeorgVisit");
	if(var_4626_int == 1)
		var_4623_bool = true;
	var_4623_bool = false;
}


// @pe
void func_1697(int var_635_int, int var_636_int, int var_637_int)
{
	bool var_638_bool = false;
	if(var_637_int > 8) {
		if(var_637_int < 21)
			var_638_bool = true;
	}
	if(var_638_bool != 0) {
		int var_643_int;
		var_635_int = var_643_int;
		func_438(var_643_int, "pers_worker", "worker.xml", 3);
		int var_647_int;
		var_635_int = var_647_int;
		func_438(var_647_int, "pers_worker", "worker2.xml", 3);
		int var_651_int;
		var_635_int = var_651_int;
		func_438(var_651_int, "pers_alkash", "alkash.xml", 1);
		int var_655_int;
		var_635_int = var_655_int;
		func_438(var_655_int, "pers_woman", "woman.xml", 2);
		int var_659_int;
		var_635_int = var_659_int;
		func_438(var_659_int, "pers_dog", "dog.xml", 1);
	} else {
		int var_675_int;
		var_635_int = var_675_int;
		func_438(var_675_int, "pers_alkash", "alkash.xml", 2);
		int var_679_int;
		var_635_int = var_679_int;
		func_438(var_679_int, "pers_worker", "worker.xml", 1);
		int var_683_int;
		var_635_int = var_683_int;
		func_438(var_683_int, "pers_worker", "worker2.xml", 1);
		int var_687_int;
		var_635_int = var_687_int;
		func_438(var_687_int, "pers_dog", "dog.xml", 1);
	}
	bool var_663_bool = false;
	bool var_664_bool = false;
	if(var_636_int == 0) {
		if(var_637_int > 12)
			var_664_bool = true;
	}
	if(var_664_bool != 0) {
		if(var_637_int < 22)
			var_663_bool = true;
	}
	if(var_663_bool != 0) {
		int var_671_int;
		var_635_int = var_671_int;
		func_438(var_671_int, "pers_woman", "woman_killme.xml", 1);
	}
	
}


// @pe
void func_6306(object var_290_object)
{
	var_290_object->add("lc_house3_05_i2");
	var_290_object->add("lc_house3_05");
	var_290_object->add("lc_house3_06_i2");
	var_290_object->add("lc_house3_06");
	var_290_object->add("lc_House6_06");
	var_290_object->add("lc_house3_04_i2");
	var_290_object->add("lc_house3_04");
}


void func_8354(int var_4095_int)
{
	int var_4097_int;
	@AddMessage(3175, 3174, var_4097_int);
	@SetVariable("player_mail", 1);
	var_4097_int = var_4095_int;
}


void func_165(bool var_3904_bool, string var_3905_string, string var_3906_string, string var_3907_string)
{
	object var_3909_object;
	@FindActor(var_3909_object, var_3905_string);
	if(var_3909_object == null)
		var_3904_bool = false;
	@Trigger(var_3909_object, var_3906_string, var_3907_string);
	var_3904_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_9893(bool var_4640_bool)
{
	int var_4643_int;
	func_92(var_4643_int, "d4BigVladVisit");
	if(var_4643_int == 1)
		var_4640_bool = true;
	var_4640_bool = false;
}


void func_8365(int var_4904_int)
{
	int var_4906_int;
	@AddMessage(3177, 3176, var_4906_int);
	@SetVariable("player_mail", 1);
	var_4906_int = var_4904_int;
}


// @pe
void func_5295(object var_185_object)
{
	var_185_object->add("r3_house_2_02");
	var_185_object->add("r3_house7_01");
	var_185_object->add("r3_house3_02_i2");
	var_185_object->add("r3_house3_02");
	var_185_object->add("r3_house7_02");
	var_185_object->add("r3_house4_05_i2");
	var_185_object->add("r3_house4_05");
	var_185_object->add("r3_house4_03_i2");
	var_185_object->add("r3_house4_04_i2");
	var_185_object->add("r3_house4_04");
	var_185_object->add("r3_house4_01_i2");
	var_185_object->add("r3_house4_01");
	var_185_object->add("r3_house_2_01");
	var_185_object->add("r3_house4_02_i2");
	var_185_object->add("r3_house4_02");
	var_185_object->add("r3_house3_01_i2");
	var_185_object->add("r3_house3_01");
}


void func_177(bool var_3982_bool, string var_3983_string)
{
	object var_3985_object;
	@FindActor(var_3985_object, var_3983_string);
	if(!var_3985_object) //@nz
		var_3982_bool = false;
	@RemoveActor(var_3985_object);
	var_3982_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_9905(bool var_4845_bool)
{
	int var_4848_int;
	func_92(var_4848_int, "d5RubinVisit");
	if(var_4848_int == 1)
		var_4845_bool = true;
	var_4845_bool = false;
}


// @pe
void func_4277(int var_3025_int, int var_3026_int, object var_3027_object, object var_3028_object, object var_3029_object, object var_3030_object)
{
	if(var_3026_int == 0) {
		func_731(2, true);
		func_748(2, true, 1);
		int var_3039_int; object var_3040_object; object var_3041_object; object var_3042_object;
		var_3025_int = var_3039_int;
		var_3027_object = var_3040_object;
		var_3028_object = var_3041_object;
		var_3029_object = var_3042_object;
		func_655(2, var_3039_int, var_3040_object, var_3041_object, var_3042_object);
		object var_3043_object;
		var_3030_object = var_3043_object;
		func_229(var_3043_object, 2);
	}
	func_714(2, false);
	int var_3048_int; int var_3049_int;
	var_3025_int = var_3048_int;
	var_3026_int = var_3049_int;
	func_3338(2, var_3048_int, var_3049_int);
}


// @pe
void func_11445(int var_3775_int, int var_3776_int)
{
	@Trace((("Updating game " + var_3775_int) + " ") + var_3776_int);
}


// @pe
void func_6142(object var_274_object)
{
	var_274_object->add("lc_house7_03");
	var_274_object->add("lc_house7_05");
	var_274_object->add("lc_House6_05");
	var_274_object->add("lc_house7_06");
	var_274_object->add("lc_House6_02");
	var_274_object->add("lc_house7_01");
	var_274_object->add("lc_house_2_02");
	var_274_object->add("lc_House6_01");
	var_274_object->add("lc_house3_03_i2");
	var_274_object->add("lc_house3_03");
	var_274_object->add("lc_house7_04");
	var_274_object->add("lc_house7_07");
	var_274_object->add("lc_House6_03");
	var_274_object->add("lc_House6_04");
}


// @pe
void func_4792(int var_2078_int, int var_2079_int, object var_2080_object, object var_2081_object, object var_2082_object, object var_2083_object)
{
	if(var_2079_int == 0) {
		func_731(5, true);
		func_748(5, true, 1);
		int var_2092_int; object var_2093_object; object var_2094_object; object var_2095_object;
		var_2078_int = var_2092_int;
		var_2080_object = var_2093_object;
		var_2081_object = var_2094_object;
		var_2082_object = var_2095_object;
		func_576(5, var_2092_int, var_2093_object, var_2094_object, var_2095_object);
		object var_2096_object;
		var_2083_object = var_2096_object;
		func_229(var_2096_object, 1);
	}
	func_714(5, false);
	int var_2101_int; int var_2102_int;
	var_2078_int = var_2101_int;
	var_2079_int = var_2102_int;
	func_2310(5, var_2101_int, var_2102_int);
}


// @pe
void func_5817(object var_243_object)
{
	var_243_object->add("r6_house2_03");
	var_243_object->add("r6_house4_01_i2");
	var_243_object->add("r6_house4_02_i2");
	var_243_object->add("r6_house4_02");
	var_243_object->add("r6_house3_02_i2");
	var_243_object->add("r6_house3_02");
	var_243_object->add("r6_house3_01_i2");
	var_243_object->add("r6_house3_01");
	var_243_object->add("r6_house2_01");
	var_243_object->add("r6_house7_01");
	var_243_object->add("r6_House6_01");
	var_243_object->add("r6_house2_02");
}


// @pe
void func_6329(int var_1353_int, int var_1354_int, object var_1355_object, object var_1356_object, object var_1357_object, object var_1358_object)
{
	if(var_1354_int == 0) {
		func_731(15, false);
		func_748(15, false, 1);
		int var_1366_int; int var_1367_int; object var_1368_object; object var_1369_object; object var_1370_object;
		var_1366_int = 15;
		var_1353_int = var_1367_int;
		var_1355_object = var_1368_object;
		var_1356_object = var_1369_object;
		var_1357_object = var_1370_object;
		func_557(var_1367_int, var_1368_object, var_1369_object, var_1370_object);
		object var_1371_object;
		var_1358_object = var_1371_object;
		func_229(var_1371_object, 0);
	}
	int var_1374_int;
	var_1354_int = var_1374_int;
	func_909(15, var_1374_int);
	int var_1376_int; int var_1377_int;
	var_1353_int = var_1376_int;
	var_1354_int = var_1377_int;
	func_1122(15, var_1376_int, var_1377_int);
}


void func_8376(int var_4887_int)
{
	int var_4889_int;
	@AddMessage(3181, 3180, var_4889_int);
	@SetVariable("player_mail", 1);
	var_4889_int = var_4887_int;
}


void func_189(object var_490_object)
{
	int var_494_int; object var_496_object;
	var_490_object->size(var_494_int);
	int var_495_int = 0;
	
	while(var_495_int < var_494_int) {
		var_490_object->get(var_496_object, var_495_int);
		if(var_496_object != 0)
			var_496_object->Remove();
		var_496_object = null;
		var_495_int += 1;
	}
	
	var_490_object->clear();
}


void func_11454(int var_17_int)
{
	int var_24_int; int var_25_int; int var_27_int;
	@Trace("Disease update");
	int var_23_int = 0;
	if(var_17_int == 0) {
		var_23_int = 0;
	} else if(var_17_int == 1) {
				var_23_int = 0;
	}

	for(;;) {
		@Trace("Diseased regions : " + var_23_int);

		for(;;) {
			if(0 < 16) {
				bool var_35_bool; int var_36_int;
				var_24_int = var_36_int;
				func_357(var_35_bool, var_36_int);
				if(var_35_bool != 0) {
					int var_48_int;
					var_24_int = var_48_int;
					func_407(var_48_int);
				} else {
				bool var_61_bool; int var_62_int;
				var_24_int = var_62_int;
				func_391(var_61_bool, var_62_int);
				if(var_61_bool == 0) goto Label_11545;
				int var_71_int;
				var_24_int = var_71_int;
				func_339(var_71_int);
			}
			int var_83_int;
			func_267(var_83_int);
			var_83_int = var_25_int;
			if(var_25_int < var_23_int) {
				var_27_int = 0;

				for(;;) {
					if(!(var_27_int < (var_23_int - var_25_int))) goto Label_11564;
					func_285();
					var_27_int += 1;
				}
			}
		Label_11564:
			return 10;

			}
		Label_11545:
			var_24_int += 1;
		}

	}
	
	if(var_17_int == 2) {
		var_23_int = 4;
	} else if(var_17_int == 3) {
		var_23_int = 4;
	} else if(var_17_int == 4) {
		var_23_int = 4;
	} else if(var_17_int == 5) {
		var_23_int = 4;
	} else if(var_17_int == 6) {
		var_23_int = 5;
	} else if(var_17_int == 7) {
		var_23_int = 6;
	} else if(var_17_int == 8) {
		var_23_int = 7;
	} else if(var_17_int == 9) {
		var_23_int = 7;
	} else if(var_17_int == 10) {
		var_23_int = 7;
	} else if(var_17_int == 11) {
		var_23_int = 7;
	}
}


// @pe
void func_9917(bool var_4879_bool)
{
	int var_4882_int;
	func_92(var_4882_int, "d6KapellaVisit");
	if(var_4882_int == 1)
		var_4879_bool = true;
	var_4879_bool = false;
}


void func_7360(int var_392_int, int var_393_int, int var_394_int)
{
	var_403_object = GlobalVars[12];
	object var_399_object;
	var_403_object->get(var_399_object, var_392_int);
	var_404_object = GlobalVars[13];
	object var_400_object;
	var_404_object->get(var_400_object, var_392_int);
	var_405_object = GlobalVars[14];
	object var_401_object;
	var_405_object->get(var_401_object, var_392_int);
	var_406_object = GlobalVars[17];
	object var_402_object;
	var_406_object->get(var_402_object, var_392_int);
	if(var_392_int == 0) {
		int var_409_int; int var_410_int; object var_411_object; object var_412_object; object var_413_object; object var_414_object;
		var_393_int = var_409_int;
		var_394_int = var_410_int;
		var_399_object = var_411_object;
		var_400_object = var_412_object;
		var_401_object = var_413_object;
		var_402_object = var_414_object;
		func_3854(var_409_int, var_410_int, var_411_object, var_412_object, var_413_object, var_414_object);
	} else if(var_392_int == 1) {
			int var_613_int; int var_614_int; object var_615_object; object var_616_object; object var_617_object; object var_618_object;
			var_393_int = var_613_int;
			var_394_int = var_614_int;
			var_399_object = var_615_object;
			var_400_object = var_616_object;
			var_401_object = var_617_object;
			var_402_object = var_618_object;
			func_4006(var_613_int, var_614_int, var_615_object, var_616_object, var_617_object, var_618_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_392_int == 2) {
		int var_693_int; int var_694_int; object var_695_object; object var_696_object; object var_697_object; object var_698_object;
		var_393_int = var_693_int;
		var_394_int = var_694_int;
		var_399_object = var_695_object;
		var_400_object = var_696_object;
		var_401_object = var_697_object;
		var_402_object = var_698_object;
		func_4197(var_693_int, var_694_int, var_695_object, var_696_object, var_697_object, var_698_object);
	} else if(var_392_int == 3) {
		int var_836_int; int var_837_int; object var_838_object; object var_839_object; object var_840_object; object var_841_object;
		var_393_int = var_836_int;
		var_394_int = var_837_int;
		var_399_object = var_838_object;
		var_400_object = var_839_object;
		var_401_object = var_840_object;
		var_402_object = var_841_object;
		func_4370(var_836_int, var_837_int, var_838_object, var_839_object, var_840_object, var_841_object);
	} else if(var_392_int == 4) {
		int var_878_int; int var_879_int; object var_880_object; object var_881_object; object var_882_object; object var_883_object;
		var_393_int = var_878_int;
		var_394_int = var_879_int;
		var_399_object = var_880_object;
		var_400_object = var_881_object;
		var_401_object = var_882_object;
		var_402_object = var_883_object;
		func_4552(var_878_int, var_879_int, var_880_object, var_881_object, var_882_object, var_883_object);
	} else if(var_392_int == 5) {
		int var_917_int; int var_918_int; object var_919_object; object var_920_object; object var_921_object; object var_922_object;
		var_393_int = var_917_int;
		var_394_int = var_918_int;
		var_399_object = var_919_object;
		var_400_object = var_920_object;
		var_401_object = var_921_object;
		var_402_object = var_922_object;
		func_4752(var_917_int, var_918_int, var_919_object, var_920_object, var_921_object, var_922_object);
	} else if(var_392_int == 6) {
		int var_944_int; int var_945_int; object var_946_object; object var_947_object; object var_948_object; object var_949_object;
		var_393_int = var_944_int;
		var_394_int = var_945_int;
		var_399_object = var_946_object;
		var_400_object = var_947_object;
		var_401_object = var_948_object;
		var_402_object = var_949_object;
		func_4874(var_944_int, var_945_int, var_946_object, var_947_object, var_948_object, var_949_object);
	} else if(var_392_int == 7) {
		int var_968_int; int var_969_int; object var_970_object; object var_971_object; object var_972_object; object var_973_object;
		var_393_int = var_968_int;
		var_394_int = var_969_int;
		var_399_object = var_970_object;
		var_400_object = var_971_object;
		var_401_object = var_972_object;
		var_402_object = var_973_object;
		func_5020(var_968_int, var_969_int, var_970_object, var_971_object, var_972_object, var_973_object);
	} else if(var_392_int == 8) {
		int var_1075_int; int var_1076_int; object var_1077_object; object var_1078_object; object var_1079_object; object var_1080_object;
		var_393_int = var_1075_int;
		var_394_int = var_1076_int;
		var_399_object = var_1077_object;
		var_400_object = var_1078_object;
		var_401_object = var_1079_object;
		var_402_object = var_1080_object;
		func_5175(var_1075_int, var_1076_int, var_1077_object, var_1078_object, var_1079_object, var_1080_object);
	} else if(var_392_int == 9) {
		int var_1102_int; int var_1103_int; object var_1104_object; object var_1105_object; object var_1106_object; object var_1107_object;
		var_393_int = var_1102_int;
		var_394_int = var_1103_int;
		var_399_object = var_1104_object;
		var_400_object = var_1105_object;
		var_401_object = var_1106_object;
		var_402_object = var_1107_object;
		func_5348(var_1102_int, var_1103_int, var_1104_object, var_1105_object, var_1106_object, var_1107_object);
	} else if(var_392_int == 10) {
		int var_1129_int; int var_1130_int; object var_1131_object; object var_1132_object; object var_1133_object; object var_1134_object;
		var_393_int = var_1129_int;
		var_394_int = var_1130_int;
		var_399_object = var_1131_object;
		var_400_object = var_1132_object;
		var_401_object = var_1133_object;
		var_402_object = var_1134_object;
		func_5521(var_1129_int, var_1130_int, var_1131_object, var_1132_object, var_1133_object, var_1134_object);
	} else if(var_392_int == 11) {
		int var_1156_int; int var_1157_int; object var_1158_object; object var_1159_object; object var_1160_object; object var_1161_object;
		var_393_int = var_1156_int;
		var_394_int = var_1157_int;
		var_399_object = var_1158_object;
		var_400_object = var_1159_object;
		var_401_object = var_1160_object;
		var_402_object = var_1161_object;
		func_5697(var_1156_int, var_1157_int, var_1158_object, var_1159_object, var_1160_object, var_1161_object);
	} else if(var_392_int == 12) {
		int var_1183_int; int var_1184_int; object var_1185_object; object var_1186_object; object var_1187_object; object var_1188_object;
		var_393_int = var_1183_int;
		var_394_int = var_1184_int;
		var_399_object = var_1185_object;
		var_400_object = var_1186_object;
		var_401_object = var_1187_object;
		var_402_object = var_1188_object;
		func_5855(var_1183_int, var_1184_int, var_1185_object, var_1186_object, var_1187_object, var_1188_object);
	} else if(var_392_int == 13) {
		int var_1210_int; int var_1211_int; object var_1212_object; object var_1213_object; object var_1214_object; object var_1215_object;
		var_393_int = var_1210_int;
		var_394_int = var_1211_int;
		var_399_object = var_1212_object;
		var_400_object = var_1213_object;
		var_401_object = var_1214_object;
		var_402_object = var_1215_object;
		func_6022(var_1210_int, var_1211_int, var_1212_object, var_1213_object, var_1214_object, var_1215_object);
	} else if(var_392_int == 14) {
		int var_1237_int; int var_1238_int; object var_1239_object; object var_1240_object; object var_1241_object; object var_1242_object;
		var_393_int = var_1237_int;
		var_394_int = var_1238_int;
		var_399_object = var_1239_object;
		var_400_object = var_1240_object;
		var_401_object = var_1241_object;
		var_402_object = var_1242_object;
		func_6186(var_1237_int, var_1238_int, var_1239_object, var_1240_object, var_1241_object, var_1242_object);
	} else if(var_392_int == 15) {
		int var_1353_int; int var_1354_int; object var_1355_object; object var_1356_object; object var_1357_object; object var_1358_object;
		var_393_int = var_1353_int;
		var_394_int = var_1354_int;
		var_399_object = var_1355_object;
		var_400_object = var_1356_object;
		var_401_object = var_1357_object;
		var_402_object = var_1358_object;
		func_6329(var_1353_int, var_1354_int, var_1355_object, var_1356_object, var_1357_object, var_1358_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_8387(int var_4870_int)
{
	int var_4872_int;
	@AddMessage(3179, 3178, var_4872_int);
	@SetVariable("player_mail", 1);
	var_4872_int = var_4870_int;
}


// @pe
void func_9929(bool var_4862_bool)
{
	int var_4865_int;
	func_92(var_4865_int, "d6MariaVisit");
	if(var_4865_int == 1)
		var_4862_bool = true;
	var_4862_bool = false;
}


void func_714(int var_542_int, bool var_543_bool)
{
	object var_546_object;
	@GetMainOutdoorScene(var_546_object);
	if(var_546_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_546_object->EnableSubsets((var_542_int + 1), 100, var_543_bool, true);
}
EMIT "Stack[-2] = 0";


void func_8398(int var_3922_int)
{
	int var_3924_int;
	@AddMessage(12530, 12529, var_3924_int);
	@SetVariable("player_mail", 1);
	var_3924_int = var_3922_int;
}


void func_208(int var_124_int)
{
	float var_126_float;
	@GetGameTime(var_126_float);
	var_124_int = 1 + (var_126_float / 24);
}


// @pe
void func_9941(bool var_4896_bool)
{
	int var_4899_int;
	func_92(var_4899_int, "d6BigVladVisit");
	if(var_4899_int == 1)
		var_4896_bool = true;
	var_4896_bool = false;
}


void func_8920(void)
{
	object var_4430_object;
	func_10048(var_4430_object);
	object var_4428_object;
	var_4430_object = var_4428_object;
	object var_4429_object;
	var_4428_object->FindMark(var_4429_object, "d3q01AlexandrGotoOspina");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01AlexandrGotoOspinaSelf");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01BigVladAgreed");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01BigVladAgreedSelf");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01BigVladGotoGeorg");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01BigVladGotoGeorgSelf");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01GeorgAgreed");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01GeorgAgreedSelf");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01OspinaButchersWillHelpSelf");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01OspinaGotoBigVlad");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01OspinaGotoBigVladSelf");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01RubinGotoAlexandr");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q01RubinGotoAlexandrSelf");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q02BigVladGotoHan");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q02GeorgGotoMishka");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q02GeorgGotoViktor");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q02GeorgSelf");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q02HanGotoViktor");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q02MishkaGotoMladVlad");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q02MladVladGotoBigVlad");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q02ViktorGotoMladVlad");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q02ViktorGotoMladVladSelf");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q03KapellaBoyLocation");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	var_4428_object->FindMark(var_4429_object, "d3q03KapellaBoyLocationSelf");
	if(var_4429_object != 0)
		var_4429_object->Remove();
	bool var_4479_bool;
	func_10031(var_4479_bool, 25);
	bool var_4481_bool;
	func_10031(var_4481_bool, 26);
	bool var_4483_bool;
	func_10031(var_4483_bool, 27);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_8409(int var_4921_int)
{
	int var_4923_int;
	@AddMessage(15382, 15381, var_4923_int);
	@SetVariable("player_mail", 1);
	var_4923_int = var_4921_int;
}


void func_2778(int var_1703_int, int var_1704_int, int var_1705_int)
{
	int var_1708_int; int var_1709_int;
	bool var_1710_bool = false;
	if(var_1705_int > 8) {
		if(var_1705_int < 21)
			var_1710_bool = true;
	}
	if(var_1710_bool != 0) {
		int var_1715_int;
		var_1703_int = var_1715_int;
		func_438(var_1715_int, "pers_worker", "worker_d.xml", 2);
		int var_1719_int;
		var_1703_int = var_1719_int;
		func_438(var_1719_int, "pers_worker", "worker2_d.xml", 2);
		int var_1723_int;
		var_1703_int = var_1723_int;
		func_438(var_1723_int, "pers_alkash", "alkash_d.xml", 1);
		int var_1727_int;
		var_1703_int = var_1727_int;
		func_438(var_1727_int, "pers_woman", "woman_d.xml", 1);
		int var_1731_int;
		var_1703_int = var_1731_int;
		func_438(var_1731_int, "pers_vaxxabit", "vaxxabit.xml", 1);
		int var_1735_int;
		var_1703_int = var_1735_int;
		func_438(var_1735_int, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		int var_1739_int;
		var_1703_int = var_1739_int;
		func_438(var_1739_int, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		int var_1743_int;
		var_1703_int = var_1743_int;
		func_438(var_1743_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		int var_1747_int;
		var_1703_int = var_1747_int;
		func_464(var_1747_int, "fog", "fog.xml", 5);
		float var_1752_float; int var_1753_int;
		var_1704_int = var_1753_int;
		func_1022(var_1752_float, var_1753_int);
		if((2 * var_1752_float) != 0) {
			int var_1755_int; int var_1758_int;
			var_1703_int = var_1755_int;
			var_1708_int = var_1758_int;
			func_438(var_1755_int, "pers_bomber", "bomber.xml", var_1758_int);
		}
	} else {
		int var_1789_int;
		var_1703_int = var_1789_int;
		func_438(var_1789_int, "pers_worker", "worker_d.xml", 1);
		int var_1793_int;
		var_1703_int = var_1793_int;
		func_438(var_1793_int, "pers_worker", "worker2_d.xml", 1);
		int var_1797_int;
		var_1703_int = var_1797_int;
		func_438(var_1797_int, "pers_alkash", "alkash_d.xml", 1);
		int var_1801_int;
		var_1703_int = var_1801_int;
		func_438(var_1801_int, "pers_woman", "woman_d.xml", 1);
		int var_1805_int;
		var_1703_int = var_1805_int;
		func_438(var_1805_int, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		int var_1809_int;
		var_1703_int = var_1809_int;
		func_438(var_1809_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		int var_1813_int;
		var_1703_int = var_1813_int;
		func_464(var_1813_int, "fog", "fog.xml", 5);
		float var_1818_float; int var_1819_int;
		var_1704_int = var_1819_int;
		func_1022(var_1818_float, var_1819_int);
		if((2 * var_1818_float) == 0) goto Label_2932;
		int var_1821_int; int var_1824_int;
		var_1703_int = var_1821_int;
		var_1709_int = var_1824_int;
		func_438(var_1821_int, "pers_bomber", "bomber.xml", var_1824_int);
	}
Label_2932:
	int var_1759_int;
	var_1703_int = var_1759_int;
	func_451(var_1759_int, "pers_worker", "agony1.xml", 2, 4, 4);
	int var_1765_int;
	var_1703_int = var_1765_int;
	func_451(var_1765_int, "pers_unosha", "agony1.xml", 2, 4, 4);
	int var_1771_int;
	var_1703_int = var_1771_int;
	func_451(var_1771_int, "pers_woman", "agony1.xml", 2, 4, 4);
	int var_1777_int;
	var_1703_int = var_1777_int;
	func_451(var_1777_int, "pers_vaxxabitka", "agony1.xml", 2, 4, 4);
	int var_1783_int;
	var_1703_int = var_1783_int;
	func_451(var_1783_int, "pers_wasted_girl", "agony1.xml", 2, 4, 4);
	
}


void func_731(int var_353_int, bool var_354_bool)
{
	object var_357_object;
	@GetMainOutdoorScene(var_357_object);
	if(var_357_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_357_object->EnableSubsets((var_353_int + 1), 200, var_354_bool, false);
}
EMIT "Stack[-2] = 0";


// @pe
void func_217(bool var_122_bool, int var_123_int)
{
	int var_124_int;
	func_208(var_124_int);
	var_122_bool = var_124_int == var_123_int;
}


// @pe
void func_4317(object var_85_object)
{
	var_85_object->add("house5_02");
	var_85_object->add("dt_house1_union2_03l");
	var_85_object->add("dt_house1_union2_03r");
	var_85_object->add("dt_house1_union2_01l");
	var_85_object->add("dt_house1_union2_01r");
	var_85_object->add("house5_unoinl");
	var_85_object->add("house5_unoinr");
	var_85_object->add("dt_house_1_01");
	var_85_object->add("house5_05");
	var_85_object->add("house5_06");
	var_85_object->add("dt_house1_union2_02l");
	var_85_object->add("dt_house1_union2_02r");
	var_85_object->add("dt_house_1_02");
	var_85_object->add("house5_unoin_solid01l");
	var_85_object->add("house5_unoin_solid01r");
	var_85_object->add("house5_03");
	var_85_object->add("house5_04");
}


// @pe
void func_223(string var_347_string, int var_348_int)
{
	var_347_string = ("Region" + var_348_int) + "State";
}


// @pe
void func_5855(int var_1183_int, int var_1184_int, object var_1185_object, object var_1186_object, object var_1187_object, object var_1188_object)
{
	if(var_1184_int == 0) {
		func_731(12, false);
		func_748(12, false, 1);
		int var_1196_int; int var_1197_int; object var_1198_object; object var_1199_object; object var_1200_object;
		var_1196_int = 12;
		var_1183_int = var_1197_int;
		var_1185_object = var_1198_object;
		var_1186_object = var_1199_object;
		var_1187_object = var_1200_object;
		func_557(var_1197_int, var_1198_object, var_1199_object, var_1200_object);
		object var_1201_object;
		var_1188_object = var_1201_object;
		func_229(var_1201_object, 0);
	}
	int var_1204_int;
	var_1184_int = var_1204_int;
	func_842(12, var_1204_int);
	int var_1206_int; int var_1207_int;
	var_1183_int = var_1206_int;
	var_1184_int = var_1207_int;
	func_1270(12, var_1206_int, var_1207_int);
}


// @pe
void func_6369(int var_2649_int, int var_2650_int, object var_2651_object, object var_2652_object, object var_2653_object, object var_2654_object)
{
	if(var_2650_int == 0) {
		func_731(15, true);
		func_748(15, true, 1);
		int var_2663_int; object var_2664_object; object var_2665_object; object var_2666_object;
		var_2649_int = var_2663_int;
		var_2651_object = var_2664_object;
		var_2652_object = var_2665_object;
		var_2653_object = var_2666_object;
		func_576(15, var_2663_int, var_2664_object, var_2665_object, var_2666_object);
		object var_2667_object;
		var_2654_object = var_2667_object;
		func_229(var_2667_object, 1);
	}
	func_714(15, false);
	int var_2672_int; int var_2673_int;
	var_2649_int = var_2672_int;
	var_2650_int = var_2673_int;
	func_1797(15, var_2672_int, var_2673_int);
}


// @pe
void func_4832(int var_3214_int, int var_3215_int, object var_3216_object, object var_3217_object, object var_3218_object, object var_3219_object)
{
	if(var_3215_int == 0) {
		func_731(5, true);
		func_748(5, true, 1);
		int var_3228_int; object var_3229_object; object var_3230_object; object var_3231_object;
		var_3214_int = var_3228_int;
		var_3216_object = var_3229_object;
		var_3217_object = var_3230_object;
		var_3218_object = var_3231_object;
		func_655(5, var_3228_int, var_3229_object, var_3230_object, var_3231_object);
		object var_3232_object;
		var_3219_object = var_3232_object;
		func_229(var_3232_object, 2);
	}
	func_714(5, false);
	int var_3237_int; int var_3238_int;
	var_3214_int = var_3237_int;
	var_3215_int = var_3238_int;
	func_3338(5, var_3237_int, var_3238_int);
}


// @pe
void func_9953(bool var_4913_bool)
{
	int var_4916_int;
	func_92(var_4916_int, "d6ViktorVisit");
	if(var_4916_int == 1)
		var_4913_bool = true;
	var_4913_bool = false;
}


// @pe
void func_5348(int var_1102_int, int var_1103_int, object var_1104_object, object var_1105_object, object var_1106_object, object var_1107_object)
{
	if(var_1103_int == 0) {
		func_731(9, false);
		func_748(9, false, 1);
		int var_1115_int; int var_1116_int; object var_1117_object; object var_1118_object; object var_1119_object;
		var_1115_int = 9;
		var_1102_int = var_1116_int;
		var_1104_object = var_1117_object;
		var_1105_object = var_1118_object;
		var_1106_object = var_1119_object;
		func_557(var_1116_int, var_1117_object, var_1118_object, var_1119_object);
		object var_1120_object;
		var_1107_object = var_1120_object;
		func_229(var_1120_object, 0);
	}
	int var_1123_int;
	var_1103_int = var_1123_int;
	func_872(9, var_1123_int);
	int var_1125_int; int var_1126_int;
	var_1102_int = var_1125_int;
	var_1103_int = var_1126_int;
	func_1270(9, var_1125_int, var_1126_int);
}


void func_229(object var_502_object, int var_503_int)
{
	int var_510_int; string var_511_string; string var_513_string; object var_515_object;
	var_502_object->size(var_510_int);
	if(var_503_int == 1) {
		var_511_string = "s_";
	} else if(var_503_int == 2) {
	}
	int var_512_int = 0;
	
	for(;;) {
		if(var_512_int < var_510_int) {
			var_502_object->get(var_513_string, var_512_int);
			@GetSceneByName(var_515_object, var_513_string);
			if(!var_515_object) //@nz
				@Trace(("City manager: can't replace indoor scene \"" + var_513_string) + "\" because it doesn't exist");
			else
				@ReplaceScene(var_515_object, (("n_" + var_513_string) + ".isc"));

		}
		var_515_object = null;
		var_512_int += 3;
	}
	
}


void func_8420(int var_4510_int)
{
	int var_4512_int;
	@AddMessage(15433, 15432, var_4512_int);
	@SetVariable("player_mail", 1);
	var_4512_int = var_4510_int;
}


void func_748(int var_419_int, bool var_420_bool, int var_421_int)
{
	string var_429_string; object var_430_object; int var_431_int; string var_432_string; object var_433_object; int var_434_int; object var_435_object;
	var_429_string = "street_rags" + (var_419_int + 1);
	if(var_420_bool != 0) {
		@GetMainOutdoorScene(var_430_object);
		if(var_430_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_431_int = 1;

		for(;;) {
			if(var_431_int <= var_421_int) {
				var_432_string = (var_429_string + "_") + var_431_int;
				@FindActor(var_433_object, var_432_string);
				if(!var_433_object) //@nz
					@AddActor(var_433_object, var_432_string, var_430_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "do_invis.xml");
				else
					var_433_object->RemoveOnUnload(false);
			var_430_object = null;
	} else {
			var_434_int = 1;

			for(;;) {
				if(!(var_434_int <= var_421_int)) goto Label_804;
				@FindActor(var_435_object, ((var_429_string + "_") + var_434_int));
				if(var_435_object != 0)
					var_435_object->RemoveOnUnload();
				var_435_object = null;
				var_434_int += 1;
			}
	}
	Label_804:
		return 14;

		}
		var_433_object = null;
		var_431_int += 1;
	}
	
}


// @pe
void func_9965(bool var_4502_bool)
{
	int var_4505_int;
	func_92(var_4505_int, "d7AglajaVisit");
	if(var_4505_int == 1)
		var_4502_bool = true;
	var_4502_bool = false;
}


void func_8431(int var_4519_int)
{
	int var_4521_int;
	@AddMessage(15439, 15438, var_4521_int);
	@SetVariable("player_mail", 1);
	var_4521_int = var_4519_int;
}


// @pe
void func_1270(int var_990_int, int var_991_int, int var_992_int)
{
	bool var_993_bool = false;
	if(var_992_int > 8) {
		if(var_992_int < 21)
			var_993_bool = true;
	}
	if(var_993_bool != 0) {
		int var_998_int;
		var_990_int = var_998_int;
		func_438(var_998_int, "pers_woman", "woman.xml", 2);
		int var_1002_int;
		var_990_int = var_1002_int;
		func_438(var_1002_int, "pers_unosha", "unosha.xml", 1);
		int var_1006_int;
		var_990_int = var_1006_int;
		func_438(var_1006_int, "pers_unosha", "unosha2.xml", 1);
		int var_1010_int;
		var_990_int = var_1010_int;
		func_438(var_1010_int, "pers_boy", "boy.xml", 2);
		int var_1014_int;
		var_990_int = var_1014_int;
		func_438(var_1014_int, "pers_girl", "girl.xml", 1);
		int var_1018_int;
		var_990_int = var_1018_int;
		func_438(var_1018_int, "pers_girl", "girl2.xml", 1);
		int var_1022_int;
		var_990_int = var_1022_int;
		func_438(var_1022_int, "pers_littleboy", "littleboy.xml", 1);
		int var_1026_int;
		var_990_int = var_1026_int;
		func_438(var_1026_int, "pers_littlegirl", "littlegirl.xml", 1);
		int var_1030_int;
		var_990_int = var_1030_int;
		func_438(var_1030_int, "pers_alkash", "alkash.xml", 1);
		if((var_991_int + 1) >= 3) {
		}
		int var_1038_int;
		var_990_int = var_1038_int;
		func_438(var_1038_int, "pers_dog", "dog.xml", 1);
	} else {
		int var_1049_int;
		var_990_int = var_1049_int;
		func_438(var_1049_int, "pers_woman", "woman.xml", 1);
		int var_1053_int;
		var_990_int = var_1053_int;
		func_438(var_1053_int, "pers_unosha", "unosha.xml", 1);
		int var_1057_int;
		var_990_int = var_1057_int;
		func_438(var_1057_int, "pers_unosha", "unosha2.xml", 1);
		int var_1061_int;
		var_990_int = var_1061_int;
		func_438(var_1061_int, "pers_alkash", "alkash.xml", 2);
		if((var_991_int + 1) >= 3) {
		}
		int var_1069_int;
		var_990_int = var_1069_int;
		func_438(var_1069_int, "pers_dog", "dog.xml", 1);
	}
	bool var_1042_bool; int var_1043_int; int var_1044_int;
	var_991_int = var_1043_int;
	var_992_int = var_1044_int;
	func_1112(var_1042_bool, var_1043_int, var_1044_int);
	if(var_1042_bool != 0) {
		int var_1045_int;
		var_990_int = var_1045_int;
		func_438(var_1045_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
}


// @pe
void func_9977(bool var_4528_bool)
{
	int var_4531_int;
	func_92(var_4531_int, "d11AglajaVisit");
	if(var_4531_int == 1)
		var_4528_bool = true;
	var_4528_bool = false;
}


void func_8442(int var_4930_int)
{
	int var_4932_int;
	@AddMessage(15431, 15430, var_4932_int);
	@SetVariable("player_mail", 1);
	var_4932_int = var_4930_int;
}


void func_11007(void)
{
	var_3917_object = GlobalVars[18];
	GlobalVars[18] = Obj();
	object var_3918_object; object var_3919_object;
	var_3920_object = GlobalVars[18];
	var_3920_object = var_3918_object;
	var_3921_object = GlobalVars[18];
	var_3921_object = var_3919_object;
	func_8516();
	object var_3932_object; object var_3933_object;
	var_3934_object = GlobalVars[18];
	var_3934_object = var_3932_object;
	var_3935_object = GlobalVars[18];
	var_3935_object = var_3933_object;
	func_8460();
	object var_3938_object; object var_3939_object;
	var_3940_object = GlobalVars[18];
	var_3940_object = var_3938_object;
	var_3941_object = GlobalVars[18];
	var_3941_object = var_3939_object;
	func_8467();
	object var_3944_object; object var_3945_object;
	var_3946_object = GlobalVars[18];
	var_3946_object = var_3944_object;
	var_3947_object = GlobalVars[18];
	var_3947_object = var_3945_object;
	func_8481();
	object var_3973_object; object var_3974_object;
	var_3975_object = GlobalVars[18];
	var_3975_object = var_3973_object;
	var_3976_object = GlobalVars[18];
	var_3976_object = var_3974_object;
	func_8486();
	object var_3979_object; object var_3980_object;
	var_3981_object = GlobalVars[18];
	var_3981_object = var_3979_object;
	var_3982_object = GlobalVars[18];
	var_3982_object = var_3980_object;
	func_9695();
	int var_3985_int;
	func_8255(var_3985_int);
	object var_3992_object;
	func_97(var_3992_object, "volonteers_danko");
	@SetTimeEvent(45003, 24.0);
	@SetTimeEvent(45015, 129.0);
	@SetTimeEvent(45013, 144.0);
	@SetTimeEvent(45028, 239.0);
	@SetTimeEvent(45029, 263.0);
	@SetTimeEvent(45026, 191.0);
	@SetTimeEvent(45027, 215.0);
	@SetTimeEvent(45012, 120.0);
	@SetTimeEvent(45016, 168.0);
	@SetTimeEvent(45022, 95.0);
	@SetTimeEvent(45023, 119.0);
	@SetTimeEvent(45031, 240.0);
	@SetTimeEvent(45032, 245.0);
	@SetTimeEvent(45011, 96.0);
	@SetTimeEvent(45024, 143.0);
	@SetTimeEvent(45025, 167.0);
	@SetTimeEvent(45020, 47.0);
	@SetTimeEvent(45021, 71.0);
	@SetTimeEvent(45008, 10.0);
	@SetTimeEvent(45054, 272.0);
	@SetTimeEvent(45056, 266.0);
	@SetTimeEvent(45017, 196.0);
	@SetTimeEvent(45019, 23.0);
	@SetTimeEvent(45007, 17.92);
	@SetTimeEvent(45006, 72.0);
	@SetTimeEvent(45049, 152.07);
	@SetTimeEvent(45050, 174.0);
	@SetTimeEvent(45051, 249.35);
	@SetTimeEvent(45052, 276.0);
	@SetTimeEvent(45053, 279.0);
	@SetTimeEvent(45038, 35.0);
	@SetTimeEvent(45039, 60.0);
	@SetTimeEvent(45040, 55.0);
	@SetTimeEvent(45041, 80.0);
	@SetTimeEvent(45010, 16.0);
	@SetTimeEvent(45033, 32.0);
	@SetTimeEvent(45034, 41.0);
	@SetTimeEvent(45035, 253.0);
	@SetTimeEvent(45036, 255.0);
	@SetTimeEvent(45042, 264.0);
	@SetTimeEvent(45009, 23.5);
	@SetTimeEvent(45043, 108.0);
	@SetTimeEvent(45044, 127.0);
	@SetTimeEvent(45045, 127.5);
	@SetTimeEvent(45046, 128.0);
	@SetTimeEvent(45047, 132.44);
	@SetTimeEvent(45048, 154.0);
	@SetTimeEvent(45018, 216.0);
	@SetTimeEvent(45005, 48.0);
}


// @pe
void func_8453(void)
{
	func_137("warehouse_rubin@door1", false);
}


void func_9477(void)
{
	object var_3939_object;
	func_10048(var_3939_object);
	object var_3937_object;
	var_3939_object = var_3937_object;
	object var_3938_object;
	var_3937_object->FindMark(var_3938_object, "d6q01AlexandrGotoJulia");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01AlexandrGotoKaterina");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01AlexandrGotoLara");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01AlexangrGotoJulLaraSelf");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01BigVladGotoAnna");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01BigVladGotoAnnaOspinaSelf");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01BigVladGotoOspina");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01KaterinaGotoLaska");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01KaterinagotoLaskaSelf");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01KillerIsKlara");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01LaskaGotoAlbinos");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01ViktorGotoAlexandr");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01ViktorGotoAlxBigSelf");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q01ViktorGotoBigVlad");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q02BigVlad");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q02KapellaGotoMladVlad");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q02MladVladGotoBigVlad");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	var_3937_object->FindMark(var_3938_object, "d6q02MladVladGotoBigVladSelf");
	if(var_3938_object != 0)
		var_3938_object->Remove();
	bool var_3976_bool;
	func_10031(var_3976_bool, 111);
	bool var_3978_bool;
	func_10031(var_3978_bool, 102);
	bool var_3980_bool;
	func_10031(var_3980_bool, 107);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_9989(object var_3963_object)
{
	object var_3965_object;
	@GetDiaryRoot(var_3965_object);
	if(!var_3965_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_3963_object = false;
	}
	var_3965_object = var_3963_object;
}
EMIT "Stack[-1] = 0";


void func_1797(int var_2494_int, int var_2495_int, int var_2496_int)
{
	int var_2499_int; int var_2500_int;
	bool var_2501_bool = false;
	if(var_2496_int > 8) {
		if(var_2496_int < 21)
			var_2501_bool = true;
	}
	if(var_2501_bool != 0) {
		int var_2506_int;
		var_2494_int = var_2506_int;
		func_438(var_2506_int, "pers_wasted_girl", "wasted_girl_d.xml", 1);
		int var_2510_int;
		var_2494_int = var_2510_int;
		func_438(var_2510_int, "pers_wasted_male", "wasted_male_d.xml", 1);
		int var_2514_int;
		var_2494_int = var_2514_int;
		func_438(var_2514_int, "pers_woman", "woman_d.xml", 1);
		int var_2518_int;
		var_2494_int = var_2518_int;
		func_438(var_2518_int, "pers_unosha", "unosha_d.xml", 1);
		int var_2522_int;
		var_2494_int = var_2522_int;
		func_438(var_2522_int, "pers_unosha", "unosha2_d.xml", 1);
		int var_2526_int;
		var_2494_int = var_2526_int;
		func_438(var_2526_int, "pers_boy", "boy_d.xml", 1);
		int var_2530_int;
		var_2494_int = var_2530_int;
		func_438(var_2530_int, "pers_girl", "girl_d.xml", 1);
		int var_2534_int;
		var_2494_int = var_2534_int;
		func_438(var_2534_int, "pers_girl", "girl2_d.xml", 1);
		int var_2538_int;
		var_2494_int = var_2538_int;
		func_438(var_2538_int, "pers_vaxxabit", "vaxxabit.xml", 1);
		int var_2542_int;
		var_2494_int = var_2542_int;
		func_438(var_2542_int, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		int var_2546_int;
		var_2494_int = var_2546_int;
		func_438(var_2546_int, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		int var_2550_int;
		var_2494_int = var_2550_int;
		func_438(var_2550_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		int var_2554_int;
		var_2494_int = var_2554_int;
		func_464(var_2554_int, "fog", "fog.xml", 6);
		float var_2559_float; int var_2560_int;
		var_2495_int = var_2560_int;
		func_1022(var_2559_float, var_2560_int);
		if((1 * var_2559_float) != 0) {
			int var_2562_int; int var_2565_int;
			var_2494_int = var_2562_int;
			var_2499_int = var_2565_int;
			func_438(var_2562_int, "pers_bomber", "bomber.xml", var_2565_int);
		}
	} else {
		int var_2603_int;
		var_2494_int = var_2603_int;
		func_438(var_2603_int, "pers_wasted_girl", "wasted_girl_d.xml", 1);
		int var_2607_int;
		var_2494_int = var_2607_int;
		func_438(var_2607_int, "pers_wasted_male", "wasted_male_d.xml", 1);
		int var_2611_int;
		var_2494_int = var_2611_int;
		func_438(var_2611_int, "pers_unosha", "unosha_d.xml", 1);
		int var_2615_int;
		var_2494_int = var_2615_int;
		func_438(var_2615_int, "pers_unosha", "unosha2_d.xml", 1);
		int var_2619_int;
		var_2494_int = var_2619_int;
		func_438(var_2619_int, "pers_vaxxabit", "vaxxabit.xml", 1);
		int var_2623_int;
		var_2494_int = var_2623_int;
		func_438(var_2623_int, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		int var_2627_int;
		var_2494_int = var_2627_int;
		func_438(var_2627_int, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		int var_2631_int;
		var_2494_int = var_2631_int;
		func_438(var_2631_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		int var_2635_int;
		var_2494_int = var_2635_int;
		func_464(var_2635_int, "fog", "fog.xml", 6);
		float var_2640_float; int var_2641_int;
		var_2495_int = var_2641_int;
		func_1022(var_2640_float, var_2641_int);
		if((1 * var_2640_float) == 0) goto Label_1993;
		int var_2643_int; int var_2646_int;
		var_2494_int = var_2643_int;
		var_2500_int = var_2646_int;
		func_438(var_2643_int, "pers_bomber", "bomber.xml", var_2646_int);
	}
Label_1993:
	int var_2566_int;
	var_2494_int = var_2566_int;
	func_451(var_2566_int, "pers_worker", "agony1.xml", 2, 4, 4);
	int var_2572_int;
	var_2494_int = var_2572_int;
	func_451(var_2572_int, "pers_unosha", "agony1.xml", 2, 4, 4);
	int var_2578_int;
	var_2494_int = var_2578_int;
	func_451(var_2578_int, "pers_woman", "agony1.xml", 2, 4, 4);
	int var_2584_int;
	var_2494_int = var_2584_int;
	func_451(var_2584_int, "pers_vaxxabitka", "agony1.xml", 2, 4, 4);
	int var_2590_int;
	var_2494_int = var_2590_int;
	func_451(var_2590_int, "pers_wasted_girl", "agony1.xml", 2, 4, 4);
	bool var_2596_bool; int var_2597_int; int var_2598_int;
	var_2495_int = var_2597_int;
	var_2496_int = var_2598_int;
	func_1112(var_2596_bool, var_2597_int, var_2598_int);
	if(var_2596_bool != 0) {
		int var_2599_int;
		var_2494_int = var_2599_int;
		func_438(var_2599_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
}


void func_2310(int var_1849_int, int var_1850_int, int var_1851_int)
{
	int var_1854_int; int var_1855_int;
	bool var_1856_bool = false;
	if(var_1851_int > 8) {
		if(var_1851_int < 21)
			var_1856_bool = true;
	}
	if(var_1856_bool != 0) {
		int var_1861_int;
		var_1849_int = var_1861_int;
		func_438(var_1861_int, "pers_woman", "woman_d.xml", 1);
		int var_1865_int;
		var_1849_int = var_1865_int;
		func_438(var_1865_int, "pers_unosha", "unosha_d.xml", 1);
		int var_1869_int;
		var_1849_int = var_1869_int;
		func_438(var_1869_int, "pers_unosha", "unosha2_d.xml", 1);
		int var_1873_int;
		var_1849_int = var_1873_int;
		func_438(var_1873_int, "pers_worker", "worker_d.xml", 1);
		int var_1877_int;
		var_1849_int = var_1877_int;
		func_438(var_1877_int, "pers_worker", "worker2_d.xml", 1);
		int var_1881_int;
		var_1849_int = var_1881_int;
		func_438(var_1881_int, "pers_alkash", "alkash_d.xml", 1);
		int var_1885_int;
		var_1849_int = var_1885_int;
		func_438(var_1885_int, "pers_vaxxabit", "vaxxabit.xml", 1);
		int var_1889_int;
		var_1849_int = var_1889_int;
		func_438(var_1889_int, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		int var_1893_int;
		var_1849_int = var_1893_int;
		func_438(var_1893_int, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		int var_1897_int;
		var_1849_int = var_1897_int;
		func_438(var_1897_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		if((var_1850_int + 1) >= 3) {
		}
		if((var_1850_int + 1) >= 7) {
			int var_1909_int;
			var_1849_int = var_1909_int;
			func_438(var_1909_int, "pers_butcher", "butcher_d.xml", 2);
		}
		int var_1913_int;
		var_1849_int = var_1913_int;
		func_464(var_1913_int, "fog", "fog.xml", 5);
		float var_1918_float; int var_1919_int;
		var_1850_int = var_1919_int;
		func_1022(var_1918_float, var_1919_int);
		if((1 * var_1918_float) != 0) {
			int var_1921_int; int var_1924_int;
			var_1849_int = var_1921_int;
			var_1854_int = var_1924_int;
			func_438(var_1921_int, "pers_bomber", "bomber.xml", var_1924_int);
		}
	} else {
		int var_1962_int;
		var_1849_int = var_1962_int;
		func_438(var_1962_int, "pers_unosha", "unosha_d.xml", 1);
		int var_1966_int;
		var_1849_int = var_1966_int;
		func_438(var_1966_int, "pers_unosha", "unosha2_d.xml", 1);
		int var_1970_int;
		var_1849_int = var_1970_int;
		func_438(var_1970_int, "pers_worker", "worker_d.xml", 1);
		int var_1974_int;
		var_1849_int = var_1974_int;
		func_438(var_1974_int, "pers_worker", "worker2_d.xml", 1);
		int var_1978_int;
		var_1849_int = var_1978_int;
		func_438(var_1978_int, "pers_alkash", "alkash_d.xml", 1);
		int var_1982_int;
		var_1849_int = var_1982_int;
		func_438(var_1982_int, "pers_vaxxabit", "vaxxabit.xml", 1);
		int var_1986_int;
		var_1849_int = var_1986_int;
		func_438(var_1986_int, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		int var_1990_int;
		var_1849_int = var_1990_int;
		func_438(var_1990_int, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		int var_1994_int;
		var_1849_int = var_1994_int;
		func_438(var_1994_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		if((var_1850_int + 1) >= 3) {
		}
		if((var_1850_int + 1) >= 7) {
			int var_2006_int;
			var_1849_int = var_2006_int;
			func_438(var_2006_int, "pers_butcher", "butcher_d.xml", 2);
		}
		int var_2010_int;
		var_1849_int = var_2010_int;
		func_464(var_2010_int, "fog", "fog.xml", 4);
		float var_2015_float; int var_2016_int;
		var_1850_int = var_2016_int;
		func_1022(var_2015_float, var_2016_int);
		if((1 * var_2015_float) == 0) goto Label_2533;
		int var_2018_int; int var_2021_int;
		var_1849_int = var_2018_int;
		var_1855_int = var_2021_int;
		func_438(var_2018_int, "pers_bomber", "bomber.xml", var_2021_int);
	}
Label_2533:
	int var_1925_int;
	var_1849_int = var_1925_int;
	func_451(var_1925_int, "pers_worker", "agony1.xml", 2, 4, 4);
	int var_1931_int;
	var_1849_int = var_1931_int;
	func_451(var_1931_int, "pers_unosha", "agony1.xml", 2, 4, 4);
	int var_1937_int;
	var_1849_int = var_1937_int;
	func_451(var_1937_int, "pers_woman", "agony1.xml", 2, 4, 4);
	int var_1943_int;
	var_1849_int = var_1943_int;
	func_451(var_1943_int, "pers_vaxxabitka", "agony1.xml", 2, 4, 4);
	int var_1949_int;
	var_1849_int = var_1949_int;
	func_451(var_1949_int, "pers_wasted_girl", "agony1.xml", 2, 4, 4);
	bool var_1955_bool; int var_1956_int; int var_1957_int;
	var_1850_int = var_1956_int;
	var_1851_int = var_1957_int;
	func_1112(var_1955_bool, var_1956_int, var_1957_int);
	if(var_1955_bool != 0) {
		int var_1958_int;
		var_1849_int = var_1958_int;
		func_438(var_1958_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
}


// @pe
void func_5895(int var_2418_int, int var_2419_int, object var_2420_object, object var_2421_object, object var_2422_object, object var_2423_object)
{
	if(var_2419_int == 0) {
		func_731(12, true);
		func_748(12, true, 1);
		int var_2432_int; object var_2433_object; object var_2434_object; object var_2435_object;
		var_2418_int = var_2432_int;
		var_2420_object = var_2433_object;
		var_2421_object = var_2434_object;
		var_2422_object = var_2435_object;
		func_576(12, var_2432_int, var_2433_object, var_2434_object, var_2435_object);
		object var_2436_object;
		var_2423_object = var_2436_object;
		func_229(var_2436_object, 1);
	}
	func_714(12, false);
	int var_2441_int; int var_2442_int;
	var_2418_int = var_2441_int;
	var_2419_int = var_2442_int;
	func_2052(12, var_2441_int, var_2442_int);
}


// @pe
void func_4872(void)
{
}


// @pe
void func_6409(int var_3697_int, int var_3698_int, object var_3699_object, object var_3700_object, object var_3701_object, object var_3702_object)
{
	if(var_3698_int == 0) {
		func_731(15, true);
		func_748(15, true, 1);
		int var_3711_int; object var_3712_object; object var_3713_object; object var_3714_object;
		var_3697_int = var_3711_int;
		var_3699_object = var_3712_object;
		var_3700_object = var_3713_object;
		var_3701_object = var_3714_object;
		func_576(15, var_3711_int, var_3712_object, var_3713_object, var_3714_object);
		object var_3715_object;
		var_3702_object = var_3715_object;
		func_229(var_3715_object, 1);
	}
	func_714(15, false);
	int var_3720_int; int var_3721_int;
	var_3697_int = var_3720_int;
	var_3698_int = var_3721_int;
	func_2978(15, var_3720_int, var_3721_int);
}


void func_3338(int var_3047_int, int var_3048_int, int var_3049_int)
{
	int var_3054_int; int var_3055_int; int var_3056_int; int var_3057_int;
	bool var_3058_bool = false;
	if(var_3049_int > 8) {
		if(var_3049_int < 21)
			var_3058_bool = true;
	}
	if(var_3058_bool != 0) {
		int var_3063_int;
		var_3047_int = var_3063_int;
		func_438(var_3063_int, "pers_woman", "woman.xml", 1);
		int var_3067_int;
		var_3047_int = var_3067_int;
		func_438(var_3067_int, "pers_unosha", "unosha.xml", 1);
		int var_3071_int;
		var_3047_int = var_3071_int;
		func_438(var_3071_int, "pers_unosha", "unosha2.xml", 1);
		int var_3075_int;
		var_3047_int = var_3075_int;
		func_438(var_3075_int, "pers_boy", "boy.xml", 1);
		if((var_3048_int + 1) >= 2) {
			int var_3083_int;
			var_3047_int = var_3083_int;
			func_438(var_3083_int, "pers_patrool", "patrol.xml", 2);
		}
		int var_3087_int;
		var_3047_int = var_3087_int;
		func_438(var_3087_int, "pers_rat", "rat.xml", 3);
		float var_3092_float; int var_3093_int;
		var_3048_int = var_3093_int;
		func_932(var_3092_float, var_3093_int);
		if((1 * var_3092_float) != 0) {
			int var_3095_int; int var_3098_int;
			var_3047_int = var_3095_int;
			var_3054_int = var_3098_int;
			func_438(var_3095_int, "pers_grabitel", "grabitel.xml", var_3098_int);
		}
		float var_3100_float; int var_3101_int;
		func_1022(var_3100_float, var_3101_int);
		if((1 * var_3100_float) != 0) {
			int var_3103_int; int var_3106_int;
			var_3047_int = var_3103_int;
			var_3055_int = var_3106_int;
			func_438(var_3103_int, "pers_bomber", "bomber.xml", var_3106_int);
		}
	} else {
		int var_3114_int;
		var_3047_int = var_3114_int;
		func_438(var_3114_int, "pers_woman", "woman.xml", 1);
		int var_3118_int;
		var_3047_int = var_3118_int;
		func_438(var_3118_int, "pers_unosha", "unosha.xml", 1);
		int var_3122_int;
		var_3047_int = var_3122_int;
		func_438(var_3122_int, "pers_unosha", "unosha2.xml", 1);
		int var_3126_int;
		var_3047_int = var_3126_int;
		func_438(var_3126_int, "pers_boy", "boy.xml", 1);
		if((var_3101_int + 1) >= 2) {
			int var_3134_int;
			var_3047_int = var_3134_int;
			func_438(var_3134_int, "pers_patrool", "patrol.xml", 2);
		}
		int var_3138_int;
		var_3047_int = var_3138_int;
		func_438(var_3138_int, "pers_rat", "rat.xml", 3);
		float var_3143_float; int var_3144_int;
		var_3048_int = var_3144_int;
		func_932(var_3143_float, var_3144_int);
		if((2 * var_3143_float) != 0) {
			int var_3146_int; int var_3149_int;
			var_3047_int = var_3146_int;
			var_3056_int = var_3149_int;
			func_438(var_3146_int, "pers_grabitel", "grabitel.xml", var_3149_int);
		}
		float var_3151_float; int var_3152_int;
		var_3048_int = var_3152_int;
		func_1022(var_3151_float, var_3152_int);
		if((1 * var_3151_float) == 0) goto Label_3504;
		int var_3154_int; int var_3157_int;
		var_3047_int = var_3154_int;
		var_3057_int = var_3157_int;
		func_438(var_3154_int, "pers_bomber", "bomber.xml", var_3157_int);
	}
Label_3504:
	bool var_3107_bool; int var_3108_int; int var_3109_int;
	var_3048_int = var_3108_int;
	var_3049_int = var_3109_int;
	func_1112(var_3107_bool, var_3108_int, var_3109_int);
	if(var_3107_bool != 0) {
		int var_3110_int;
		var_3047_int = var_3110_int;
		func_438(var_3110_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
}


// @pe
void func_4874(int var_944_int, int var_945_int, object var_946_object, object var_947_object, object var_948_object, object var_949_object)
{
	if(var_945_int == 0) {
		func_731(6, false);
		func_748(6, false, 1);
		int var_957_int; int var_958_int; object var_959_object; object var_960_object; object var_961_object;
		var_957_int = 6;
		var_944_int = var_958_int;
		var_946_object = var_959_object;
		var_947_object = var_960_object;
		var_948_object = var_961_object;
		func_557(var_958_int, var_959_object, var_960_object, var_961_object);
		object var_962_object;
		var_949_object = var_962_object;
		func_229(var_962_object, 0);
	}
	int var_965_int;
	var_945_int = var_965_int;
	func_872(6, var_965_int);
}


// @pe
void func_3852(void)
{
}


// @pe
void func_5388(int var_2337_int, int var_2338_int, object var_2339_object, object var_2340_object, object var_2341_object, object var_2342_object)
{
	if(var_2338_int == 0) {
		func_731(9, true);
		func_748(9, true, 1);
		int var_2351_int; object var_2352_object; object var_2353_object; object var_2354_object;
		var_2337_int = var_2351_int;
		var_2339_object = var_2352_object;
		var_2340_object = var_2353_object;
		var_2341_object = var_2354_object;
		func_576(9, var_2351_int, var_2352_object, var_2353_object, var_2354_object);
		object var_2355_object;
		var_2342_object = var_2355_object;
		func_229(var_2355_object, 1);
	}
	func_714(9, false);
	int var_2360_int; int var_2361_int;
	var_2337_int = var_2360_int;
	var_2338_int = var_2361_int;
	func_2052(9, var_2360_int, var_2361_int);
}


// @pe
void func_3854(int var_409_int, int var_410_int, object var_411_object, object var_412_object, object var_413_object, object var_414_object)
{
	if(var_410_int == 0) {
		func_731(0, false);
		func_748(0, false, 1);
		int var_457_int; int var_458_int; object var_459_object; object var_460_object; object var_461_object;
		var_457_int = 0;
		var_409_int = var_458_int;
		var_411_object = var_459_object;
		var_412_object = var_460_object;
		var_413_object = var_461_object;
		func_557(var_458_int, var_459_object, var_460_object, var_461_object);
		object var_502_object;
		var_414_object = var_502_object;
		func_229(var_502_object, 0);
	}
	int var_530_int;
	var_410_int = var_530_int;
	func_872(0, var_530_int);
	int var_555_int; int var_556_int; int var_557_int;
	var_555_int = 0;
	var_409_int = var_556_int;
	var_410_int = var_557_int;
	func_1607(var_556_int, var_557_int);
}


// @pe
void func_8460(void)
{
	func_137("warehouse_rubin@door1", true);
}


void func_267(int var_83_int)
{
	int var_86_int; int var_87_int;
	var_86_int = 0;
	
	while(0 < 16) {
		bool var_90_bool; int var_91_int;
		var_87_int = var_91_int;
		func_357(var_90_bool, var_91_int);
		if(var_90_bool != 0)
			var_86_int += 1;
		var_87_int += 1;
	}
	
	var_86_int = var_83_int;
}


// @pe
void func_4370(int var_836_int, int var_837_int, object var_838_object, object var_839_object, object var_840_object, object var_841_object)
{
	if(var_837_int == 0) {
		func_731(13, false);
		func_748(13, false, 1);
		int var_849_int; int var_850_int; object var_851_object; object var_852_object; object var_853_object;
		var_849_int = 13;
		var_836_int = var_850_int;
		var_838_object = var_851_object;
		var_839_object = var_852_object;
		var_840_object = var_853_object;
		func_557(var_850_int, var_851_object, var_852_object, var_853_object);
		object var_854_object;
		var_841_object = var_854_object;
		func_229(var_854_object, 0);
	}
	int var_857_int;
	var_837_int = var_857_int;
	func_805(3, var_857_int);
	int var_874_int; int var_875_int;
	var_836_int = var_874_int;
	var_837_int = var_875_int;
	func_1411(3, var_874_int, var_875_int);
}


void func_10002(bool var_3954_bool, object var_3955_object, int var_3956_int)
{
	object var_3963_object;
	func_9989(var_3963_object);
	object var_3960_object;
	var_3963_object = var_3960_object;
	object var_3961_object;
	var_3960_object->Find(var_3956_int, var_3961_object);
	if(!var_3961_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_3956_int);
		var_3954_bool = false;
	}
	var_3961_object->AddChild(var_3955_object);
	@SetVariable("player_diary", 1);
	int var_3962_int;
	var_3955_object->GetCategory(var_3962_int);
	@SetDiarySection(var_3962_int);
	var_3954_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_8467(void)
{
	func_137("theater@door1", true);
}


// @pe
void func_8474(void)
{
	func_137("theater@door1", false);
}


void func_285(void)
{
	int var_99_int; int var_101_int;
	@irand(var_99_int, 16);
	int var_100_int = 0;
	
	while(var_100_int < 16) {
		var_101_int = (var_100_int + var_99_int) % 16;
		bool var_107_bool = false;
		bool var_108_bool; int var_109_int;
		var_101_int = var_109_int;
		func_323(var_108_bool, var_109_int);
		if(var_108_bool != 0) {
			bool var_118_bool; int var_119_int;
			var_101_int = var_119_int;
			func_11400(var_118_bool, var_119_int);
			if(var_118_bool != 0)
				var_107_bool = true;
		}
		if(var_107_bool != 0) {
			int var_142_int;
			func_373(var_142_int);
			@Trace("Diseased Region: " + var_142_int);
		}
		var_100_int += 1;
	}
	
}


// @pe
void func_8481(void)
{
	func_10126();
}


// @pe
void func_805(int var_856_int, int var_857_int)
{
	bool var_858_bool = true;
	bool var_859_bool = true;
	var_861_bool = var_857_int >= 20;
	if(var_861_bool != 1) {
		var_863_bool = var_857_int < 2;
		if(var_863_bool != 1)
			var_859_bool = false;
	}
	if(var_859_bool != 1) {
		bool var_864_bool = false;
		if(var_857_int >= 6) {
			if(var_857_int < 10)
				var_864_bool = true;
		}
		if(var_864_bool != 1)
			var_858_bool = false;
	}
	if(var_858_bool != 0) {
		int var_869_int;
		var_856_int = var_869_int;
		func_714(var_869_int, true);
	} else {
		int var_871_int;
		var_856_int = var_871_int;
		func_714(var_871_int, false);
	}
	
}


// @pe
void func_8486(void)
{
	func_137("termitnik@door1", true);
}


// @pe
void func_4908(int var_2105_int, int var_2106_int, object var_2107_object, object var_2108_object, object var_2109_object, object var_2110_object)
{
	if(var_2106_int == 0) {
		func_731(6, true);
		func_748(6, true, 1);
		int var_2119_int; object var_2120_object; object var_2121_object; object var_2122_object;
		var_2105_int = var_2119_int;
		var_2107_object = var_2120_object;
		var_2108_object = var_2121_object;
		var_2109_object = var_2122_object;
		func_576(6, var_2119_int, var_2120_object, var_2121_object, var_2122_object);
		object var_2123_object;
		var_2110_object = var_2123_object;
		func_229(var_2123_object, 1);
	}
	func_714(6, false);
}


void func_11565(int var_3724_int)
{
	object var_3730_object; object var_3731_object; object var_3732_object; object var_3733_object; object var_3734_object;
	if(var_3724_int == 1) {
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(var_3730_object, "r4_house_2_02");
		@ReplaceScene(var_3730_object, "s_r4_house_2_02.isc");
		var_3730_object = null;
	} else if(var_3724_int == 3) {
			@Trace("Special diseased house: house7_03");
			@GetSceneByName(var_3731_object, "house7_03");
			@ReplaceScene(var_3731_object, "s_house7_03.isc");
			var_3731_object = null;
	}

	
	if(var_3724_int == 5) {
		@Trace("Special house: sobor (with corpses)");
		@GetSceneByName(var_3732_object, "sobor");
		@ReplaceScene(var_3732_object, "sobor_trup.isc");
		var_3732_object = null;
	} else if(var_3724_int == 6) {
		@Trace("Special house: sobor (normal)");
		@GetSceneByName(var_3733_object, "sobor");
		@ReplaceScene(var_3733_object, "sobor.isc");
		var_3733_object = null;
	} else if(var_3724_int == 7) {
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(var_3734_object, "r4_house_2_02");
		@ReplaceScene(var_3734_object, "s_r4_house_2_02.isc");
		var_3734_object = null;
	}
}


// @pe
void func_8493(void)
{
	func_137("termitnik@door1", false);
}


// @pe
void func_5935(int var_3508_int, int var_3509_int, object var_3510_object, object var_3511_object, object var_3512_object, object var_3513_object)
{
	if(var_3509_int == 0) {
		func_731(12, true);
		func_748(12, true, 1);
		int var_3522_int; object var_3523_object; object var_3524_object; object var_3525_object;
		var_3508_int = var_3522_int;
		var_3510_object = var_3523_object;
		var_3511_object = var_3524_object;
		var_3512_object = var_3525_object;
		func_655(12, var_3522_int, var_3523_object, var_3524_object, var_3525_object);
		object var_3526_object;
		var_3513_object = var_3526_object;
		func_229(var_3526_object, 2);
	}
	func_714(12, false);
	int var_3531_int; int var_3532_int;
	var_3508_int = var_3531_int;
	var_3509_int = var_3532_int;
	func_3158(12, var_3531_int, var_3532_int);
}


void func_10031(bool var_3870_bool, int var_3871_int)
{
	object var_3876_object;
	func_9989(var_3876_object);
	object var_3874_object;
	var_3876_object = var_3874_object;
	object var_3875_object;
	var_3874_object->Find(var_3871_int, var_3875_object);
	if(!var_3875_object) //@nz
		var_3870_bool = false;
	var_3875_object->Remove();
	var_3870_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5428(int var_3427_int, int var_3428_int, object var_3429_object, object var_3430_object, object var_3431_object, object var_3432_object)
{
	if(var_3428_int == 0) {
		func_731(9, true);
		func_748(9, true, 1);
		int var_3441_int; object var_3442_object; object var_3443_object; object var_3444_object;
		var_3427_int = var_3441_int;
		var_3429_object = var_3442_object;
		var_3430_object = var_3443_object;
		var_3431_object = var_3444_object;
		func_655(9, var_3441_int, var_3442_object, var_3443_object, var_3444_object);
		object var_3445_object;
		var_3432_object = var_3445_object;
		func_229(var_3445_object, 2);
	}
	func_714(9, false);
	int var_3450_int; int var_3451_int;
	var_3427_int = var_3450_int;
	var_3428_int = var_3451_int;
	func_3158(9, var_3450_int, var_3451_int);
}


// @pe
void func_8500(void)
{
	@SetVariable("resque_list", 1);
	func_11280();
}


// @pe
void func_3894(int var_1406_int, int var_1407_int, object var_1408_object, object var_1409_object, object var_1410_object, object var_1411_object)
{
	if(var_1407_int == 0) {
		func_731(0, true);
		func_748(0, true, 1);
		int var_1420_int; object var_1421_object; object var_1422_object; object var_1423_object;
		var_1406_int = var_1420_int;
		var_1408_object = var_1421_object;
		var_1409_object = var_1422_object;
		var_1410_object = var_1423_object;
		func_576(0, var_1420_int, var_1421_object, var_1422_object, var_1423_object);
		object var_1509_object;
		var_1411_object = var_1509_object;
		func_229(var_1509_object, 1);
	}
	func_714(0, false);
	int var_1514_int; int var_1515_int;
	var_1406_int = var_1514_int;
	var_1407_int = var_1515_int;
	func_2592(0, var_1514_int, var_1515_int);
}


// @pe
void func_4410(int var_2024_int, int var_2025_int, object var_2026_object, object var_2027_object, object var_2028_object, object var_2029_object)
{
	if(var_2025_int == 0) {
		func_731(13, true);
		func_748(13, true, 1);
		int var_2038_int; object var_2039_object; object var_2040_object; object var_2041_object;
		var_2024_int = var_2038_int;
		var_2026_object = var_2039_object;
		var_2027_object = var_2040_object;
		var_2028_object = var_2041_object;
		func_576(13, var_2038_int, var_2039_object, var_2040_object, var_2041_object);
		object var_2042_object;
		var_2029_object = var_2042_object;
		func_229(var_2042_object, 1);
	}
	func_714(3, false);
	int var_2047_int; int var_2048_int;
	var_2024_int = var_2047_int;
	var_2025_int = var_2048_int;
	func_2310(3, var_2047_int, var_2048_int);
}


// @pe
void func_8509(void)
{
	func_137("factory@door1", false);
}


void func_10048(object var_3815_object)
{
	object var_3818_object; object var_3819_object;
	@GetMainOutdoorScene(var_3818_object);
	if(var_3818_object == null) {
		@Trace("Can't find main outdoor scene");
		var_3819_object = null;
		var_3819_object = var_3815_object;
	}
	var_3818_object->GetMap(var_3819_object);
	var_3819_object = var_3815_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_323(bool var_382_bool, int var_383_int)
{
	int var_387_int;
	var_383_int = var_387_int;
	string var_386_string;
	func_223(var_386_string, var_387_int);
	int var_385_int;
	@GetVariable(var_386_string, var_385_int);
	if((var_385_int & 3) == 0)
		var_382_bool = true;
	var_382_bool = false;
}


// @pe
void func_8516(void)
{
	func_137("icot_eva@door1", true);
}


// @pe
void func_842(int var_898_int, int var_899_int)
{
	bool var_900_bool = true;
	var_902_bool = var_899_int >= 20;
	if(var_902_bool != 1) {
		bool var_903_bool = false;
		if(var_899_int >= 6) {
			if(var_899_int < 10)
				var_903_bool = true;
		}
		if(var_903_bool != 1)
			var_900_bool = false;
	}
	if(var_900_bool != 0) {
		int var_908_int;
		var_898_int = var_908_int;
		func_714(var_908_int, true);
	} else {
		int var_910_int;
		var_898_int = var_910_int;
		func_714(var_910_int, false);
	}
	
}


void func_8523(void)
{
	object var_3815_object;
	func_10048(var_3815_object);
	object var_3813_object;
	var_3815_object = var_3813_object;
	object var_3814_object;
	var_3813_object->FindMark(var_3814_object, "d1AlexandrAboutKaterina");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q01EvaAboutMark");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1EvaGotoMaria");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q01EvaGotoSimon");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1EvaInfo");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1GeorgAboutAlexandr");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1GeorgAboutBigVlad");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1GeorgGotoViktor");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1GeorgInfo");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q01GrifAboutRubin");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q01MarkAboutJulia");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q01MarkAboutLara");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q01NotkinAboutRubin");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q02AnnaGotoLaska");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q02ViktorGotoAnna");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1BigVladAboutKapella");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1BigVladAboutMladVlad");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1EvaAboutKapella");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q03KapellaGotoOspina");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q03MladVladGotoOspina");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1EvaAboutKaterina");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q04KaterinaGotoMishka");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q04MishkaGotoSpi4ka");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	var_3813_object->FindMark(var_3814_object, "d1q04Spi4kaGotoPowderHouse");
	if(var_3814_object != 0)
		var_3814_object->Remove();
	bool var_3870_bool;
	func_10031(var_3870_bool, 2);
	bool var_3882_bool;
	func_10031(var_3882_bool, 7);
	bool var_3884_bool;
	func_10031(var_3884_bool, 37);
	bool var_3886_bool;
	func_10031(var_3886_bool, 43);
	@Trace("Day1 cleanup");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4942(int var_3241_int, int var_3242_int, object var_3243_object, object var_3244_object, object var_3245_object, object var_3246_object)
{
	if(var_3242_int == 0) {
		func_731(6, true);
		func_748(6, true, 1);
		int var_3255_int; object var_3256_object; object var_3257_object; object var_3258_object;
		var_3241_int = var_3255_int;
		var_3243_object = var_3256_object;
		var_3244_object = var_3257_object;
		var_3245_object = var_3258_object;
		func_655(6, var_3255_int, var_3256_object, var_3257_object, var_3258_object);
		object var_3259_object;
		var_3246_object = var_3259_object;
		func_229(var_3259_object, 2);
	}
	func_714(6, false);
}


void func_10065(bool var_3588_bool, int var_3589_int)
{
	int var_3593_int; int var_3594_int;
	bool var_3595_bool = false;
	if(var_3589_int > 40000) {
		if(var_3589_int < 40288)
			var_3595_bool = true;
	}
	if(var_3595_bool != 0) {
		var_3593_int = (var_3589_int - 40000) / 24;
		var_3594_int = (var_3589_int - 40000) % 24;
		int var_3607_int;
		var_3594_int = var_3607_int;
		func_7115((var_3593_int + 1), var_3607_int);
		int var_3776_int;
		var_3594_int = var_3776_int;
		func_11445((var_3593_int + 1), var_3776_int);
		var_3588_bool = true;
	}
	var_3588_bool = false;
}


void func_339(int var_71_int)
{
	int var_77_int;
	var_71_int = var_77_int;
	string var_76_string;
	func_223(var_76_string, var_77_int);
	int var_74_int;
	@GetVariable(var_76_string, var_74_int);
	string var_81_string; int var_82_int;
	var_71_int = var_82_int;
	func_223(var_81_string, var_82_int);
	@SetVariable(var_81_string, ((var_74_int & 252) | 0));
}


// @pe
void func_5975(object var_257_object)
{
	var_257_object->add("r7_house2_01");
	var_257_object->add("r7_house2_02");
	var_257_object->add("r7_house2_03");
	var_257_object->add("r7_house2_04");
	var_257_object->add("r7_house3_03_i2");
	var_257_object->add("r7_house3_03");
	var_257_object->add("r7_house3_04_i2");
	var_257_object->add("r7_house3_04");
	var_257_object->add("r7_house3_05_i2");
	var_257_object->add("r7_house3_05");
	var_257_object->add("r7_house3_06_i2");
	var_257_object->add("r7_house3_01_i2");
	var_257_object->add("r7_house3_01");
	var_257_object->add("r7_house3_02_i2");
	var_257_object->add("r7_house3_02");
}


// @pe
void func_5468(object var_204_object)
{
	var_204_object->add("r4_house_2_02");
	var_204_object->add("r4_house3_03_i2");
	var_204_object->add("r4_house3_03");
	var_204_object->add("r4_house4_02_i2");
	var_204_object->add("r4_house4_02");
	var_204_object->add("r4_house4_01_i2");
	var_204_object->add("r4_house4_01");
	var_204_object->add("r4_house3_02_i2");
	var_204_object->add("r4_house3_02");
	var_204_object->add("r4_house_2_01");
	var_204_object->add("r4_house3_01_i2");
	var_204_object->add("r4_house3_01");
	var_204_object->add("r4_house7_01");
	var_204_object->add("r4_House6_01");
	var_204_object->add("r4_house_2_03");
	var_204_object->add("r4_House6_03");
	var_204_object->add("r4_house_2_04");
}


void func_7005(void)
{
	object var_3790_object;
	@GetMainOutdoorScene(var_3790_object);
	var_3791_object = GlobalVars[0];
	object var_3792_object; object var_3793_object;
	var_3790_object = var_3793_object;
	func_6562(var_3792_object, var_3793_object, 1);
	var_3792_object = var_3791_object;
	GlobalVars[0] = var_3791_object;
	var_3817_object = GlobalVars[1];
	object var_3818_object; object var_3819_object;
	var_3790_object = var_3819_object;
	func_6562(var_3818_object, var_3819_object, 2);
	var_3818_object = var_3817_object;
	GlobalVars[1] = var_3817_object;
	var_3821_object = GlobalVars[2];
	object var_3822_object; object var_3823_object;
	var_3790_object = var_3823_object;
	func_6562(var_3822_object, var_3823_object, 3);
	var_3822_object = var_3821_object;
	GlobalVars[2] = var_3821_object;
	var_3825_object = GlobalVars[3];
	object var_3826_object; object var_3827_object;
	var_3790_object = var_3827_object;
	func_6562(var_3826_object, var_3827_object, 4);
	var_3826_object = var_3825_object;
	GlobalVars[3] = var_3825_object;
	var_3829_object = GlobalVars[4];
	object var_3830_object; object var_3831_object;
	var_3790_object = var_3831_object;
	func_6562(var_3830_object, var_3831_object, 5);
	var_3830_object = var_3829_object;
	GlobalVars[4] = var_3829_object;
	var_3833_object = GlobalVars[5];
	object var_3834_object; object var_3835_object;
	var_3790_object = var_3835_object;
	func_6562(var_3834_object, var_3835_object, 6);
	var_3834_object = var_3833_object;
	GlobalVars[5] = var_3833_object;
	var_3837_object = GlobalVars[6];
	object var_3838_object; object var_3839_object;
	var_3790_object = var_3839_object;
	func_6576(var_3838_object, var_3839_object, 1);
	var_3838_object = var_3837_object;
	GlobalVars[6] = var_3837_object;
	var_3847_object = GlobalVars[7];
	object var_3848_object; object var_3849_object;
	var_3790_object = var_3849_object;
	func_6576(var_3848_object, var_3849_object, 2);
	var_3848_object = var_3847_object;
	GlobalVars[7] = var_3847_object;
	var_3851_object = GlobalVars[8];
	object var_3852_object; object var_3853_object;
	var_3790_object = var_3853_object;
	func_6576(var_3852_object, var_3853_object, 3);
	var_3852_object = var_3851_object;
	GlobalVars[8] = var_3851_object;
	var_3855_object = GlobalVars[9];
	object var_3856_object; object var_3857_object;
	var_3790_object = var_3857_object;
	func_6576(var_3856_object, var_3857_object, 4);
	var_3856_object = var_3855_object;
	GlobalVars[9] = var_3855_object;
	var_3859_object = GlobalVars[10];
	object var_3860_object; object var_3861_object;
	var_3790_object = var_3861_object;
	func_6576(var_3860_object, var_3861_object, 5);
	var_3860_object = var_3859_object;
	GlobalVars[10] = var_3859_object;
	var_3863_object = GlobalVars[11];
	object var_3864_object; object var_3865_object;
	var_3790_object = var_3865_object;
	func_6576(var_3864_object, var_3865_object, 6);
	var_3864_object = var_3863_object;
	GlobalVars[11] = var_3863_object;
	var_3867_object = GlobalVars[16];
	object var_3868_object;
	func_86(var_3868_object);
	var_3868_object = var_3867_object;
	GlobalVars[16] = var_3867_object;
	func_6688();
}
EMIT "Stack[-1] = 0";


// @pe
void func_3934(int var_2691_int, int var_2692_int, object var_2693_object, object var_2694_object, object var_2695_object, object var_2696_object)
{
	if(var_2692_int == 0) {
		func_731(0, true);
		func_748(0, true, 1);
		int var_2705_int; object var_2706_object; object var_2707_object; object var_2708_object;
		var_2691_int = var_2705_int;
		var_2693_object = var_2706_object;
		var_2694_object = var_2707_object;
		var_2695_object = var_2708_object;
		func_655(0, var_2705_int, var_2706_object, var_2707_object, var_2708_object);
		object var_2743_object;
		var_2696_object = var_2743_object;
		func_229(var_2743_object, 2);
	}
	func_714(0, false);
	int var_2748_int; int var_2749_int;
	var_2691_int = var_2748_int;
	var_2692_int = var_2749_int;
	func_3518(0, var_2748_int, var_2749_int);
}


// @pe
void func_4450(int var_3160_int, int var_3161_int, object var_3162_object, object var_3163_object, object var_3164_object, object var_3165_object)
{
	if(var_3161_int == 0) {
		func_731(13, true);
		func_748(13, true, 1);
		int var_3174_int; object var_3175_object; object var_3176_object; object var_3177_object;
		var_3160_int = var_3174_int;
		var_3162_object = var_3175_object;
		var_3163_object = var_3176_object;
		var_3164_object = var_3177_object;
		func_655(13, var_3174_int, var_3175_object, var_3176_object, var_3177_object);
		object var_3178_object;
		var_3165_object = var_3178_object;
		func_229(var_3178_object, 2);
	}
	func_714(3, false);
	int var_3183_int; int var_3184_int;
	var_3160_int = var_3183_int;
	var_3161_int = var_3184_int;
	func_3338(3, var_3183_int, var_3184_int);
}


void func_8035(int var_4405_int)
{
	int var_4407_int;
	@AddMessage(14087, 14086, var_4407_int);
	@SetVariable("player_mail", 1);
	var_4407_int = var_4405_int;
}


void func_357(bool var_1379_bool, int var_1380_int)
{
	int var_1384_int;
	var_1380_int = var_1384_int;
	string var_1383_string;
	func_223(var_1383_string, var_1384_int);
	int var_1382_int;
	@GetVariable(var_1383_string, var_1382_int);
	if((var_1382_int & 3) == 1)
		var_1379_bool = true;
	var_1379_bool = false;
}


// @pe
void func_872(int var_529_int, int var_530_int)
{
	bool var_531_bool = true;
	bool var_532_bool = true;
	var_534_bool = var_530_int >= 22;
	if(var_534_bool != 1) {
		var_536_bool = var_530_int < 4;
		if(var_536_bool != 1)
			var_532_bool = false;
	}
	if(var_532_bool != 1) {
		bool var_537_bool = false;
		if(var_530_int >= 6) {
			if(var_530_int < 8)
				var_537_bool = true;
		}
		if(var_537_bool != 1)
			var_531_bool = false;
	}
	if(var_531_bool != 0) {
		int var_542_int;
		var_529_int = var_542_int;
		func_714(var_542_int, true);
	} else {
		int var_553_int;
		var_529_int = var_553_int;
		func_714(var_553_int, false);
	}
	
}


void func_8046(int var_4327_int)
{
	int var_4329_int;
	@AddMessage(14089, 14088, var_4329_int);
	@SetVariable("player_mail", 1);
	var_4329_int = var_4327_int;
}


// @pe
void func_4976(object var_156_object)
{
	var_156_object->add("House6_02");
	var_156_object->add("House6_01");
	var_156_object->add("house_2_01");
	var_156_object->add("house7_03");
	var_156_object->add("house7_02");
	var_156_object->add("house3_01_i2");
	var_156_object->add("house3_01");
	var_156_object->add("house_2_03");
	var_156_object->add("house_2_02");
	var_156_object->add("house4_01_i2");
	var_156_object->add("house4_01");
	var_156_object->add("House6_05");
	var_156_object->add("House6_04");
	var_156_object->add("House6_03");
}


void func_10100(void)
{
	float var_3779_float; float var_3781_float;
	@GetGameTime(var_3779_float);
	int var_3780_int = 1;
	
	for(;;) {
		if(var_3780_int < 288) {
			var_3781_float = 1.0 * var_3780_int;
			if(var_3781_float < var_3779_float) {
			} else {
			@SetTimeEvent((40000 + var_3780_int), var_3781_float);
		}
		func_7005();
		func_11395();
		}
		var_3780_int += 1;
	}
	
}


void func_373(int var_142_int)
{
	int var_148_int;
	var_142_int = var_148_int;
	string var_147_string;
	func_223(var_147_string, var_148_int);
	int var_145_int;
	@GetVariable(var_147_string, var_145_int);
	string var_152_string; int var_153_int;
	var_142_int = var_153_int;
	func_223(var_152_string, var_153_int);
	@SetVariable(var_152_string, ((var_145_int & 252) | 1));
}


void func_11636(object var_3907_object, object var_3908_object, cvector var_3909_cvector, cvector var_3910_cvector)
{
	object var_3912_object;
	var_3908_object->AddStationaryActor(var_3912_object, var_3909_cvector, var_3910_cvector, "pers_butcher", "Danko_arena_manager.xml");
	var_3912_object = var_3907_object;
}
EMIT "Stack[-1] = 0";


void func_8057(int var_4336_int)
{
	int var_4338_int;
	@AddMessage(14091, 14090, var_4338_int);
	@SetVariable("player_mail", 1);
	var_4338_int = var_4336_int;
}


// @pe
void func_1411(int var_715_int, int var_716_int, int var_717_int)
{
	bool var_718_bool = false;
	if(var_717_int > 8) {
		if(var_717_int < 21)
			var_718_bool = true;
	}
	if(var_718_bool != 0) {
		int var_723_int;
		var_715_int = var_723_int;
		func_438(var_723_int, "pers_woman", "woman.xml", 3);
		int var_727_int;
		var_715_int = var_727_int;
		func_438(var_727_int, "pers_unosha", "unosha.xml", 1);
		int var_731_int;
		var_715_int = var_731_int;
		func_438(var_731_int, "pers_unosha", "unosha2.xml", 1);
		int var_735_int;
		var_715_int = var_735_int;
		func_438(var_735_int, "pers_worker", "worker.xml", 2);
		int var_739_int;
		var_715_int = var_739_int;
		func_438(var_739_int, "pers_worker", "worker2.xml", 2);
		int var_743_int;
		var_715_int = var_743_int;
		func_438(var_743_int, "pers_alkash", "alkash.xml", 2);
		int var_747_int;
		var_715_int = var_747_int;
		func_438(var_747_int, "pers_girl", "girl.xml", 1);
		int var_751_int;
		var_715_int = var_751_int;
		func_438(var_751_int, "pers_girl", "girl2.xml", 1);
		if((var_716_int + 1) >= 3) {
		}
		if((var_716_int + 1) >= 7) {
			int var_763_int;
			var_715_int = var_763_int;
			func_438(var_763_int, "pers_butcher", "butcher.xml", 2);
		}
		int var_767_int;
		var_715_int = var_767_int;
		func_438(var_767_int, "pers_dog", "dog.xml", 1);
	} else {
		int var_794_int;
		var_715_int = var_794_int;
		func_438(var_794_int, "pers_woman", "woman.xml", 1);
		int var_798_int;
		var_715_int = var_798_int;
		func_438(var_798_int, "pers_unosha", "unosha.xml", 1);
		int var_802_int;
		var_715_int = var_802_int;
		func_438(var_802_int, "pers_unosha", "unosha2.xml", 1);
		int var_806_int;
		var_715_int = var_806_int;
		func_438(var_806_int, "pers_worker", "worker.xml", 1);
		int var_810_int;
		var_715_int = var_810_int;
		func_438(var_810_int, "pers_worker", "worker2.xml", 1);
		int var_814_int;
		var_715_int = var_814_int;
		func_438(var_814_int, "pers_alkash", "alkash.xml", 3);
		if((var_716_int + 1) >= 3) {
		}
		if((var_716_int + 1) >= 7) {
			int var_826_int;
			var_715_int = var_826_int;
			func_438(var_826_int, "pers_butcher", "butcher.xml", 3);
		}
		int var_830_int;
		var_715_int = var_830_int;
		func_438(var_830_int, "pers_dog", "dog.xml", 1);
	}
	bool var_771_bool = false;
	bool var_772_bool = false;
	if(var_716_int == 0) {
		if(var_717_int > 12)
			var_772_bool = true;
	}
	if(var_772_bool != 0) {
		if(var_717_int < 22)
			var_771_bool = true;
	}
	if(var_771_bool != 0) {
		int var_779_int;
		var_715_int = var_779_int;
		func_438(var_779_int, "pers_woman", "woman_killme.xml", 1);
	}
	bool var_783_bool; int var_784_int; int var_785_int;
	var_716_int = var_784_int;
	var_717_int = var_785_int;
	func_1112(var_783_bool, var_784_int, var_785_int);
	if(var_783_bool != 0) {
		int var_790_int;
		var_715_int = var_790_int;
		func_438(var_790_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
}


void func_8068(int var_4165_int)
{
	int var_4167_int;
	@AddMessage(14093, 14092, var_4167_int);
	@SetVariable("player_mail", 1);
	var_4167_int = var_4165_int;
}


// @pe
void func_3974(object var_48_object)
{
	var_48_object->add("dt_house3_05_i2");
	var_48_object->add("dt_house3_05");
	var_48_object->add("dt_house_1_10");
	var_48_object->add("house5_10");
	var_48_object->add("house5_07");
	var_48_object->add("dt_house_1_03");
	var_48_object->add("dt_house1_union2_04l");
	var_48_object->add("dt_house1_union2_04r");
	var_48_object->add("house5_22");
	var_48_object->add("house5_08");
}


// @pe
void func_6022(int var_1210_int, int var_1211_int, object var_1212_object, object var_1213_object, object var_1214_object, object var_1215_object)
{
	if(var_1211_int == 0) {
		func_731(13, false);
		func_748(13, false, 1);
		int var_1223_int; int var_1224_int; object var_1225_object; object var_1226_object; object var_1227_object;
		var_1223_int = 13;
		var_1210_int = var_1224_int;
		var_1212_object = var_1225_object;
		var_1213_object = var_1226_object;
		var_1214_object = var_1227_object;
		func_557(var_1224_int, var_1225_object, var_1226_object, var_1227_object);
		object var_1228_object;
		var_1215_object = var_1228_object;
		func_229(var_1228_object, 0);
	}
	int var_1231_int;
	var_1211_int = var_1231_int;
	func_872(13, var_1231_int);
	int var_1233_int; int var_1234_int;
	var_1210_int = var_1233_int;
	var_1211_int = var_1234_int;
	func_1270(13, var_1233_int, var_1234_int);
}


void func_391(bool var_61_bool, int var_62_int)
{
	int var_66_int;
	var_62_int = var_66_int;
	string var_65_string;
	func_223(var_65_string, var_66_int);
	int var_64_int;
	@GetVariable(var_65_string, var_64_int);
	if((var_64_int & 3) == 2) {
		var_61_bool = true;
		return 2;
	}
	var_61_bool = false;
}


// @pe
void func_4490(object var_104_object)
{
	var_104_object->add("dt_house3_09_i2");
	var_104_object->add("dt_house3_09");
	var_104_object->add("house1_se_03l");
	var_104_object->add("house1_se_03r");
	var_104_object->add("house1_se_01l");
	var_104_object->add("house1_se_01r");
	var_104_object->add("house1_se_04l");
	var_104_object->add("house1_se_04r");
	var_104_object->add("house5_11");
	var_104_object->add("house5_09");
	var_104_object->add("dt_house_1_04");
	var_104_object->add("house5_13");
	var_104_object->add("house5_12");
	var_104_object->add("house5_14");
	var_104_object->add("house5_unoin03l");
	var_104_object->add("house5_unoin03r");
	var_104_object->add("house5_unoin02l");
	var_104_object->add("house5_unoin02r");
	var_104_object->add("house5_unoin01l");
	var_104_object->add("house5_unoin01r");
}


// @pe
void func_909(int var_1257_int, int var_1258_int)
{
	bool var_1259_bool = true;
	var_1261_bool = var_1258_int >= 22;
	if(var_1261_bool != 1) {
		var_1263_bool = var_1258_int < 6;
		if(var_1263_bool != 1)
			var_1259_bool = false;
	}
	if(var_1259_bool != 0) {
		int var_1264_int;
		var_1257_int = var_1264_int;
		func_714(var_1264_int, true);
	} else {
		int var_1266_int;
		var_1257_int = var_1266_int;
		func_714(var_1266_int, false);
	}
	
}


void func_10126(void)
{
	@Trace("Adding diary entry");
	object var_3949_object;
	@CreateDiaryEntry(var_3949_object, 30, 0, 4079);
	bool var_3954_bool; object var_3955_object;
	var_3949_object = var_3955_object;
	func_10002(var_3954_bool, var_3955_object, -1);
}
EMIT "Stack[-1] = 0";


void func_8079(int var_4174_int)
{
	int var_4176_int;
	@AddMessage(14095, 14094, var_4176_int);
	@SetVariable("player_mail", 1);
	var_4176_int = var_4174_int;
}


void func_6545(object var_3795_object, object var_3796_object, string var_3797_string, string var_3798_string, string var_3799_string)
{
	bool var_3808_bool; cvector var_3809_cvector; cvector var_3810_cvector; object var_3811_object;
	var_3796_object->GetLocator(("pt_guard_" + var_3797_string), var_3808_bool, var_3809_cvector, var_3810_cvector);
	if(!var_3808_bool) //@nz
		@Trace("Locator doesn't exist for guard " + var_3797_string);
	else
		var_3796_object->AddStationaryActor(var_3811_object, var_3809_cvector, var_3810_cvector, var_3798_string, var_3799_string);
	var_3811_object = var_3795_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_5521(int var_1129_int, int var_1130_int, object var_1131_object, object var_1132_object, object var_1133_object, object var_1134_object)
{
	if(var_1130_int == 0) {
		func_731(10, false);
		func_748(10, false, 1);
		int var_1142_int; int var_1143_int; object var_1144_object; object var_1145_object; object var_1146_object;
		var_1142_int = 10;
		var_1129_int = var_1143_int;
		var_1131_object = var_1144_object;
		var_1132_object = var_1145_object;
		var_1133_object = var_1146_object;
		func_557(var_1143_int, var_1144_object, var_1145_object, var_1146_object);
		object var_1147_object;
		var_1134_object = var_1147_object;
		func_229(var_1147_object, 0);
	}
	int var_1150_int;
	var_1130_int = var_1150_int;
	func_805(10, var_1150_int);
	int var_1152_int; int var_1153_int;
	var_1129_int = var_1152_int;
	var_1130_int = var_1153_int;
	func_1270(10, var_1152_int, var_1153_int);
}


void func_9108(void)
{
	object var_4227_object;
	func_10048(var_4227_object);
	object var_4225_object;
	var_4227_object = var_4225_object;
	object var_4226_object;
	var_4225_object->FindMark(var_4226_object, "d4q01BigVladGotoLara");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01BigVladGotoLaraSelf");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01BigVladGotoSklad");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01BigVladGotoSobor");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01BigVladGotoSoborAndTheaterSelf");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01BigVladGotoTheater");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01LaraGotoMladVlad");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01LaraGotoMladVladSelf");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01LaraGotoOspina");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01LaraGotoOspinaSelf");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01MladVladGotoBigVlad");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01MladVladGotoBigVladSelf");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01MladVladGotoOspina");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01OspinaGotoLara");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01WastedMale");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q01Whitemask");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q02BirdmaskNearHome");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q02MladVladGotoAJLSelf");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q02MladVladGotoAnna");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q02MladVladGotoJulia");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q02MladVladGotoLara");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q03AlexandrAboutVolnica");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q03AlexandrGotoGrif");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q03AlexandrGotoGrifSelf");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q03GrifGotoAlexandr");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	var_4225_object->FindMark(var_4226_object, "d4q03GrifGotoAlexandrSelf");
	if(var_4226_object != 0)
		var_4226_object->Remove();
	bool var_4280_bool;
	func_10031(var_4280_bool, 20);
	bool var_4282_bool;
	func_10031(var_4282_bool, 21);
	bool var_4284_bool;
	func_10031(var_4284_bool, 22);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_9623(void)
{
	object var_4127_object;
	func_10048(var_4127_object);
	object var_4125_object;
	var_4127_object = var_4125_object;
	object var_4126_object;
	var_4125_object->FindMark(var_4126_object, "d7q01AglajaFindLierSelf");
	if(var_4126_object != 0)
		var_4126_object->Remove();
	var_4125_object->FindMark(var_4126_object, "d7q01AglajaGotoBirdmaskSelf");
	if(var_4126_object != 0)
		var_4126_object->Remove();
	var_4125_object->FindMark(var_4126_object, "d7q01BirdmaskD");
	if(var_4126_object != 0)
		var_4126_object->Remove();
	var_4125_object->FindMark(var_4126_object, "d7q01BirdmaskM");
	if(var_4126_object != 0)
		var_4126_object->Remove();
	var_4125_object->FindMark(var_4126_object, "d7q01BirdmaskU");
	if(var_4126_object != 0)
		var_4126_object->Remove();
	var_4125_object->FindMark(var_4126_object, "d7q02AlexandrGotoPetr");
	if(var_4126_object != 0)
		var_4126_object->Remove();
	var_4125_object->FindMark(var_4126_object, "d7q02MarkGotoAlexandr");
	if(var_4126_object != 0)
		var_4126_object->Remove();
	var_4125_object->FindMark(var_4126_object, "d7q02MarkGotoCemetery");
	if(var_4126_object != 0)
		var_4126_object->Remove();
	bool var_4144_bool;
	func_10031(var_4144_bool, 165);
	bool var_4146_bool;
	func_10031(var_4146_bool, 170);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_407(int var_48_int)
{
	int var_54_int;
	var_48_int = var_54_int;
	string var_53_string;
	func_223(var_53_string, var_54_int);
	int var_51_int;
	@GetVariable(var_53_string, var_51_int);
	string var_58_string; int var_59_int;
	var_48_int = var_59_int;
	func_223(var_58_string, var_59_int);
	@SetVariable(var_58_string, ((var_51_int & 252) | 2));
}


void func_8090(int var_4309_int)
{
	int var_4311_int;
	@AddMessage(14097, 14096, var_4311_int);
	@SetVariable("player_mail", 1);
	var_4311_int = var_4309_int;
}


// @pe
void func_5020(int var_968_int, int var_969_int, object var_970_object, object var_971_object, object var_972_object, object var_973_object)
{
	if(var_969_int == 0) {
		func_731(7, false);
		func_748(7, false, 1);
		int var_981_int; int var_982_int; object var_983_object; object var_984_object; object var_985_object;
		var_981_int = 7;
		var_968_int = var_982_int;
		var_970_object = var_983_object;
		var_971_object = var_984_object;
		var_972_object = var_985_object;
		func_557(var_982_int, var_983_object, var_984_object, var_985_object);
		object var_986_object;
		var_973_object = var_986_object;
		func_229(var_986_object, 0);
	}
	int var_989_int;
	var_969_int = var_989_int;
	func_842(7, var_989_int);
	int var_991_int; int var_992_int;
	var_968_int = var_991_int;
	var_969_int = var_992_int;
	func_1270(7, var_991_int, var_992_int);
}


void func_10142(int var_3783_int)
{
	int var_3795_int; int var_3796_int; int var_3797_int; int var_3798_int; int var_3799_int; int var_3800_int; int var_3801_int; int var_3802_int; int var_3803_int; int var_3804_int;
	if(var_3783_int == 45003) {
		object var_3807_object; object var_3808_object;
		var_3809_object = GlobalVars[18];
		var_3809_object = var_3807_object;
		var_3810_object = GlobalVars[18];
		var_3810_object = var_3808_object;
		func_8523();
		int var_3889_int;
		func_8222(var_3889_int);
		object var_3896_object;
		func_97(var_3896_object, "quest_d2_01");
		bool var_3904_bool;
		func_165(var_3904_bool, "volonteers_danko", "update", "");
	}
	if(var_3783_int == 45015) {
		bool var_3913_bool; object var_3914_object;
		var_3915_object = GlobalVars[18];
		var_3915_object = var_3914_object;
		func_9816(var_3914_object);
		if(var_3913_bool != 0) {
			int var_3922_int;
			func_8398(var_3922_int);
		}
	}
	if(var_3783_int == 45013) {
		object var_3931_object; object var_3932_object;
		var_3933_object = GlobalVars[18];
		var_3933_object = var_3931_object;
		var_3934_object = GlobalVars[18];
		var_3934_object = var_3932_object;
		func_9477();
		bool var_3982_bool;
		func_177(var_3982_bool, "quest_d6_01");
		object var_3987_object;
		func_97(var_3987_object, "quest_d7_01");
		@GetVariable("d6q01", var_3795_int);
		if(var_3795_int == 1000) {
			bool var_3992_bool;
			func_165(var_3992_bool, "volonteers_danko", "rescue_locked", "");
		}
		bool var_3996_bool;
		func_165(var_3996_bool, "volonteers_danko", "update", "");
	}
	if(var_3783_int == 45028) {
		int var_4002_int;
		func_8134(var_4002_int);
	}
	if(var_3783_int == 45029) {
		int var_4011_int;
		func_8145(var_4011_int);
	}
	if(var_3783_int == 45026) {
		int var_4020_int;
		func_8112(var_4020_int);
	}
	if(var_3783_int == 45027) {
		int var_4029_int;
		func_8123(var_4029_int);
	}
	if(var_3783_int == 45012) {
		object var_4038_object; object var_4039_object;
		var_4040_object = GlobalVars[18];
		var_4040_object = var_4038_object;
		var_4041_object = GlobalVars[18];
		var_4041_object = var_4039_object;
		func_9310();
		int var_4095_int;
		func_8354(var_4095_int);
		bool var_4102_bool;
		func_177(var_4102_bool, "quest_d5_01");
		object var_4104_object;
		func_97(var_4104_object, "quest_d6_01");
		@GetVariable("d5q01", var_3796_int);
		if(var_3796_int == 1000) {
			bool var_4109_bool;
			func_165(var_4109_bool, "volonteers_danko", "rescue_locked", "");
		}
		bool var_4113_bool;
		func_165(var_4113_bool, "volonteers_danko", "update", "");
	}
	if(var_3783_int == 45016) {
		object var_4119_object; object var_4120_object;
		var_4121_object = GlobalVars[18];
		var_4121_object = var_4119_object;
		var_4122_object = GlobalVars[18];
		var_4122_object = var_4120_object;
		func_9623();
		bool var_4148_bool;
		func_177(var_4148_bool, "quest_d7_01");
		object var_4150_object;
		func_97(var_4150_object, "quest_d8_01");
		@GetVariable("d7q01", var_3797_int);
		if(var_3797_int == 1000) {
			bool var_4155_bool;
			func_165(var_4155_bool, "volonteers_danko", "rescue_locked", "");
		}
		bool var_4159_bool;
		func_165(var_4159_bool, "volonteers_danko", "update", "");
	}
	if(var_3783_int == 45022) {
		int var_4165_int;
		func_8068(var_4165_int);
	}
	if(var_3783_int == 45023) {
		int var_4174_int;
		func_8079(var_4174_int);
	}
	if(var_3783_int == 45031) {
		object var_4183_object; object var_4184_object;
		var_4185_object = GlobalVars[18];
		var_4185_object = var_4183_object;
		var_4186_object = GlobalVars[18];
		var_4186_object = var_4184_object;
		func_9728();
		bool var_4198_bool;
		func_177(var_4198_bool, "quest_d10_01");
		object var_4200_object;
		func_97(var_4200_object, "quest_d11_01");
		@GetVariable("d10q01", var_3798_int);
		if(var_3798_int == 1000) {
			bool var_4205_bool;
			func_165(var_4205_bool, "volonteers_danko", "rescue_locked", "");
		}
		bool var_4209_bool;
		func_165(var_4209_bool, "volonteers_danko", "update", "");
	}
	if(var_3783_int == 45032) {
		object var_4215_object;
		func_97(var_4215_object, "quest_d11_02");
	}
	if(var_3783_int == 45011) {
		object var_4219_object; object var_4220_object;
		var_4221_object = GlobalVars[18];
		var_4221_object = var_4219_object;
		var_4222_object = GlobalVars[18];
		var_4222_object = var_4220_object;
		func_9108();
		bool var_4286_bool;
		func_177(var_4286_bool, "quest_d4_01");
		object var_4288_object;
		func_108(var_4288_object, "quest_d5_01");
		@GetVariable("d4q01", var_3799_int);
		if(var_3799_int == 1000) {
			bool var_4299_bool;
			func_165(var_4299_bool, "volonteers_danko", "rescue_locked", "");
		}
		bool var_4303_bool;
		func_165(var_4303_bool, "volonteers_danko", "update", "");
	}
	if(var_3783_int == 45024) {
		int var_4309_int;
		func_8090(var_4309_int);
	}
	if(var_3783_int == 45025) {
		int var_4318_int;
		func_8101(var_4318_int);
	}
	if(var_3783_int == 45020) {
		int var_4327_int;
		func_8046(var_4327_int);
	}
	if(var_3783_int == 45021) {
		int var_4336_int;
		func_8057(var_4336_int);
	}
	if(var_3783_int == 45008) {
		bool var_4345_bool; object var_4346_object;
		var_4347_object = GlobalVars[18];
		var_4347_object = var_4346_object;
		func_9792(var_4346_object);
		if(var_4345_bool != 0) {
			int var_4352_int;
			func_8244(var_4352_int);
		}
	}
	if(var_3783_int == 45054) {
		int var_4361_int;
		func_8189(var_4361_int);
	}
	if(var_3783_int == 45056) {
		object var_4370_object; object var_4371_object;
		var_4372_object = GlobalVars[18];
		var_4372_object = var_4370_object;
		var_4373_object = GlobalVars[18];
		var_4373_object = var_4371_object;
		func_9778();
		object var_4376_object; object var_4377_object;
		var_4378_object = GlobalVars[18];
		var_4378_object = var_4376_object;
		var_4379_object = GlobalVars[18];
		var_4379_object = var_4377_object;
		func_9785();
	}
	if(var_3783_int == 45017) {
		bool var_4388_bool;
		func_177(var_4388_bool, "quest_d8_01");
		object var_4390_object;
		func_97(var_4390_object, "quest_d9_01");
		@GetVariable("d8q01", var_3800_int);
		if(var_3800_int == 1000) {
			bool var_4395_bool;
			func_165(var_4395_bool, "volonteers_danko", "rescue_locked", "");
		}
		bool var_4399_bool;
		func_165(var_4399_bool, "volonteers_danko", "update", "");
	}
	if(var_3783_int == 45019) {
		int var_4405_int;
		func_8035(var_4405_int);
	}
	if(var_3783_int == 45007) {
		object var_4414_object; object var_4415_object;
		var_4416_object = GlobalVars[18];
		var_4416_object = var_4414_object;
		var_4417_object = GlobalVars[18];
		var_4417_object = var_4415_object;
		func_8474();
	}
	if(var_3783_int == 45006) {
		object var_4422_object; object var_4423_object;
		var_4424_object = GlobalVars[18];
		var_4424_object = var_4422_object;
		var_4425_object = GlobalVars[18];
		var_4425_object = var_4423_object;
		func_8920();
		bool var_4485_bool;
		func_177(var_4485_bool, "quest_d3_01");
		object var_4487_object;
		func_97(var_4487_object, "quest_d4_01");
		@GetVariable("d3q01", var_3801_int);
		if(var_3801_int == 1000) {
			bool var_4492_bool;
			func_165(var_4492_bool, "volonteers_danko", "rescue_locked", "");
		}
		bool var_4496_bool;
		func_165(var_4496_bool, "volonteers_danko", "update", "");
	}
	if(var_3783_int == 45049) {
		bool var_4502_bool; object var_4503_object;
		var_4504_object = GlobalVars[18];
		var_4504_object = var_4503_object;
		func_9965(var_4503_object);
		if(!var_4502_bool) { //@nz
			int var_4510_int;
			func_8420(var_4510_int);
		}
	}
	if(var_3783_int == 45050) {
		int var_4519_int;
		func_8431(var_4519_int);
	}
	if(var_3783_int == 45051) {
		bool var_4528_bool; object var_4529_object;
		var_4530_object = GlobalVars[18];
		var_4530_object = var_4529_object;
		func_9977(var_4529_object);
		if(!var_4528_bool) { //@nz
			int var_4536_int;
			func_8156(var_4536_int);
		}
	}
	if(var_3783_int == 45052) {
		object var_4545_object; object var_4546_object;
		var_4547_object = GlobalVars[18];
		var_4547_object = var_4545_object;
		var_4548_object = GlobalVars[18];
		var_4548_object = var_4546_object;
		func_9702();
		object var_4551_object; object var_4552_object;
		var_4553_object = GlobalVars[18];
		var_4553_object = var_4551_object;
		var_4554_object = GlobalVars[18];
		var_4554_object = var_4552_object;
		func_9764();
		int var_4558_int;
		func_8200(var_4558_int);
	}
	if(var_3783_int == 45053) {
		object var_4567_object; object var_4568_object;
		var_4569_object = GlobalVars[18];
		var_4569_object = var_4567_object;
		var_4570_object = GlobalVars[18];
		var_4570_object = var_4568_object;
		func_8474();
		object var_4571_object; object var_4572_object;
		var_4573_object = GlobalVars[18];
		var_4573_object = var_4571_object;
		var_4574_object = GlobalVars[18];
		var_4574_object = var_4572_object;
		func_9771();
		int var_4578_int;
		func_8211(var_4578_int);
	}
	if(var_3783_int == 45038) {
		bool var_4587_bool; object var_4588_object;
		var_4589_object = GlobalVars[18];
		var_4589_object = var_4588_object;
		func_9864(var_4588_object);
		if(!var_4587_bool) { //@nz
			int var_4591_int;
			func_8277(var_4591_int);
		}
	}
	if(var_3783_int == 45039) {
		bool var_4600_bool; object var_4601_object;
		var_4602_object = GlobalVars[18];
		var_4602_object = var_4601_object;
		func_9869(var_4601_object);
		if(!var_4600_bool) { //@nz
			object var_4608_object; object var_4609_object;
			var_4610_object = GlobalVars[18];
			var_4610_object = var_4608_object;
			var_4611_object = GlobalVars[18];
			var_4611_object = var_4609_object;
			func_8453();
			int var_4614_int;
			func_8321(var_4614_int);
		}
	}
	if(var_3783_int == 45040) {
		bool var_4623_bool; object var_4624_object;
		var_4625_object = GlobalVars[18];
		var_4625_object = var_4624_object;
		func_9881(var_4624_object);
		if(!var_4623_bool) { //@nz
			int var_4631_int;
			func_8310(var_4631_int);
		}
	}
	if(var_3783_int == 45041) {
		bool var_4640_bool; object var_4641_object;
		var_4642_object = GlobalVars[18];
		var_4642_object = var_4641_object;
		func_9893(var_4641_object);
		if(!var_4640_bool) { //@nz
			int var_4648_int;
			func_8332(var_4648_int);
		}
	}
	if(var_3783_int == 45010) {
		bool var_4657_bool; object var_4658_object;
		var_4659_object = GlobalVars[18];
		var_4659_object = var_4658_object;
		func_9804(var_4658_object);
		if(!var_4657_bool) { //@nz
			int var_4665_int;
			func_8266(var_4665_int);
		}
	}
	if(var_3783_int == 45033) {
		bool var_4674_bool; object var_4675_object;
		var_4676_object = GlobalVars[18];
		var_4676_object = var_4675_object;
		func_9828(var_4675_object);
		if(!var_4674_bool) { //@nz
			int var_4682_int;
			func_8288(var_4682_int);
		}
	}
	if(var_3783_int == 45034) {
		bool var_4691_bool; object var_4692_object;
		var_4693_object = GlobalVars[18];
		var_4693_object = var_4692_object;
		func_9828(var_4692_object);
		if(!var_4691_bool) { //@nz
			object var_4695_object; object var_4696_object;
			var_4697_object = GlobalVars[18];
			var_4697_object = var_4695_object;
			var_4698_object = GlobalVars[18];
			var_4698_object = var_4696_object;
			func_8500();
			int var_4756_int;
			func_8299(var_4756_int);
		}
	}
	if(var_3783_int == 45035) {
		bool var_4765_bool; object var_4766_object;
		var_4767_object = GlobalVars[18];
		var_4767_object = var_4766_object;
		func_9852(var_4766_object);
		if(!var_4765_bool) { //@nz
			object var_4773_object; object var_4774_object;
			var_4775_object = GlobalVars[18];
			var_4775_object = var_4773_object;
			var_4776_object = GlobalVars[18];
			var_4776_object = var_4774_object;
			func_8493();
			int var_4779_int;
			func_8178(var_4779_int);
		}
	}
	if(var_3783_int == 45036) {
		bool var_4788_bool; object var_4789_object;
		var_4790_object = GlobalVars[18];
		var_4790_object = var_4789_object;
		func_9840(var_4789_object);
		if(!var_4788_bool) { //@nz
			object var_4796_object; object var_4797_object;
			var_4798_object = GlobalVars[18];
			var_4798_object = var_4796_object;
			var_4799_object = GlobalVars[18];
			var_4799_object = var_4797_object;
			func_8509();
			int var_4802_int;
			func_8167(var_4802_int);
		}
	}
	if(var_3783_int == 45042) {
		object var_4811_object; object var_4812_object;
		var_4813_object = GlobalVars[18];
		var_4813_object = var_4811_object;
		var_4814_object = GlobalVars[18];
		var_4814_object = var_4812_object;
		func_9754();
		bool var_4819_bool;
		func_177(var_4819_bool, "quest_d11_01");
		object var_4821_object;
		func_97(var_4821_object, "quest_d12_01");
		@GetVariable("d11q01", var_3802_int);
		if(var_3802_int == 1000) {
			bool var_4826_bool;
			func_165(var_4826_bool, "volonteers_danko", "rescue_locked", "");
		}
		bool var_4830_bool;
		func_165(var_4830_bool, "volonteers_danko", "update", "");
	}
	if(var_3783_int == 45009) {
		int var_4836_int;
		func_8233(var_4836_int);
	}
	if(var_3783_int == 45043) {
		bool var_4845_bool; object var_4846_object;
		var_4847_object = GlobalVars[18];
		var_4847_object = var_4846_object;
		func_9905(var_4846_object);
		if(!var_4845_bool) { //@nz
			int var_4853_int;
			func_8343(var_4853_int);
		}
	}
	if(var_3783_int == 45044) {
		bool var_4862_bool; object var_4863_object;
		var_4864_object = GlobalVars[18];
		var_4864_object = var_4863_object;
		func_9929(var_4863_object);
		if(!var_4862_bool) { //@nz
			int var_4870_int;
			func_8387(var_4870_int);
		}
	}
	if(var_3783_int == 45045) {
		bool var_4879_bool; object var_4880_object;
		var_4881_object = GlobalVars[18];
		var_4881_object = var_4880_object;
		func_9917(var_4880_object);
		if(!var_4879_bool) { //@nz
			int var_4887_int;
			func_8376(var_4887_int);
		}
	}
	if(var_3783_int == 45046) {
		bool var_4896_bool; object var_4897_object;
		var_4898_object = GlobalVars[18];
		var_4898_object = var_4897_object;
		func_9941(var_4897_object);
		if(!var_4896_bool) { //@nz
			int var_4904_int;
			func_8365(var_4904_int);
		}
	}
	if(var_3783_int == 45047) {
		bool var_4913_bool; object var_4914_object;
		var_4915_object = GlobalVars[18];
		var_4915_object = var_4914_object;
		func_9953(var_4914_object);
		if(!var_4913_bool) { //@nz
			int var_4921_int;
			func_8409(var_4921_int);
		}
	}
	if(var_3783_int == 45048) {
		int var_4930_int;
		func_8442(var_4930_int);
	}
	if(var_3783_int == 45018) {
		object var_4939_object; object var_4940_object;
		var_4941_object = GlobalVars[18];
		var_4941_object = var_4939_object;
		var_4942_object = GlobalVars[18];
		var_4942_object = var_4940_object;
		func_9709();
		bool var_4952_bool;
		func_177(var_4952_bool, "quest_d9_01");
		object var_4954_object;
		func_97(var_4954_object, "quest_d10_01");
		@GetVariable("d9q01", var_3803_int);
		if(var_3803_int == 1000) {
			bool var_4959_bool;
			func_165(var_4959_bool, "volonteers_danko", "rescue_locked", "");
		}
		bool var_4963_bool;
		func_165(var_4963_bool, "volonteers_danko", "update", "");
	}
	if(var_3783_int == 45005) {
		object var_4969_object; object var_4970_object;
		var_4971_object = GlobalVars[18];
		var_4971_object = var_4969_object;
		var_4972_object = GlobalVars[18];
		var_4972_object = var_4970_object;
		func_8718();
		bool var_5036_bool;
		func_177(var_5036_bool, "quest_d2_01");
		object var_5038_object;
		func_97(var_5038_object, "quest_d3_01");
		@GetVariable("d2q01", var_3804_int);
		if(var_3804_int == 1000) {
			bool var_5043_bool;
			func_165(var_5043_bool, "volonteers_danko", "rescue_locked", "");
		}
		bool var_5047_bool;
		func_165(var_5047_bool, "volonteers_danko", "update", "");
	}
}


void func_7585(int var_1389_int, int var_1390_int, int var_1391_int)
{
	var_1400_object = GlobalVars[12];
	object var_1396_object;
	var_1400_object->get(var_1396_object, var_1389_int);
	var_1401_object = GlobalVars[13];
	object var_1397_object;
	var_1401_object->get(var_1397_object, var_1389_int);
	var_1402_object = GlobalVars[14];
	object var_1398_object;
	var_1402_object->get(var_1398_object, var_1389_int);
	var_1403_object = GlobalVars[17];
	object var_1399_object;
	var_1403_object->get(var_1399_object, var_1389_int);
	if(var_1389_int == 0) {
		int var_1406_int; int var_1407_int; object var_1408_object; object var_1409_object; object var_1410_object; object var_1411_object;
		var_1390_int = var_1406_int;
		var_1391_int = var_1407_int;
		var_1396_object = var_1408_object;
		var_1397_object = var_1409_object;
		var_1398_object = var_1410_object;
		var_1399_object = var_1411_object;
		func_3894(var_1406_int, var_1407_int, var_1408_object, var_1409_object, var_1410_object, var_1411_object);
	} else if(var_1389_int == 1) {
			int var_1681_int; int var_1682_int; object var_1683_object; object var_1684_object; object var_1685_object; object var_1686_object;
			var_1390_int = var_1681_int;
			var_1391_int = var_1682_int;
			var_1396_object = var_1683_object;
			var_1397_object = var_1684_object;
			var_1398_object = var_1685_object;
			var_1399_object = var_1686_object;
			func_4046(var_1681_int, var_1682_int, var_1683_object, var_1684_object, var_1685_object, var_1686_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_1389_int == 2) {
		int var_1827_int; int var_1828_int; object var_1829_object; object var_1830_object; object var_1831_object; object var_1832_object;
		var_1390_int = var_1827_int;
		var_1391_int = var_1828_int;
		var_1396_object = var_1829_object;
		var_1397_object = var_1830_object;
		var_1398_object = var_1831_object;
		var_1399_object = var_1832_object;
		func_4237(var_1827_int, var_1828_int, var_1829_object, var_1830_object, var_1831_object, var_1832_object);
	} else if(var_1389_int == 3) {
		int var_2024_int; int var_2025_int; object var_2026_object; object var_2027_object; object var_2028_object; object var_2029_object;
		var_1390_int = var_2024_int;
		var_1391_int = var_2025_int;
		var_1396_object = var_2026_object;
		var_1397_object = var_2027_object;
		var_1398_object = var_2028_object;
		var_1399_object = var_2029_object;
		func_4410(var_2024_int, var_2025_int, var_2026_object, var_2027_object, var_2028_object, var_2029_object);
	} else if(var_1389_int == 4) {
		int var_2051_int; int var_2052_int; object var_2053_object; object var_2054_object; object var_2055_object; object var_2056_object;
		var_1390_int = var_2051_int;
		var_1391_int = var_2052_int;
		var_1396_object = var_2053_object;
		var_1397_object = var_2054_object;
		var_1398_object = var_2055_object;
		var_1399_object = var_2056_object;
		func_4592(var_2051_int, var_2052_int, var_2053_object, var_2054_object, var_2055_object, var_2056_object);
	} else if(var_1389_int == 5) {
		int var_2078_int; int var_2079_int; object var_2080_object; object var_2081_object; object var_2082_object; object var_2083_object;
		var_1390_int = var_2078_int;
		var_1391_int = var_2079_int;
		var_1396_object = var_2080_object;
		var_1397_object = var_2081_object;
		var_1398_object = var_2082_object;
		var_1399_object = var_2083_object;
		func_4792(var_2078_int, var_2079_int, var_2080_object, var_2081_object, var_2082_object, var_2083_object);
	} else if(var_1389_int == 6) {
		int var_2105_int; int var_2106_int; object var_2107_object; object var_2108_object; object var_2109_object; object var_2110_object;
		var_1390_int = var_2105_int;
		var_1391_int = var_2106_int;
		var_1396_object = var_2107_object;
		var_1397_object = var_2108_object;
		var_1398_object = var_2109_object;
		var_1399_object = var_2110_object;
		func_4908(var_2105_int, var_2106_int, var_2107_object, var_2108_object, var_2109_object, var_2110_object);
	} else if(var_1389_int == 7) {
		int var_2129_int; int var_2130_int; object var_2131_object; object var_2132_object; object var_2133_object; object var_2134_object;
		var_1390_int = var_2129_int;
		var_1391_int = var_2130_int;
		var_1396_object = var_2131_object;
		var_1397_object = var_2132_object;
		var_1398_object = var_2133_object;
		var_1399_object = var_2134_object;
		func_5060(var_2129_int, var_2130_int, var_2131_object, var_2132_object, var_2133_object, var_2134_object);
	} else if(var_1389_int == 8) {
		int var_2310_int; int var_2311_int; object var_2312_object; object var_2313_object; object var_2314_object; object var_2315_object;
		var_1390_int = var_2310_int;
		var_1391_int = var_2311_int;
		var_1396_object = var_2312_object;
		var_1397_object = var_2313_object;
		var_1398_object = var_2314_object;
		var_1399_object = var_2315_object;
		func_5215(var_2310_int, var_2311_int, var_2312_object, var_2313_object, var_2314_object, var_2315_object);
	} else if(var_1389_int == 9) {
		int var_2337_int; int var_2338_int; object var_2339_object; object var_2340_object; object var_2341_object; object var_2342_object;
		var_1390_int = var_2337_int;
		var_1391_int = var_2338_int;
		var_1396_object = var_2339_object;
		var_1397_object = var_2340_object;
		var_1398_object = var_2341_object;
		var_1399_object = var_2342_object;
		func_5388(var_2337_int, var_2338_int, var_2339_object, var_2340_object, var_2341_object, var_2342_object);
	} else if(var_1389_int == 10) {
		int var_2364_int; int var_2365_int; object var_2366_object; object var_2367_object; object var_2368_object; object var_2369_object;
		var_1390_int = var_2364_int;
		var_1391_int = var_2365_int;
		var_1396_object = var_2366_object;
		var_1397_object = var_2367_object;
		var_1398_object = var_2368_object;
		var_1399_object = var_2369_object;
		func_5561(var_2364_int, var_2365_int, var_2366_object, var_2367_object, var_2368_object, var_2369_object);
	} else if(var_1389_int == 11) {
		int var_2391_int; int var_2392_int; object var_2393_object; object var_2394_object; object var_2395_object; object var_2396_object;
		var_1390_int = var_2391_int;
		var_1391_int = var_2392_int;
		var_1396_object = var_2393_object;
		var_1397_object = var_2394_object;
		var_1398_object = var_2395_object;
		var_1399_object = var_2396_object;
		func_5737(var_2391_int, var_2392_int, var_2393_object, var_2394_object, var_2395_object, var_2396_object);
	} else if(var_1389_int == 12) {
		int var_2418_int; int var_2419_int; object var_2420_object; object var_2421_object; object var_2422_object; object var_2423_object;
		var_1390_int = var_2418_int;
		var_1391_int = var_2419_int;
		var_1396_object = var_2420_object;
		var_1397_object = var_2421_object;
		var_1398_object = var_2422_object;
		var_1399_object = var_2423_object;
		func_5895(var_2418_int, var_2419_int, var_2420_object, var_2421_object, var_2422_object, var_2423_object);
	} else if(var_1389_int == 13) {
		int var_2445_int; int var_2446_int; object var_2447_object; object var_2448_object; object var_2449_object; object var_2450_object;
		var_1390_int = var_2445_int;
		var_1391_int = var_2446_int;
		var_1396_object = var_2447_object;
		var_1397_object = var_2448_object;
		var_1398_object = var_2449_object;
		var_1399_object = var_2450_object;
		func_6062(var_2445_int, var_2446_int, var_2447_object, var_2448_object, var_2449_object, var_2450_object);
	} else if(var_1389_int == 14) {
		int var_2472_int; int var_2473_int; object var_2474_object; object var_2475_object; object var_2476_object; object var_2477_object;
		var_1390_int = var_2472_int;
		var_1391_int = var_2473_int;
		var_1396_object = var_2474_object;
		var_1397_object = var_2475_object;
		var_1398_object = var_2476_object;
		var_1399_object = var_2477_object;
		func_6226(var_2472_int, var_2473_int, var_2474_object, var_2475_object, var_2476_object, var_2477_object);
	} else if(var_1389_int == 15) {
		int var_2649_int; int var_2650_int; object var_2651_object; object var_2652_object; object var_2653_object; object var_2654_object;
		var_1390_int = var_2649_int;
		var_1391_int = var_2650_int;
		var_1396_object = var_2651_object;
		var_1397_object = var_2652_object;
		var_1398_object = var_2653_object;
		var_1399_object = var_2654_object;
		func_6369(var_2649_int, var_2650_int, var_2651_object, var_2652_object, var_2653_object, var_2654_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_2978(int var_3584_int, int var_3585_int, int var_3586_int)
{
	int var_3591_int; int var_3592_int; int var_3593_int; int var_3594_int;
	bool var_3595_bool = false;
	if(var_3586_int > 8) {
		if(var_3586_int < 21)
			var_3595_bool = true;
	}
	if(var_3595_bool != 0) {
		int var_3600_int;
		var_3584_int = var_3600_int;
		func_438(var_3600_int, "pers_woman", "woman.xml", 2);
		int var_3604_int;
		var_3584_int = var_3604_int;
		func_438(var_3604_int, "pers_unosha", "unosha.xml", 1);
		int var_3608_int;
		var_3584_int = var_3608_int;
		func_438(var_3608_int, "pers_unosha", "unosha2.xml", 1);
		int var_3612_int;
		var_3584_int = var_3612_int;
		func_438(var_3612_int, "pers_boy", "boy.xml", 2);
		if((var_3585_int + 1) >= 2) {
			int var_3620_int;
			var_3584_int = var_3620_int;
			func_438(var_3620_int, "pers_patrool", "patrol.xml", 3);
		}
		int var_3624_int;
		var_3584_int = var_3624_int;
		func_438(var_3624_int, "pers_rat", "rat.xml", 2);
		float var_3629_float; int var_3630_int;
		var_3585_int = var_3630_int;
		func_932(var_3629_float, var_3630_int);
		if((1 * var_3629_float) != 0) {
			int var_3632_int; int var_3635_int;
			var_3584_int = var_3632_int;
			var_3591_int = var_3635_int;
			func_438(var_3632_int, "pers_grabitel", "grabitel.xml", var_3635_int);
		}
		float var_3637_float; int var_3638_int;
		func_1022(var_3637_float, var_3638_int);
		if((1 * var_3637_float) != 0) {
			int var_3640_int; int var_3643_int;
			var_3584_int = var_3640_int;
			var_3592_int = var_3643_int;
			func_438(var_3640_int, "pers_bomber", "bomber.xml", var_3643_int);
		}
	} else {
		int var_3651_int;
		var_3584_int = var_3651_int;
		func_438(var_3651_int, "pers_woman", "woman.xml", 1);
		int var_3655_int;
		var_3584_int = var_3655_int;
		func_438(var_3655_int, "pers_unosha", "unosha.xml", 1);
		int var_3659_int;
		var_3584_int = var_3659_int;
		func_438(var_3659_int, "pers_unosha", "unosha2.xml", 1);
		int var_3663_int;
		var_3584_int = var_3663_int;
		func_438(var_3663_int, "pers_boy", "boy.xml", 1);
		if((var_3638_int + 1) >= 2) {
			int var_3671_int;
			var_3584_int = var_3671_int;
			func_438(var_3671_int, "pers_patrool", "patrol.xml", 3);
		}
		int var_3675_int;
		var_3584_int = var_3675_int;
		func_438(var_3675_int, "pers_rat", "rat.xml", 2);
		float var_3680_float; int var_3681_int;
		var_3585_int = var_3681_int;
		func_932(var_3680_float, var_3681_int);
		if((2 * var_3680_float) != 0) {
			int var_3683_int; int var_3686_int;
			var_3584_int = var_3683_int;
			var_3593_int = var_3686_int;
			func_438(var_3683_int, "pers_grabitel", "grabitel.xml", var_3686_int);
		}
		float var_3688_float; int var_3689_int;
		var_3585_int = var_3689_int;
		func_1022(var_3688_float, var_3689_int);
		if((1 * var_3688_float) == 0) goto Label_3144;
		int var_3691_int; int var_3694_int;
		var_3584_int = var_3691_int;
		var_3594_int = var_3694_int;
		func_438(var_3691_int, "pers_bomber", "bomber.xml", var_3694_int);
	}
Label_3144:
	bool var_3644_bool; int var_3645_int; int var_3646_int;
	var_3585_int = var_3645_int;
	var_3586_int = var_3646_int;
	func_1112(var_3644_bool, var_3645_int, var_3646_int);
	if(var_3644_bool != 0) {
		int var_3647_int;
		var_3584_int = var_3647_int;
		func_438(var_3647_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
}


// @pe
void func_6562(object var_3792_object, object var_3793_object, int var_3794_int)
{
	object var_3796_object;
	var_3793_object = var_3796_object;
	object var_3795_object;
	func_6545(var_3795_object, var_3796_object, ("sklad" + var_3794_int), "pers_patrool", (("key_guard_sklad" + var_3794_int) + ".xml"));
	var_3795_object = var_3792_object;
}


// @pe
void func_932(float var_2792_float, int var_2793_int)
{
	if((var_2793_int + 1) == 1) {
		var_2792_float = 0;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	if((var_2793_int + 1) == 2) {
		var_2792_float = 0;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	if((var_2793_int + 1) == 3) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	if((var_2793_int + 1) == 4) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	if((var_2793_int + 1) == 5) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	if((var_2793_int + 1) == 6) {
		var_2792_float = 2;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	if((var_2793_int + 1) == 7) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	if((var_2793_int + 1) == 8) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	if((var_2793_int + 1) == 9) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	if((var_2793_int + 1) == 10) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	if((var_2793_int + 1) == 11) {
		var_2792_float = 1;
		return 0;
	}
	var_2792_float = 0;
}


void func_8101(int var_4318_int)
{
	int var_4320_int;
	@AddMessage(14099, 14098, var_4320_int);
	@SetVariable("player_mail", 1);
	var_4320_int = var_4318_int;
}


// @pe
void func_4006(int var_613_int, int var_614_int, object var_615_object, object var_616_object, object var_617_object, object var_618_object)
{
	if(var_614_int == 0) {
		func_731(1, false);
		func_748(1, false, 1);
		int var_626_int; int var_627_int; object var_628_object; object var_629_object; object var_630_object;
		var_626_int = 1;
		var_613_int = var_627_int;
		var_615_object = var_628_object;
		var_616_object = var_629_object;
		var_617_object = var_630_object;
		func_557(var_627_int, var_628_object, var_629_object, var_630_object);
		object var_631_object;
		var_618_object = var_631_object;
		func_229(var_631_object, 0);
	}
	int var_634_int;
	var_614_int = var_634_int;
	func_872(1, var_634_int);
	int var_636_int; int var_637_int;
	var_613_int = var_636_int;
	var_614_int = var_637_int;
	func_1697(1, var_636_int, var_637_int);
}


void func_425(int var_377_int)
{
	object var_379_object;
	@GetMainOutdoorScene(var_379_object);
	if(var_379_object == null)
		@Trace("City manager: main outdoor scene not found");
	var_379_object->RemoveAllRegionActors(var_377_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6062(int var_2445_int, int var_2446_int, object var_2447_object, object var_2448_object, object var_2449_object, object var_2450_object)
{
	if(var_2446_int == 0) {
		func_731(13, true);
		func_748(13, true, 1);
		int var_2459_int; object var_2460_object; object var_2461_object; object var_2462_object;
		var_2445_int = var_2459_int;
		var_2447_object = var_2460_object;
		var_2448_object = var_2461_object;
		var_2449_object = var_2462_object;
		func_576(13, var_2459_int, var_2460_object, var_2461_object, var_2462_object);
		object var_2463_object;
		var_2450_object = var_2463_object;
		func_229(var_2463_object, 1);
	}
	func_714(13, false);
	int var_2468_int; int var_2469_int;
	var_2445_int = var_2468_int;
	var_2446_int = var_2469_int;
	func_2052(13, var_2468_int, var_2469_int);
}


// @pe
void func_6576(object var_3838_object, object var_3839_object, int var_3840_int)
{
	object var_3842_object;
	var_3839_object = var_3842_object;
	object var_3841_object;
	func_6545(var_3841_object, var_3842_object, ("term" + var_3840_int), "pers_butcher", "guard_term.xml");
	var_3841_object = var_3838_object;
}


void func_8112(int var_4020_int)
{
	int var_4022_int;
	@AddMessage(14101, 14100, var_4022_int);
	@SetVariable("player_mail", 1);
	var_4022_int = var_4020_int;
}


void func_438(int var_563_int, string var_564_string, string var_565_string, int var_566_int)
{
	object var_568_object;
	@GetMainOutdoorScene(var_568_object);
	if(var_568_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_568_object->SetRegionActorCount(var_563_int, var_564_string, var_565_string, var_566_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5561(int var_2364_int, int var_2365_int, object var_2366_object, object var_2367_object, object var_2368_object, object var_2369_object)
{
	if(var_2365_int == 0) {
		func_731(10, true);
		func_748(10, true, 1);
		int var_2378_int; object var_2379_object; object var_2380_object; object var_2381_object;
		var_2364_int = var_2378_int;
		var_2366_object = var_2379_object;
		var_2367_object = var_2380_object;
		var_2368_object = var_2381_object;
		func_576(10, var_2378_int, var_2379_object, var_2380_object, var_2381_object);
		object var_2382_object;
		var_2369_object = var_2382_object;
		func_229(var_2382_object, 1);
	}
	func_714(10, false);
	int var_2387_int; int var_2388_int;
	var_2364_int = var_2387_int;
	var_2365_int = var_2388_int;
	func_2052(10, var_2387_int, var_2388_int);
}


void func_6587(void)
{
	object var_3662_object;
	@GetMainOutdoorScene(var_3662_object);
	var_3663_object = GlobalVars[0];
	if(var_3663_object == null) {
		var_3665_object = GlobalVars[0];
		object var_3666_object; object var_3667_object;
		var_3662_object = var_3667_object;
		func_6562(var_3666_object, var_3667_object, 1);
		var_3666_object = var_3665_object;
		GlobalVars[0] = var_3665_object;
		func_137("warehouse4_guard1@door1", true);
	}
	var_3701_object = GlobalVars[1];
	if(var_3701_object == null) {
		var_3703_object = GlobalVars[1];
		object var_3704_object; object var_3705_object;
		var_3662_object = var_3705_object;
		func_6562(var_3704_object, var_3705_object, 2);
		var_3704_object = var_3703_object;
		GlobalVars[1] = var_3703_object;
		func_137("warehouse4_guard2@door1", true);
	}
	var_3709_object = GlobalVars[2];
	if(var_3709_object == null) {
		var_3711_object = GlobalVars[2];
		object var_3712_object; object var_3713_object;
		var_3662_object = var_3713_object;
		func_6562(var_3712_object, var_3713_object, 3);
		var_3712_object = var_3711_object;
		GlobalVars[2] = var_3711_object;
		func_137("warehouse4_guard3@door1", true);
	}
	var_3717_object = GlobalVars[3];
	if(var_3717_object == null) {
		var_3719_object = GlobalVars[3];
		object var_3720_object; object var_3721_object;
		var_3662_object = var_3721_object;
		func_6562(var_3720_object, var_3721_object, 4);
		var_3720_object = var_3719_object;
		GlobalVars[3] = var_3719_object;
		func_137("warehouse4_guard4@door1", true);
	}
	var_3725_object = GlobalVars[4];
	if(var_3725_object == null) {
		var_3727_object = GlobalVars[4];
		object var_3728_object; object var_3729_object;
		var_3662_object = var_3729_object;
		func_6562(var_3728_object, var_3729_object, 5);
		var_3728_object = var_3727_object;
		GlobalVars[4] = var_3727_object;
		func_137("warehouse4_guard5@door1", true);
	}
	var_3733_object = GlobalVars[5];
	if(var_3733_object == null) {
		var_3735_object = GlobalVars[5];
		object var_3736_object; object var_3737_object;
		var_3662_object = var_3737_object;
		func_6562(var_3736_object, var_3737_object, 6);
		var_3736_object = var_3735_object;
		GlobalVars[5] = var_3735_object;
		func_137("warehouse4_guard6@door1", true);
	}
}
EMIT "Stack[-1] = 0";


void func_8123(int var_4029_int)
{
	int var_4031_int;
	@AddMessage(14103, 14102, var_4031_int);
	@SetVariable("player_mail", 1);
	var_4031_int = var_4029_int;
}


void func_3518(int var_2747_int, int var_2748_int, int var_2749_int)
{
	int var_2754_int; int var_2755_int; int var_2756_int; int var_2757_int;
	bool var_2758_bool = false;
	if(var_2749_int > 8) {
		if(var_2749_int < 21)
			var_2758_bool = true;
	}
	if(var_2758_bool != 0) {
		int var_2763_int;
		var_2747_int = var_2763_int;
		func_438(var_2763_int, "pers_woman", "woman.xml", 1);
		int var_2767_int;
		var_2747_int = var_2767_int;
		func_438(var_2767_int, "pers_unosha", "unosha.xml", 1);
		int var_2771_int;
		var_2747_int = var_2771_int;
		func_438(var_2771_int, "pers_unosha", "unosha2.xml", 1);
		int var_2775_int;
		var_2747_int = var_2775_int;
		func_438(var_2775_int, "pers_boy", "boy.xml", 1);
		if((var_2748_int + 1) >= 2) {
			int var_2783_int;
			var_2747_int = var_2783_int;
			func_438(var_2783_int, "pers_patrool", "patrol.xml", 4);
		}
		int var_2787_int;
		var_2747_int = var_2787_int;
		func_438(var_2787_int, "pers_rat", "rat.xml", 5);
		float var_2792_float; int var_2793_int;
		var_2748_int = var_2793_int;
		func_932(var_2792_float, var_2793_int);
		if((3 * var_2792_float) != 0) {
			int var_2839_int; int var_2842_int;
			var_2747_int = var_2839_int;
			var_2754_int = var_2842_int;
			func_438(var_2839_int, "pers_grabitel", "grabitel.xml", var_2842_int);
		}
		float var_2844_float; int var_2845_int;
		func_1022(var_2844_float, var_2845_int);
		if((2 * var_2844_float) != 0) {
			int var_2847_int; int var_2850_int;
			var_2747_int = var_2847_int;
			var_2755_int = var_2850_int;
			func_438(var_2847_int, "pers_bomber", "bomber.xml", var_2850_int);
		}
	} else {
		int var_2851_int;
		var_2747_int = var_2851_int;
		func_438(var_2851_int, "pers_woman", "woman.xml", 1);
		int var_2855_int;
		var_2747_int = var_2855_int;
		func_438(var_2855_int, "pers_unosha", "unosha.xml", 1);
		int var_2859_int;
		var_2747_int = var_2859_int;
		func_438(var_2859_int, "pers_unosha", "unosha2.xml", 1);
		int var_2863_int;
		var_2747_int = var_2863_int;
		func_438(var_2863_int, "pers_boy", "boy.xml", 1);
		if((var_2845_int + 1) >= 2) {
			int var_2871_int;
			var_2747_int = var_2871_int;
			func_438(var_2871_int, "pers_patrool", "patrol.xml", 4);
		}
		int var_2875_int;
		var_2747_int = var_2875_int;
		func_438(var_2875_int, "pers_rat", "rat.xml", 5);
		float var_2880_float; int var_2881_int;
		var_2748_int = var_2881_int;
		func_932(var_2880_float, var_2881_int);
		if((4 * var_2880_float) != 0) {
			int var_2883_int; int var_2886_int;
			var_2747_int = var_2883_int;
			var_2756_int = var_2886_int;
			func_438(var_2883_int, "pers_grabitel", "grabitel.xml", var_2886_int);
		}
		float var_2888_float; int var_2889_int;
		var_2748_int = var_2889_int;
		func_1022(var_2888_float, var_2889_int);
		if((3 * var_2888_float) == 0) goto Label_3684;
		int var_2891_int; int var_2894_int;
		var_2747_int = var_2891_int;
		var_2757_int = var_2894_int;
		func_438(var_2891_int, "pers_bomber", "bomber.xml", var_2894_int);
	}
Label_3684:
	
}


void func_451(int var_1613_int, string var_1614_string, string var_1615_string, int var_1616_int, int var_1617_int, int var_1618_int)
{
	object var_1620_object;
	@GetMainOutdoorScene(var_1620_object);
	if(var_1620_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_1620_object->SetRegionActorCount(var_1613_int, var_1614_string, var_1615_string, var_1616_int, var_1617_int, var_1618_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5060(int var_2129_int, int var_2130_int, object var_2131_object, object var_2132_object, object var_2133_object, object var_2134_object)
{
	if(var_2130_int == 0) {
		func_731(7, true);
		func_748(7, true, 1);
		int var_2143_int; object var_2144_object; object var_2145_object; object var_2146_object;
		var_2129_int = var_2143_int;
		var_2131_object = var_2144_object;
		var_2132_object = var_2145_object;
		var_2133_object = var_2146_object;
		func_576(7, var_2143_int, var_2144_object, var_2145_object, var_2146_object);
		object var_2147_object;
		var_2134_object = var_2147_object;
		func_229(var_2147_object, 1);
	}
	func_714(7, false);
	int var_2152_int; int var_2153_int;
	var_2129_int = var_2152_int;
	var_2130_int = var_2153_int;
	func_2052(7, var_2152_int, var_2153_int);
}


void func_8134(int var_4002_int)
{
	int var_4004_int;
	@AddMessage(14105, 14104, var_4004_int);
	@SetVariable("player_mail", 1);
	var_4004_int = var_4002_int;
}


// @pe
void func_4552(int var_878_int, int var_879_int, object var_880_object, object var_881_object, object var_882_object, object var_883_object)
{
	if(var_879_int == 0) {
		func_731(4, false);
		func_748(4, false, 1);
		int var_891_int; int var_892_int; object var_893_object; object var_894_object; object var_895_object;
		var_891_int = 4;
		var_878_int = var_892_int;
		var_880_object = var_893_object;
		var_881_object = var_894_object;
		var_882_object = var_895_object;
		func_557(var_892_int, var_893_object, var_894_object, var_895_object);
		object var_896_object;
		var_883_object = var_896_object;
		func_229(var_896_object, 0);
	}
	int var_899_int;
	var_879_int = var_899_int;
	func_842(4, var_899_int);
	int var_913_int; int var_914_int;
	var_878_int = var_913_int;
	var_879_int = var_914_int;
	func_1411(4, var_913_int, var_914_int);
}


// @pe
void func_7115(int var_3606_int, int var_3607_int)
{
	if(var_3607_int == 5) {
		func_6688();
	} else if(var_3607_int == 22) {
				func_6754();
	}
	if(var_3607_int == 0) {
		if(var_3606_int == 3) {
			func_6587();
		} else if(var_3606_int == 9) {
			func_7146();

		}
	}
	
}


// @pe
void func_4046(int var_1681_int, int var_1682_int, object var_1683_object, object var_1684_object, object var_1685_object, object var_1686_object)
{
	if(var_1682_int == 0) {
		func_731(1, true);
		func_748(1, true, 1);
		int var_1695_int; object var_1696_object; object var_1697_object; object var_1698_object;
		var_1681_int = var_1695_int;
		var_1683_object = var_1696_object;
		var_1684_object = var_1697_object;
		var_1685_object = var_1698_object;
		func_576(1, var_1695_int, var_1696_object, var_1697_object, var_1698_object);
		object var_1699_object;
		var_1686_object = var_1699_object;
		func_229(var_1699_object, 1);
	}
	func_714(1, false);
	int var_1704_int; int var_1705_int;
	var_1681_int = var_1704_int;
	var_1682_int = var_1705_int;
	func_2778(1, var_1704_int, var_1705_int);
}


void func_464(int var_1553_int, string var_1554_string, string var_1555_string, int var_1556_int)
{
	object var_1558_object;
	@GetMainOutdoorScene(var_1558_object);
	if(var_1558_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_1558_object->SetRegionActorCountByType(var_1553_int, var_1554_string, var_1555_string, var_1556_int);
}
EMIT "Stack[-1] = 0";


void func_8145(int var_4011_int)
{
	int var_4013_int;
	@AddMessage(14107, 14106, var_4013_int);
	@SetVariable("player_mail", 1);
	var_4013_int = var_4011_int;
}


// @pe
void func_6102(int var_3535_int, int var_3536_int, object var_3537_object, object var_3538_object, object var_3539_object, object var_3540_object)
{
	if(var_3536_int == 0) {
		func_731(13, true);
		func_748(13, true, 1);
		int var_3549_int; object var_3550_object; object var_3551_object; object var_3552_object;
		var_3535_int = var_3549_int;
		var_3537_object = var_3550_object;
		var_3538_object = var_3551_object;
		var_3539_object = var_3552_object;
		func_655(13, var_3549_int, var_3550_object, var_3551_object, var_3552_object);
		object var_3553_object;
		var_3540_object = var_3553_object;
		func_229(var_3553_object, 2);
	}
	func_714(13, false);
	int var_3558_int; int var_3559_int;
	var_3535_int = var_3558_int;
	var_3536_int = var_3559_int;
	func_3158(13, var_3558_int, var_3559_int);
}


void func_8156(int var_4536_int)
{
	int var_4538_int;
	@AddMessage(15484, 15483, var_4538_int);
	@SetVariable("player_mail", 1);
	var_4538_int = var_4536_int;
}


void func_477(int var_462_int, bool var_463_bool)
{
	object var_468_object; bool var_470_bool; object var_471_object;
	@GetMainOutdoorScene(var_468_object);
	object var_469_object;
	var_468_object->GetGroupActors(var_469_object, (101 + var_462_int));
	if(var_469_object != 0) {

		for(;;) {
			var_469_object->Next(var_470_bool, var_471_object);
			if(var_470_bool != 0) {
				bool var_476_bool; object var_477_object;
				var_471_object = var_477_object;
				func_74(var_476_bool, var_477_object, "locked");
				if(var_476_bool != 0)
					var_471_object->SetProperty("locked", var_463_bool);
				else
					@Trace(("Actor \"" + var_471_object) + "\" can't be locked");
			var_471_object = null;
	}
		}
	}
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_9695(void)
{
	func_137("mnogogrannik@door1", true);
}


// @pe
void func_5601(int var_3454_int, int var_3455_int, object var_3456_object, object var_3457_object, object var_3458_object, object var_3459_object)
{
	if(var_3455_int == 0) {
		func_731(10, true);
		func_748(10, true, 1);
		int var_3468_int; object var_3469_object; object var_3470_object; object var_3471_object;
		var_3454_int = var_3468_int;
		var_3456_object = var_3469_object;
		var_3457_object = var_3470_object;
		var_3458_object = var_3471_object;
		func_655(10, var_3468_int, var_3469_object, var_3470_object, var_3471_object);
		object var_3472_object;
		var_3459_object = var_3472_object;
		func_229(var_3472_object, 2);
	}
	func_714(10, false);
	int var_3477_int; int var_3478_int;
	var_3454_int = var_3477_int;
	var_3455_int = var_3478_int;
	func_3158(10, var_3477_int, var_3478_int);
}


// @pe
void func_9702(void)
{
	func_137("mnogogrannik@door1", false);
}


void func_8167(int var_4802_int)
{
	int var_4804_int;
	@AddMessage(14529, 14528, var_4804_int);
	@SetVariable("player_mail", 1);
	var_4804_int = var_4802_int;
}


void func_7146(void)
{
	object var_3745_object;
	@GetMainOutdoorScene(var_3745_object);
	object var_3746_object;
	@AddScriptedActor(var_3746_object, "big_gun", "big_gun.bin", var_3745_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_3746_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_3745_object, [0.0, 0.0, 0.0]);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5100(int var_3265_int, int var_3266_int, object var_3267_object, object var_3268_object, object var_3269_object, object var_3270_object)
{
	if(var_3266_int == 0) {
		func_731(7, true);
		func_748(7, true, 1);
		int var_3279_int; object var_3280_object; object var_3281_object; object var_3282_object;
		var_3265_int = var_3279_int;
		var_3267_object = var_3280_object;
		var_3268_object = var_3281_object;
		var_3269_object = var_3282_object;
		func_655(7, var_3279_int, var_3280_object, var_3281_object, var_3282_object);
		object var_3283_object;
		var_3270_object = var_3283_object;
		func_229(var_3283_object, 2);
	}
	func_714(7, false);
	int var_3288_int; int var_3289_int;
	var_3265_int = var_3288_int;
	var_3266_int = var_3289_int;
	func_3158(7, var_3288_int, var_3289_int);
}


void func_9709(void)
{
	object var_4947_object;
	func_10048(var_4947_object);
	object var_4945_object;
	var_4947_object = var_4945_object;
	object var_4946_object;
	var_4945_object->FindMark(var_4946_object, "d8q01MatGotoToyHouse");
	if(var_4946_object != 0)
		var_4946_object->Remove();
	bool var_4950_bool;
	func_10031(var_4950_bool, 182);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4592(int var_2051_int, int var_2052_int, object var_2053_object, object var_2054_object, object var_2055_object, object var_2056_object)
{
	if(var_2052_int == 0) {
		func_731(4, true);
		func_748(4, true, 1);
		int var_2065_int; object var_2066_object; object var_2067_object; object var_2068_object;
		var_2051_int = var_2065_int;
		var_2053_object = var_2066_object;
		var_2054_object = var_2067_object;
		var_2055_object = var_2068_object;
		func_576(4, var_2065_int, var_2066_object, var_2067_object, var_2068_object);
		object var_2069_object;
		var_2056_object = var_2069_object;
		func_229(var_2069_object, 1);
	}
	func_714(4, false);
	int var_2074_int; int var_2075_int;
	var_2051_int = var_2074_int;
	var_2052_int = var_2075_int;
	func_2310(4, var_2074_int, var_2075_int);
}


void func_8178(int var_4779_int)
{
	int var_4781_int;
	@AddMessage(14531, 14530, var_4781_int);
	@SetVariable("player_mail", 1);
	var_4781_int = var_4779_int;
}


// @pe
void func_4086(int var_2897_int, int var_2898_int, object var_2899_object, object var_2900_object, object var_2901_object, object var_2902_object)
{
	if(var_2898_int == 0) {
		func_731(1, true);
		func_748(1, true, 1);
		int var_2911_int; object var_2912_object; object var_2913_object; object var_2914_object;
		var_2897_int = var_2911_int;
		var_2899_object = var_2912_object;
		var_2900_object = var_2913_object;
		var_2901_object = var_2914_object;
		func_655(1, var_2911_int, var_2912_object, var_2913_object, var_2914_object);
		object var_2915_object;
		var_2902_object = var_2915_object;
		func_229(var_2915_object, 2);
	}
	func_714(1, false);
	int var_2920_int; int var_2921_int;
	var_2897_int = var_2920_int;
	var_2898_int = var_2921_int;
	func_3685(1, var_2920_int, var_2921_int);
}


void func_7162(bool var_2_bool, int var_3_int)
{
	int var_8_int; int var_9_int; int var_10_int;
	bool var_11_bool = false;
	if(var_3_int > 16384) {
		if(var_3_int < 16396)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		var_8_int = var_3_int - 16384;
		int var_17_int;
		var_8_int = var_17_int;
		func_11454(var_17_int);
		var_2_bool = true;
		return 6;
	}
	bool var_180_bool = false;
	if(var_3_int > 32768) {
		if(var_3_int < 33056)
			var_180_bool = true;
	}
	if(var_180_bool != 0) {
		var_9_int = (var_3_int - 32768) / 24;
		var_10_int = (var_3_int - 32768) % 24;
		int var_191_int; int var_192_int;
		var_9_int = var_191_int;
		var_10_int = var_192_int;
		func_7280(var_191_int, var_192_int);
		var_2_bool = true;
		return 6;
	}
	var_2_bool = false;
}


void func_8189(int var_4361_int)
{
	int var_4363_int;
	@AddMessage(15493, 15492, var_4363_int);
	@SetVariable("player_mail", 1);
	var_4363_int = var_4361_int;
}


// @pe
void func_1022(float var_1562_float, int var_1563_int)
{
	if((var_1563_int + 1) == 1) {
		var_1562_float = 0;
		return 0;
	EMIT "GOTO 0x456";
	}
	if((var_1563_int + 1) == 2) {
		var_1562_float = 0;
		return 0;
	EMIT "GOTO 0x456";
	}
	if((var_1563_int + 1) == 3) {
		var_1562_float = 0;
		return 0;
	EMIT "GOTO 0x456";
	}
	if((var_1563_int + 1) == 4) {
		var_1562_float = 0;
		return 0;
	EMIT "GOTO 0x456";
	}
	if((var_1563_int + 1) == 5) {
		var_1562_float = 2;
		return 0;
	EMIT "GOTO 0x456";
	}
	if((var_1563_int + 1) == 6) {
		var_1562_float = 2;
		return 0;
	EMIT "GOTO 0x456";
	}
	if((var_1563_int + 1) == 7) {
		var_1562_float = 1;
		return 0;
	EMIT "GOTO 0x456";
	}
	if((var_1563_int + 1) == 8) {
		var_1562_float = 1;
		return 0;
	EMIT "GOTO 0x456";
	}
	if((var_1563_int + 1) == 9) {
		var_1562_float = 1;
		return 0;
	EMIT "GOTO 0x456";
	}
	if((var_1563_int + 1) == 10) {
		var_1562_float = 1;
		return 0;
	EMIT "GOTO 0x456";
	}
	if((var_1563_int + 1) == 11) {
		var_1562_float = 1;
		return 0;
	}
	var_1562_float = 0;
}


void func_511(string var_1431_string, object var_1432_object, string var_1433_string, string var_1434_string)
{
	object var_1446_object; bool var_1448_bool; cvector var_1449_cvector; cvector var_1450_cvector; object var_1451_object;
	@GetMainOutdoorScene(var_1446_object);
	int var_1447_int = 0;
	
	for(;;) {
		var_1446_object->GetLocator((var_1431_string + (var_1447_int + 1)), var_1448_bool, var_1449_cvector, var_1450_cvector);
		if(!var_1448_bool) //@nz
			break;
		var_1446_object->AddStationaryActor(var_1451_object, var_1449_cvector, var_1450_cvector, var_1433_string, var_1434_string);
		var_1432_object->add(var_1451_object);
		var_1451_object = null;
		var_1447_int += 1;
	}
}
EMIT "Stack[-6] = 0";


