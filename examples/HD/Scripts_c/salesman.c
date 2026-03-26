// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,Hold/0,StopGroup0/0,Trace/1,GetProperty/2,ClearSubContainer/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,LookAsync/3,lshStopSpeech/0,AddItem/3,AddItem/4,self/1,GetGameTime/1,GetVariable/2,HasAnimation/3
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:Updating salesman|W:clothes|W:weapon|W:food|W:medcine|W:other|W:rep_threshold|W:player|W:head|A:GetPosition|W:HasProperty|A:HasProperty|A:GetEyesHeight|W:Can't find lsh animation : |A:AddItem|W:drapery|W:halfboot_repel|W:glove_disp|W:glove|W:cloak_repel|W:mask|W:raincoat_repel|W:glove_army|W:boot_army|W:balahon|W:tourniquet|W:alpha_pills|W:meradorm|W:neomicin|W:novocaine|W:gamma_pills|W:beta_pills|W:packet|W:morfin|W:Scalpel|W:monomicin|W:etorfin|W:feromicin|W:delta_pills|W:lemon|W:rusk|W:dried_fish|W:smoked_meat|W:bread|W:egg|W:vegetables|W:milk|W:dried_meat|W:fresh_fish|W:fresh_meat|W:funduk|W:peanut|W:walnut|W:hook|W:needle|W:kerosene|W:rifle_ammo|W:branch|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:reputation|A:GetProperty
// @RUN_OP: 0x103
// @RUN_TASK: 3
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc2 vars=int,int
// @TASK_3: vars=int,int,bool,bool,object,bool,bool,bool,bool,bool,float,int params=0
// @EVENT_6: op=0x117 vars=
// @EVENT_5: op=0x11d vars=
// @EVENT_0: op=0x120 vars=object
// @EVENT_7: op=0x20e vars=int
// @PE: 0x0,0x1a,0x72,0xac,0xc2,0x117,0x120,0x1e4,0x20e,0x225,0x2f9,0x331,0x3ca,0x3fd,0x400,0x55b

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_float, var_18_int)
{
	var_19_bool = 0;
	func_1454(var_19_bool);
	if(var_19_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_int, var_9_int, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_bool, var_18_float, var_19_int)
{
	if((int)1 != 0) {
		func_864();
		var_23_bool = var_18_float == (int)21712;
		if(var_23_bool != 0) {
			var_24_string = "";
			func_172(var_19_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520509);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)524384, (int)25709, (int)25708);
			@@@var_0_bool:AddReply((int)520510, (int)-1, (int)21713);
			return 0;
		}
		var_49_bool = var_18_float == (int)25709;
		if(var_49_bool != 0) {
			var_50_string = "";
			func_172(var_19_int, "Neutral");
			@@@var_0_bool:SetMessage((int)524385);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)524387, (int)-1, (int)25711);
			@@@var_0_bool:AddReply((int)524386, (int)-1, (int)25710);
			return 0;
		}
		var_3_object = true;
		var_58_bool = 0;
		func_1454(var_58_bool);
		if(var_58_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc3";
	
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int)
{
	func_549(var_16_float, var_17_int);
	Hold();
	return 0;
}


task_3_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int)
{
	StopGroup0();
	return 0;
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int, var_18_object)
{
	var_19_float = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_1456(var_19_float, var_20_object);
	var_24_bool = var_10_object > var_19_float;
	if(var_24_bool != 0) {
		var_25_int = 0; var_26_object = Obj();
		var_18_object = var_26_object;
		TaskCall(1);
		func_40(var_27_object, var_25_int, var_26_object);
		TaskReturn();
		return 0;
	}
	var_155_int = 0;
	func_961(var_155_int);
	var_161_bool = var_11_bool != var_155_int;
	if(var_161_bool != 0) {
		Trace("Updating salesman");
		var_163_int = 0;
		func_961(var_163_int);
		var_11_bool = var_163_int;
		func_420();
	}
	var_479_bool = 0; var_480_object = Obj();
	var_18_object = var_480_object;
	func_761(var_479_bool, var_480_object);
	if(var_479_bool != 0) {
		var_511_object = Obj();
		var_18_object = var_511_object;
		TaskCall(0);
		func_0(var_511_object);
		TaskReturn();
		var_18_object = Obj();
		func_817();
	}
	return 0;
}


task_3_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int, var_18_int)
{
	var_20_bool = var_18_int == (int)10;
	if(var_20_bool != 0) {
		var_21_bool = 0;
		func_511(var_16_float, var_17_int, var_18_int, var_21_bool);
		if(var_21_bool != 0) {
			var_34_bool = var_2_object == 0; //@nz
			if(var_34_bool != 0) {
				var_35_object = Obj();
				var_35_object = var_4_string;
				func_853(var_35_object);
				var_2_object = true;
			}
		} else {
			var_42_object = var_2_object;
			if(var_42_object == 0) goto Label_548;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_548:
	return 0;
	
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int)
{
	var_11_bool = -1;
	func_333(var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int);
	var_73_bool = 0;
	func_669(var_73_bool);
	var_76_bool = var_73_bool == 0; //@nz
	if(var_76_bool != 0) {
		Hold();
	}
Label_270:
	if((bool)1 != 0) {
		var_78_float = 0; var_79_float = 0;
		func_484(var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int, (float)300, (float)100);
		goto Label_270;
	}
	return 0;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_513_bool = 0;
	func_1454(var_513_bool);
	if(var_513_bool != 0) {
		var_514_string = "";
		func_822("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_515_bool = var_0_bool;
	if(var_515_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_769(var_481_bool, var_482_object, var_483_float)
{
	var_484_float = 0; var_485_cvector = CVector(0,0,0); var_486_cvector = CVector(0,0,0); var_487_cvector = CVector(0,0,0); var_488_cvector = CVector(0,0,0); var_489_cvector = CVector(0,0,0); var_490_cvector = CVector(0,0,0); var_491_bool = 0; var_492_float = 0; var_493_cvector = CVector(0,0,0); var_494_cvector = CVector(0,0,0); var_495_cvector = CVector(0,0,0); var_496_cvector = CVector(0,0,0); var_497_cvector = CVector(0,0,0); var_498_cvector = CVector(0,0,0); var_499_bool = 0;
	@@var_482_object:GetPosition(var_493_cvector);
	@@var_482_object:GetEyesHeight(var_492_float);
	var_500_float = GetByIndex(var_493_cvector, 1);
	var_500_float = var_500_float + var_492_float;
	SetByIndex(var_493_cvector, 1) = var_500_float;
	GetPosition(var_494_cvector);
	GetEyesHeight(var_492_float);
	var_501_float = GetByIndex(var_494_cvector, 1);
	var_501_float = var_501_float + var_492_float;
	SetByIndex(var_494_cvector, 1) = var_501_float;
	var_495_cvector = var_493_cvector - var_494_cvector;
	var_502_float = GetByIndex(var_495_cvector, 1);
	SetByIndex(var_495_cvector, 1) = (float)0;
	var_503_int = var_495_cvector | var_495_cvector;
	var_504_float = sqrt(var_503_int);
	var_495_cvector = var_495_cvector / var_504_float;
	var_496_cvector = -var_495_cvector;
	var_505_float = var_495_cvector * var_483_float;
	var_497_cvector = var_505_float - CVector(0.0, 10.0, 0.0);
	var_498_cvector = var_494_cvector + var_497_cvector;
	IsOverrideActive(var_499_bool);
	var_507_bool = var_499_bool;
	if(var_507_bool != 0) {
		var_481_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_498_cvector, var_496_cvector, (bool)1);
	var_509_float = GetByIndex(var_497_cvector, 0);
	var_510_float = GetByIndex(var_497_cvector, 2);
	Rotate(var_509_float, var_510_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_481_bool = 1;
	return 16;
}


func_642(var_126_bool)
{
	var_126_bool = 1;
	return 0;
}


func_1024(var_183_bool, var_185_int)
{
	var_186_string = ""; var_187_int = 0; var_188_int = 0;
	func_897("drapery", (int)1, (int)2);
	var_198_bool = var_185_int >= (int)2;
	if(var_198_bool != 0) {
		var_199_string = ""; var_200_int = 0; var_201_int = 0;
		func_897("halfboot_repel", (int)1, (int)3);
		var_202_string = ""; var_203_int = 0; var_204_int = 0;
		func_897("glove_disp", (int)1, (int)3);
		var_205_string = ""; var_206_int = 0; var_207_int = 0;
		func_897("drapery", (int)1, (int)3);
	}
	var_209_bool = var_185_int >= (int)4;
	if(var_209_bool != 0) {
		var_210_string = ""; var_211_int = 0; var_212_int = 0;
		func_897("glove", (int)1, (int)4);
		var_213_string = ""; var_214_int = 0; var_215_int = 0;
		func_897("cloak_repel", (int)1, (int)4);
	}
	var_217_bool = var_185_int >= (int)5;
	if(var_217_bool != 0) {
		var_218_string = ""; var_219_int = 0; var_220_int = 0;
		func_897("mask", (int)1, (int)8);
		var_221_string = ""; var_222_int = 0; var_223_int = 0;
		func_897("boot_repel", (int)1, (int)4);
	}
	var_225_bool = var_185_int >= (int)7;
	if(var_225_bool != 0) {
		var_226_string = ""; var_227_int = 0; var_228_int = 0;
		func_897("raincoat_repel", (int)1, (int)4);
	}
	var_230_bool = var_185_int >= (int)9;
	if(var_230_bool != 0) {
		var_231_string = ""; var_232_int = 0; var_233_int = 0;
		func_897("glove_army", (int)1, (int)5);
		var_234_string = ""; var_235_int = 0; var_236_int = 0;
		func_897("boot_army", (int)1, (int)5);
	}
	var_238_bool = var_185_int >= (int)10;
	if(var_238_bool != 0) {
		var_239_string = ""; var_240_int = 0; var_241_int = 0;
		func_897("balahon", (int)1, (int)9);
	}
	var_183_bool = 1;
	return 0;
}


func_644()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_897(var_186_string, var_187_int, var_188_int)
{
	var_189_bool = 0; var_190_bool = 0;
	var_191_bool = 0; var_192_int = 0; var_193_int = 0;
	var_187_int = var_192_int;
	var_188_int = var_193_int;
	func_956(var_191_bool, var_192_int, var_193_int);
	if(var_191_bool != 0) {
		AddItem(var_190_bool, var_186_string, (int)0);
	}
	return 2;
}


func_649(var_25_float, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0);
	GetPosition(var_30_cvector);
	@@var_26_object:GetPosition(var_31_cvector);
	var_32_cvector = var_31_cvector - var_30_cvector;
	var_25_float = var_32_cvector | var_32_cvector;
	return 6;
}


func_908(var_358_string, var_359_int, var_360_int, var_361_int)
{
	var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_bool = 0;
	var_366_bool = 0; var_367_int = 0; var_368_int = 0;
	var_359_int = var_367_int;
	var_360_int = var_368_int;
	func_956(var_366_bool, var_367_int, var_368_int);
	if(var_366_bool != 0) {
		irand(var_364_int, var_361_int);
		var_371_int = var_364_int + (int)1;
		AddItem(var_365_bool, var_358_string, (int)0, var_371_int);
	}
	return 4;
}


func_1422(var_107_string, var_108_int)
{
	var_109_string = ""; var_110_string = "";
	var_111_int = var_108_int;
	if(var_111_int != 0) {
		"idle" = "idle" + var_108_int;
	}
	var_110_string = var_107_string;
	return 2;
}


func_657(var_30_bool, var_31_object, var_32_string)
{
	var_36_bool = 0; var_37_bool = 0;
	var_40_bool = IsFuncExist(var_31_object, "HasProperty", (int)2);
	var_41_bool = var_40_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_30_bool = 0;
		return 2;
	}
	@@var_31_object:HasProperty(var_32_string, var_37_bool);
	var_37_bool = var_30_bool;
	return 2;
}


func_1429(var_101_int)
{
	var_102_int = 0; var_103_bool = 0; var_104_int = 0; var_105_bool = 0;
	var_104_int = 0;
	
Label_1431:
	var_107_string = ""; var_108_int = 0;
	var_104_int = var_108_int;
	func_1422(var_107_string, var_108_int);
	HasAnimation(var_105_bool, "all", var_107_string);
	var_112_bool = var_105_bool == 0; //@nz
	if(var_112_bool != 0) {
	} else {
		var_104_int = var_104_int + (int)1;
		goto Label_1431;
	}
	var_104_int = var_101_int;
	return 4;
	
}


func_923(var_432_string, var_433_int, var_434_int, var_435_int, var_436_int)
{
	var_437_int = 0; var_438_bool = 0; var_439_int = 0; var_440_bool = 0;
	var_441_bool = 0; var_442_int = 0; var_443_int = 0;
	var_433_int = var_442_int;
	var_434_int = var_443_int;
	func_956(var_441_bool, var_442_int, var_443_int);
	if(var_441_bool != 0) {
		var_444_int = var_436_int - var_435_int;
		var_446_int = var_444_int + (int)1;
		irand(var_439_int, var_446_int);
		var_448_int = var_439_int + var_435_int;
		AddItem(var_440_bool, var_432_string, (int)0, var_448_int);
	}
	return 4;
}


func_669(var_73_bool)
{
	var_74_bool = 0; var_75_bool = 0;
	IsLoaded(var_75_bool);
	var_75_bool = var_73_bool;
	return 2;
}


func_1405(var_88_int)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable("branch", var_90_int);
	var_93_bool = var_90_int == (int)0;
	if(var_93_bool != 0) {
		var_88_int = 1;
		return 2;
	EMIT "GOTO 0x58c";
	}
	var_95_bool = var_90_int == (int)1;
	if(var_95_bool != 0) {
		var_88_int = 2;
		return 2;
	}
	var_88_int = 3;
	return 2;
}


func_674(var_36_bool, var_37_object, var_38_float)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0;
	@@var_37_object:GetPosition(var_49_cvector);
	@@var_37_object:GetEyesHeight(var_48_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	var_57_float = var_57_float + var_48_float;
	SetByIndex(var_49_cvector, 1) = var_57_float;
	GetPosition(var_50_cvector);
	GetEyesHeight(var_48_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_48_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	var_51_cvector = var_49_cvector - var_50_cvector;
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (float)0;
	var_60_int = var_51_cvector | var_51_cvector;
	var_61_float = sqrt(var_60_int);
	var_51_cvector = var_51_cvector / var_61_float;
	var_52_cvector = -var_51_cvector;
	var_62_float = var_51_cvector * var_38_float;
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	var_64_cvector = var_52_cvector ^ CVector(0.0, 1.0, 0.0);
	func_946(var_63_cvector, var_64_cvector);
	var_72_float = var_63_cvector * (int)25;
	var_73_int = var_62_float + var_72_float;
	var_53_cvector = var_73_int - CVector(0.0, 10.0, 0.0);
	var_54_cvector = var_50_cvector + var_53_cvector;
	IsOverrideActive(var_55_bool);
	var_75_bool = var_55_bool;
	if(var_75_bool != 0) {
		var_36_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_54_cvector, var_52_cvector, (bool)1);
	var_77_float = GetByIndex(var_53_cvector, 0);
	var_78_float = GetByIndex(var_53_cvector, 2);
	Rotate(var_77_float, var_78_float);
	var_79_bool = 0;
	func_1454(var_79_bool);
	if(var_79_bool != 0) {
	} else {
		HasAnimationTrack(var_56_bool, "head");
		var_81_bool = var_56_bool;
		if(var_81_bool == 0) goto Label_737;
		LookAsyncCamera("head");
	}
Label_737:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_36_bool = 1;
	return 18;
	
}


func_420()
{
	var_164_int = 0; var_165_int = 0;
	func_961((int)0);
	var_166_int = var_165_int;
	ClearSubContainer((int)0);
	var_168_bool = var_5_bool;
	if(var_168_bool != 0) {
		var_169_bool = 0; var_170_object = Obj(); var_171_int = 0; var_172_int = 0;
		func_940(Obj());
		var_173_object = var_170_object;
		var_165_int = var_171_int;
		func_970(var_169_bool, var_170_object, var_171_int, (int)1);
	}
	var_455_int = var_6_int;
	if(var_455_int != 0) {
		var_456_bool = 0; var_457_object = Obj(); var_458_int = 0; var_459_int = 0;
		func_940(Obj());
		var_460_object = var_457_object;
		var_165_int = var_458_int;
		func_970(var_456_bool, var_457_object, var_458_int, (int)0);
	}
	var_461_int = var_7_int;
	if(var_461_int != 0) {
		var_462_bool = 0; var_463_object = Obj(); var_464_int = 0; var_465_int = 0;
		func_940(Obj());
		var_466_object = var_463_object;
		var_165_int = var_464_int;
		func_970(var_462_bool, var_463_object, var_464_int, (int)3);
	}
	var_467_bool = var_8_bool;
	if(var_467_bool != 0) {
		var_468_bool = 0; var_469_object = Obj(); var_470_int = 0; var_471_int = 0;
		func_940(Obj());
		var_472_object = var_469_object;
		var_165_int = var_470_int;
		func_970(var_468_bool, var_469_object, var_470_int, (int)2);
	}
	var_473_bool = var_9_bool;
	if(var_473_bool != 0) {
		var_474_bool = 0; var_475_object = Obj(); var_476_int = 0; var_477_int = 0;
		func_940(Obj());
		var_478_object = var_475_object;
		var_165_int = var_476_int;
		func_970(var_474_bool, var_475_object, var_476_int, (int)4);
	}
	return 2;
}


func_549(var_2_object, var_3_object)
{
	func_644();
	KillTimer((int)10);
	var_19_object = var_2_object;
	if(var_19_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_object = true;
	return 0;
}


func_1446(var_85_int)
{
	var_85_int = 531557;
	return 0;
}


func_1448(var_84_int)
{
	var_84_int = 531556;
	return 0;
}


func_40(var_0_bool, var_25_int, var_26_object)
{
	var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_0_bool = var_26_object;
	var_36_bool = 0; var_37_object = Obj(); var_38_float = 0;
	var_26_object = var_37_object;
	func_674(var_36_bool, var_37_object, (float)70.0);
	var_83_bool = var_36_bool == 0; //@nz
	if(var_83_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	CreateDialog(var_32_object);
	var_84_int = 0;
	func_1448(var_84_int);
	@@var_32_object:SetNPCName(var_84_int);
	var_85_int = 0;
	func_1446(var_85_int);
	@@var_32_object:SetNPCDescription(var_85_int);
	var_86_string = "";
	func_1450(var_86_string);
	@@var_32_object:SetPhoto(var_86_string);
	var_87_string = "";
	func_1452(var_87_string);
	@@var_32_object:SetPhoto2(var_87_string);
	var_88_int = 0;
	func_1405(var_88_int);
	@@var_32_object:SetPlayerName(var_88_int);
	IsOverrideActive(var_33_bool);
	var_96_bool = var_33_bool;
	if(var_96_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	DoDialog(var_32_object);
	var_97_object = Obj(); var_98_object = Obj();
	var_26_object = var_97_object;
	var_32_object = var_98_object;
	TaskCall(2);
	func_114(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object);
	TaskReturn();
	@@var_32_object:IsDialogEnd(var_35_bool);
	
Label_96:
	var_146_bool = var_35_bool == 0; //@nz
	if(var_146_bool != 0) {
		sync();
		@@var_32_object:IsDialogEnd(var_35_bool);
		goto Label_96;
	}
	var_26_object = Obj();
	func_743();
	StopDialog(var_32_object);
	@@var_32_object:GetReturnValue((int)-1);
	var_34_int = var_25_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1450(var_86_string)
{
	var_86_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_1452(var_87_string)
{
	var_87_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_172(var_2_object, var_104_string)
{
	var_105_bool = 0;
	func_1454(var_105_bool);
	var_106_bool = var_105_bool == 0; //@nz
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_bool = var_104_string == var_2_object;
	if(var_107_bool != 0) {
		return 0;
	}
	var_108_string = ""; var_109_bool = 0;
	var_104_string = var_108_string;
	var_111_bool = var_104_string == "";
	if(var_111_bool != 0) {
		var_109_bool = 0;
	} else {
		var_109_bool = 1;
	}
	func_838(var_108_string, var_109_bool);
	var_2_object = var_104_string;
	return 0;
	
}


func_1454(var_79_bool)
{
	var_79_bool = 0;
	return 0;
}


func_940(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj();
	self(var_35_object);
	var_35_object = var_33_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1456(var_19_float, var_20_object)
{
	var_21_float = 0; var_22_float = 0;
	@@var_20_object:GetProperty("reputation", var_22_float);
	var_22_float = var_19_float;
	return 2;
}


func_817()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_946(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0;
	var_68_int = var_64_cvector | var_64_cvector;
	var_67_float = sqrt(var_68_int);
	var_69_float = 9.999999974752427e-07;
	var_70_bool = var_67_float < var_69_float;
	if(var_70_bool != 0) {
		var_63_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_63_cvector = var_64_cvector / var_67_float;
	return 2;
}


func_563()
{
	var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_int = 0; var_89_bool = 0; var_90_float = 0; var_91_bool = 0; var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_bool = 0;
	WaitForAnimEnd();
	var_99_bool = 0;
	func_669(var_99_bool);
	var_100_bool = var_99_bool == 0; //@nz
	if(var_100_bool != 0) {
		return 14;
	}
	func_1429((int)0);
	var_101_int = var_92_int;
	var_93_int = 0;
	
Label_577:
	var_114_bool = 0;
	var_114_bool = 0;
	var_116_bool = var_93_int < (int)5;
	if(var_116_bool != 0) {
		var_117_bool = 0;
		func_669(var_117_bool);
		if(var_117_bool != 0) {
			var_114_bool = 1;
		}
	}
	if(var_114_bool != 0) {
		irand(var_94_int, (int)3);
		var_120_bool = var_94_int == (int)0;
		if(var_120_bool != 0) {
			var_121_int = var_92_int;
			if(var_121_int == 0) goto Label_610;
			irand(var_95_int, var_92_int);
			var_123_string = ""; var_124_int = 0;
			var_95_int = var_124_int;
			func_1422(var_123_string, var_124_int);
			PlayAnimation("all", var_123_string);
			WaitForAnimEnd(var_96_bool);
			var_125_bool = var_96_bool == 0; //@nz
			if(var_125_bool != 0) {
			} else {
		} else {
				var_130_bool = var_94_int == (int)1;
				if(var_130_bool != 0) {
					rand(var_97_float, (int)4);
					var_133_int = var_97_float + (int)1;
					Sleep(var_133_int, var_98_bool);
					var_134_bool = var_98_bool == 0; //@nz
					if(var_134_bool != 0) {
						goto Label_639;
					}
					goto Label_628;
				}
				var_135_int = var_93_int;
				if(var_135_int == 0) goto Label_628;
				goto Label_639;
		}
		Label_628:
			var_126_bool = 0;
			func_642(var_126_bool);
			var_127_bool = var_126_bool == 0; //@nz
			if(var_127_bool != 0) {
				goto Label_639;
			}
			ResetAAS();
			var_93_int = var_93_int + (int)1;
			goto Label_577;

		}
	}
Label_639:
	ResetAAS();
	return 14;
	
}


func_822(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0;
	lshHasAnimation(var_134_bool, var_130_string);
	var_137_bool = var_134_bool;
	if(var_137_bool != 0) {
		lshGetAnimTimes(var_130_string, var_135_float, var_136_float);
		lshPlayAnimation(var_135_float, var_136_float, (bool)0);
	} else {
		var_140_int = "Can't find lsh animation : " + var_130_string;
		Trace(var_140_int);
	}
	return 6;
	
}


func_956(var_191_bool, var_192_int, var_193_int)
{
	var_194_int = 0; var_195_int = 0;
	irand(var_195_int, var_193_int);
	var_191_bool = var_195_int < var_192_int;
	return 2;
}


func_961(var_155_int)
{
	var_156_float = 0; var_157_float = 0;
	GetGameTime(var_157_float);
	var_159_int = 0;
	var_159_int = var_157_float / (int)24;
	var_155_int = (int)1 + var_159_int;
	return 2;
}


func_838(var_108_string, var_109_bool)
{
	var_112_bool = 0; var_113_float = 0; var_114_float = 0; var_115_bool = 0; var_116_float = 0; var_117_float = 0;
	lshHasAnimation(var_115_bool, var_108_string);
	var_118_bool = var_115_bool;
	if(var_118_bool != 0) {
		lshGetAnimTimes(var_108_string, var_116_float, var_117_float);
		lshPlayAnimation(var_116_float, var_117_float, var_109_bool);
	} else {
		var_120_int = "Can't find lsh animation : " + var_108_string;
		Trace(var_120_int);
	}
	return 6;
	
}


func_970(var_169_bool, var_170_object, var_171_int, var_172_int)
{
	var_177_bool = var_172_int == (int)0;
	if(var_177_bool != 0) {
		var_178_bool = 0; var_179_object = Obj(); var_180_int = 0;
		var_170_object = var_179_object;
		var_171_int = var_180_int;
		func_1021(var_180_int);
		var_178_bool = var_169_bool;
		return 0;
	EMIT "GOTO 0x3f6";
	}
	var_182_bool = var_172_int == (int)1;
	if(var_182_bool != 0) {
		var_183_bool = 0; var_184_object = Obj(); var_185_int = 0;
		var_170_object = var_184_object;
		var_171_int = var_185_int;
		func_1024(var_184_object, var_185_int);
		var_183_bool = var_169_bool;
		return 0;
	EMIT "GOTO 0x3f6";
	}
	var_243_bool = var_172_int == (int)2;
	if(var_243_bool != 0) {
		var_244_bool = 0; var_245_object = Obj(); var_246_int = 0;
		var_170_object = var_245_object;
		var_171_int = var_246_int;
		func_1117(var_244_bool, var_245_object, var_246_int);
		var_244_bool = var_169_bool;
		return 0;
	EMIT "GOTO 0x3f6";
	}
	var_338_bool = var_172_int == (int)3;
	if(var_338_bool != 0) {
		var_339_bool = 0; var_340_object = Obj(); var_341_int = 0;
		var_170_object = var_340_object;
		var_171_int = var_341_int;
		func_1238(var_340_object, var_341_int);
		var_339_bool = var_169_bool;
		return 0;
	}
	var_422_bool = 0; var_423_object = Obj(); var_424_int = 0;
	var_170_object = var_423_object;
	var_171_int = var_424_int;
	func_1371(var_423_object, var_424_int);
	var_422_bool = var_169_bool;
	return 0;
}


func_333(var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object)
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_float = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_float = 0;
	var_30_bool = 0; var_31_object = Obj(); var_32_string = "";
	func_940(Obj());
	var_33_object = var_31_object;
	func_657(var_30_bool, var_31_object, "clothes");
	if(var_30_bool != 0) {
		GetProperty("clothes", var_24_int);
	}
	var_43_bool = 0; var_44_object = Obj(); var_45_string = "";
	func_940(Obj());
	var_46_object = var_44_object;
	func_657(var_43_bool, var_44_object, "weapon");
	if(var_43_bool != 0) {
		GetProperty("weapon", var_25_int);
	}
	var_48_bool = 0; var_49_object = Obj(); var_50_string = "";
	func_940(Obj());
	var_51_object = var_49_object;
	func_657(var_48_bool, var_49_object, "food");
	if(var_48_bool != 0) {
		GetProperty("food", var_26_int);
	}
	var_53_bool = 0; var_54_object = Obj(); var_55_string = "";
	func_940(Obj());
	var_56_object = var_54_object;
	func_657(var_53_bool, var_54_object, "medcine");
	if(var_53_bool != 0) {
		GetProperty("medcine", var_27_int);
	}
	var_58_bool = 0; var_59_object = Obj(); var_60_string = "";
	func_940(Obj());
	var_61_object = var_59_object;
	func_657(var_58_bool, var_59_object, "other");
	if(var_58_bool != 0) {
		GetProperty("other", var_28_int);
	}
	var_63_bool = 0; var_64_object = Obj(); var_65_string = "";
	func_940(Obj());
	var_66_object = var_64_object;
	func_657(var_63_bool, var_64_object, "rep_threshold");
	if(var_63_bool != 0) {
		GetProperty("rep_threshold", var_29_float);
	} else {
		var_29_float = 0.33000001311302185;
	}
	var_5_bool = var_24_int != (int)0;
	var_6_int = var_25_int != (int)0;
	var_7_int = var_26_int != (int)0;
	var_8_bool = var_27_int != (int)0;
	var_9_bool = var_28_int != (int)0;
	var_10_object = var_29_float;
	return 12;
	
}


func_853(var_35_object)
{
	var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0);
	@@var_35_object:GetEyesHeight(var_38_float);
	var_39_cvector = CVector(0.0, 0.0, 0.0);
	var_40_float = GetByIndex(var_39_cvector, 1);
	var_38_float = var_40_float;
	SetByIndex(var_39_cvector, 1) = var_40_float;
	LookAsync(var_35_object, "head", var_39_cvector);
	return 4;
}


func_1238(var_339_bool, var_341_int)
{
	var_342_bool = 0; var_343_int = 0; var_344_int = 0; var_345_bool = 0; var_346_int = 0; var_347_int = 0;
	var_349_bool = var_341_int < (int)3;
	if(var_349_bool != 0) {
		var_347_int = 2;
	} else {
			var_417_bool = var_341_int < (int)5;
			if(var_417_bool != 0) {
				var_347_int = 3;
				goto Label_1260;
			}
			var_419_bool = var_341_int < (int)7;
			if(var_419_bool != 0) {
				var_347_int = 3;
				goto Label_1260;
			}
			var_421_bool = var_341_int < (int)7;
			if(var_421_bool != 0) {
				var_347_int = 4;
				goto Label_1260;
			}
			var_347_int = 5;
	}
Label_1260:
	var_350_string = ""; var_351_int = 0; var_352_int = 0;
	var_347_int = var_352_int;
	func_897("lemon", (int)1, var_352_int);
	var_353_string = ""; var_354_int = 0; var_355_int = 0;
	var_347_int = var_355_int;
	func_897("rusk", (int)1, var_355_int);
	var_357_bool = var_341_int == (int)2;
	if(var_357_bool != 0) {
		var_358_string = ""; var_359_int = 0; var_360_int = 0; var_361_int = 0;
		func_908("dried_fish", (int)1, (int)1, (int)2);
		var_372_string = ""; var_373_int = 0; var_374_int = 0; var_375_int = 0;
		func_908("smoked_meat", (int)1, (int)1, (int)2);
		var_376_string = ""; var_377_int = 0; var_378_int = 0; var_379_int = 0;
		func_908("bread", (int)1, (int)1, (int)2);
	} else {
		var_407_string = ""; var_408_int = 0; var_409_int = 0;
		var_347_int = var_409_int;
		func_897("dried_fish", (int)1, var_409_int);
		var_410_string = ""; var_411_int = 0; var_412_int = 0;
		var_347_int = var_412_int;
		func_897("smoked_meat", (int)1, var_412_int);
		var_413_string = ""; var_414_int = 0; var_415_int = 0;
		var_347_int = var_415_int;
		func_897("bread", (int)1, var_415_int);

	}
	var_380_string = ""; var_381_int = 0; var_382_int = 0;
	var_347_int = var_382_int;
	func_897("egg", (int)1, var_382_int);
	var_383_string = ""; var_384_int = 0; var_385_int = 0;
	var_347_int = var_385_int;
	func_897("vegetables", (int)1, var_385_int);
	var_386_string = ""; var_387_int = 0; var_388_int = 0;
	var_347_int = var_388_int;
	func_897("milk", (int)1, var_388_int);
	var_389_string = ""; var_390_int = 0; var_391_int = 0;
	var_347_int = var_391_int;
	func_897("dried_meat", (int)1, var_391_int);
	var_392_string = ""; var_393_int = 0; var_394_int = 0;
	var_347_int = var_394_int;
	func_897("fresh_fish", (int)1, var_394_int);
	var_395_string = ""; var_396_int = 0; var_397_int = 0;
	var_347_int = var_397_int;
	func_897("fresh_meat", (int)1, var_397_int);
	var_398_string = ""; var_399_int = 0; var_400_int = 0;
	func_897("funduk", (int)1, (int)20);
	var_401_string = ""; var_402_int = 0; var_403_int = 0;
	func_897("peanut", (int)1, (int)20);
	var_404_string = ""; var_405_int = 0; var_406_int = 0;
	func_897("walnut", (int)1, (int)20);
	var_339_bool = 1;
	return 6;
	
}


func_1371(var_422_bool, var_424_int)
{
	var_425_string = ""; var_426_int = 0; var_427_int = 0;
	func_897("hook", (int)1, (int)5);
	var_428_string = ""; var_429_int = 0; var_430_int = 0; var_431_int = 0;
	func_908("needle", (int)2, (int)3, (int)3);
	var_432_string = ""; var_433_int = 0; var_434_int = 0; var_435_int = 0; var_436_int = 0;
	func_923("kerosene", (int)9, (int)10, (int)4, (int)20);
	var_450_bool = var_424_int >= (int)9;
	if(var_450_bool != 0) {
		var_451_string = ""; var_452_int = 0; var_453_int = 0; var_454_int = 0;
		func_908("rifle_ammo", (int)1, (int)2, (int)5);
	}
	var_422_bool = 1;
	return 0;
}


func_1117(var_244_bool, var_245_object, var_246_int)
{
	var_247_bool = 0; var_248_bool = 0;
	var_249_object = Obj(); var_250_string = ""; var_251_int = 0; var_252_int = 0; var_253_int = 0;
	var_245_object = var_249_object;
	func_882(var_249_object, "tourniquet", (int)1, (int)2, (int)10);
	var_264_object = Obj(); var_265_string = ""; var_266_int = 0; var_267_int = 0; var_268_int = 0;
	var_245_object = var_264_object;
	func_882(var_264_object, "alpha_pills", (int)1, (int)1, (int)10);
	var_269_object = Obj(); var_270_string = ""; var_271_int = 0; var_272_int = 0; var_273_int = 0;
	var_245_object = var_269_object;
	func_882(var_269_object, "meradorm", (int)1, (int)1, (int)2);
	var_275_bool = var_246_int >= (int)3;
	if(var_275_bool != 0) {
		var_276_object = Obj(); var_277_string = ""; var_278_int = 0; var_279_int = 0; var_280_int = 0;
		var_245_object = var_276_object;
		func_882(var_276_object, "neomicin", (int)1, (int)1, (int)2);
	}
	var_282_bool = var_246_int >= (int)4;
	if(var_282_bool != 0) {
		var_283_object = Obj(); var_284_string = ""; var_285_int = 0; var_286_int = 0;
		var_245_object = var_283_object;
		func_871(var_283_object, "novocaine", (int)1, (int)2);
		var_293_object = Obj(); var_294_string = ""; var_295_int = 0; var_296_int = 0; var_297_int = 0;
		var_245_object = var_293_object;
		func_882(var_293_object, "gamma_pills", (int)1, (int)2, (int)2);
		var_298_object = Obj(); var_299_string = ""; var_300_int = 0; var_301_int = 0; var_302_int = 0;
		var_245_object = var_298_object;
		func_882(var_298_object, "beta_pills", (int)1, (int)2, (int)2);
	}
	var_304_bool = var_246_int >= (int)6;
	if(var_304_bool != 0) {
		var_305_object = Obj(); var_306_string = ""; var_307_int = 0; var_308_int = 0;
		var_245_object = var_305_object;
		func_871(var_305_object, "packet", (int)1, (int)4);
		var_309_object = Obj(); var_310_string = ""; var_311_int = 0; var_312_int = 0;
		var_245_object = var_309_object;
		func_871(var_309_object, "morfin", (int)1, (int)2);
		var_313_object = Obj(); var_314_string = ""; var_315_int = 0; var_316_int = 0;
		var_245_object = var_313_object;
		func_871(var_313_object, "Scalpel", (int)1, (int)8);
		var_317_object = Obj(); var_318_string = ""; var_319_int = 0; var_320_int = 0; var_321_int = 0;
		var_245_object = var_317_object;
		func_882(var_317_object, "monomicin", (int)1, (int)2, (int)2);
	}
	var_323_bool = var_246_int >= (int)9;
	if(var_323_bool != 0) {
		var_324_object = Obj(); var_325_string = ""; var_326_int = 0; var_327_int = 0;
		var_245_object = var_324_object;
		func_871(var_324_object, "etorfin", (int)1, (int)2);
		var_328_object = Obj(); var_329_string = ""; var_330_int = 0; var_331_int = 0;
		var_245_object = var_328_object;
		func_871(var_328_object, "feromicin", (int)1, (int)2);
		var_332_object = Obj(); var_333_string = ""; var_334_int = 0; var_335_int = 0; var_336_int = 0;
		var_245_object = var_332_object;
		func_882(var_332_object, "delta_pills", (int)1, (int)2, (int)2);
	}
	var_244_bool = 1;
	return 2;
}


func_864()
{
	var_21_bool = 0;
	func_1454(var_21_bool);
	if(var_21_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_484(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_78_float, var_79_float)
{
	var_80_bool = 0;
	func_669(var_80_bool);
	var_81_bool = var_80_bool == 0; //@nz
	if(var_81_bool != 0) {
		return 0;
	}
	FindActor(var_4_string, "player");
	var_2_object = false;
	var_3_object = false;
	var_0_bool = var_78_float;
	var_1_object = var_79_float;
	SetTimer((int)10, (float)1.0);
	func_563();
	var_136_bool = var_3_object == 0; //@nz
	if(var_136_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_743()
{
	var_148_bool = 0; var_149_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_151_bool = 0;
	func_1454(var_151_bool);
	if(var_151_bool != 0) {
	} else {
		HasAnimationTrack(var_149_bool, "head");
		var_153_bool = var_149_bool;
		if(var_153_bool == 0) goto Label_760;
		UnlookAsync("head");
	}
Label_760:
	return 2;
	
}


func_871(var_283_object, var_284_string, var_285_int, var_286_int)
{
	var_287_bool = 0; var_288_bool = 0;
	var_289_bool = 0; var_290_int = 0; var_291_int = 0;
	var_285_int = var_290_int;
	var_286_int = var_291_int;
	func_956(var_289_bool, var_290_int, var_291_int);
	if(var_289_bool != 0) {
		@@var_283_object:AddItem(var_288_bool, var_284_string, (int)0);
	}
	return 2;
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_97_object, var_98_object)
{
	var_0_bool = var_98_object;
	var_1_object = var_97_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_104_string = "";
		func_172(var_98_object, "Neutral");
		@@@var_0_bool:SetMessage((int)520509);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)524384, (int)25709, (int)25708);
		@@@var_0_bool:AddReply((int)520510, (int)-1, (int)21713);
		goto Label_142;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_142:
	var_128_bool = 0;
	func_1454(var_128_bool);
	if(var_128_bool != 0) {

	Label_146:
		lshWaitForAnimEnd();
		var_129_object = var_3_object;
		if(var_129_object != 0) {
		} else {
			var_130_string = "";
			var_130_string = var_2_object;
			func_822(var_130_string);
			goto Label_146;
	}
		PlayAnimation("all", "idle");

	Label_161:
		WaitForAnimEnd();
		var_143_object = var_3_object;
		if(var_143_object != 0) {
			goto Label_171;
		}
		PlayAnimation("all", "idle");
		goto Label_161;
	}
	goto Label_171;
	
Label_171:
	return 0;
	
}


func_882(var_249_object, var_250_string, var_251_int, var_252_int, var_253_int)
{
	var_254_int = 0; var_255_bool = 0; var_256_int = 0; var_257_bool = 0;
	var_258_bool = 0; var_259_int = 0; var_260_int = 0;
	var_251_int = var_259_int;
	var_252_int = var_260_int;
	func_956(var_258_bool, var_259_int, var_260_int);
	if(var_258_bool != 0) {
		irand(var_256_int, var_253_int);
		var_263_int = var_253_int + (int)1;
		@@var_249_object:AddItem(var_257_bool, var_250_string, (int)0, var_263_int);
	}
	return 4;
}


func_761(var_479_bool, var_480_object)
{
	var_481_bool = 0; var_482_object = Obj(); var_483_float = 0;
	var_480_object = var_482_object;
	func_769(var_481_bool, var_482_object, (float)70);
	var_481_bool = var_479_bool;
	return 0;
}


func_1021(var_178_bool)
{
	var_178_bool = 1;
	return 0;
}


func_511(var_0_bool, var_1_object, var_4_string, var_21_bool)
{
	var_22_float = 0; var_23_float = 0;
	var_24_bool = var_4_string == 0; //@ne
	if(var_24_bool != 0) {
		var_21_bool = 0;
		return 2;
	}
	var_25_float = 0; var_26_object = Obj();
	var_26_object = var_4_string;
	func_649(var_25_float, var_26_object);
	var_23_float = sqrt(var_25_float);
	var_33_object = var_2_object;
	if(var_33_object != 0) {
		var_23_float = var_23_float - var_1_object;
	}
	var_21_bool = var_23_float < var_0_bool;
	return 2;
}


