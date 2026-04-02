// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1740();
			if(var_22_cvector == 26614) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1922();
			}
			if(var_22_cvector == 26616) {
				object var_33_object = var_1_object;
				func_1904(var_0_object);
			}
			if(var_22_cvector == 44497) {
				object var_75_object = var_1_object;
				func_1911(var_0_object);
			}
			if(var_21_bool == 26613) {
				func_158(var_22_cvector, "Neutral");
				var_0_object->SetMessage(525245); //@t
				var_0_object->ClearReplies(); //@t
				bool var_119_bool = false;
				bool var_120_bool;
				func_1928(var_1_object);
				if(var_120_bool != 0) {
					bool var_128_bool;
					func_1940(var_1_object);
					if(var_128_bool != 0)
						var_119_bool = true;
				}
				if(var_119_bool != 0)
					var_0_object->AddReply(525246, 44478, 26614); //@t
				var_0_object->AddReply(525249, -1, 26617); //@t
				var_0_object->AddReply(529151, -1, 30598); //@t
				return 0;
			}
			if(var_21_bool == 44478) {
				func_158(var_22_cvector, "Distrust");
				var_0_object->SetMessage(542162); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542163, 30599, 44479); //@t
				var_0_object->AddReply(542164, 44481, 44480); //@t
				return 0;
			}
			if(var_21_bool == 44481) {
				func_158(var_22_cvector, "Anger");
				var_0_object->SetMessage(542165); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542169, 30599, 44485); //@t
				var_0_object->AddReply(542170, -1, 44486); //@t
				return 0;
			}
			if(var_21_bool == 30599) {
				func_158(var_22_cvector, "Distrust");
				var_0_object->SetMessage(529152); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529153, 30601, 30600); //@t
				var_0_object->AddReply(529155, 30601, 30602); //@t
				return 0;
			}
			if(var_21_bool == 30601) {
				func_158(var_22_cvector, "Anger");
				var_0_object->SetMessage(529154); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529156, 26615, 30604); //@t
				var_0_object->AddReply(529157, 44482, 30605); //@t
				return 0;
			}
			if(var_21_bool == 44482) {
				func_158(var_22_cvector, "Distrust");
				var_0_object->SetMessage(542166); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542167, 26615, 44483); //@t
				var_0_object->AddReply(542168, 44494, 44484); //@t
				return 0;
			}
			if(var_21_bool == 26615) {
				func_158(var_22_cvector, "Anger");
				var_0_object->SetMessage(525247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542171, 44494, 44488); //@t
				var_0_object->AddReply(542176, 44494, 44493); //@t
				return 0;
			}
			if(var_21_bool == 44494) {
				func_158(var_22_cvector, "Repentance");
				var_0_object->SetMessage(542177); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525248, -1, 26616); //@t
				var_0_object->AddReply(542178, -1, 44497); //@t
				return 0;
			}
			var_3_string = true;
			bool var_213_bool;
			func_1902(var_213_bool);
			if(var_213_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb5";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1740();
			if(var_21_bool == 26824) {
				func_565(var_22_cvector, "Neutral");
				var_0_object->SetMessage(525468); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525469, 30746, 26825); //@t
				var_0_object->AddReply(542158, 44475, 44474); //@t
				return 0;
			}
			if(var_21_bool == 44475) {
				func_565(var_22_cvector, "Neutral");
				var_0_object->SetMessage(542159); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542160, -1, 44476); //@t
				var_0_object->AddReply(542161, -1, 44477); //@t
				return 0;
			}
			if(var_21_bool == 30746) {
				func_565(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529292); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529293, -1, 30747); //@t
				var_0_object->AddReply(529294, -1, 30748); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_1902(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x24c";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1740();
			if(var_21_bool == 36960) {
				func_819(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_21_bool == 36962) {
				func_819(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_21_bool == 36964) {
				func_819(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_74_bool;
			func_1902(var_74_bool);
			if(var_74_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x34a";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1740();
			if(var_21_int == 42554) {
				func_1073(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_1902(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x448";
	
	}

}


maintask task_8
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1144(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1209();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1464(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1178(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1158(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1747(var_67_object);
					var_67_object = var_66_object;
					func_1614(var_65_bool, var_66_object);
				}
			} else {
				func_1173(var_21_int);
				func_1200();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1391();
		func_1209();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		@StopGroup0();
		func_1209();
		func_1694("Neutral");
		func_1200();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1200();
		else
			func_1694("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1391();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1455(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_1969(var_39_object);
			func_1694("Neutral");
			func_1209();
			func_1200();
		}
	}

}


void func_0(object var_0_object, int var_271_int, object var_272_object)
{
	var_0_object = var_272_object;
	bool var_282_bool; object var_283_object;
	var_272_object = var_283_object;
	func_1469(var_282_bool, var_283_object, 70.0);
	if(!var_282_bool) { //@nz
		var_271_int = -2;
		return 8;
	}
	object var_278_object;
	@CreateDialog(var_278_object);
	int var_286_int;
	func_1896(var_286_int);
	var_278_object->SetNPCName(var_286_int);
	int var_287_int;
	func_1894(var_287_int);
	var_278_object->SetNPCDescription(var_287_int);
	string var_288_string;
	func_1898(var_288_string);
	var_278_object->SetPhoto(var_288_string);
	string var_289_string;
	func_1900(var_289_string);
	var_278_object->SetPhoto2(var_289_string);
	int var_290_int;
	func_1952(var_290_int);
	var_278_object->SetPlayerName(var_290_int);
	bool var_279_bool;
	@IsOverrideActive(var_279_bool);
	if(var_279_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	@DoDialog(var_278_object);
	bool var_292_bool; object var_293_object;
	object var_294_object;
	func_1747(var_294_object);
	var_294_object = var_293_object;
	func_1556(var_292_bool, var_293_object);
	object var_295_object; object var_296_object;
	var_272_object = var_295_object;
	var_278_object = var_296_object;
	TaskCall(1);
	func_81(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object);
	TaskReturn();
	bool var_281_bool;
	var_278_object->IsDialogEnd(var_281_bool);
	
	for(;;) {
		var_343_bool = !var_281_bool; //@nz
		if(var_343_bool == 0) goto Label_70;
		@sync();
		var_278_object->IsDialogEnd(var_281_bool);
	}
	
Label_70:
	object var_344_object;
	var_272_object = var_344_object;
	func_1538();
	@StopDialog(var_278_object);
	var_278_object->GetReturnValue(-1);
	int var_280_int = var_271_int;
}
EMIT "Stack[-4] = 0";


void func_1538(void)
{
	bool var_261_bool;
	@CameraSwitchToNormal(true);
	bool var_263_bool;
	func_1902(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		@HasAnimationTrack(var_261_bool, "head");
		if(var_261_bool == 0) goto Label_1555;
		@UnlookAsync("head");
	}
Label_1555:
	
}


// @pe
void func_1922(void)
{
	@SetVariable("ook2BigVlad1", 1);
}


void func_1158(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1455(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1928(bool var_312_bool)
{
	int var_314_int;
	func_1774(var_314_int, "k2q01");
	if(var_314_int == 2)
		var_312_bool = true;
	var_312_bool = false;
}


void func_1416(bool var_46_bool, object var_47_object, string var_48_string, float var_49_float, float var_50_float, float var_51_float)
{
	object var_55_object;
	var_47_object = var_55_object;
	string var_56_string;
	var_48_string = var_56_string;
	bool var_54_bool;
	func_1404(var_54_bool, var_55_object, var_56_string);
	if(!var_54_bool) //@nz
		var_46_bool = false;
	float var_53_float;
	var_47_object->GetProperty(var_48_string, var_53_float);
	float var_64_float; float var_66_float; float var_67_float;
	var_50_float = var_66_float;
	var_51_float = var_67_float;
	func_1763(var_64_float, (var_53_float + var_49_float), var_66_float, var_67_float);
	var_47_object->SetProperty(var_48_string, var_64_float);
	var_46_bool = true;
}


void func_1911(object var_75_object)
{
	int var_78_int;
	@irand(var_78_int, 1000);
	object var_80_object;
	var_75_object = var_80_object;
	func_1791(var_80_object, (var_78_int + 2000));
}


// @pe
void func_1810(bool var_35_bool, object var_36_object, float var_37_float)
{
	if(!var_36_object) { //@nz
		var_35_bool = false;
		return 0;
	}
	if(var_37_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_37_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_42_float;
		var_37_float = var_42_float;
		func_1845(var_42_float);
		bool var_46_bool; object var_47_object; float var_49_float;
		var_36_object = var_47_object;
		var_37_float = var_49_float;
		func_1416(var_46_bool, var_47_object, "reputation", var_49_float, (float)0, (float)1);
		var_35_bool = true;
		return 0;

	}
	
	var_35_bool = false;
}


void func_1556(bool var_114_bool, object var_115_object)
{
	int var_121_int; int var_122_int;
	@GetVariable("voice_common", var_121_int);
	if(var_121_int != 0) {
		bool var_125_bool; object var_126_object;
		var_115_object = var_126_object;
		func_1614(var_125_bool, var_126_object);
		if(!var_125_bool) { //@nz
			bool var_156_bool; object var_157_object;
			var_115_object = var_157_object;
			func_1651(var_156_bool, var_157_object);
			if(!var_156_bool) { //@nz
				var_114_bool = false;
				return 4;
			}
		}
		@irand(var_122_int, 2);
		if(var_122_int != 0)
			@SetVariable("voice_common", ((var_121_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_201_bool; object var_202_object;
		var_115_object = var_202_object;
		func_1651(var_201_bool, var_202_object);
		if(!var_201_bool) { //@nz
			bool var_204_bool; object var_205_object;
			var_115_object = var_205_object;
			func_1614(var_204_bool, var_205_object);
			if(!var_204_bool) { //@nz
				var_114_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1612;
	
Label_1612:
	var_114_bool = true;
	
}


// @pe
void func_1940(bool var_320_bool)
{
	int var_322_int;
	func_1774(var_322_int, "ook2BigVlad1");
	if(var_322_int == 0) {
		var_320_bool = true;
		return 0;
	}
	var_320_bool = false;
}


void func_1173(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1178(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1396(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1438(object var_85_object, string var_86_string, int var_87_int)
{
	int var_89_int;
	var_85_object->GetProperty(var_86_string, var_89_int);
	var_85_object->SetProperty(var_86_string, (var_89_int + var_87_int));
}


// @pe
void func_158(object var_2_object, string var_302_string)
{
	bool var_303_bool;
	func_1902(var_303_bool);
	if(!var_303_bool) //@nz
		return 0;
	if(var_302_string == var_2_object)
		return 0;
	string var_306_string; bool var_307_bool;
	var_302_string = var_306_string;
	if(var_302_string == "")
		var_307_bool = false;
	else
		var_307_bool = true;
	func_1710(var_306_string, var_307_bool);
	var_2_object = var_302_string;
	
}


void func_1952(int var_105_int)
{
	int var_107_int;
	@GetVariable("branch", var_107_int);
	if(var_107_int == 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x7af";
	}
	if(var_107_int == 1) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
}


void func_1694(string var_242_string)
{
	bool var_246_bool; float var_247_float; float var_248_float;
	@lshHasAnimation(var_246_bool, var_242_string);
	if(var_246_bool != 0) {
		@lshGetAnimTimes(var_242_string, var_247_float, var_248_float);
		@lshPlayAnimation(var_247_float, var_248_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_242_string);
	}
	
}


void func_675(object var_0_object, int var_347_int, object var_348_object)
{
	var_0_object = var_348_object;
	bool var_358_bool; object var_359_object;
	var_348_object = var_359_object;
	func_1469(var_358_bool, var_359_object, 70.0);
	if(!var_358_bool) { //@nz
		var_347_int = -2;
		return 8;
	}
	object var_354_object;
	@CreateDialog(var_354_object);
	int var_362_int;
	func_1896(var_362_int);
	var_354_object->SetNPCName(var_362_int);
	int var_363_int;
	func_1894(var_363_int);
	var_354_object->SetNPCDescription(var_363_int);
	string var_364_string;
	func_1898(var_364_string);
	var_354_object->SetPhoto(var_364_string);
	string var_365_string;
	func_1900(var_365_string);
	var_354_object->SetPhoto2(var_365_string);
	int var_366_int;
	func_1952(var_366_int);
	var_354_object->SetPlayerName(var_366_int);
	bool var_355_bool;
	@IsOverrideActive(var_355_bool);
	if(var_355_bool != 0) {
		var_347_int = -2;
		return 8;
	}
	@DoDialog(var_354_object);
	bool var_368_bool; object var_369_object;
	object var_370_object;
	func_1747(var_370_object);
	var_370_object = var_369_object;
	func_1556(var_368_bool, var_369_object);
	object var_371_object; object var_372_object;
	var_348_object = var_371_object;
	var_354_object = var_372_object;
	TaskCall(5);
	func_756(var_373_object, var_374_object, var_375_string, var_376_bool, var_371_object, var_372_object);
	TaskReturn();
	bool var_357_bool;
	var_354_object->IsDialogEnd(var_357_bool);
	
	for(;;) {
		var_404_bool = !var_357_bool; //@nz
		if(var_404_bool == 0) goto Label_745;
		@sync();
		var_354_object->IsDialogEnd(var_357_bool);
	}
	
Label_745:
	object var_405_object;
	var_348_object = var_405_object;
	func_1538();
	@StopDialog(var_354_object);
	var_354_object->GetReturnValue(-1);
	int var_356_int = var_347_int;
}
EMIT "Stack[-4] = 0";


void func_1445(bool var_29_bool, cvector var_30_cvector)
{
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector = var_30_cvector - var_34_cvector;
	var_37_float = GetByIndex(var_35_cvector, 0);
	var_38_float = GetByIndex(var_35_cvector, 2);
	bool var_36_bool;
	@Rotate(var_37_float, var_38_float, var_36_bool);
	var_36_bool = var_29_bool;
}


void func_934(object var_0_object, int var_406_int, object var_407_object)
{
	var_0_object = var_407_object;
	bool var_417_bool; object var_418_object;
	var_407_object = var_418_object;
	func_1469(var_417_bool, var_418_object, 70.0);
	if(!var_417_bool) { //@nz
		var_406_int = -2;
		return 8;
	}
	object var_413_object;
	@CreateDialog(var_413_object);
	int var_421_int;
	func_1896(var_421_int);
	var_413_object->SetNPCName(var_421_int);
	int var_422_int;
	func_1894(var_422_int);
	var_413_object->SetNPCDescription(var_422_int);
	string var_423_string;
	func_1898(var_423_string);
	var_413_object->SetPhoto(var_423_string);
	string var_424_string;
	func_1900(var_424_string);
	var_413_object->SetPhoto2(var_424_string);
	int var_425_int;
	func_1952(var_425_int);
	var_413_object->SetPlayerName(var_425_int);
	bool var_414_bool;
	@IsOverrideActive(var_414_bool);
	if(var_414_bool != 0) {
		var_406_int = -2;
		return 8;
	}
	@DoDialog(var_413_object);
	bool var_427_bool; object var_428_object;
	object var_429_object;
	func_1747(var_429_object);
	var_429_object = var_428_object;
	func_1556(var_427_bool, var_428_object);
	object var_430_object; object var_431_object;
	var_407_object = var_430_object;
	var_413_object = var_431_object;
	TaskCall(7);
	func_1015(var_432_object, var_433_object, var_434_string, var_435_bool, var_430_object, var_431_object);
	TaskReturn();
	bool var_416_bool;
	var_413_object->IsDialogEnd(var_416_bool);
	
	for(;;) {
		var_460_bool = !var_416_bool; //@nz
		if(var_460_bool == 0) goto Label_1004;
		@sync();
		var_413_object->IsDialogEnd(var_416_bool);
	}
	
Label_1004:
	object var_461_object;
	var_407_object = var_461_object;
	func_1538();
	@StopDialog(var_413_object);
	var_413_object->GetReturnValue(-1);
	int var_415_int = var_406_int;
}
EMIT "Stack[-4] = 0";


void func_1320(void)
{
	bool var_34_bool; int var_35_int; int var_36_int; bool var_37_bool;
	@WaitForAnimEnd();
	bool var_38_bool;
	func_1464(var_38_bool);
	if(!var_38_bool) //@nz
		return 12;
	int var_40_int;
	func_1877(var_40_int);
	int var_32_int;
	var_40_int = var_32_int;
	int var_33_int = 0;
	
	for(;;) {
		bool var_53_bool = false;
		if(var_33_int < 5) {
			bool var_56_bool;
			func_1464(var_56_bool);
			if(var_56_bool != 0)
				var_53_bool = true;
		}
		if(var_53_bool != 0) {
			if(!var_32_int) { //@nz
				@Sleep(3, var_34_bool);
				if(!var_34_bool) { //@nz
				} else {
			} else {
			@irand(var_35_int, var_32_int);
			@irand(var_36_int, 5);
			if(var_36_int != 0)
				var_35_int = 0;
			string var_67_string; int var_68_int;
			var_35_int = var_68_int;
			func_1870(var_67_string, var_68_int);
			@PlayAnimation("all", var_67_string);
			@WaitForAnimEnd(var_37_bool);
			var_69_bool = !var_37_bool; //@nz
			if(var_69_bool == 0) goto Label_1375;
			goto Label_1386;
			}
				Label_1375:
					bool var_60_bool;
					func_1389(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_1381;
			}
		}
	Label_1386:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1381:
		@ResetAAS();
		var_33_int += 1;
	}
	
}


void func_426(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	var_43_object = var_54_object;
	func_1469(var_53_bool, var_54_object, 70.0);
	if(!var_53_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_101_int;
	func_1896(var_101_int);
	var_49_object->SetNPCName(var_101_int);
	int var_102_int;
	func_1894(var_102_int);
	var_49_object->SetNPCDescription(var_102_int);
	string var_103_string;
	func_1898(var_103_string);
	var_49_object->SetPhoto(var_103_string);
	string var_104_string;
	func_1900(var_104_string);
	var_49_object->SetPhoto2(var_104_string);
	int var_105_int;
	func_1952(var_105_int);
	var_49_object->SetPlayerName(var_105_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	bool var_114_bool; object var_115_object;
	object var_116_object;
	func_1747(var_116_object);
	var_116_object = var_115_object;
	func_1556(var_114_bool, var_115_object);
	object var_209_object; object var_210_object;
	var_43_object = var_209_object;
	var_49_object = var_210_object;
	TaskCall(3);
	func_507(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_258_bool = !var_52_bool; //@nz
		if(var_258_bool == 0) goto Label_496;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_496:
	object var_259_object;
	var_43_object = var_259_object;
	func_1538();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


void func_1710(string var_220_string, bool var_221_bool)
{
	bool var_227_bool; float var_228_float; float var_229_float;
	@lshHasAnimation(var_227_bool, var_220_string);
	if(var_227_bool != 0) {
		@lshGetAnimTimes(var_220_string, var_228_float, var_229_float);
		@lshPlayAnimation(var_228_float, var_229_float, var_221_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_220_string);
	}
	
}


void func_1455(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1445(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1200(void)
{
	float var_465_float;
	@rand(var_465_float, 8, 16);
	@SetTimer(10, var_465_float);
}


// @pe
void func_1073(object var_2_object, string var_437_string)
{
	bool var_438_bool;
	func_1902(var_438_bool);
	if(!var_438_bool) //@nz
		return 0;
	if(var_437_string == var_2_object)
		return 0;
	string var_441_string; bool var_442_bool;
	var_437_string = var_441_string;
	if(var_437_string == "")
		var_442_bool = false;
	else
		var_442_bool = true;
	func_1710(var_441_string, var_442_bool);
	var_2_object = var_437_string;
	
}


// @pe
void func_1969(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(2);
		func_426(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_267_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_268_bool;
	func_1864(var_268_bool, 2);
	if(var_268_bool != 0) {
		int var_271_int; object var_272_object;
		var_39_object = var_272_object;
		TaskCall(0);
		func_0(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 0;
	}
	bool var_345_bool;
	func_1864(var_345_bool, 12);
	if(var_345_bool != 0) {
		int var_347_int; object var_348_object;
		var_39_object = var_348_object;
		TaskCall(4);
		func_675(var_349_object, var_347_int, var_348_object);
		TaskReturn();
		return 0;
	}
	int var_406_int; object var_407_object;
	var_39_object = var_407_object;
	TaskCall(6);
	func_934(var_408_object, var_406_int, var_407_object);
	TaskReturn();
}


// @pe
void func_819(object var_2_object, string var_378_string)
{
	bool var_379_bool;
	func_1902(var_379_bool);
	if(!var_379_bool) //@nz
		return 0;
	if(var_378_string == var_2_object)
		return 0;
	string var_382_string; bool var_383_bool;
	var_378_string = var_382_string;
	if(var_378_string == "")
		var_383_bool = false;
	else
		var_383_bool = true;
	func_1710(var_382_string, var_383_bool);
	var_2_object = var_378_string;
	
}


// @pe
void func_565(object var_2_object, string var_216_string)
{
	bool var_217_bool;
	func_1902(var_217_bool);
	if(!var_217_bool) //@nz
		return 0;
	if(var_216_string == var_2_object)
		return 0;
	string var_220_string; bool var_221_bool;
	var_216_string = var_220_string;
	if(var_216_string == "")
		var_221_bool = false;
	else
		var_221_bool = true;
	func_1710(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	
}


void func_1845(float var_42_float)
{
	object var_44_object;
	@CreateFloatVector(var_44_object);
	var_44_object->add(var_42_float);
	@SendWorldWndMessage(16, var_44_object);
}
EMIT "Stack[-1] = 0";


void func_1464(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_1209(void)
{
	@KillTimer(10);
}


void func_1469(bool var_53_bool, object var_54_object, float var_55_float)
{
	cvector var_66_cvector; bool var_73_bool;
	var_54_object->GetPosition(var_66_cvector);
	float var_65_float;
	var_54_object->GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_74_float + var_65_float);
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	@GetEyesHeight(var_65_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_75_float + var_65_float);
	cvector var_68_cvector = var_66_cvector - var_67_cvector;
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_78_float = sqrt(var_68_cvector | var_68_cvector);
	var_68_cvector /= var_78_float;
	cvector var_69_cvector = -var_68_cvector;
	cvector var_80_cvector;
	func_1753(var_80_cvector, (var_69_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_70_cvector = ((var_68_cvector * var_55_float) + (var_80_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0)
		var_53_bool = false;
	@StopWorld();
	@CameraTransit((var_67_cvector + var_70_cvector), var_69_cvector, true);
	var_94_float = GetByIndex(var_70_cvector, 0);
	var_95_float = GetByIndex(var_70_cvector, 2);
	@Rotate(var_94_float, var_95_float);
	bool var_96_bool;
	func_1902(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		@HasAnimationTrack(var_73_bool, "head");
		if(var_73_bool == 0) goto Label_1532;
		@LookAsyncCamera("head");
	}
Label_1532:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_53_bool = true;
	
}


void func_1725(bool var_148_bool, string var_149_string)
{
	bool var_151_bool;
	bool var_152_bool;
	func_1902(var_152_bool);
	if(var_152_bool != 0) {
		@lshHasSpeech(var_151_bool, var_149_string);
		if(var_151_bool != 0) {
			@lshPlaySpeech(var_149_string);
			var_148_bool = true;
		}
	}
	var_148_bool = false;
}


void func_1855(int var_169_int)
{
	float var_171_float;
	@GetGameTime(var_171_float);
	var_169_int = 1 + (var_171_float / 24);
}


// @pe
void func_1864(bool var_268_bool, int var_269_int)
{
	int var_270_int;
	func_1855(var_270_int);
	var_268_bool = var_270_int == var_269_int;
}


void func_1740(void)
{
	bool var_24_bool;
	func_1902(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_1614(bool var_125_bool, object var_126_object)
{
	string var_132_string; bool var_134_bool; int var_135_int; string var_136_string;
	var_132_string = "c";
	int var_133_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_126_object->HasProperty((var_132_string + (var_133_int + 1)), var_134_bool);
			if(!var_134_bool) { //@nz
			} else {
				var_133_int += 1;
			}
		}
		if(!var_133_int) { //@nz
			var_125_bool = false;
			return 10;
		}
		var_135_int = 0;
		if(var_133_int > 1)
			@irand(var_135_int, var_133_int);
		var_126_object->GetProperty((var_132_string + (var_135_int + 1)), var_136_string);
		bool var_148_bool; string var_149_string;
		var_136_string = var_149_string;
		func_1725(var_148_bool, var_149_string);
		var_148_bool = var_125_bool;
		return 10;

	}
}


void func_1870(string var_46_string, int var_47_int)
{
	string var_49_string = "idle";
	if(var_47_int != 0)
		var_49_string += var_47_int;
	var_49_string = var_46_string;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_295_object, object var_296_object)
{
	var_0_object = var_296_object;
	var_1_object = var_295_object;
	var_3_string = false;
	if(1 != 0) {
		func_158(var_296_object, "Neutral");
		var_0_object->SetMessage(525245); //@t
		var_0_object->ClearReplies(); //@t
		bool var_311_bool = false;
		bool var_312_bool;
		func_1928(var_1_object);
		if(var_312_bool != 0) {
			bool var_320_bool;
			func_1940(var_1_object);
			if(var_320_bool != 0)
				var_311_bool = true;
		}
		if(var_311_bool != 0)
			var_0_object->AddReply(525246, 44478, 26614); //@t
		var_0_object->AddReply(525249, -1, 26617); //@t
		var_0_object->AddReply(529151, -1, 30598); //@t
		goto Label_128;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_128:
	bool var_335_bool;
	func_1902(var_335_bool);
	if(var_335_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1694(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_157;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_157:
		return 0;

	}
	
}


void func_1747(object var_116_object)
{
	object var_118_object;
	@self(var_118_object);
	var_118_object = var_116_object;
}
EMIT "Stack[-1] = 0";


void func_1877(int var_40_int)
{
	int var_43_int; bool var_44_bool;
	var_43_int = 0;
	
	for(;;) {
		string var_46_string; int var_47_int;
		var_43_int = var_47_int;
		func_1870(var_46_string, var_47_int);
		@HasAnimation(var_44_bool, "all", var_46_string);
		if(!var_44_bool) //@nz
			break;
		var_43_int += 1;
	}
	var_43_int = var_40_int;
}


void func_1753(cvector var_80_cvector, cvector var_81_cvector)
{
	float var_84_float = sqrt(var_81_cvector | var_81_cvector);
	if(var_84_float < 0.000001)
		var_80_cvector = [0.0, 0.0, 0.0];
	var_80_cvector = var_81_cvector / var_84_float;
}


// @pe
void func_1763(float var_64_float, float var_65_float, float var_66_float, float var_67_float)
{
	if(var_65_float < var_66_float) {
		var_66_float = var_64_float;
		return 0;
	}
	if(var_65_float > var_67_float) {
		var_67_float = var_64_float;
		return 0;
	}
	var_65_float = var_64_float;
}


void func_1894(int var_102_int)
{
	var_102_int = 515531;
}


void func_1896(int var_101_int)
{
	var_101_int = 502857;
}


void func_1898(string var_103_string)
{
	var_103_string = "ui/NPC_BigVlad.png";
}


void func_1900(string var_104_string)
{
	var_104_string = "ui/NPC_BigVlad_b.png";
}


void func_1389(bool var_60_bool)
{
	var_60_bool = true;
}


void func_1902(bool var_96_bool)
{
	var_96_bool = true;
}


void func_1391(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1904(object var_33_object)
{
	object var_36_object;
	var_33_object = var_36_object;
	bool var_35_bool;
	func_1810(var_35_bool, var_36_object, 0.02);
}


void func_1774(int var_314_int, string var_315_string)
{
	int var_317_int;
	@GetVariable(var_315_string, var_317_int);
	var_317_int = var_314_int;
}


void func_1651(bool var_156_bool, object var_157_object)
{
	bool var_165_bool; int var_166_int; string var_167_string;
	int var_169_int;
	func_1855(var_169_int);
	string var_163_string = ("d" + var_169_int) + "m";
	int var_164_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_157_object->HasProperty((var_163_string + (var_164_int + 1)), var_165_bool);
			if(!var_165_bool) { //@nz
			} else {
				var_164_int += 1;
			}
		}
		if(!var_164_int) { //@nz
			var_156_bool = false;
			return 10;
		}
		var_166_int = 0;
		if(var_164_int > 1)
			@irand(var_166_int, var_164_int);
		var_157_object->GetProperty((var_163_string + (var_166_int + 1)), var_167_string);
		bool var_188_bool; string var_189_string;
		var_167_string = var_189_string;
		func_1725(var_188_bool, var_189_string);
		var_188_bool = var_156_bool;
		return 10;

	}
}


// @pe
void func_756(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_371_object, object var_372_object)
{
	var_0_object = var_372_object;
	var_1_object = var_371_object;
	var_3_string = false;
	if(1 != 0) {
		func_819(var_372_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_789;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2f8";
	}
Label_789:
	bool var_396_bool;
	func_1902(var_396_bool);
	if(var_396_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1694(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_818;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_818:
		return 0;

	}
	
}


void func_1396(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_1779(int var_94_int, int var_95_int)
{
	object var_97_object;
	@CreateIntVector(var_97_object);
	var_97_object->add(var_94_int);
	var_97_object->add(var_95_int);
	@SendWorldWndMessage(3, var_97_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1015(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_430_object, object var_431_object)
{
	var_0_object = var_431_object;
	var_1_object = var_430_object;
	var_3_string = false;
	if(1 != 0) {
		func_1073(var_431_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_1043;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3fb";
	}
Label_1043:
	bool var_452_bool;
	func_1902(var_452_bool);
	if(var_452_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1694(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1072;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1072:
		return 0;

	}
	
}


void func_1144(object var_0_object)
{
	bool var_22_bool;
	func_1464(var_22_bool);
	if(!var_22_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1320();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_507(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_209_object, object var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if(1 != 0) {
		func_565(var_210_object, "Neutral");
		var_0_object->SetMessage(525468); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525469, 30746, 26825); //@t
		var_0_object->AddReply(542158, 44475, 44474); //@t
		goto Label_535;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1ff";
	}
Label_535:
	bool var_240_bool;
	func_1902(var_240_bool);
	if(var_240_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1694(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_564;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_564:
		return 0;

	}
	
}


void func_1404(bool var_54_bool, object var_55_object, string var_56_string)
{
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", 2);
	if(!var_61_bool) { //@nz
		var_54_bool = false;
		return 2;
	}
	bool var_58_bool;
	var_55_object->HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
}


void func_1791(object var_80_object, int var_81_int)
{
	int var_84_int;
	object var_85_object;
	var_80_object = var_85_object;
	int var_87_int;
	func_1438(var_85_object, "money", var_87_int);
	if(var_87_int > 0) {
		@GetInvItemByName(var_84_int, "Money");
		int var_94_int; int var_95_int;
		var_84_int = var_94_int;
		var_81_int = var_95_int;
		func_1779(var_94_int, var_95_int);
	}
}


