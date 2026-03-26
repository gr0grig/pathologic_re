// @IMPORTS: SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,GetDirection/1,StopAsync/0,UnlookAsync/1,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,RotateAsync/2,IsLoaded/1,LookAsync/3,AddItem/3,AddItem/4,self/1,GetGameTime/1,ReportReputationChange/3,FindActor/2,HasAnimation/3,CanSee/2,GetVariable/2,WorkWithCorpse/1,Barter/1,ClearSubContainer/1,IsOverrideActive/1
// @STRINGS: W:all|W:head|W:attack_on|W:attack_stay|W:attack_off|A:GetPosition|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:GetEyesHeight|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:idle|W:class|W:rat|W:rat_big|W:dog|W:branch|W:reputation|W:rifle_ammo|W:revolver_ammo|W:samopal_ammo|W:lockpick|W:alpha_pills|W:meradorm|W:powder|W:beta_pills|W:gamma_pills
// @GLOBALS: 0:bool:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,bool params=0
// @EVENT_0: op=0x18 vars=object
// @EVENT_17: op=0x2c vars=object
// @EVENT_30: op=0x44 vars=object,object,bool
// @EVENT_40: op=0x60 vars=object
// @EVENT_42: op=0x74 vars=object,string
// @EVENT_26: op=0x99 vars=string
// @EVENT_1: op=0xa7 vars=object
// @EVENT_3: op=0xba vars=object
// @EVENT_7: op=0xc0 vars=int
// @EVENT_6: op=0xcc vars=
// @EVENT_41: op=0xe3 vars=object
// @EVENT_10: op=0x154 vars=object
// @EVENT_28: op=0x158 vars=
// @TASK_1: vars= params=0
// @EVENT_0: op=0x171 vars=object
// @EVENT_17: op=0x185 vars=object
// @EVENT_30: op=0x19d vars=object,object,bool
// @EVENT_40: op=0x1b9 vars=object
// @EVENT_42: op=0x1cd vars=object,string
// @EVENT_26: op=0x1f2 vars=string
// @EVENT_6: op=0x200 vars=
// @EVENT_1: op=0x207 vars=object
// @TASK_2: vars=object params=1
// @EVENT_0: op=0x2a3 vars=object
// @EVENT_17: op=0x2b7 vars=object
// @EVENT_30: op=0x2cf vars=object,object,bool
// @EVENT_40: op=0x2eb vars=object
// @EVENT_42: op=0x2ff vars=object,string
// @EVENT_26: op=0x324 vars=string
// @EVENT_41: op=0x33d vars=object
// @EVENT_7: op=0x346 vars=int
// @EVENT_6: op=0x369 vars=
// @EVENT_1: op=0x370 vars=object
// @TASK_3: vars=object,cvector,bool params=1
// @EVENT_6: op=0x39a vars=
// @EVENT_7: op=0x408 vars=int
// @EVENT_41: op=0x443 vars=object
// @TASK_4: vars=object,cvector,bool params=1
// @EVENT_7: op=0x4c3 vars=int
// @EVENT_41: op=0x4fe vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_6: op=0x517 vars=
// @EVENT_7: op=0x585 vars=int
// @EVENT_41: op=0x5c0 vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_6: op=0x5d9 vars=
// @EVENT_7: op=0x647 vars=int
// @EVENT_41: op=0x682 vars=object
// @STANDALONE_EVENT_16: op=0x780 vars=object,string
// @STANDALONE_EVENT_41: op=0x782 vars=object
// @STANDALONE_EVENT_22: op=0x784 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x786 vars=object,int,float,float,cvector,cvector
// @PE: 0x99,0xa7,0xba,0xc0,0xcc,0xe3,0x154,0x1f2,0x200,0x207,0x324,0x33d,0x369,0x370,0x37e,0x39a,0x443,0x4fe,0x517,0x5c0,0x5d9,0x682,0x74b,0x753,0x75c,0x766,0x780,0x782,0x784,0x786,0x788,0x7a8,0x7d8,0x7de,0x820,0x829,0x831,0x83b,0x843,0x84d,0x897,0x89a,0x89c,0x89f,0x8a1,0x8a4,0x8b0,0x8c7,0x8cf,0x8d6,0x8dc,0x8df,0x8f5,0x96a

task_0_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2209(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_211(var_18_int);
		}
		var_26_object = Obj();
		var_16_bool = var_26_object;
		func_2212(var_26_object);
	}
	return 2;
}


task_0_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2014(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2097(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_211(var_18_int);
		}
		var_69_object = Obj();
		var_16_bool = var_69_object;
		func_2107(var_69_object);
	}
	return 2;
}


task_0_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_object = var_22_object;
	var_17_cvector = var_23_object;
	var_18_bool = var_24_bool;
	func_2410(var_22_object, var_23_object, var_24_bool);
	if(var_21_bool != 0) {
		var_68_int = 0; var_69_object = Obj(); var_70_bool = 0;
		var_16_object = var_69_object;
		var_18_bool = var_70_bool;
		func_2115(var_69_object, var_70_bool);
		var_68_int = var_20_int;
		var_100_bool = var_20_int > (int)0;
		if(var_100_bool != 0) {
			var_102_bool = var_20_int > (int)1;
			if(var_102_bool != 0) {
				func_211(var_20_int);
			}
			var_104_object = Obj();
			var_16_object = var_104_object;
			func_2125(var_104_object);
		}
	}
	return 2;
}


task_0_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2199(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_211(var_18_int);
		}
		var_16_bool = Obj();
		func_2202();
	}
	return 2;
}


task_0_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_cvector = var_21_object;
	var_17_bool = var_22_string;
	func_1928(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_211(var_19_int);
		var_53_object = Obj(); var_54_string = "";
		var_16_cvector = var_53_object;
		var_17_bool = var_54_string;
		func_1960(var_53_object, var_54_string);
	} else {
		var_202_int = 0; var_203_string = ""; var_204_object = Obj();
		var_17_bool = var_203_string;
		var_16_cvector = var_204_object;
		func_2204(var_204_object);
		var_202_int = var_19_int;
		var_206_bool = var_19_int > (int)0;
		if(var_206_bool == 0) goto Label_152;
		var_208_bool = var_19_int > (int)1;
		if(var_208_bool != 0) {
			func_211(var_19_int);
		}
		var_209_string = ""; var_210_object = Obj();
		var_17_bool = var_209_string;
		var_16_cvector = var_210_object;
		func_2207();
	}
Label_152:
	return 2;
	
}


task_0_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2027(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_211(var_16_bool);
		var_27_string = "";
		var_16_bool = var_27_string;
		func_2043(var_27_string);
	}
	return 0;
}


task_0_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_1985(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_211(var_16_bool);
		var_32_object = Obj();
		var_16_bool = var_32_object;
		func_2008(var_32_object);
	} else {
		var_106_object = Obj();
		var_16_bool = var_106_object;
		func_236(var_16_bool, var_106_object);
	}
	return 0;
	
}


task_0_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_object = Obj();
	var_16_bool = var_17_object;
	func_236(var_16_bool, var_17_object);
	return 0;
}


task_0_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_18_bool = var_16_bool != (int)110;
	if(var_18_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_211(var_15_bool);
	func_2218();
	return 0;
}


task_0_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_211(var_16_bool);
	var_16_bool = Obj();
	func_1922();
	return 0;
}


task_0_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	RequestClearPath(var_16_bool);
	return 0;
}


task_0_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	Stop();
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2209(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_614();
		}
		var_25_object = Obj();
		var_16_bool = var_25_object;
		func_2212(var_25_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2014(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2097(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_614();
		}
		var_68_object = Obj();
		var_16_bool = var_68_object;
		func_2107(var_68_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_object = var_22_object;
	var_17_cvector = var_23_object;
	var_18_bool = var_24_bool;
	func_2410(var_22_object, var_23_object, var_24_bool);
	if(var_21_bool != 0) {
		var_68_int = 0; var_69_object = Obj(); var_70_bool = 0;
		var_16_object = var_69_object;
		var_18_bool = var_70_bool;
		func_2115(var_69_object, var_70_bool);
		var_68_int = var_20_int;
		var_100_bool = var_20_int > (int)0;
		if(var_100_bool != 0) {
			var_102_bool = var_20_int > (int)1;
			if(var_102_bool != 0) {
				func_614();
			}
			var_103_object = Obj();
			var_16_object = var_103_object;
			func_2125(var_103_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2199(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_614();
		}
		var_16_bool = Obj();
		func_2202();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_cvector = var_21_object;
	var_17_bool = var_22_string;
	func_1928(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_614();
		var_52_object = Obj(); var_53_string = "";
		var_16_cvector = var_52_object;
		var_17_bool = var_53_string;
		func_1960(var_52_object, var_53_string);
	} else {
		var_201_int = 0; var_202_string = ""; var_203_object = Obj();
		var_17_bool = var_202_string;
		var_16_cvector = var_203_object;
		func_2204(var_203_object);
		var_201_int = var_19_int;
		var_205_bool = var_19_int > (int)0;
		if(var_205_bool == 0) goto Label_497;
		var_207_bool = var_19_int > (int)1;
		if(var_207_bool != 0) {
			func_614();
		}
		var_208_string = ""; var_209_object = Obj();
		var_17_bool = var_208_string;
		var_16_cvector = var_209_object;
		func_2207();
	}
Label_497:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2027(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_614();
		var_26_string = "";
		var_16_bool = var_26_string;
		func_2043(var_26_string);
	}
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_614();
	func_2218();
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_1985(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_614();
		var_31_object = Obj();
		var_16_bool = var_31_object;
		func_2008(var_31_object);
	}
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2209(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_818();
		}
		var_27_object = Obj();
		var_16_bool = var_27_object;
		func_2212(var_27_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2014(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2097(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_818();
		}
		var_70_object = Obj();
		var_16_bool = var_70_object;
		func_2107(var_70_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_object = var_22_object;
	var_17_cvector = var_23_object;
	var_18_bool = var_24_bool;
	func_2410(var_22_object, var_23_object, var_24_bool);
	if(var_21_bool != 0) {
		var_68_int = 0; var_69_object = Obj(); var_70_bool = 0;
		var_16_object = var_69_object;
		var_18_bool = var_70_bool;
		func_2115(var_69_object, var_70_bool);
		var_68_int = var_20_int;
		var_100_bool = var_20_int > (int)0;
		if(var_100_bool != 0) {
			var_102_bool = var_20_int > (int)1;
			if(var_102_bool != 0) {
				func_818();
			}
			var_105_object = Obj();
			var_16_object = var_105_object;
			func_2125(var_105_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2199(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_818();
		}
		var_16_bool = Obj();
		func_2202();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_cvector = var_21_object;
	var_17_bool = var_22_string;
	func_1928(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_818();
		var_54_object = Obj(); var_55_string = "";
		var_16_cvector = var_54_object;
		var_17_bool = var_55_string;
		func_1960(var_54_object, var_55_string);
	} else {
		var_203_int = 0; var_204_string = ""; var_205_object = Obj();
		var_17_bool = var_204_string;
		var_16_cvector = var_205_object;
		func_2204(var_205_object);
		var_203_int = var_19_int;
		var_207_bool = var_19_int > (int)0;
		if(var_207_bool == 0) goto Label_803;
		var_209_bool = var_19_int > (int)1;
		if(var_209_bool != 0) {
			func_818();
		}
		var_210_string = ""; var_211_object = Obj();
		var_17_bool = var_210_string;
		var_16_cvector = var_211_object;
		func_2207();
	}
Label_803:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2027(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_818();
		var_28_string = "";
		var_16_bool = var_28_string;
		func_2043(var_28_string);
	}
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_818();
	var_16_bool = Obj();
	func_1922();
	return 0;
}


task_2_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_22_bool = var_16_bool != (int)111;
	if(var_22_bool != 0) {
		return 4;
	}
	var_23_bool = 0; var_24_object = Obj();
	var_24_object = var_0_bool;
	func_1769(var_23_bool, var_24_object);
	var_57_bool = var_23_bool == 0; //@nz
	if(var_57_bool != 0) {
		func_818();
		return 4;
	}
	GetDirection(var_19_cvector);
	var_60_cvector = CVector(0,0,0); var_61_object = Obj();
	var_61_object = var_0_bool;
	func_1696(var_60_cvector, var_61_object);
	var_60_cvector = var_20_cvector;
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	var_19_cvector = var_67_cvector;
	var_20_cvector = var_68_cvector;
	func_1894(var_66_float, var_67_cvector, var_68_cvector);
	var_91_bool = var_66_float < (float)0.4999999701976776;
	if(var_91_bool != 0) {
		var_92_object = Obj();
		var_92_object = var_0_bool;
		func_1793(var_92_object);
	}
	return 4;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_818();
	func_2218();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_1985(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_818();
		var_33_object = Obj();
		var_16_bool = var_33_object;
		func_2008(var_33_object);
	}
	return 0;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1084(var_15_bool);
	func_2218();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_int, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_bool != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_929(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)2500.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_1100((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_1083;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_1691(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_1083:
	return 8;
	
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_1084(var_16_bool);
	var_16_bool = Obj();
	func_1922();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_bool != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_1116(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)2500.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_1287((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_1270;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_1691(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_1270:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_1271(var_16_bool);
	var_16_bool = Obj();
	func_1922();
	return 0;
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1465(var_15_bool);
	func_2218();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_bool != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_1310(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)2500.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_1481((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_1464;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_1691(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_1464:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	func_1465(var_16_bool);
	var_16_bool = Obj();
	func_1922();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1659(var_15_bool);
	func_2218();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_int)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_int != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_1504(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)2500.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_1675((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_1658;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_1691(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_1658:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object)
{
	func_1659(var_16_object);
	var_16_object = Obj();
	func_1922();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_string)
{
	return 0;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object)
{
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	SensePlayerOnly((bool)1);
	func_2382();
	func_15();
	
Label_9:
	var_2_bool = false;
	func_276(var_14_cvector, var_15_bool);
	goto Label_9;
}
EMIT "Return(); Pop(0)";


func_2056(var_135_string, var_136_int)
{
	var_137_string = ""; var_138_string = "";
	var_139_int = var_136_int;
	if(var_139_int != 0) {
		"idle" = "idle" + var_136_int;
	}
	var_138_string = var_135_string;
	return 2;
}


func_15()
{
	var_82_bool = 0;
	func_1804(var_82_bool);
	var_85_bool = var_82_bool == 0; //@nz
	if(var_85_bool != 0) {
		func_2218();
	}
	return 0;
}


func_2063(var_129_int)
{
	var_130_int = 0; var_131_bool = 0; var_132_int = 0; var_133_bool = 0;
	var_132_int = 0;
	
Label_2065:
	var_135_string = ""; var_136_int = 0;
	var_132_int = var_136_int;
	func_2056(var_135_string, var_136_int);
	HasAnimation(var_133_bool, "all", var_135_string);
	var_140_bool = var_133_bool == 0; //@nz
	if(var_140_bool != 0) {
	} else {
		var_132_int = var_132_int + (int)1;
		goto Label_2065;
	}
	var_132_int = var_129_int;
	return 4;
	
}


func_533()
{
	var_113_int = 0; var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_bool = 0; var_118_float = 0; var_119_bool = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_int = 0; var_124_bool = 0; var_125_float = 0; var_126_bool = 0;
	WaitForAnimEnd();
	var_127_bool = 0;
	func_1804(var_127_bool);
	var_128_bool = var_127_bool == 0; //@nz
	if(var_128_bool != 0) {
		return 14;
	}
	func_2063((int)0);
	var_129_int = var_120_int;
	var_121_int = 0;
	
Label_547:
	var_142_bool = 0;
	var_142_bool = 0;
	var_144_bool = var_121_int < (int)5;
	if(var_144_bool != 0) {
		var_145_bool = 0;
		func_1804(var_145_bool);
		if(var_145_bool != 0) {
			var_142_bool = 1;
		}
	}
	if(var_142_bool != 0) {
		irand(var_122_int, (int)3);
		var_148_bool = var_122_int == (int)0;
		if(var_148_bool != 0) {
			var_149_int = var_120_int;
			if(var_149_int == 0) goto Label_580;
			irand(var_123_int, var_120_int);
			var_151_string = ""; var_152_int = 0;
			var_123_int = var_152_int;
			func_2056(var_151_string, var_152_int);
			PlayAnimation("all", var_151_string);
			WaitForAnimEnd(var_124_bool);
			var_153_bool = var_124_bool == 0; //@nz
			if(var_153_bool != 0) {
			} else {
		} else {
				var_158_bool = var_122_int == (int)1;
				if(var_158_bool != 0) {
					rand(var_125_float, (int)4);
					var_161_int = var_125_float + (int)1;
					Sleep(var_161_int, var_126_bool);
					var_162_bool = var_126_bool == 0; //@nz
					if(var_162_bool != 0) {
						goto Label_609;
					}
					goto Label_598;
				}
				var_163_int = var_121_int;
				if(var_163_int == 0) goto Label_598;
				goto Label_609;
		}
		Label_598:
			var_154_bool = 0;
			func_612(var_154_bool);
			var_155_bool = var_154_bool == 0; //@nz
			if(var_155_bool != 0) {
				goto Label_609;
			}
			ResetAAS();
			var_121_int = var_121_int + (int)1;
			goto Label_547;

		}
	}
Label_609:
	ResetAAS();
	return 14;
	
}


func_2080(var_59_int)
{
	var_61_bool = 0;
	func_2404(var_61_bool);
	if(var_61_bool != 0) {
		var_59_int = 2;
	} else {
		var_59_int = 0;
	}
	return 0;
	
}


func_2089(var_76_object)
{
	var_77_object = Obj();
	var_76_object = var_77_object;
	TaskCall(2);
	func_619(var_78_object, var_77_object);
	TaskReturn();
	return 0;
}


func_2097(var_28_int, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj();
	var_29_object = var_31_object;
	func_1769(var_30_bool, var_31_object);
	if(var_30_bool != 0) {
		var_28_int = 2;
	} else {
		var_28_int = 0;
	}
	return 0;
	
}


func_2107(var_70_object)
{
	var_71_object = Obj();
	var_70_object = var_71_object;
	TaskCall(3);
	func_894(var_71_object);
	TaskReturn();
	return 0;
}


func_1084(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_2115(var_68_int, var_69_object)
{
	var_71_bool = 0; var_72_object = Obj();
	var_69_object = var_72_object;
	func_1769(var_71_bool, var_72_object);
	if(var_71_bool != 0) {
		var_68_int = 2;
	} else {
		var_68_int = 0;
	}
	return 0;
	
}


func_1100(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_1696(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1867(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_2125(var_105_object)
{
	var_106_object = Obj();
	var_105_object = var_106_object;
	TaskCall(4);
	func_1146(var_107_object, var_108_cvector, var_109_bool, var_106_object);
	TaskReturn();
	return 0;
}


func_2133(var_25_bool, var_26_object, var_27_object, var_28_float)
{
	var_29_string = ""; var_30_bool = 0; var_31_string = ""; var_32_bool = 0;
	var_33_bool = 0; var_34_object = Obj(); var_35_string = "";
	var_27_object = var_34_object;
	func_1716(var_33_bool, var_34_object, "class");
	var_42_bool = var_33_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_25_bool = 0;
		return 4;
	}
	@@var_27_object:GetProperty("class", var_31_string);
	var_45_bool = var_31_string == "rat";
	if(var_45_bool != 0) {
		var_25_bool = 0;
		return 4;
	EMIT "GOTO 0x873";
	}
	var_47_bool = var_31_string == "rat_big";
	if(var_47_bool != 0) {
		var_25_bool = 0;
		return 4;
	EMIT "GOTO 0x873";
	}
	var_49_bool = var_31_string == "dog";
	if(var_49_bool != 0) {
		var_25_bool = 0;
		return 4;
	}
	CanSee(var_32_bool, var_26_object);
	var_50_bool = 0;
	var_50_bool = 1;
	var_51_bool = var_32_bool;
	if(var_51_bool != 1) {
		var_52_float = 0; var_53_object = Obj();
		var_26_object = var_53_object;
		func_1703(var_52_float, var_53_object);
		var_60_float = var_28_float * var_28_float;
		var_61_bool = var_52_float <= var_60_float;
		if(var_61_bool != 1) {
			var_50_bool = 0;
		}
	}
	if(var_50_bool != 0) {
		var_25_bool = 1;
		return 4;
	}
	CanSee(var_32_bool, var_27_object);
	var_62_bool = 0;
	var_62_bool = 1;
	var_63_bool = var_32_bool;
	if(var_63_bool != 1) {
		var_64_float = 0; var_65_object = Obj();
		var_27_object = var_65_object;
		func_1703(var_64_float, var_65_object);
		var_66_float = var_28_float * var_28_float;
		var_67_bool = var_64_float <= var_66_float;
		if(var_67_bool != 1) {
			var_62_bool = 0;
		}
	}
	if(var_62_bool != 0) {
		var_25_bool = 1;
		return 4;
	}
	var_25_bool = 0;
	return 4;
}


func_1116(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_1852(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_1852(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_612(var_154_bool)
{
	var_154_bool = 1;
	return 0;
}


func_614()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_619(var_0_bool, var_77_object)
{
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0;
	var_0_bool = var_77_object;
	func_670(var_84_bool);
	GetDirection(var_82_cvector);
	var_92_cvector = CVector(0,0,0); var_93_object = Obj();
	var_93_object = var_0_bool;
	func_1696(var_92_cvector, var_93_object);
	var_92_cvector = var_83_cvector;
	var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0);
	var_82_cvector = var_99_cvector;
	var_83_cvector = var_100_cvector;
	func_1894(var_98_float, var_99_cvector, var_100_cvector);
	var_123_bool = var_98_float < (int)0;
	if(var_123_bool != 0) {
		var_124_object = Obj();
		var_124_object = var_0_bool;
		func_1793(var_124_object);
		var_84_bool = 1;
	} else {
		Sleep((float)1.5, var_84_bool);
	}
	var_133_bool = var_84_bool;
	if(var_133_bool != 0) {
		var_134_object = Obj();
		var_134_object = var_0_bool;
		func_1793(var_134_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_1146(var_0_bool, var_1_bool, var_2_bool, var_106_object)
{
	var_110_cvector = CVector(0,0,0); var_111_float = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0;
	var_0_bool = var_106_object;
	var_120_cvector = CVector(0,0,0); var_121_float = 0;
	func_1116(var_119_float, var_120_cvector, (float)1.7453293800354004);
	var_120_cvector = var_115_cvector;
	var_116_float = var_115_cvector | var_115_cvector;
	var_151_bool = var_116_float < (float)2500.0;
	if(var_151_bool != 0) {
		var_152_cvector = CVector(0,0,0); var_153_float = 0;
		func_1116(var_119_float, var_152_cvector, (float)2.6179938316345215);
		var_152_cvector = var_115_cvector;
		var_116_float = var_115_cvector | var_115_cvector;
		var_155_bool = var_116_float < (float)2500.0;
		if(var_155_bool != 0) {
			var_157_float = sqrt(var_116_float);
			var_158_int = "Can't retreat, distance: " + var_157_float;
			Trace(var_158_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_160_float = GetByIndex(var_115_cvector, 0);
	var_161_float = GetByIndex(var_115_cvector, 2);
	Rotate(var_160_float, var_161_float);
	var_162_cvector = CVector(0,0,0);
	func_1691(var_162_cvector);
	var_1_bool = var_162_cvector + var_115_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1188:
	MovePoint(var_1_bool, (int)1, var_117_bool);
	var_168_bool = var_117_bool;
	if(var_168_bool != 0) {
		var_169_bool = var_0_bool == 0; //@ne
		if(var_169_bool != 0) {
			goto Label_1218;
		EMIT "GOTO 0x4c0";

		Label_1218:
			return 10;
		}
		var_170_cvector = CVector(0,0,0); var_171_float = 0;
		func_1116(var_119_float, var_170_cvector, (float)2.6179938316345215);
		var_170_cvector = var_118_cvector;
		var_119_float = var_118_cvector | var_118_cvector;
		var_173_bool = var_119_float >= (float)2500.0;
		if(var_173_bool != 0) {
			var_174_cvector = CVector(0,0,0);
			func_1691(var_174_cvector);
			var_1_bool = var_174_cvector + var_118_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1218;
		}
	}
	var_177_bool = var_2_bool == 0; //@nz
	if(var_177_bool == 1) goto Label_1188;
	
}


func_1659(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1675(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_1696(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1867(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_2199(var_19_int)
{
	var_19_int = 0;
	return 0;
}


func_2202()
{
	return 0;
}


func_1691(var_88_cvector)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0);
	GetPosition(var_90_cvector);
	var_90_cvector = var_88_cvector;
	return 2;
}


func_2204(var_203_int)
{
	var_203_int = 0;
	return 0;
}


func_670(var_0_bool)
{
	var_85_object = Obj();
	var_85_object = var_0_bool;
	func_1809(var_85_object);
	return 0;
}


func_2207()
{
	return 0;
}


func_1696(var_73_cvector, var_74_object)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetPosition(var_77_cvector);
	@@var_74_object:GetPosition(var_78_cvector);
	var_73_cvector = var_78_cvector - var_77_cvector;
	return 4;
}


func_2209(var_19_int)
{
	var_19_int = 2;
	return 0;
}


func_2212(var_27_object)
{
	var_28_object = Obj();
	var_27_object = var_28_object;
	func_2390(var_28_object);
	return 0;
}


func_1703(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_2218()
{
	return 0;
}


func_2219(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0;
	CanSee(var_25_bool, var_23_object);
	var_25_bool = var_22_bool;
	return 2;
}


func_1711(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0;
	IsPlayerActor(var_27_object, var_29_bool);
	var_29_bool = var_26_bool;
	return 2;
}


func_2224(var_34_object)
{
	var_35_object = Obj();
	var_34_object = var_35_object;
	TaskCall(5);
	func_1340(var_36_object, var_37_cvector, var_38_bool, var_35_object);
	TaskReturn();
	return 0;
}


func_1716(var_45_bool, var_46_object, var_47_string)
{
	var_48_bool = 0; var_49_bool = 0;
	var_52_bool = IsFuncExist(var_46_object, "HasProperty", (int)2);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_45_bool = 0;
		return 2;
	}
	@@var_46_object:HasProperty(var_47_string, var_49_bool);
	var_49_bool = var_45_bool;
	return 2;
}


func_2232(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	CanSee(var_34_bool, var_32_object);
	var_31_bool = 1;
	var_35_bool = var_34_bool;
	if(var_35_bool != 1) {
		var_36_float = 0; var_37_object = Obj();
		var_32_object = var_37_object;
		func_1703(var_36_float, var_37_object);
		var_45_bool = var_36_float <= (int)4000000;
		if(var_45_bool != 1) {
			var_31_bool = 0;
		}
	}
	return 2;
}


func_1728(var_38_bool, var_39_object)
{
	var_40_bool = 0; var_41_bool = 0;
	@@var_39_object:IsDead(var_41_bool);
	var_41_bool = var_38_bool;
	return 2;
}


func_1733(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	var_33_bool = var_28_object == 0; //@ne
	if(var_33_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	var_34_bool = 0;
	var_34_bool = 0;
	var_37_bool = IsFuncExist(var_28_object, "IsDead", (int)1);
	if(var_37_bool != 0) {
		var_38_bool = 0; var_39_object = Obj();
		var_28_object = var_39_object;
		func_1728(var_38_bool, var_39_object);
		if(var_38_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	GetScene(var_31_object);
	var_42_bool = var_31_object == 0; //@ne
	if(var_42_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	@@var_28_object:GetScene(var_32_object);
	var_43_bool = var_31_object != var_32_object;
	if(var_43_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	var_27_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2247(var_133_object)
{
	var_134_object = Obj();
	var_133_object = var_134_object;
	TaskCall(6);
	func_1534(var_135_object, var_136_cvector, var_137_bool, var_134_object);
	TaskReturn();
	return 0;
}


func_2255(var_48_bool, var_49_object)
{
	var_50_bool = 0; var_51_object = Obj();
	var_49_object = var_51_object;
	func_2232(var_50_bool, var_51_object);
	var_50_bool = var_48_bool;
	return 0;
}


func_211(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_347(var_15_cvector, var_16_bool);
	return 0;
}


func_2262(var_201_object)
{
	var_202_object = Obj();
	var_201_object = var_202_object;
	func_2247(var_202_object);
	return 0;
}


func_219(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_354(var_20_bool, var_21_int);
	return 0;
}


func_2268(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_2271()
{
	return 0;
}


func_2273(var_34_int)
{
	var_35_int = 0; var_36_int = 0;
	GetVariable("branch", var_36_int);
	var_36_int = var_34_int;
	return 2;
}


func_2279(var_62_float)
{
	var_63_object = Obj(); var_64_float = 0; var_65_object = Obj(); var_66_float = 0;
	FindActor(var_65_object, "player");
	var_68_bool = var_65_object == 0; //@nz
	if(var_68_bool != 0) {
		var_62_float = 0;
		return 4;
	}
	@@var_65_object:GetProperty("reputation", var_66_float);
	var_66_float = var_62_float;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1769(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_24_object = var_28_object;
	func_1733(var_27_bool, var_28_object);
	var_44_bool = var_27_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	var_45_bool = 0; var_46_object = Obj(); var_47_string = "";
	var_24_object = var_46_object;
	func_1716(var_45_bool, var_46_object, "noaccess");
	var_54_bool = var_45_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_23_bool = 1;
		return 2;
	}
	@@var_24_object:GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == (int)0;
	return 2;
}


func_236(var_2_bool, var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_17_object = var_23_object;
	func_1769(var_22_bool, var_23_object);
	var_56_bool = var_22_bool == 0; //@nz
	if(var_56_bool != 0) {
		return 4;
	}
	var_57_bool = var_2_bool;
	if(var_57_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_17_object, var_20_bool);
	var_58_bool = var_20_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 4;
	}
	var_59_int = 0; var_60_object = Obj();
	var_17_object = var_60_object;
	func_2080(var_60_object);
	var_59_int = var_21_int;
	var_72_bool = var_21_int > (int)0;
	if(var_72_bool != 0) {
		var_74_bool = var_21_int > (int)1;
		if(var_74_bool != 0) {
			func_219(var_21_int);
		}
		var_76_object = Obj();
		var_17_object = var_76_object;
		func_2089(var_76_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_2293(var_33_object)
{
	var_34_int = 0;
	func_2273(var_34_int);
	var_39_bool = var_34_int == (int)1;
	if(var_39_bool != 0) {
		WorkWithCorpse(var_33_object);
	} else {
		Barter(var_33_object);
	}
	return 0;
	
}


func_1271(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1793(var_92_object)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	@@var_92_object:GetPosition(var_96_cvector);
	GetPosition(var_97_cvector);
	var_98_cvector = var_96_cvector - var_97_cvector;
	var_99_float = GetByIndex(var_98_cvector, 0);
	var_100_float = GetByIndex(var_98_cvector, 2);
	RotateAsync(var_99_float, var_100_float);
	return 6;
}


func_2306(var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	ClearSubContainer((int)0);
	var_22_bool = var_18_bool;
	if(var_22_bool != 0) {
		var_23_string = ""; var_24_int = 0; var_25_int = 0; var_26_int = 0;
		func_1831("rifle_ammo", (int)1, (int)2, (int)2);
		var_39_string = ""; var_40_int = 0; var_41_int = 0; var_42_int = 0;
		func_1831("revolver_ammo", (int)1, (int)2, (int)2);
		var_43_string = ""; var_44_int = 0; var_45_int = 0; var_46_int = 0;
		func_1831("samopal_ammo", (int)2, (int)2, (int)2);
	} else {
		var_47_string = ""; var_48_int = 0; var_49_int = 0;
		func_1820("lockpick", (int)1, (int)4);
		var_56_string = ""; var_57_int = 0; var_58_int = 0; var_59_int = 0;
		func_1831("alpha_pills", (int)1, (int)2, (int)3);
		var_60_string = ""; var_61_int = 0; var_62_int = 0;
		func_1820("meradorm", (int)1, (int)2);
		var_63_string = ""; var_64_int = 0; var_65_int = 0;
		func_1820("powder", (int)1, (int)15);
		func_1911((int)0);
		var_66_int = var_20_int;
		var_73_bool = var_20_int >= (int)4;
		if(var_73_bool != 0) {
			var_74_string = ""; var_75_int = 0; var_76_int = 0;
			func_1820("beta_pills", (int)1, (int)2);
		}
		var_78_bool = var_20_int >= (int)6;
		if(var_78_bool == 0) goto Label_2381;
		var_79_string = ""; var_80_int = 0; var_81_int = 0;
		func_1820("gamma_pills", (int)1, (int)7);
	}
Label_2381:
	return 2;
	
}


func_1287(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_1696(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1867(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_1804(var_82_bool)
{
	var_83_bool = 0; var_84_bool = 0;
	IsLoaded(var_84_bool);
	var_84_bool = var_82_bool;
	return 2;
}


func_1809(var_85_object)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0);
	@@var_85_object:GetEyesHeight(var_88_float);
	var_89_cvector = CVector(0.0, 0.0, 0.0);
	var_90_float = GetByIndex(var_89_cvector, 1);
	var_88_float = var_90_float;
	SetByIndex(var_89_cvector, 1) = var_90_float;
	LookAsync(var_85_object, "head", var_89_cvector);
	return 4;
}


func_276(var_0_bool, var_1_bool)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_object = Obj(); var_91_bool = 0; var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_bool = 0; var_96_object = Obj(); var_97_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_92_float, (float)0.5);
	Sleep(var_92_float);
	
Label_284:
	var_99_bool = var_0_bool == 0; //@nz
	if(var_99_bool != 0) {
		var_100_bool = var_1_bool == 0; //@nz
		if(var_100_bool != 0) {

		Label_288:
			GetPosition(var_94_cvector);
			var_101_float = 0;
			func_335(var_101_float);
			GetRandomPFPointInCircle(var_93_cvector, var_94_cvector, var_101_float, var_95_bool);
			var_104_bool = var_95_bool;
			if(var_104_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_288;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_304;
	
Label_304:
	var_105_object = Obj(); var_106_cvector = CVector(0,0,0);
	var_93_cvector = var_106_cvector;
	func_363(var_105_object, var_106_cvector);
	var_105_object = var_96_object;
	var_109_bool = var_96_object != 0; //@nn
	if(var_109_bool != 0) {
		RotatePath(var_96_object, var_97_bool);
		var_110_bool = var_97_bool;
		if(var_110_bool != 0) {
			var_111_bool = 0;
			func_361(var_111_bool);
			FollowPath(var_96_object, var_111_bool, var_97_bool);
			var_96_object = 0;
			var_112_bool = var_97_bool;
			if(var_112_bool != 0) {
				TaskCall(1);
				func_533();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_96_object = 0;
	goto Label_284;
	
}


func_1820(var_47_string, var_48_int, var_49_int)
{
	var_50_bool = 0; var_51_bool = 0;
	var_52_bool = 0; var_53_int = 0; var_54_int = 0;
	var_48_int = var_53_int;
	var_49_int = var_54_int;
	func_1862(var_52_bool, var_53_int, var_54_int);
	if(var_52_bool != 0) {
		AddItem(var_51_bool, var_47_string, (int)0);
	}
	return 2;
}


func_1310(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_1852(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_1852(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_1831(var_23_string, var_24_int, var_25_int, var_26_int)
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	var_31_bool = 0; var_32_int = 0; var_33_int = 0;
	var_24_int = var_32_int;
	var_25_int = var_33_int;
	func_1862(var_31_bool, var_32_int, var_33_int);
	if(var_31_bool != 0) {
		irand(var_29_int, var_26_int);
		var_38_int = var_29_int + (int)1;
		AddItem(var_30_bool, var_23_string, (int)0, var_38_int);
	}
	return 4;
}


func_818()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1846(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj();
	self(var_26_object);
	var_26_object = var_24_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1852(var_46_cvector, var_47_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_47_cvector | var_47_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_46_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_46_cvector = var_47_cvector / var_49_float;
	return 2;
}


func_1340(var_0_bool, var_1_bool, var_2_bool, var_35_object)
{
	var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0;
	var_0_bool = var_35_object;
	var_49_cvector = CVector(0,0,0); var_50_float = 0;
	func_1310(var_48_float, var_49_cvector, (float)1.7453293800354004);
	var_49_cvector = var_44_cvector;
	var_45_float = var_44_cvector | var_44_cvector;
	var_80_bool = var_45_float < (float)2500.0;
	if(var_80_bool != 0) {
		var_81_cvector = CVector(0,0,0); var_82_float = 0;
		func_1310(var_48_float, var_81_cvector, (float)2.6179938316345215);
		var_81_cvector = var_44_cvector;
		var_45_float = var_44_cvector | var_44_cvector;
		var_84_bool = var_45_float < (float)2500.0;
		if(var_84_bool != 0) {
			var_86_float = sqrt(var_45_float);
			var_87_int = "Can't retreat, distance: " + var_86_float;
			Trace(var_87_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_89_float = GetByIndex(var_44_cvector, 0);
	var_90_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_89_float, var_90_float);
	var_91_cvector = CVector(0,0,0);
	func_1691(var_91_cvector);
	var_1_bool = var_91_cvector + var_44_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1382:
	MovePoint(var_1_bool, (int)1, var_46_bool);
	var_97_bool = var_46_bool;
	if(var_97_bool != 0) {
		var_98_bool = var_0_bool == 0; //@ne
		if(var_98_bool != 0) {
			goto Label_1412;
		EMIT "GOTO 0x582";

		Label_1412:
			return 10;
		}
		var_99_cvector = CVector(0,0,0); var_100_float = 0;
		func_1310(var_48_float, var_99_cvector, (float)2.6179938316345215);
		var_99_cvector = var_47_cvector;
		var_48_float = var_47_cvector | var_47_cvector;
		var_102_bool = var_48_float >= (float)2500.0;
		if(var_102_bool != 0) {
			var_103_cvector = CVector(0,0,0);
			func_1691(var_103_cvector);
			var_1_bool = var_103_cvector + var_47_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1412;
		}
	}
	var_106_bool = var_2_bool == 0; //@nz
	if(var_106_bool == 1) goto Label_1382;
	
}


func_1862(var_31_bool, var_32_int, var_33_int)
{
	var_34_int = 0; var_35_int = 0;
	irand(var_35_int, var_33_int);
	var_31_bool = var_35_int < var_32_int;
	return 2;
}


func_1867(var_79_float, var_80_cvector, var_81_cvector)
{
	var_82_int = var_80_cvector | var_81_cvector;
	var_83_int = var_80_cvector | var_80_cvector;
	var_84_int = var_81_cvector | var_81_cvector;
	var_85_float = var_83_int * var_84_int;
	var_86_float = sqrt(var_85_float);
	var_79_float = var_82_int / var_86_float;
	return 0;
}


func_2382()
{
	var_17_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_18_bool = 0;
	func_2306((bool)1);
	return 0;
}


func_335(var_101_float)
{
	var_102_float = 0; var_103_float = 0;
	GetCameraFarDistance(var_103_float);
	var_103_float = var_101_float;
	return 2;
}


func_1875(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_74_float = var_72_float * var_73_float;
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_77_float = var_75_float * var_76_float;
	var_69_float = var_74_float + var_77_float;
	return 0;
}


func_2390(var_28_object)
{
	var_29_bool = 0; var_30_bool = 0;
	var_31_bool = GlobalVars[0];
	if(var_31_bool != 0) {
		IsOverrideActive(var_30_bool);
		var_32_bool = var_30_bool == 0; //@nz
		if(var_32_bool != 0) {
			var_33_object = Obj();
			var_28_object = var_33_object;
			func_2293(var_33_object);
		}
		return 2;
	EMIT "GOTO 0x963";
	}
	return 2;
}


func_347(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1884(var_78_float, var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0);
	var_81_float = GetByIndex(var_79_cvector, 0);
	var_82_float = var_80_float * var_81_float;
	var_83_float = GetByIndex(var_79_cvector, 2);
	var_84_float = GetByIndex(var_79_cvector, 2);
	var_85_float = var_83_float * var_84_float;
	var_86_int = var_82_float + var_85_float;
	var_78_float = sqrt(var_86_int);
	return 0;
}


func_354(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_2404(var_61_bool)
{
	var_62_float = 0;
	func_2279(var_62_float);
	var_61_bool = var_62_float > (float)0.4000000059604645;
	return 0;
}


func_1894(var_66_float, var_67_cvector, var_68_cvector)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_67_cvector = var_70_cvector;
	var_68_cvector = var_71_cvector;
	func_1875(var_69_float, var_70_cvector, var_71_cvector);
	var_78_float = 0; var_79_cvector = CVector(0,0,0);
	var_67_cvector = var_79_cvector;
	func_1884(var_78_float, var_79_cvector);
	var_87_float = 0; var_88_cvector = CVector(0,0,0);
	var_68_cvector = var_88_cvector;
	func_1884(var_87_float, var_88_cvector);
	var_89_float = var_78_float * var_87_float;
	var_66_float = var_69_float / var_89_float;
	return 0;
}


func_361(var_111_bool)
{
	var_111_bool = 0;
	return 0;
}


func_2410(var_21_bool, var_22_object, var_23_object)
{
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_float = 0;
	var_22_object = var_26_object;
	var_23_object = var_27_object;
	func_2133(var_25_bool, var_26_object, var_27_object, (float)700.0);
	var_25_bool = var_21_bool;
	return 0;
}


func_363(var_105_object, var_106_cvector)
{
	var_107_object = Obj(); var_108_object = Obj();
	FindShiftedPathTo(var_108_object, var_106_cvector);
	var_108_object = var_105_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1911(var_66_int)
{
	var_67_float = 0; var_68_float = 0;
	GetGameTime(var_68_float);
	var_70_int = 0;
	var_70_int = var_68_float / (int)24;
	var_66_int = (int)1 + var_70_int;
	return 2;
}


func_894(var_71_object)
{
	Face(var_71_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_81_object = Obj();
	var_71_object = var_81_object;
	func_959(var_73_cvector, var_74_bool, var_71_object, var_81_object);
	return 0;
}


func_1928(var_20_bool, var_21_object, var_22_string)
{
	var_24_bool = var_22_string == "unholster";
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_2219(var_25_bool, var_26_object);
		var_25_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0x7a6";
	}
	var_30_bool = var_22_string == "player_shot";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_21_object = var_32_object;
		func_2232(var_31_bool, var_32_object);
		var_31_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0x7a6";
	}
	var_47_bool = var_22_string == "battle";
	if(var_47_bool != 0) {
		var_48_bool = 0; var_49_object = Obj();
		var_21_object = var_49_object;
		func_2255(var_48_bool, var_49_object);
		var_48_bool = var_20_bool;
		return 0;
	}
	var_20_bool = 0;
	return 0;
}


func_929(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_1852(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_1852(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_1960(var_54_object, var_55_string)
{
	var_57_bool = var_55_string == "unholster";
	if(var_57_bool != 0) {
		var_58_object = Obj();
		var_54_object = var_58_object;
		func_2224(var_58_object);
	} else {
		var_132_bool = var_55_string == "player_shot";
		if(var_132_bool != 0) {
			var_133_object = Obj();
			var_54_object = var_133_object;
			func_2247(var_133_object);
			goto Label_1984;
		}
		var_200_bool = var_55_string == "battle";
		if(var_200_bool == 0) goto Label_1984;
		var_201_object = Obj();
		var_54_object = var_201_object;
		func_2262(var_201_object);
	}
Label_1984:
	return 0;
	
}


func_1465(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_959(var_0_bool, var_1_bool, var_2_bool, var_81_object)
{
	var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0;
	var_0_bool = var_81_object;
	var_92_cvector = CVector(0,0,0); var_93_float = 0;
	func_929(var_91_float, var_92_cvector, (float)1.7453293800354004);
	var_92_cvector = var_87_cvector;
	var_88_float = var_87_cvector | var_87_cvector;
	var_123_bool = var_88_float < (float)2500.0;
	if(var_123_bool != 0) {
		var_124_cvector = CVector(0,0,0); var_125_float = 0;
		func_929(var_91_float, var_124_cvector, (float)2.6179938316345215);
		var_124_cvector = var_87_cvector;
		var_88_float = var_87_cvector | var_87_cvector;
		var_127_bool = var_88_float < (float)2500.0;
		if(var_127_bool != 0) {
			var_129_float = sqrt(var_88_float);
			var_130_int = "Can't retreat, distance: " + var_129_float;
			Trace(var_130_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_132_float = GetByIndex(var_87_cvector, 0);
	var_133_float = GetByIndex(var_87_cvector, 2);
	Rotate(var_132_float, var_133_float);
	var_134_cvector = CVector(0,0,0);
	func_1691(var_134_cvector);
	var_1_bool = var_134_cvector + var_87_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1001:
	MovePoint(var_1_bool, (int)1, var_89_bool);
	var_140_bool = var_89_bool;
	if(var_140_bool != 0) {
		var_141_bool = var_0_bool == 0; //@ne
		if(var_141_bool != 0) {
			goto Label_1031;
		EMIT "GOTO 0x405";

		Label_1031:
			return 10;
		}
		var_142_cvector = CVector(0,0,0); var_143_float = 0;
		func_929(var_91_float, var_142_cvector, (float)2.6179938316345215);
		var_142_cvector = var_90_cvector;
		var_91_float = var_90_cvector | var_90_cvector;
		var_145_bool = var_91_float >= (float)2500.0;
		if(var_145_bool != 0) {
			var_146_cvector = CVector(0,0,0);
			func_1691(var_146_cvector);
			var_1_bool = var_146_cvector + var_90_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1031;
		}
	}
	var_149_bool = var_2_bool == 0; //@nz
	if(var_149_bool == 1) goto Label_1001;
	
}


func_1985(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	var_21_bool = 0;
	var_21_bool = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_2219(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_18_object = var_27_object;
		func_1711(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		@@var_18_object:IsWeaponHolstered(var_20_bool);
		var_30_bool = var_20_bool == 0; //@nz
		if(var_30_bool != 0) {
			var_17_bool = 1;
			return 2;
		}
	}
	var_17_bool = 0;
	return 2;
}


func_1481(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_1696(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1867(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_2008(var_33_object)
{
	var_34_object = Obj();
	var_33_object = var_34_object;
	func_2224(var_34_object);
	return 0;
}


func_2014(var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_1711(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		var_24_object = Obj();
		func_1846(var_24_object);
		ReportReputationChange(var_19_object, var_24_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_1504(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_1852(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_1852(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_2027(var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	var_22_bool = var_18_string == "heal";
	if(var_22_bool != 0) {
		FindActor(var_20_object, "player");
		var_24_bool = 0; var_25_object = Obj();
		var_20_object = var_25_object;
		func_2268(var_25_object);
		var_24_bool = var_17_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_17_bool = 0;
	return 2;
}


func_2043(var_28_string)
{
	var_29_object = Obj(); var_30_object = Obj();
	var_32_bool = var_28_string == "heal";
	if(var_32_bool != 0) {
		FindActor(var_30_object, "player");
		var_30_object = Obj();
		func_2271();
		var_30_object = 0;
	}
	return 2;
}


func_1534(var_0_bool, var_1_bool, var_2_bool, var_134_object)
{
	var_138_cvector = CVector(0,0,0); var_139_float = 0; var_140_bool = 0; var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_bool = 0; var_146_cvector = CVector(0,0,0); var_147_float = 0;
	var_0_bool = var_134_object;
	var_148_cvector = CVector(0,0,0); var_149_float = 0;
	func_1504(var_147_float, var_148_cvector, (float)1.7453293800354004);
	var_148_cvector = var_143_cvector;
	var_144_float = var_143_cvector | var_143_cvector;
	var_174_bool = var_144_float < (float)2500.0;
	if(var_174_bool != 0) {
		var_175_cvector = CVector(0,0,0); var_176_float = 0;
		func_1504(var_147_float, var_175_cvector, (float)2.6179938316345215);
		var_175_cvector = var_143_cvector;
		var_144_float = var_143_cvector | var_143_cvector;
		var_178_bool = var_144_float < (float)2500.0;
		if(var_178_bool != 0) {
			var_180_float = sqrt(var_144_float);
			var_181_int = "Can't retreat, distance: " + var_180_float;
			Trace(var_181_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_183_float = GetByIndex(var_143_cvector, 0);
	var_184_float = GetByIndex(var_143_cvector, 2);
	Rotate(var_183_float, var_184_float);
	var_185_cvector = CVector(0,0,0);
	func_1691(var_185_cvector);
	var_1_bool = var_185_cvector + var_143_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1576:
	MovePoint(var_1_bool, (int)1, var_145_bool);
	var_189_bool = var_145_bool;
	if(var_189_bool != 0) {
		var_190_bool = var_0_bool == 0; //@ne
		if(var_190_bool != 0) {
			goto Label_1606;
		EMIT "GOTO 0x644";

		Label_1606:
			return 10;
		}
		var_191_cvector = CVector(0,0,0); var_192_float = 0;
		func_1504(var_147_float, var_191_cvector, (float)2.6179938316345215);
		var_191_cvector = var_146_cvector;
		var_147_float = var_146_cvector | var_146_cvector;
		var_194_bool = var_147_float >= (float)2500.0;
		if(var_194_bool != 0) {
			var_195_cvector = CVector(0,0,0);
			func_1691(var_195_cvector);
			var_1_bool = var_195_cvector + var_146_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1606;
		}
	}
	var_198_bool = var_2_bool == 0; //@nz
	if(var_198_bool == 1) goto Label_1576;
	
}


