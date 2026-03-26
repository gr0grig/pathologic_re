// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,Hold/0,StopGroup0/0,GetVariable/2,Trace/1,SetVariable/2,ClearSubContainer/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,IsOverrideActive/1,StopWorld/0,CameraTransit/3,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,LookAsync/3,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: W:Neutral|W:all|W:idle|W:tr_salesman_kabak|W:Updating salesman|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |A:AddItem|W:coffee|W:tvirin|W:silver_ring|W:gold_ring|W:bracelet|W:watch|W:beads|W:ear_ring|W:flower|W:hook|W:morfin
// @RUN_OP: 0x28
// @RUN_TASK: 1
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=int,int,bool,bool,object,bool,bool,bool,bool,bool,float params=0
// @EVENT_6: op=0x38 vars=
// @EVENT_5: op=0x3e vars=
// @EVENT_0: op=0x41 vars=object
// @EVENT_7: op=0xa4 vars=int
// @PE: 0x0,0x1a,0x38,0x7a,0xa4,0xbb,0x12c,0x164,0x1b2

task_0_event_11(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_float)
{
	var_13_bool = 0;
	func_540(var_13_bool);
	if(var_13_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_1_event_6(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float)
{
	func_187(var_10_bool, var_11_float);
	Hold();
	return 0;
}


task_1_event_5(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float)
{
	StopGroup0();
	return 0;
}


task_1_event_0(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	GetVariable("tr_salesman_kabak", var_14_int);
	var_16_int = 0;
	func_425(var_16_int);
	var_22_bool = var_14_int != var_16_int;
	if(var_22_bool != 0) {
		Trace("Updating salesman");
		var_25_int = 0;
		func_425(var_25_int);
		SetVariable("tr_salesman_kabak", var_25_int);
		func_102();
	}
	var_101_bool = 0; var_102_object = Obj();
	var_12_object = var_102_object;
	func_300(var_101_bool, var_102_object);
	if(var_101_bool != 0) {
		var_133_object = Obj();
		var_12_object = var_133_object;
		TaskCall(0);
		func_0(var_133_object);
		TaskReturn();
		var_12_object = Obj();
		func_356();
	}
	return 2;
}


task_1_event_7(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_149(var_10_bool, var_11_float, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_int == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_377(var_29_object);
				var_2_int = true;
			}
		} else {
			var_36_int = var_2_int;
			if(var_36_int == 0) goto Label_186;
			UnlookAsync("head");
			var_2_int = false;
		}
	}
Label_186:
	return 0;
	
}


main(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float)
{
	var_12_bool = 0;
	func_295(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		Hold();
	}
Label_47:
	if((bool)1 != 0) {
		var_17_float = 0; var_18_float = 0;
		func_122(var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float, (float)300, (float)100);
		goto Label_47;
	}
	return 0;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_135_bool = 0;
	func_540(var_135_bool);
	if(var_135_bool != 0) {
		var_136_string = "";
		func_361("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_147_bool = var_0_bool;
	if(var_147_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_388(var_59_object, var_60_string, var_61_int, var_62_int)
{
	var_63_bool = 0; var_64_bool = 0;
	var_65_bool = 0; var_66_int = 0; var_67_int = 0;
	var_61_int = var_66_int;
	var_62_int = var_67_int;
	func_420(var_65_bool, var_66_int, var_67_int);
	if(var_65_bool != 0) {
		@@var_59_object:AddItem(var_64_bool, var_60_string, (int)0);
	}
	return 2;
}


func_516(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = "";
	var_50_int = var_47_int;
	if(var_50_int != 0) {
		"idle" = "idle" + var_47_int;
	}
	var_49_string = var_46_string;
	return 2;
}


func_523(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_43_int = 0;
	
Label_525:
	var_46_string = ""; var_47_int = 0;
	var_43_int = var_47_int;
	func_516(var_46_string, var_47_int);
	HasAnimation(var_44_bool, "all", var_46_string);
	var_51_bool = var_44_bool == 0; //@nz
	if(var_51_bool != 0) {
	} else {
		var_43_int = var_43_int + (int)1;
		goto Label_525;
	}
	var_43_int = var_40_int;
	return 4;
	
}


func_399(var_37_object, var_38_string, var_39_int, var_40_int, var_41_int)
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0;
	var_46_bool = 0; var_47_int = 0; var_48_int = 0;
	var_39_int = var_47_int;
	var_40_int = var_48_int;
	func_420(var_46_bool, var_47_int, var_48_int);
	if(var_46_bool != 0) {
		irand(var_44_int, var_41_int);
		var_53_int = var_41_int + (int)1;
		@@var_37_object:AddItem(var_45_bool, var_38_string, (int)0, var_53_int);
	}
	return 4;
}


func_149(var_0_bool, var_1_int, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_287(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_int = var_2_int;
	if(var_27_int != 0) {
		var_17_float = var_17_float - var_1_int;
	}
	var_15_bool = var_17_float < var_0_bool;
	return 2;
}


func_280(var_65_bool)
{
	var_65_bool = 1;
	return 0;
}


func_282()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_540(var_135_bool)
{
	var_135_bool = 0;
	return 0;
}


func_414(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj();
	self(var_35_object);
	var_35_object = var_33_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_287(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_420(var_46_bool, var_47_int, var_48_int)
{
	var_49_int = 0; var_50_int = 0;
	irand(var_50_int, var_48_int);
	var_46_bool = var_50_int < var_47_int;
	return 2;
}


func_295(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_425(var_16_int)
{
	var_17_float = 0; var_18_float = 0;
	GetGameTime(var_18_float);
	var_20_int = 0;
	var_20_int = var_18_float / (int)24;
	var_16_int = (int)1 + var_20_int;
	return 2;
}


func_300(var_101_bool, var_102_object)
{
	var_103_bool = 0; var_104_object = Obj(); var_105_float = 0;
	var_102_object = var_104_object;
	func_308(var_103_bool, var_104_object, (float)70);
	var_103_bool = var_101_bool;
	return 0;
}


func_434(var_30_bool, var_31_object)
{
	var_37_object = Obj(); var_38_string = ""; var_39_int = 0; var_40_int = 0; var_41_int = 0;
	var_31_object = var_37_object;
	func_399(var_37_object, "coffee", (int)1, (int)1, (int)2);
	var_54_object = Obj(); var_55_string = ""; var_56_int = 0; var_57_int = 0; var_58_int = 0;
	var_31_object = var_54_object;
	func_399(var_54_object, "tvirin", (int)1, (int)1, (int)2);
	var_59_object = Obj(); var_60_string = ""; var_61_int = 0; var_62_int = 0;
	var_31_object = var_59_object;
	func_388(var_59_object, "silver_ring", (int)1, (int)2);
	var_69_object = Obj(); var_70_string = ""; var_71_int = 0; var_72_int = 0;
	var_31_object = var_69_object;
	func_388(var_69_object, "gold_ring", (int)1, (int)2);
	var_73_object = Obj(); var_74_string = ""; var_75_int = 0; var_76_int = 0;
	var_31_object = var_73_object;
	func_388(var_73_object, "bracelet", (int)1, (int)2);
	var_77_object = Obj(); var_78_string = ""; var_79_int = 0; var_80_int = 0;
	var_31_object = var_77_object;
	func_388(var_77_object, "watch", (int)1, (int)2);
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; var_84_int = 0;
	var_31_object = var_81_object;
	func_388(var_81_object, "beads", (int)1, (int)2);
	var_85_object = Obj(); var_86_string = ""; var_87_int = 0; var_88_int = 0;
	var_31_object = var_85_object;
	func_388(var_85_object, "ear_ring", (int)1, (int)2);
	var_89_object = Obj(); var_90_string = ""; var_91_int = 0; var_92_int = 0;
	var_31_object = var_89_object;
	func_388(var_89_object, "flower", (int)1, (int)2);
	var_93_object = Obj(); var_94_string = ""; var_95_int = 0; var_96_int = 0;
	var_31_object = var_93_object;
	func_388(var_93_object, "hook", (int)1, (int)4);
	var_97_object = Obj(); var_98_string = ""; var_99_int = 0; var_100_int = 0;
	var_31_object = var_97_object;
	func_388(var_97_object, "morfin", (int)1, (int)4);
	var_30_bool = 1;
	return 0;
}


func_308(var_103_bool, var_104_object, var_105_float)
{
	var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_bool = 0; var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_bool = 0;
	@@var_104_object:GetPosition(var_115_cvector);
	@@var_104_object:GetEyesHeight(var_114_float);
	var_122_float = GetByIndex(var_115_cvector, 1);
	var_122_float = var_122_float + var_114_float;
	SetByIndex(var_115_cvector, 1) = var_122_float;
	GetPosition(var_116_cvector);
	GetEyesHeight(var_114_float);
	var_123_float = GetByIndex(var_116_cvector, 1);
	var_123_float = var_123_float + var_114_float;
	SetByIndex(var_116_cvector, 1) = var_123_float;
	var_117_cvector = var_115_cvector - var_116_cvector;
	var_124_float = GetByIndex(var_117_cvector, 1);
	SetByIndex(var_117_cvector, 1) = (float)0;
	var_125_int = var_117_cvector | var_117_cvector;
	var_126_float = sqrt(var_125_int);
	var_117_cvector = var_117_cvector / var_126_float;
	var_118_cvector = -var_117_cvector;
	var_127_float = var_117_cvector * var_105_float;
	var_119_cvector = var_127_float - CVector(0.0, 10.0, 0.0);
	var_120_cvector = var_116_cvector + var_119_cvector;
	IsOverrideActive(var_121_bool);
	var_129_bool = var_121_bool;
	if(var_129_bool != 0) {
		var_103_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_120_cvector, var_118_cvector, (bool)1);
	var_131_float = GetByIndex(var_119_cvector, 0);
	var_132_float = GetByIndex(var_119_cvector, 2);
	Rotate(var_131_float, var_132_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_103_bool = 1;
	return 16;
}


func_187(var_2_int, var_3_bool)
{
	func_282();
	KillTimer((int)10);
	var_13_int = var_2_int;
	if(var_13_int != 0) {
		UnlookAsync("head");
		var_2_int = false;
	}
	var_3_bool = true;
	return 0;
}


func_201()
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_float = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_float = 0; var_37_bool = 0;
	WaitForAnimEnd();
	var_38_bool = 0;
	func_295(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		return 14;
	}
	func_523((int)0);
	var_40_int = var_31_int;
	var_32_int = 0;
	
Label_215:
	var_53_bool = 0;
	var_53_bool = 0;
	var_55_bool = var_32_int < (int)5;
	if(var_55_bool != 0) {
		var_56_bool = 0;
		func_295(var_56_bool);
		if(var_56_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		irand(var_33_int, (int)3);
		var_59_bool = var_33_int == (int)0;
		if(var_59_bool != 0) {
			var_60_int = var_31_int;
			if(var_60_int == 0) goto Label_248;
			irand(var_34_int, var_31_int);
			var_62_string = ""; var_63_int = 0;
			var_34_int = var_63_int;
			func_516(var_62_string, var_63_int);
			PlayAnimation("all", var_62_string);
			WaitForAnimEnd(var_35_bool);
			var_64_bool = var_35_bool == 0; //@nz
			if(var_64_bool != 0) {
			} else {
		} else {
				var_69_bool = var_33_int == (int)1;
				if(var_69_bool != 0) {
					rand(var_36_float, (int)4);
					var_72_int = var_36_float + (int)1;
					Sleep(var_72_int, var_37_bool);
					var_73_bool = var_37_bool == 0; //@nz
					if(var_73_bool != 0) {
						goto Label_277;
					}
					goto Label_266;
				}
				var_74_int = var_32_int;
				if(var_74_int == 0) goto Label_266;
				goto Label_277;
		}
		Label_266:
			var_65_bool = 0;
			func_280(var_65_bool);
			var_66_bool = var_65_bool == 0; //@nz
			if(var_66_bool != 0) {
				goto Label_277;
			}
			ResetAAS();
			var_32_int = var_32_int + (int)1;
			goto Label_215;

		}
	}
Label_277:
	ResetAAS();
	return 14;
	
}


func_356()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_102()
{
	var_26_int = 0; var_27_int = 0;
	func_425((int)0);
	var_28_int = var_27_int;
	ClearSubContainer((int)0);
	var_30_bool = 0; var_31_object = Obj(); var_32_int = 0;
	func_414(Obj());
	var_33_object = var_31_object;
	func_425((int)0);
	var_36_int = var_32_int;
	func_434(var_31_object, var_32_int);
	return 2;
}


func_361(var_136_string)
{
	var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_bool = 0; var_141_float = 0; var_142_float = 0;
	lshHasAnimation(var_140_bool, var_136_string);
	var_143_bool = var_140_bool;
	if(var_143_bool != 0) {
		lshGetAnimTimes(var_136_string, var_141_float, var_142_float);
		lshPlayAnimation(var_141_float, var_142_float, (bool)0);
	} else {
		var_146_int = "Can't find lsh animation : " + var_136_string;
		Trace(var_146_int);
	}
	return 6;
	
}


func_377(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0);
	@@var_29_object:GetEyesHeight(var_32_float);
	var_33_cvector = CVector(0.0, 0.0, 0.0);
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	LookAsync(var_29_object, "head", var_33_cvector);
	return 4;
}


func_122(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_17_float, var_18_float)
{
	var_19_bool = 0;
	func_295(var_19_bool);
	var_20_bool = var_19_bool == 0; //@nz
	if(var_20_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_int = false;
	var_3_bool = false;
	var_0_bool = var_17_float;
	var_1_int = var_18_float;
	SetTimer((int)10, (float)1.0);
	func_201();
	var_75_bool = var_3_bool == 0; //@nz
	if(var_75_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


