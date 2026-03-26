// @IMPORTS: GetWindowSize/2,CreateWindow/3,SendMessage/2,CreateIntVector/1,CreateStringVector/1,CreateFloatVector/1,FindActor/2,UISync/0,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,Blit/4,GetInvItemSprite/2,LoadImage/1,ReleaseImage/1,PlaySound/1,Trace/1,Print/8,GetStringByID/2,CreateBoolVector/1,BlitClipped/7,BlitClipped/8,Blit/3
// @STRINGS: W:visir.xml|W:charge|W:player|A:add|A:size|A:get|A:remove|A:set|W:mail|W:diary|W:rep_up|W:rep_down|A:clear|W:daychange.xml|W:daychangereal.xml|A:DestroyWindow|W:HasMail|W:HasDiary|W:ReputationUP|W:ReputationDown|W:tiredness|W:hunger|W:immunity|W:disease|W:health|W:repuatation|W:vlevel|W:slot|W:default|W:help|W:reputation|A:GetProperty|W:BAD PLAYER!|W:nerv_v|W:nerv_b|W:nerv_r|W:cross|W:vcharge|A:IsVisirOn|W:visir|A:IsWeaponHolstered|W:walk_distance|A:HasProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,object,object,object,object,int,float,int,int,object,object,object,object,object,object params=0
// @EVENT_201: op=0x15c vars=int,object
// @EVENT_1: op=0x228 vars=float
// @EVENT_0: op=0x403 vars=
// @PE: 0xe8,0x228,0x295

task_0_event_201(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_int, var_21_object)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_string = ""; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_string = "";
	var_35_bool = var_20_int == (int)1000;
	if(var_35_bool != 0) {
		var_11_float = 1.0;
	} else {
		var_37_bool = var_20_int == (int)200;
		if(var_37_bool != 0) {
			var_38_object = var_21_object;
			if(var_38_object != 0) {
				@@var_21_object:size(var_28_int);
				var_40_bool = var_28_int == (int)1;
				if(var_40_bool != 0) {
					@@var_21_object:get((int)109, (int)0);
					var_11_float = 1.0;
				}
			}
			goto Label_551;
		}
		var_43_bool = var_20_int == (int)1;
		if(var_43_bool != 0) {
			var_44_bool = var_0_object == 0; //@nz
			if(var_44_bool != 0) {
				CreateWindow("visir.xml", (bool)0, var_0_object);
			}
			var_47_int = 0;
			func_1064(var_47_int);
			SendMessage(var_47_int, "charge");
			func_577();
			goto Label_551;
		}
		var_81_bool = var_20_int == (int)2;
		if(var_81_bool != 0) {
			var_82_object = var_0_object;
			if(var_82_object != 0) {
				@@@var_0_object:DestroyWindow();
			}
			goto Label_551;
		}
		var_84_bool = var_20_int == (int)3;
		if(var_84_bool != 0) {
			@@var_21_object:get(var_29_int, (int)0);
			@@var_21_object:get(var_30_int, (int)1);
			var_87_int = 0; var_88_int = 0;
			var_29_int = var_87_int;
			var_30_int = var_88_int;
			func_217(var_30_int, var_31_int, var_32_int, var_33_string, var_87_int, var_88_int);
			goto Label_551;
		}
		var_93_bool = var_20_int == (int)4;
		if(var_93_bool != 0) {
			@@var_21_object:get(var_31_int, (int)0);
			@@var_21_object:get(var_32_int, (int)1);
			goto Label_551;
		}
		var_97_bool = var_20_int == (int)100;
		if(var_97_bool != 0) {
			var_98_int = 0;
			func_65(var_33_string, (int)100);
			goto Label_551;
		}
		var_111_bool = var_20_int == (int)101;
		if(var_111_bool != 0) {
			var_112_int = 0;
			func_65(var_33_string, (int)101);
			goto Label_551;
		}
		var_114_bool = var_20_int == (int)6;
		if(var_114_bool != 0) {
			var_115_int = 0;
			func_90(var_32_int, var_33_string, (int)2);
			PlaySound("mail");
			Trace("HasMail");
			goto Label_551;
		}
		var_130_bool = var_20_int == (int)7;
		if(var_130_bool != 0) {
			var_131_int = 0;
			func_90(var_32_int, var_33_string, (int)3);
			PlaySound("diary");
			Trace("HasDiary");
			goto Label_551;
		}
		var_135_bool = var_20_int == (int)8;
		if(var_135_bool != 0) {
			PlaySound("rep_up");
			Trace("ReputationUP");
			goto Label_551;
		}
		var_139_bool = var_20_int == (int)9;
		if(var_139_bool != 0) {
			PlaySound("rep_down");
			Trace("ReputationDown");
			goto Label_551;
		}
		var_143_bool = var_20_int == (int)11;
		if(var_143_bool != 0) {
			var_144_string = ""; var_145_bool = 0;
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "tiredness", (bool)1);
			goto Label_551;
		}
		var_180_bool = var_20_int == (int)12;
		if(var_180_bool != 0) {
			var_181_string = ""; var_182_bool = 0;
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "hunger", (bool)1);
			goto Label_551;
		}
		var_184_bool = var_20_int == (int)13;
		if(var_184_bool != 0) {
			var_185_string = ""; var_186_bool = 0;
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "immunity", (bool)1);
			goto Label_551;
		}
		var_188_bool = var_20_int == (int)14;
		if(var_188_bool != 0) {
			var_189_string = ""; var_190_bool = 0;
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "disease", (bool)1);
			goto Label_551;
		}
		var_192_bool = var_20_int == (int)15;
		if(var_192_bool != 0) {
			var_193_string = ""; var_194_bool = 0;
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "health", (bool)1);
			goto Label_551;
		}
		var_196_bool = var_20_int == (int)16;
		if(var_196_bool != 0) {
			var_197_string = ""; var_198_bool = 0;
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "repuatation", (bool)1);
			goto Label_551;
		}
		var_200_bool = var_20_int == (int)10;
		if(var_200_bool == 0) goto Label_551;
		@@var_21_object:get(var_33_string, (int)0);
		var_202_string = ""; var_203_bool = 0;
		var_33_string = var_202_string;
		func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, var_202_string, (bool)0);
	}
Label_551:
	return 12;
	
}


task_0_event_1(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_float)
{
	var_21_float = 0;
	var_20_float = var_21_float;
	func_120(var_19_object, var_20_float, var_21_float);
	var_33_float = 0;
	var_20_float = var_33_float;
	func_240(var_18_object, var_19_object, var_20_float, var_33_float);
	var_58_float = 0;
	var_20_float = var_58_float;
	func_287(var_20_float, var_58_float);
	func_577();
	var_104_float = 0;
	var_20_float = var_104_float;
	func_811(var_19_object, var_20_float, var_104_float);
	var_117_float = 0;
	var_20_float = var_117_float;
	func_661(var_19_object, var_20_float, var_117_float);
	return 0;
}


task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = 0;
	func_1105(var_21_bool);
	if(var_21_bool != 0) {
		var_28_bool = var_1_object == 0; //@nz
		if(var_28_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_31_float = var_12_int / (int)2;
		var_33_int = var_31_float - (int)1;
		var_35_float = var_13_int / (int)2;
		var_37_int = var_35_float - (int)1;
		Blit("cross", var_33_int, var_37_int);
	}
	func_141(var_17_object, var_18_object, var_19_object);
	func_315(var_16_object, var_17_object, var_18_object, var_19_object);
	func_872(var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object);
	func_833();
	func_638(var_18_object, var_19_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	EventDisable(201);
	GetWindowSize(var_12_int, var_13_int);
	var_10_int = -1;
	var_22_bool = 0;
	func_1078(var_22_bool);
	if(var_22_bool != 0) {
		CreateWindow("visir.xml", (bool)0, var_0_object);
		var_31_int = 0;
		func_1064(var_31_int);
		SendMessage(var_31_int, "charge");
		func_577();
	}
	CreateIntVector(var_5_object);
	CreateStringVector(var_2_object);
	CreateIntVector(var_3_object);
	CreateFloatVector(var_4_object);
	CreateIntVector(var_6_object);
	CreateIntVector(var_7_object);
	CreateFloatVector(var_8_object);
	EventDisable(1);
	EventDisable(0);
	
Label_38:
	if((bool)1 != 0) {
		FindActor(var_21_object, "player");
		var_66_object = var_21_object;
		if(var_66_object != 0) {
		} else {
			UISync();
			var_21_object = 0;
			goto Label_38;
		}
	}
	EventEnable(1);
	EventEnable(0);
	func_672(var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object);
	EventEnable(201);
	SetOwnerDraw((bool)1);
	SetNeedUpdate((bool)1);
	ProcessEvents();
	return 2;
	
}


func_577()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0;
	func_1091((int)0);
	var_44_int = var_42_int;
	var_43_int = 0;
	
Label_583:
	var_53_bool = var_43_int < (int)4;
	if(var_53_bool != 0) {
		var_54_bool = var_43_int < var_42_int;
		if(var_54_bool != 0) {
			var_55_int = 1;
		} else {
			var_61_int = 0; //@pi
	}
		var_62_int = 0;
		func_1064(var_62_int);
		SendMessage(var_62_int, "charge");
		var_58_int = var_43_int + (int)1;
		var_59_int = "vlevel" + var_58_int;
		SendMessage(var_55_int, var_59_int);
		var_43_int = var_43_int + (int)1;
		goto Label_583;
	}
	return 4;
	
}


func_65(var_5_object, var_98_int)
{
	var_99_int = 0; var_100_int = 0; var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0;
	@@@var_5_object:add(var_98_int);
	@@@var_5_object:size(var_102_int);
	var_103_int = 0;
	
Label_71:
	var_106_int = var_102_int - (int)1;
	var_107_bool = var_103_int < var_106_int;
	if(var_107_bool != 0) {
		@@@var_5_object:get(var_104_int, var_103_int);
		var_108_bool = var_104_int == var_98_int;
		if(var_108_bool != 0) {
			@@@var_5_object:remove(var_103_int);
			var_103_int = var_103_int + (int)1;
			goto Label_71;
		}
		return 6;
	}
	return 6;
}


func_1091(var_44_int)
{
	var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_int = 0;
	FindActor(var_47_object, "player");
	var_50_bool = var_47_object == 0; //@nz
	if(var_50_bool != 0) {
		var_44_int = 0;
		return 4;
	}
	@@var_47_object:GetProperty("visir", var_48_int);
	var_48_int = var_44_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_833()
{
	var_241_float = 0; var_242_float = 0; var_243_float = 0; var_244_int = 0; var_245_float = 0; var_246_float = 0; var_247_float = 0; var_248_float = 0; var_249_int = 0; var_250_float = 0;
	return 10;
}
EMIT "PushEmpty(float)";
EMIT "Call2 0x45e";
EMIT "Stack[-1] = Stack[-6]";
EMIT "Pop(1)";
EMIT "Stack[-4] = (int) 59";
EMIT "Stack[-3] = (int) 400";
EMIT "Push((int) 800)";
EMIT "Pop(1); Push((bool) Stack[12 + Tasks[-1].StackPointer] == Stack[-1])";
EMIT "IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)";
EMIT "Stack[-4] = (int) 59";
EMIT "Stack[-3] = (int) 400";
EMIT "GOTO 0x35a";


func_141(var_3_object, var_4_object, var_13_int)
{
	var_38_int = 0; var_39_int = 0; var_40_float = 0; var_41_float = 0; var_42_int = 0; var_43_int = 0; var_44_float = 0; var_45_float = 0;
	@@@var_3_object:size(var_42_int);
	var_46_bool = var_42_int == 0; //@nz
	if(var_46_bool != 0) {
		return 8;
	}
	@@@var_3_object:get(var_43_int, (int)0);
	@@@var_4_object:get(var_44_float, (int)0);
	var_50_float = (float)6.2829999923706055 * var_44_float;
	var_45_float = var_50_float / (float)4.0;
	var_53_bool = var_43_int == (int)2;
	if(var_53_bool != 0) {
		var_57_int = var_13_int - (int)130;
		var_60_float = cos(var_45_float);
		var_61_float = (float)0.5 * var_60_float;
		var_62_int = (float)0.5 - var_61_float;
		Blit("mail", (int)20, var_57_int, var_62_int);
	} else {
		var_64_bool = var_43_int == (int)3;
		if(var_64_bool != 0) {
			var_68_int = var_13_int - (int)130;
			var_71_float = cos(var_45_float);
			var_72_float = (float)0.5 * var_71_float;
			var_73_int = (float)0.5 - var_72_float;
			Blit("diary", (int)20, var_68_int, var_73_int);
			goto Label_216;
		}
		var_75_bool = var_43_int == (int)4;
		if(var_75_bool != 0) {
			var_79_int = var_13_int - (int)100;
			var_82_float = cos(var_45_float);
			var_83_float = (float)0.5 * var_82_float;
			var_84_int = (float)0.5 - var_83_float;
			Blit("rep_up", (int)20, var_79_int, var_84_int);
			goto Label_216;
		}
		var_86_bool = var_43_int == (int)5;
		if(var_86_bool == 0) goto Label_216;
		var_90_int = var_13_int - (int)100;
		var_93_float = cos(var_45_float);
		var_94_float = (float)0.5 * var_93_float;
		var_95_int = (float)0.5 - var_94_float;
		Blit("rep_down", (int)20, var_90_int, var_95_int);
	}
Label_216:
	return 8;
	
}


func_1105(var_21_bool)
{
	var_22_object = Obj(); var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0;
	FindActor(var_24_object, "player");
	var_27_bool = var_24_object == 0; //@nz
	if(var_27_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	@@var_24_object:IsWeaponHolstered(var_25_bool);
	var_21_bool = !var_25_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_661(var_10_int, var_11_float, var_117_float)
{
	var_119_bool = var_10_int == (int)-1;
	if(var_119_bool != 0) {
		return 0;
	}
	var_11_float = var_11_float - var_117_float;
	var_121_bool = var_11_float <= (int)0;
	if(var_121_bool != 0) {
		var_10_int = -1;
	}
	return 0;
}


func_86(var_5_object)
{
	@@@var_5_object:remove((int)0);
	return 0;
}


func_217(var_2_object, var_6_object, var_7_object, var_8_object, var_87_int, var_88_int)
{
	var_89_string = ""; var_90_string = "";
	@@@var_6_object:add(var_87_int);
	@@@var_7_object:add(var_88_int);
	@@@var_8_object:add((float)4.0);
	GetInvItemSprite(var_90_string, var_87_int);
	LoadImage(var_90_string);
	@@@var_2_object:add(var_90_string);
	return 2;
}


func_90(var_3_object, var_4_object, var_115_int)
{
	var_116_int = 0; var_117_int = 0; var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0;
	@@@var_3_object:size(var_119_int);
	var_120_int = 0;
	
Label_94:
	var_122_bool = var_120_int < var_119_int;
	if(var_122_bool != 0) {
		@@@var_3_object:get(var_121_int, var_120_int);
		var_123_bool = var_115_int == var_121_int;
		if(var_123_bool != 0) {
			@@@var_4_object:set(var_120_int, (float)4.0);
			var_120_int = var_120_int + (int)1;
			goto Label_94;
		}
		return 6;
	}
	@@@var_3_object:add(var_115_int);
	@@@var_4_object:add((float)4.0);
	return 6;
}


func_1118()
{
0x45e: PushEmpty(object, bool, int, object, bool, int)
0x45f: Push("player") // @poff=34
0x460: @ FindActor(Stack[-4], Stack[-1])
0x461: Pop(1)
0x462: Pop(0); Push((bool) Stack[-3] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)
}
EMIT "Stack[-3] = 0";


func_287(var_1_object, var_5_object)
{
	var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0;
	@@@var_5_object:size(var_61_int);
	var_63_bool = var_61_int == 0; //@nz
	if(var_63_bool != 0) {
		return 4;
	}
	var_64_object = var_1_object;
	if(var_64_object != 0) {
		return 4;
	}
	@@@var_5_object:get(var_62_int, (int)0);
	var_67_bool = var_62_int == (int)100;
	if(var_67_bool != 0) {
		CreateWindow("daychange.xml", (bool)0, var_1_object);
	} else {
		CreateWindow("daychangereal.xml", (bool)0, var_1_object);
	}
	func_86(var_62_int);
	return 4;
	
}


func_672(var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object)
{
	var_67_object = Obj(); var_68_int = 0; var_69_int = 0; var_70_string = ""; var_71_float = 0; var_72_object = Obj(); var_73_int = 0; var_74_int = 0; var_75_string = ""; var_76_float = 0;
	CreateStringVector(var_14_object);
	CreateFloatVector(var_15_object);
	CreateFloatVector(var_16_object);
	CreateFloatVector(var_17_object);
	CreateFloatVector(var_18_object);
	CreateBoolVector(var_19_object);
	FindActor(var_72_object, "player");
	var_78_object = var_72_object;
	if(var_78_object != 0) {
		@@@var_14_object:add("health");
		@@@var_19_object:add((bool)0);
		@@@var_14_object:add("hunger");
		@@@var_19_object:add((bool)1);
		@@@var_14_object:add("tiredness");
		@@@var_19_object:add((bool)1);
		@@@var_14_object:add("immunity");
		@@@var_19_object:add((bool)0);
		@@@var_14_object:add("disease");
		@@@var_19_object:add((bool)1);
		@@@var_14_object:add("reputation");
		@@@var_19_object:add((bool)0);
		@@@var_14_object:size(var_73_int);
		var_74_int = 0;

	Label_729:
		var_91_bool = var_74_int < var_73_int;
		if(var_91_bool != 0) {
			@@@var_14_object:get(var_75_string, var_74_int);
			@@var_72_object:GetProperty(var_75_string, var_76_float);
			@@@var_15_object:add(var_76_float);
			@@@var_16_object:add(var_76_float);
			@@@var_17_object:add((int)0);
			@@@var_18_object:add((int)0);
			var_74_int = var_74_int + (int)1;
			goto Label_729;
		}
	} else {
		Trace("BAD PLAYER!");
	}
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_607(var_114_int, var_115_int, var_116_int, var_117_float)
{
	var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_string = ""; var_122_int = 0; var_123_int = 0;
	GetInvItemSprite(var_121_string, var_114_int);
	var_126_float = var_116_int * (int)60;
	var_122_int = (int)40 + var_126_float;
	var_123_int = 40;
	Blit("slot", var_122_int, var_123_int, var_117_float);
	var_129_int = var_122_int + (int)1;
	var_131_int = var_123_int + (int)1;
	Blit(var_121_string, var_129_int, var_131_int, var_117_float);
	var_133_bool = var_115_int > (int)1;
	if(var_133_bool != 0) {
		var_136_int = var_122_int + (int)2;
		var_138_int = var_123_int + (int)35;
		Print("default", var_136_int, var_138_int, var_115_int, (float)1.0, (float)1.0, (float)1.0, var_117_float);
	}
	return 6;
}


func_1064(var_31_int)
{
	var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_int = 0;
	FindActor(var_34_object, "player");
	var_37_bool = var_34_object == 0; //@nz
	if(var_37_bool != 0) {
		var_31_int = 0;
		return 4;
	}
	@@var_34_object:GetProperty("vcharge", var_35_int);
	var_35_int = var_31_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_232(var_6_object, var_7_object, var_8_object, var_51_int)
{
	@@@var_6_object:remove(var_51_int);
	@@@var_8_object:remove(var_51_int);
	@@@var_7_object:remove(var_51_int);
	return 0;
}


func_872(var_12_int, var_14_object, var_16_object, var_17_object, var_18_object, var_19_object)
{
	var_143_float = 0; var_144_float = 0; var_145_int = 0; var_146_int = 0; var_147_string = ""; var_148_float = 0; var_149_float = 0; var_150_float = 0; var_151_bool = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0; var_158_float = 0; var_159_int = 0; var_160_int = 0; var_161_string = ""; var_162_float = 0; var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_float = 0; var_167_float = 0; var_168_float = 0; var_169_float = 0; var_170_float = 0;
	var_157_float = 20;
	var_158_float = 20;
	@@@var_14_object:size(var_159_int);
	var_160_int = 0;
	
Label_878:
	var_171_bool = var_160_int < var_159_int;
	if(var_171_bool != 0) {
		@@@var_14_object:get(var_161_string, var_160_int);
		@@@var_16_object:get(var_162_float, var_160_int);
		@@@var_18_object:get(var_163_float, var_160_int);
		@@@var_17_object:get(var_164_float, var_160_int);
		@@@var_19_object:get(var_165_bool, var_160_int);
		var_173_bool = var_161_string == "health";
		if(var_173_bool != 0) {
			var_175_bool = var_162_float <= (float)0.33000001311302185;
			if(var_175_bool != 0) {
				var_166_float = 1;
			} else {
					var_210_bool = var_164_float == (int)0;
					if(var_210_bool != 0) {
						goto Label_1023;
					}
					var_166_float = 0.20000000298023224;
		}
				var_212_bool = var_161_string == "immunity";
				if(var_212_bool != 0) {
					var_214_bool = var_162_float < (float)0.5;
					if(var_214_bool != 0) {
						var_166_float = 1;
					} else {
						var_216_bool = var_164_float == (int)0;
						if(var_216_bool != 0) {
							goto Label_1023;
						}
						var_166_float = 0.20000000298023224;
				}
					var_218_bool = var_161_string == "tiredness";
					if(var_218_bool != 0) {
						var_220_bool = var_162_float >= (float)0.6600000262260437;
						if(var_220_bool != 0) {
							var_166_float = 1;
						} else {
							var_222_bool = var_164_float == (int)0;
							if(var_222_bool != 0) {
								goto Label_1023;
							}
							var_166_float = 0.20000000298023224;
					}
						var_224_bool = var_161_string == "hunger";
						if(var_224_bool != 0) {
							var_226_bool = var_162_float >= (float)0.6600000262260437;
							if(var_226_bool != 0) {
								var_166_float = 1;
							} else {
								var_228_bool = var_164_float == (int)0;
								if(var_228_bool != 0) {
									goto Label_1023;
								}
								var_166_float = 0.20000000298023224;
						}
							var_230_bool = var_161_string == "reputation";
							if(var_230_bool != 0) {
								var_232_bool = var_162_float <= (float)0.6600000262260437;
								if(var_232_bool != 0) {
									var_166_float = 1;
								} else {
									var_234_bool = var_164_float == (int)0;
									if(var_234_bool != 0) {
										goto Label_1023;
									}
									var_166_float = 0.20000000298023224;
							}
								var_236_bool = var_161_string == "disease";
								if(var_236_bool == 0) goto Label_973;
								var_238_bool = var_162_float >= (float)0.33000001311302185;
								if(var_238_bool != 0) {
									var_166_float = 1;
									goto Label_973;
								}
								var_240_bool = var_164_float == (int)0;
								if(var_240_bool != 0) {
									goto Label_1023;
								}
								var_166_float = 0.20000000298023224;
	}
							return 28;
						}
						goto Label_973;
					}
					goto Label_973;
				}
				goto Label_973;
			}
			goto Label_973;
	}
	goto Label_973;
	
Label_973:
	var_177_bool = var_164_float > (int)0;
	if(var_177_bool != 0) {
		var_179_float = var_164_float / (float)2.0;
		var_181_float = var_179_float * (float)3.1414999961853027;
		var_183_float = var_181_float / (int)2;
		var_167_float = sin(var_183_float);
	} else {
		var_166_float = var_167_float;

	}
	var_185_bool = var_167_float > (int)1;
	if(var_185_bool != 0) {
		var_167_float = 1;
	}
	var_187_bool = var_167_float < (int)0;
	if(var_187_bool != 0) {
		var_167_float = 0;
	}
	var_168_float = 256;
	var_169_float = 64;
	var_189_int = var_12_int - var_168_float;
	var_190_int = var_189_int - var_158_float;
	var_191_int = var_12_int - var_168_float;
	var_192_int = var_191_int - var_158_float;
	BlitClipped("nerv_b", var_190_int, var_157_float, var_192_int, var_157_float, var_168_float, (int)43, var_167_float);
	var_194_int = var_168_float - var_169_float;
	var_195_float = var_194_int * var_162_float;
	var_170_float = var_195_float + var_169_float;
	var_197_int = var_12_int - var_168_float;
	var_198_int = var_197_int - var_158_float;
	var_199_int = var_12_int - var_168_float;
	var_200_int = var_199_int - var_158_float;
	BlitClipped("nerv_r", var_198_int, var_157_float, var_200_int, var_157_float, var_170_float, (int)43, var_167_float);
	var_202_int = var_12_int - var_168_float;
	var_203_int = var_202_int - var_158_float;
	var_204_int = var_12_int - var_168_float;
	var_205_int = var_204_int - var_158_float;
	BlitClipped(var_161_string, var_203_int, var_157_float, var_205_int, var_157_float, var_168_float, (int)43, var_167_float);
	var_157_float = var_157_float + (int)25;
	
Label_1023:
	var_160_int = var_160_int + (int)1;
	goto Label_878;
	
}


func_811(var_14_object, var_17_object, var_104_float)
{
	var_105_int = 0; var_106_int = 0; var_107_float = 0; var_108_int = 0; var_109_int = 0; var_110_float = 0;
	@@@var_14_object:size(var_108_int);
	var_109_int = 0;
	
Label_815:
	var_111_bool = var_109_int < var_108_int;
	if(var_111_bool != 0) {
		@@@var_17_object:get(var_110_float, var_109_int);
		var_113_bool = var_110_float > (int)0;
		if(var_113_bool != 0) {
			var_110_float = var_110_float - var_104_float;
		}
		var_115_bool = var_110_float < (int)0;
		if(var_115_bool != 0) {
			var_110_float = 0;
		}
		@@@var_17_object:set(var_109_int, var_110_float);
		var_109_int = var_109_int + (int)1;
		goto Label_815;
	}
	return 6;
}


func_240(var_2_object, var_6_object, var_8_object, var_33_float)
{
	var_34_int = 0; var_35_int = 0; var_36_float = 0; var_37_int = 0; var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_int = 0; var_42_float = 0; var_43_int = 0; var_44_int = 0; var_45_string = "";
	@@@var_6_object:size(var_40_int);
	var_46_bool = var_40_int == 0; //@nz
	if(var_46_bool != 0) {
		return 12;
	}
	var_41_int = 0;
	
Label_247:
	var_47_bool = var_41_int < var_40_int;
	if(var_47_bool != 0) {
		@@@var_8_object:get(var_42_float, var_41_int);
		var_42_float = var_42_float - var_33_float;
		var_49_bool = var_42_float > (int)0;
		if(var_49_bool != 0) {
			@@@var_8_object:set(var_41_int, var_42_float);
		} else {
			var_51_int = 0;
			var_41_int = var_51_int;
			func_232(var_43_int, var_44_int, var_45_string, var_51_int);
			var_40_int = var_40_int + (int)-1;
			var_41_int = var_41_int + (int)-1;
	}
		var_55_bool = var_40_int == (int)0;
		if(var_55_bool != 0) {
			@@@var_2_object:size(var_43_int);
			var_44_int = 0;

		Label_275:
			var_56_bool = var_44_int < var_43_int;
			if(var_56_bool != 0) {
				@@@var_2_object:get(var_45_string, var_44_int);
				ReleaseImage(var_45_string);
				var_44_int = var_44_int + (int)1;
				goto Label_275;
			}
			@@@var_2_object:clear();
		}
		var_41_int = var_41_int + (int)1;
		goto Label_247;
	}
	return 12;
	
}


func_113(var_3_object, var_4_object)
{
	@@@var_3_object:remove((int)0);
	@@@var_4_object:remove((int)0);
	return 0;
}


func_754(var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_144_string, var_145_bool)
{
	var_146_object = Obj(); var_147_int = 0; var_148_int = 0; var_149_string = ""; var_150_float = 0; var_151_float = 0; var_152_float = 0; var_153_float = 0; var_154_object = Obj(); var_155_int = 0; var_156_int = 0; var_157_string = ""; var_158_float = 0; var_159_float = 0; var_160_float = 0; var_161_float = 0;
	FindActor(var_154_object, "player");
	var_163_bool = var_154_object == 0; //@nz
	if(var_163_bool != 0) {
		return 16;
	}
	@@@var_14_object:size(var_155_int);
	var_156_int = 0;
	
Label_764:
	var_164_bool = var_156_int < var_155_int;
	if(var_164_bool != 0) {
		@@@var_14_object:get(var_157_string, var_156_int);
		var_165_bool = var_157_string == var_144_string;
		if(var_165_bool != 0) {
			@@@var_16_object:get(var_158_float, var_156_int);
			@@var_154_object:GetProperty(var_157_string, var_159_float);
			var_166_bool = var_158_float == var_159_float;
			if(var_166_bool != 0) {
				return 16;
			}
			@@@var_16_object:set(var_156_int, var_159_float);
			var_167_bool = var_145_bool;
			if(var_167_bool != 0) {
				@@@var_15_object:get(var_160_float, var_156_int);
				@@@var_17_object:set(var_156_int, (float)2.0);
				var_170_int = var_160_float - var_159_float;
				var_161_float = (float)10.0 * var_170_int;
				var_172_bool = var_161_float < (int)0;
				if(var_172_bool != 0) {
					var_161_float = var_161_float * (float)-1.0;
				}
				var_175_bool = var_161_float < (float)0.20000000298023224;
				if(var_175_bool != 0) {
				} else {
					var_177_bool = (float)0.20000000298023224 > (float)1.0;
					if(var_177_bool == 0) goto Label_803;
					var_161_float = 1.0;
		}
				var_156_int = var_156_int + (int)1;
				goto Label_764;
			}
		Label_803:
			@@@var_18_object:set(var_156_int, var_161_float);
		}
		goto Label_809;
	}
Label_809:
	return 16;
	
}
EMIT "Stack[-8] = 0";


func_1078(var_22_bool)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0;
	FindActor(var_25_object, "player");
	var_28_bool = var_25_object == 0; //@nz
	if(var_28_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	@@var_25_object:IsVisirOn(var_26_bool);
	var_26_bool = var_22_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_120(var_3_object, var_4_object, var_21_float)
{
	var_22_int = 0; var_23_float = 0; var_24_int = 0; var_25_float = 0;
	@@@var_3_object:size(var_24_int);
	var_26_bool = var_24_int == 0; //@nz
	if(var_26_bool != 0) {
		return 4;
	}
	@@@var_4_object:get(var_25_float, (int)0);
	var_25_float = var_25_float - var_21_float;
	var_29_bool = var_25_float > (int)0;
	if(var_29_bool != 0) {
		@@@var_4_object:set((int)0, var_25_float);
	} else {
		func_113(var_24_int, var_25_float);
	}
	return 4;
	
}


func_315(var_6_object, var_7_object, var_8_object, var_10_int)
{
	var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; var_100_float = 0; var_101_float = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_float = 0; var_107_float = 0;
	var_109_bool = var_10_int != (int)-1;
	if(var_109_bool != 0) {
		return 12;
	}
	@@@var_6_object:size(var_102_int);
	var_110_bool = var_102_int == 0; //@nz
	if(var_110_bool != 0) {
		return 12;
	}
	var_103_int = 0;
	
Label_326:
	var_111_bool = var_103_int < var_102_int;
	if(var_111_bool != 0) {
		@@@var_6_object:get(var_104_int, var_103_int);
		@@@var_7_object:get(var_105_int, var_103_int);
		@@@var_8_object:get(var_106_float, var_103_int);
		var_113_float = var_106_float / (float)4.0;
		var_107_float = sqrt(var_113_float);
		var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_float = 0;
		var_104_int = var_114_int;
		var_105_int = var_115_int;
		var_103_int = var_116_int;
		var_107_float = var_117_float;
		func_607(var_114_int, var_115_int, var_116_int, var_117_float);
		var_103_int = var_103_int + (int)1;
		goto Label_326;
	}
	return 12;
}


func_638(var_10_int, var_11_float)
{
	var_251_string = ""; var_252_float = 0; var_253_string = ""; var_254_float = 0;
	var_256_bool = var_10_int == (int)-1;
	if(var_256_bool != 0) {
		return 4;
	}
	GetStringByID(var_253_string, var_10_int);
	var_258_float = (float)3.140000104904175 * var_11_float;
	var_260_float = var_258_float / (float)1.0;
	var_262_float = var_260_float / (float)2.0;
	var_254_float = sin(var_262_float);
	Print("help", (int)10, (int)10, var_253_string, (float)1.0, (float)1.0, (float)1.0, var_254_float);
	return 4;
}


