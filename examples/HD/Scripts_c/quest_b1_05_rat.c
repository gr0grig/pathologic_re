// @IMPORTS: HasProperty/2,GetProperty/2,rand/2,Sleep/1,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,Speak/1,Hold/0,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,StopSecondaryAnimation/0,PlayAnimation/2,WaitForAnimEnd/0,LockAnimationEnd/2,RemoveEnvelope/0,GetAttackDistance/1,Face/1,irand/2,SetAttackState/1,WaitForAnimEnd/1,GetVictim/2,ReportAttack/1,StopAnimation/0,SetTimer/2,KillTimer/1,FindPathTo/2,FollowPath/5,Sleep/2,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,IsPlayerActor/2,GetScene/1,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateFloatVector/1,RumblePlay/2,FindActor/2,Trigger/2,BroadcastMessage/3,ResetAAS/0,SignalDeath/1,ReportHit/4,CreateInvItem/1,rand/3,RemoveActor/1
// @STRINGS: W:health|W:player_shot|W:death|W:die|W:all|A:GetPosition|W:attack|W:attack_begin|W:attack_end|W:run|A:GetPFPosition|W:walk|W:retreat|W:Can't retreat, distance: |W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|W:battle|W:rat|A:SetItemName|W:quality|W:quest_b1_05|W:rat_dead
// @GLOBALS: 0:float:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_1: op=0x11 vars=object
// @EVENT_16: op=0x1f vars=object,string
// @EVENT_17: op=0x2f vars=object
// @EVENT_0: op=0x3f vars=object
// @EVENT_42: op=0x45 vars=object,string
// @EVENT_10: op=0x93 vars=object
// @EVENT_28: op=0x97 vars=
// @EVENT_41: op=0xa1 vars=object
// @TASK_1: vars= params=0
// @TASK_2: vars= params=0
// @EVENT_22: op=0xde vars=object,int,float,float
// @EVENT_16: op=0xe0 vars=object,string
// @EVENT_41: op=0xe2 vars=object
// @TASK_3: vars=object params=1
// @EVENT_16: op=0x144 vars=object,string
// @EVENT_41: op=0x15b vars=object
// @EVENT_42: op=0x164 vars=object,string
// @TASK_4: vars=bool,object params=3
// @EVENT_16: op=0x193 vars=object,string
// @EVENT_41: op=0x1aa vars=object
// @EVENT_7: op=0x1b3 vars=int
// @EVENT_42: op=0x1c3 vars=object,string
// @EVENT_10: op=0x249 vars=object
// @TASK_5: vars=object,cvector,bool,object params=1
// @EVENT_7: op=0x270 vars=int
// @EVENT_16: op=0x293 vars=object,string
// @EVENT_41: op=0x2aa vars=object
// @EVENT_0: op=0x2b3 vars=object
// @STANDALONE_EVENT_41: op=0x529 vars=object
// @STANDALONE_EVENT_6: op=0x556 vars=
// @PE: 0x11,0x1f,0x2f,0x3f,0x45,0x93,0xa1,0xbb,0xc4,0xde,0xe0,0xe2,0x144,0x15b,0x164,0x193,0x1a3,0x1aa,0x1b3,0x1c3,0x237,0x249,0x254,0x25f,0x293,0x2aa,0x2b3,0x36b,0x45d,0x464,0x46f,0x4be,0x4cd,0x4d4,0x4de,0x4e8,0x529

task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj();
	var_9_object = var_11_object;
	func_1229(var_10_bool, var_11_object);
	if(var_10_bool != 0) {
		func_154(var_8_bool, var_9_object);
		var_53_object = Obj();
		var_9_object = var_53_object;
		func_1236(var_53_object);
	}
	return 0;
}


task_0_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = "";
	var_9_bool = var_12_object;
	var_10_object = var_13_string;
	func_1263(var_11_bool, var_12_object, var_13_string);
	if(var_11_bool != 0) {
		func_154(var_9_bool, var_10_object);
	}
	var_59_object = Obj(); var_60_string = "";
	var_9_bool = var_59_object;
	var_10_object = var_60_string;
	func_1290(var_59_object, var_60_string);
	return 0;
}


task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj();
	var_9_object = var_11_object;
	func_1032(var_10_bool, var_11_object);
	var_44_bool = var_10_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 0;
	}
	func_154(var_8_bool, var_9_object);
	var_45_object = Obj();
	var_9_object = var_45_object;
	func_1246(var_45_object);
	return 0;
}


task_0_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	func_1340(var_10_object);
	return 0;
}


task_0_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_12_bool = var_10_object == "player_shot";
	if(var_12_bool != 0) {
		func_154(var_9_bool, var_10_object);
		var_13_object = Obj();
		var_9_bool = var_13_object;
		TaskCall(5);
		func_607(var_17_object, var_13_object);
		TaskReturn();
	}
	return 0;
}


task_0_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object);
	return 0;
}


task_0_event_28(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	Stop();
	return 0;
}


task_0_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_154(var_8_bool, var_9_object);
	var_9_object = Obj();
	func_1321();
	return 0;
}


task_2_event_22(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object)
{
	return 0;
}


task_2_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	return 0;
}


task_3_event_16(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = "";
	var_9_bool = var_12_object;
	var_10_object = var_13_string;
	func_1263(var_11_bool, var_12_object, var_13_string);
	if(var_11_bool != 0) {
		func_340();
	}
	var_59_object = Obj(); var_60_string = "";
	var_9_bool = var_59_object;
	var_10_object = var_60_string;
	func_1290(var_59_object, var_60_string);
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_340();
	var_9_object = Obj();
	func_1321();
	return 0;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_12_bool = var_10_object == "player_shot";
	if(var_12_bool != 0) {
		func_340();
		var_13_object = Obj();
		var_9_bool = var_13_object;
		TaskCall(5);
		func_607(var_17_object, var_13_object);
		TaskReturn();
	}
	return 0;
}


task_4_event_16(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = "";
	var_9_bool = var_12_object;
	var_10_object = var_13_string;
	func_1263(var_11_bool, var_12_object, var_13_string);
	if(var_11_bool != 0) {
		func_419();
	}
	var_61_object = Obj(); var_62_string = "";
	var_9_bool = var_61_object;
	var_10_object = var_62_string;
	func_1290(var_61_object, var_62_string);
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_419();
	var_9_object = Obj();
	func_1321();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_11_bool = var_9_object == (int)111;
	if(var_11_bool != 0) {
		Speak("run");
		func_389();
	} else {
		var_19_int = 0;
		var_9_object = var_19_int;
		func_567(var_8_bool, var_9_object, var_19_int);
	}
	return 0;
	
}


task_4_event_42(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_12_bool = var_10_object == "player_shot";
	if(var_12_bool != 0) {
		func_419();
		var_15_object = Obj();
		var_9_bool = var_15_object;
		TaskCall(5);
		func_607(var_19_object, var_15_object);
		TaskReturn();
	}
	return 0;
}


task_4_event_10(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object);
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int)
{
	var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	var_15_bool = var_9_int == (int)110;
	if(var_15_bool != 0) {
		var_16_bool = 0; var_17_object = Obj();
		var_17_object = var_3_bool;
		func_1032(var_16_bool, var_17_object);
		var_50_bool = var_16_bool == 0; //@nz
		if(var_50_bool != 0) {
			func_675();
		} else {
			GetPosition(var_12_cvector);
			@@@var_3_bool:GetPosition(var_13_cvector);
			var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
			var_12_cvector = var_54_cvector;
			var_13_cvector = var_55_cvector;
			func_1113(var_53_float, var_54_cvector, var_55_cvector);
			var_59_bool = var_53_float >= (float)2250000.0;
			if(var_59_bool == 0) goto Label_653;
			func_675();
	}
		var_60_int = 0;
		var_9_int = var_60_int;
		func_800(var_11_cvector, var_12_cvector, var_13_cvector, var_60_int);
	}
Label_653:
	goto Label_658;
	
Label_658:
	return 4;
	
}


task_5_event_16(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_string)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = "";
	var_9_object = var_12_object;
	var_10_string = var_13_string;
	func_1263(var_11_bool, var_12_object, var_13_string);
	if(var_11_bool != 0) {
		func_675();
	}
	var_61_object = Obj(); var_62_string = "";
	var_9_object = var_61_object;
	var_10_string = var_62_string;
	func_1290(var_61_object, var_62_string);
	return 0;
}


task_5_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object)
{
	func_675();
	var_9_object = Obj();
	func_1321();
	return 0;
}


task_5_event_0(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	func_1340(var_10_object);
	return 0;
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object)
{
	var_9_object = Obj();
	func_1256();
	return 0;
}


event_6(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	func_1097(Obj());
	var_11_object = var_10_object;
	func_991(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		var_16_bool = 0; var_17_string = ""; var_18_string = "";
		func_1191(var_16_bool, "quest_b1_05", "rat_dead");
	}
	var_22_object = Obj();
	func_1097(var_22_object);
	RemoveActor(var_22_object);
	Hold();
	return 0;
}


main(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_float = 0; var_11_bool = 0; var_12_float = 0;
	HasProperty("health", var_11_bool);
	var_14_bool = var_11_bool;
	if(var_14_bool != 0) {
		GetProperty("health", var_12_float);
		var_16_float = GlobalVars[0];
		var_12_float = var_16_float;
		GlobalVars[0] = var_16_float;
	}
Label_12:
	func_83(var_11_bool, var_12_float);
	goto Label_12;
}
EMIT "Return(); Pop(4)";


func_1155(var_19_object, var_20_object, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0;
	@@var_20_object:GetItemID(var_25_int);
	GetInvItemProperty(var_26_int, var_25_int, "Category");
	@@var_19_object:AddItem(var_27_bool, var_20_object, var_26_int, var_21_int);
	var_29_bool = var_27_bool == 0; //@nz
	if(var_29_bool != 0) {
		@@var_19_object:DropItems(var_20_object, var_21_int);
	} else {
		var_30_int = 0; var_31_int = 0;
		var_25_int = var_30_int;
		var_21_int = var_31_int;
		func_1143(var_30_int, var_31_int);
	}
	return 6;
	
}


func_389()
{
	var_13_float = 0; var_14_float = 0;
	rand(var_14_float, (int)10);
	var_18_int = var_14_float + (int)10;
	SetTimer((int)111, var_18_int);
	return 2;
}


func_901(var_72_bool, var_73_object)
{
	var_74_bool = 0; var_75_bool = 0;
	IsPlayerActor(var_73_object, var_75_bool);
	var_75_bool = var_72_bool;
	return 2;
}


func_1032(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0;
	var_29_bool = 0; var_30_object = Obj();
	var_26_object = var_30_object;
	func_996(var_29_bool, var_30_object);
	var_46_bool = var_29_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	var_47_bool = 0; var_48_object = Obj(); var_49_string = "";
	var_26_object = var_48_object;
	func_906(var_47_bool, var_48_object, "noaccess");
	var_56_bool = var_47_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_25_bool = 1;
		return 2;
	}
	@@var_26_object:GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == (int)0;
	return 2;
}


func_1290(var_61_object, var_62_string)
{
	var_63_float = 0; var_64_float = 0;
	var_66_bool = var_62_string == "health";
	if(var_66_bool != 0) {
		GetProperty("health", var_64_float);
		var_69_bool = var_64_float <= (int)0;
		if(var_69_bool != 0) {
			SignalDeath(var_61_object);
		}
		var_70_bool = 0;
		var_70_bool = 0;
		var_71_float = GlobalVars[0];
		var_72_bool = var_64_float < var_71_float;
		if(var_72_bool != 0) {
			var_73_bool = 0; var_74_object = Obj();
			var_61_object = var_74_object;
			func_1032(var_73_bool, var_74_object);
			if(var_73_bool != 0) {
				var_70_bool = 1;
			}
		}
		if(var_70_bool != 0) {
			var_75_object = Obj();
			var_61_object = var_75_object;
			TaskCall(5);
			func_607(var_79_object, var_75_object);
			TaskReturn();
		}
	}
	return 2;
}


func_906(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0;
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", (int)2);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_47_bool = 0;
		return 2;
	}
	@@var_48_object:HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
	return 2;
}


func_142(var_32_float)
{
	var_33_float = 0; var_34_float = 0;
	GetCameraFarDistance(var_34_float);
	var_34_float = var_32_float;
	return 2;
}


func_399()
{
	KillTimer((int)111);
	return 0;
}


func_1174(var_153_float)
{
	var_154_object = Obj(); var_155_object = Obj();
	CreateFloatVector(var_155_object);
	@@var_155_object:add(var_153_float);
	var_157_bool = var_153_float < (int)0;
	if(var_157_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_155_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_918(var_100_float, var_101_object, var_102_float, var_103_int)
{
	var_104_int = 0; var_105_string = ""; var_106_int = 0; var_107_float = 0; var_108_float = 0; var_109_float = 0; var_110_int = 0; var_111_string = ""; var_112_int = 0; var_113_float = 0; var_114_float = 0; var_115_float = 0;
	var_116_bool = 0; var_117_object = Obj(); var_118_string = "";
	var_101_object = var_117_object;
	func_906(var_116_bool, var_117_object, "health");
	var_119_bool = var_116_bool == 0; //@nz
	if(var_119_bool != 0) {
		var_100_float = 0.0;
		return 12;
	}
	var_120_bool = 0; var_121_object = Obj(); var_122_string = "";
	var_101_object = var_121_object;
	func_906(var_120_bool, var_121_object, "armor");
	var_123_bool = var_120_bool == 0; //@nz
	if(var_123_bool != 0) {
		var_110_int = 0;
	} else {
			@@var_101_object:GetProperty("armor", var_110_int);
	}
	var_125_string = ""; var_126_int = 0;
	var_103_int = var_126_int;
	func_875(var_125_string, var_126_int);
	var_111_string = "armor_" + var_125_string;
	var_131_bool = 0; var_132_object = Obj(); var_133_string = "";
	var_101_object = var_132_object;
	var_111_string = var_133_string;
	func_906(var_131_bool, var_132_object, var_133_string);
	var_134_bool = var_131_bool == 0; //@nz
	if(var_134_bool != 0) {
		var_112_int = 0;
	} else {
		@@var_101_object:GetProperty(var_111_string, var_112_int);

	}
	var_135_float = 0; var_136_float = 0; var_137_float = 0;
	var_138_int = var_110_int + var_112_int;
	var_136_float = var_138_int / (float)100.0;
	func_1117(var_135_float, var_136_float, (float)1);
	var_135_float = var_113_float;
	@@var_101_object:GetProperty("health", var_114_float);
	var_143_int = (int)1 - var_113_float;
	var_115_float = var_102_float * var_143_int;
	var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_float = 0;
	var_146_float = var_114_float - var_115_float;
	func_1124(var_145_float, var_146_float, (float)0, (float)1);
	@@var_101_object:SetProperty("health", var_145_float);
	var_151_bool = 0; var_152_object = Obj();
	var_101_object = var_152_object;
	func_901(var_151_bool, var_152_object);
	if(var_151_bool != 0) {
		var_153_float = 0;
		var_153_float = -var_115_float;
		func_1174(var_153_float);
	}
	var_115_float = var_100_float;
	return 12;
	
}


func_154(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1056(var_14_string)
{
	var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0);
	IsExisting3DSound(var_23_bool, var_14_string);
	var_31_bool = var_23_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_24_int = 0;

	Label_1062:
		var_33_int = var_24_int + (int)1;
		var_34_int = var_14_string + var_33_int;
		IsExisting3DSound(var_25_bool, var_34_int);
		var_35_bool = var_25_bool == 0; //@nz
		if(var_35_bool != 0) {
		} else {
			var_24_int = var_24_int + (int)1;
			goto Label_1062;
		}
		var_36_bool = var_24_int == 0; //@nz
		if(var_36_bool != 0) {
			return 16;
		}
		irand(var_26_int, var_24_int);
		var_38_int = var_26_int + (int)1;
		var_14_string = var_14_string + var_38_int;
	}
	Is3DSoundLoaded(var_27_bool, var_14_string);
	var_39_bool = var_27_bool;
	if(var_39_bool != 0) {
		GetEyesHeight(var_28_float);
		GetDirection(var_29_cvector);
		var_30_cvector = var_29_cvector * (int)50;
		var_41_float = GetByIndex(var_30_cvector, 1);
		var_41_float = var_41_float + var_28_float;
		SetByIndex(var_30_cvector, 1) = var_41_float;
		PlayGlobalSound(var_14_string, var_30_cvector);
	}
	return 16;
	
}


func_800(var_0_bool, var_1_bool, var_2_object, var_60_int)
{
	var_61_cvector = CVector(0,0,0); var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_float = 0;
	var_70_bool = var_60_int != (int)120;
	if(var_70_bool != 0) {
		return 8;
	}
	var_71_bool = var_0_bool == 0; //@ne
	if(var_71_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_65_cvector);
		FindDirLength(var_66_float, var_65_cvector, (float)7000.0);
		var_74_cvector = CVector(0,0,0); var_75_float = 0;
		func_697(var_68_float, var_74_cvector, (float)1.7453293800354004);
		var_74_cvector = var_67_cvector;
		var_68_float = var_67_cvector | var_67_cvector;
		var_104_bool = 0;
		var_104_bool = 0;
		var_106_bool = var_68_float >= (float)2500.0;
		if(var_106_bool != 0) {
			var_107_bool = 0;
			var_108_float = var_66_float * var_66_float;
			var_110_float = var_108_float * (float)2.25;
			var_111_bool = var_68_float >= var_110_float;
			if(var_111_bool != 1) {
				var_112_bool = 0;
				func_859((bool)1, var_112_bool);
				if(var_112_bool != 1) {
					var_107_bool = 0;
				}
			}
			if(var_107_bool != 0) {
				var_104_bool = 1;
			}
		}
		if(var_104_bool == 0) goto Label_851;
		Stop();
		var_132_cvector = CVector(0,0,0);
		func_889(var_132_cvector);
		var_1_bool = var_132_cvector + var_67_cvector;
	}
Label_851:
	return 8;
	
}


func_419()
{
	func_399();
	func_589(var_10_object);
	return 0;
}


func_675()
{
	KillTimer((int)110);
	func_852(var_9_object);
	return 0;
}


func_1191(var_16_bool, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	FindActor(var_20_object, var_17_string);
	var_21_bool = var_20_object == 0; //@ne
	if(var_21_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	Trigger(var_20_object, var_18_string);
	var_16_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_170(var_42_bool)
{
	var_42_bool = 0;
	return 0;
}


func_172(var_36_object, var_37_cvector)
{
	var_38_object = Obj(); var_39_object = Obj();
	FindShiftedPathTo(var_39_object, var_37_cvector);
	var_39_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1327(var_97_object)
{
	var_98_float = 0; var_99_float = 0;
	var_100_float = 0; var_101_object = Obj(); var_102_float = 0; var_103_int = 0;
	var_97_object = var_101_object;
	func_918(var_100_float, var_101_object, (float)0.02500000037252903, (int)0);
	var_100_float = var_99_float;
	ReportHit(var_97_object, (int)7, var_99_float, (float)0.02500000037252903);
	return 2;
}


func_178()
{
	return 0;
}


func_1203()
{
	var_84_object = Obj(); var_85_object = Obj();
	GetScene(var_85_object);
	var_87_object = Obj();
	func_1097(var_87_object);
	BroadcastMessage("battle", var_87_object, var_85_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_179()
{
	Speak("death");
	var_12_string = "";
	func_187("die");
	return 0;
}


func_567(var_0_bool, var_1_bool, var_19_int)
{
	var_21_bool = var_19_int != (int)0;
	if(var_21_bool != 0) {
		return 0;
	}
	var_22_bool = 0; var_23_object = Obj();
	var_23_object = var_1_bool;
	func_596(var_22_bool, var_23_object);
	var_58_bool = var_22_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_697(var_0_bool, var_94_cvector, var_95_float)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_float = 0;
	GetPosition(var_102_cvector);
	@@@var_0_bool:GetPosition(var_103_cvector);
	GetDirection(var_104_cvector);
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0);
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0);
	var_111_cvector = var_102_cvector - var_103_cvector;
	func_1103(var_110_cvector, var_111_cvector);
	var_118_float = var_104_cvector * (float)0.75;
	var_109_cvector = var_110_cvector + var_118_float;
	func_1103(var_108_cvector, var_109_cvector);
	var_108_cvector = var_105_cvector;
	FindLongestDir(var_106_cvector, var_107_float, var_105_cvector, var_95_float, (int)32, (float)7000.0);
	var_107_float = var_107_float - (int)100;
	var_123_bool = var_107_float < (int)0;
	if(var_123_bool != 0) {
		var_107_float = 0;
	}
	var_94_cvector = var_106_cvector * var_107_float;
	return 12;
}


func_187(var_12_string)
{
	var_13_string = "";
	var_12_string = var_13_string;
	func_196(var_13_string);
	
Label_192:
	Hold();
	goto Label_192;
}
EMIT "Return(); Pop(0)";


func_1340(var_10_object)
{
	var_11_object = Obj(); var_12_float = 0; var_13_object = Obj(); var_14_float = 0;
	CreateInvItem(var_13_object);
	@@var_13_object:SetItemName("rat");
	rand(var_14_float, (float)0.25, (float)0.5);
	@@var_13_object:SetProperty("quality", var_14_float);
	var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0;
	var_10_object = var_19_object;
	var_13_object = var_20_object;
	func_1155(var_19_object, var_20_object, (int)1);
	var_35_object = Obj();
	func_1097(var_35_object);
	RemoveActor(var_35_object);
	return 4;
}
EMIT "Stack[-2] = 0";


func_1214(var_67_bool, var_68_object)
{
	var_69_bool = 0; var_70_object = Obj();
	var_68_object = var_70_object;
	func_1032(var_69_bool, var_70_object);
	var_71_bool = var_69_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_67_bool = 0;
		return 0;
	}
	var_72_bool = 0; var_73_object = Obj();
	var_68_object = var_73_object;
	func_901(var_72_bool, var_73_object);
	var_72_bool = var_67_bool;
	return 0;
}


func_196(var_13_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_14_string = "";
	var_13_string = var_14_string;
	func_1056(var_14_string);
	PlayAnimation("all", var_13_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_13_string);
	RemoveEnvelope();
	return 0;
}


func_1097(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1229(var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1214(var_12_bool, var_13_object);
	var_12_bool = var_10_bool;
	return 0;
}


func_589(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1103(var_110_cvector, var_111_cvector)
{
	var_112_float = 0; var_113_float = 0;
	var_114_int = var_111_cvector | var_111_cvector;
	var_113_float = sqrt(var_114_int);
	var_115_float = 9.999999974752427e-07;
	var_116_bool = var_113_float < var_115_float;
	if(var_116_bool != 0) {
		var_110_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_110_cvector = var_111_cvector / var_113_float;
	return 2;
}


func_465(var_0_bool, var_1_bool, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool)
{
	var_188_bool = 0; var_189_bool = 0; var_190_object = Obj(); var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_cvector = CVector(0,0,0); var_194_float = 0; var_195_object = Obj(); var_196_bool = 0; var_197_bool = 0; var_198_object = Obj(); var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_cvector = CVector(0,0,0); var_202_float = 0; var_203_object = Obj();
	var_0_bool = false;
	var_1_bool = var_182_object;
	var_186_bool = var_197_bool;
	
Label_469:
	var_204_bool = 0; var_205_object = Obj();
	var_182_object = var_205_object;
	func_596(var_204_bool, var_205_object);
	var_208_bool = var_204_bool == 0; //@nz
	if(var_208_bool != 0) {
		var_181_bool = 0;
		return 16;
	}
	@@var_182_object:GetPosition(var_199_cvector);
	GetPosition(var_200_cvector);
	var_201_cvector = var_199_cvector - var_200_cvector;
	var_202_float = var_201_cvector | var_201_cvector;
	var_209_bool = 0;
	var_209_bool = 0;
	var_211_bool = var_184_float > (int)0;
	if(var_211_bool != 0) {
		var_212_float = var_184_float * var_184_float;
		var_213_bool = var_202_float > var_212_float;
		if(var_213_bool != 0) {
			var_209_bool = 1;
		}
	}
	if(var_209_bool != 0) {
		Stop();
		var_181_bool = 0;
		return 16;
	}
	var_214_float = var_183_float * var_183_float;
	var_215_bool = var_202_float > var_214_float;
	if(var_215_bool != 0) {
		@@var_182_object:GetPFPosition(var_199_cvector);
		FindPathTo(var_203_object, var_199_cvector);
		var_216_bool = var_203_object != 0; //@nn
		if(var_216_bool != 0) {
			var_203_object = var_198_object;
			var_203_object = 0;
		}
		var_217_bool = var_198_object != 0; //@nn
		if(var_217_bool != 0) {
			var_218_bool = var_197_bool;
			if(var_218_bool == 0) goto Label_518;
			var_197_bool = 0;
			RotatePath(var_198_object, var_196_bool);
			var_219_bool = var_196_bool == 0; //@nz
			if(var_219_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_222_string = "";
				func_603(var_222_string);
				var_223_string = "";
				func_605(var_223_string);
				FollowPath(var_198_object, var_185_bool, var_196_bool, var_222_string, var_223_string);
				var_224_bool = var_196_bool == 0; //@nz
				if(var_224_bool != 0) {
					var_225_bool = var_0_bool;
					if(var_225_bool != 0) {
						var_198_object = 0;
						goto Label_565;
					EMIT "GOTO 0x21a";
					}
				} else {
					var_198_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_196_bool);
					var_228_bool = var_196_bool == 0; //@nz
					if(var_228_bool != 0) {
						var_229_bool = var_0_bool;
						if(var_229_bool != 0) {
							var_198_object = 0;
							goto Label_565;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_565;
	}
			var_203_object = 0;
			goto Label_563;

		Label_563:
			var_198_object = 0;

		}
		goto Label_469;
	}
Label_565:
	var_181_bool = !var_0_bool;
	return 16;
	
}


func_83(var_0_bool, var_1_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_23_float, (float)0.5);
	Sleep(var_23_float);
	
Label_91:
	var_30_bool = var_0_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_31_bool = var_1_bool == 0; //@nz
		if(var_31_bool != 0) {

		Label_95:
			GetPosition(var_25_cvector);
			var_32_float = 0;
			func_142(var_32_float);
			GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool);
			var_35_bool = var_26_bool;
			if(var_35_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_95;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_111;
	
Label_111:
	var_36_object = Obj(); var_37_cvector = CVector(0,0,0);
	var_24_cvector = var_37_cvector;
	func_172(var_36_object, var_37_cvector);
	var_36_object = var_27_object;
	var_40_bool = var_27_object != 0; //@nn
	if(var_40_bool != 0) {
		RotatePath(var_27_object, var_28_bool);
		var_41_bool = var_28_bool;
		if(var_41_bool != 0) {
			var_42_bool = 0;
			func_170(var_42_bool);
			FollowPath(var_27_object, var_42_bool, var_28_bool);
			var_27_object = 0;
			var_43_bool = var_28_bool;
			if(var_43_bool != 0) {
				TaskCall(1);
				func_178();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_27_object = 0;
	goto Label_91;
	
}


func_1236(var_53_object)
{
	var_54_object = Obj();
	var_53_object = var_54_object;
	TaskCall(3);
	func_228(var_53_object, var_55_object, var_54_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_340()
{
	Stop();
	StopAnimation();
	StopAsync();
	return 0;
}


func_596(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	func_1032(var_24_bool, var_25_object);
	var_24_bool = var_22_bool;
	return 0;
}


func_727(var_0_bool, var_1_bool, var_2_object, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0;
	var_0_bool = var_83_object;
	var_94_cvector = CVector(0,0,0); var_95_float = 0;
	func_697(var_93_float, var_94_cvector, (float)1.7453293800354004);
	var_94_cvector = var_89_cvector;
	var_90_float = var_89_cvector | var_89_cvector;
	var_125_bool = var_90_float < (float)2500.0;
	if(var_125_bool != 0) {
		var_126_cvector = CVector(0,0,0); var_127_float = 0;
		func_697(var_93_float, var_126_cvector, (float)2.6179938316345215);
		var_126_cvector = var_89_cvector;
		var_90_float = var_89_cvector | var_89_cvector;
		var_129_bool = var_90_float < (float)2500.0;
		if(var_129_bool != 0) {
			var_131_float = sqrt(var_90_float);
			var_132_int = "Can't retreat, distance: " + var_131_float;
			Trace(var_132_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_134_float = GetByIndex(var_89_cvector, 0);
	var_135_float = GetByIndex(var_89_cvector, 2);
	Rotate(var_134_float, var_135_float);
	var_136_cvector = CVector(0,0,0);
	func_889(var_136_cvector);
	var_1_bool = var_136_cvector + var_89_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_769:
	MovePoint(var_1_bool, (int)1, var_91_bool);
	var_142_bool = var_91_bool;
	if(var_142_bool != 0) {
		var_143_bool = var_0_bool == 0; //@ne
		if(var_143_bool != 0) {
			goto Label_799;
		EMIT "GOTO 0x31d";

		Label_799:
			return 10;
		}
		var_144_cvector = CVector(0,0,0); var_145_float = 0;
		func_697(var_93_float, var_144_cvector, (float)2.6179938316345215);
		var_144_cvector = var_92_cvector;
		var_93_float = var_92_cvector | var_92_cvector;
		var_147_bool = var_93_float >= (float)2500.0;
		if(var_147_bool != 0) {
			var_148_cvector = CVector(0,0,0);
			func_889(var_148_cvector);
			var_1_bool = var_148_cvector + var_92_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_799;
		}
	}
	var_151_bool = var_2_object == 0; //@nz
	if(var_151_bool == 1) goto Label_769;
	
}


func_852(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1113(var_53_float, var_54_cvector, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	var_57_cvector = var_55_cvector - var_54_cvector;
	var_53_float = var_57_cvector | var_57_cvector;
	return 2;
}


func_603(var_222_string)
{
	var_222_string = "walk";
	return 0;
}


func_859(var_0_bool, var_112_bool)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0);
	GetDirection(var_115_cvector);
	var_117_cvector = CVector(0,0,0); var_118_object = Obj();
	var_118_object = var_0_bool;
	func_894(var_117_cvector, var_118_object);
	var_117_cvector = var_116_cvector;
	var_123_float = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0);
	var_115_cvector = var_124_cvector;
	var_116_cvector = var_125_cvector;
	func_1135(var_123_float, var_124_cvector, var_125_cvector);
	var_112_bool = var_123_float >= (float)-0.3420201241970062;
	return 4;
}


func_605(var_223_string)
{
	var_223_string = "run";
	return 0;
}


func_1246(var_45_object)
{
	var_46_object = Obj();
	var_45_object = var_46_object;
	TaskCall(3);
	func_228(var_45_object, var_47_object, var_46_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_607(var_3_bool, var_75_object)
{
	var_3_bool = var_75_object;
	Speak("retreat");
	SetTimer((int)110, (int)1);
	var_83_object = Obj();
	var_75_object = var_83_object;
	func_727(var_78_bool, var_79_object, var_75_object, var_83_object);
	KillTimer((int)110);
	return 0;
}


func_1117(var_135_float, var_136_float, var_137_float)
{
	var_140_bool = var_136_float < var_137_float;
	if(var_140_bool != 0) {
		var_136_float = var_135_float;
	} else {
		var_137_float = var_135_float;
	}
	return 0;
	
}


func_991(var_9_bool, var_10_object)
{
	var_14_bool = 0; var_15_bool = 0;
	@@var_10_object:IsDead(var_15_bool);
	var_15_bool = var_9_bool;
	return 2;
}


func_1124(var_145_float, var_146_float, var_147_float, var_148_float)
{
	var_149_bool = var_146_float < var_147_float;
	if(var_149_bool != 0) {
		var_147_float = var_145_float;
		return 0;
	}
	var_150_bool = var_146_float > var_148_float;
	if(var_150_bool != 0) {
		var_148_float = var_145_float;
		return 0;
	}
	var_146_float = var_145_float;
	return 0;
}


func_996(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	var_35_bool = var_30_object == 0; //@ne
	if(var_35_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_36_bool = 0;
	var_36_bool = 0;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", (int)1);
	if(var_39_bool != 0) {
		var_40_bool = 0; var_41_object = Obj();
		var_30_object = var_41_object;
		func_991(var_40_bool, var_41_object);
		if(var_40_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	GetScene(var_33_object);
	var_44_bool = var_33_object == 0; //@ne
	if(var_44_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	@@var_30_object:GetScene(var_34_object);
	var_45_bool = var_33_object != var_34_object;
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_29_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_228(var_0_bool, var_46_object, var_171_bool)
{
	var_48_float = 0; var_49_float = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_float = 0; var_55_int = 0; var_56_object = Obj(); var_57_float = 0; var_58_float = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_float = 0; var_64_int = 0; var_65_object = Obj();
	var_0_bool = var_46_object;
	GetAttackDistance(var_57_float);
	var_58_float = var_57_float + (int)10;
	Face(var_0_bool);
	
Label_236:
	var_67_bool = 0; var_68_object = Obj();
	var_68_object = var_0_bool;
	func_1214(var_67_bool, var_68_object);
	if(var_67_bool != 0) {
		@@@var_0_bool:GetPosition(var_60_cvector);
		GetPosition(var_61_cvector);
		var_62_cvector = var_60_cvector - var_61_cvector;
		var_63_float = var_62_cvector | var_62_cvector;
		var_76_float = var_58_float * var_58_float;
		var_77_bool = var_63_float < var_76_float;
		if(var_77_bool != 0) {
			irand(var_64_int, (int)2);
			var_81_int = var_64_int + (int)1;
			var_82_int = "attack" + var_81_int;
			Speak(var_82_int);
			SetAttackState((bool)1);
			func_1203();
			PlayAnimation("all", "attack_begin");
			WaitForAnimEnd(var_59_bool);
			var_92_bool = var_59_bool == 0; //@nz
			if(var_92_bool != 0) {
				SetAttackState((bool)0);
			} else {
				var_94_bool = 0; var_95_object = Obj();
				var_95_object = var_0_bool;
				func_1032(var_94_bool, var_95_object);
				if(var_94_bool != 0) {
					GetVictim(var_57_float, var_65_object);
					ReportAttack(var_0_bool);
					var_96_bool = var_65_object == var_0_bool;
					if(var_96_bool != 0) {
						var_97_object = Obj();
						var_97_object = var_0_bool;
						func_1327(var_97_object);
					}
					var_65_object = 0;
				}
				SetAttackState((bool)0);
				PlayAnimation("all", "attack_end");
				WaitForAnimEnd(var_59_bool);
				var_167_bool = var_59_bool == 0; //@nz
				if(var_167_bool != 0) {
					goto Label_321;
				}
		} else {
				StopAsync();
				var_168_bool = 0; var_169_object = Obj(); var_170_float = 0;
				var_169_object = var_0_bool;
				var_58_float = var_170_float;
				TaskCall(4);
				func_370(var_168_bool, var_169_object, var_170_float);
				TaskReturn();
				var_234_bool = var_171_bool == 0; //@nz
				if(var_234_bool != 0) {
					goto Label_321;
				}
				Face(var_0_bool);
		}
			goto Label_236;

		}
	}
Label_321:
	StopAsync();
	return 18;
	
}


func_1256()
{
	TaskCall(2);
	func_179();
	TaskReturn();
	return 0;
}


func_875(var_125_string, var_126_int)
{
	var_128_bool = var_126_int == (int)2;
	if(var_128_bool != 0) {
		var_125_string = "fire";
		return 0;
	EMIT "GOTO 0x377";
	}
	var_130_bool = var_126_int == (int)1;
	if(var_130_bool != 0) {
		var_125_string = "bullet";
		return 0;
	}
	var_125_string = "phys";
	return 0;
}


func_1263(var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_19_bool = var_13_string == "health";
	if(var_19_bool != 0) {
		GetProperty("health", var_16_float);
		var_21_float = GlobalVars[0];
		var_17_bool = var_16_float < var_21_float;
		var_22_float = GlobalVars[0];
		var_16_float = var_22_float;
		GlobalVars[0] = var_22_float;
		var_23_bool = 0;
		var_23_bool = 0;
		var_24_bool = var_17_bool;
		if(var_24_bool != 0) {
			var_25_bool = 0; var_26_object = Obj();
			var_12_object = var_26_object;
			func_1032(var_25_bool, var_26_object);
			if(var_25_bool != 0) {
				var_23_bool = 1;
			}
		}
		if(var_23_bool != 0) {
			var_11_bool = 1;
			return 4;
		}
	}
	var_11_bool = 0;
	return 4;
}


func_1135(var_123_float, var_124_cvector, var_125_cvector)
{
	var_126_int = var_124_cvector | var_125_cvector;
	var_127_int = var_124_cvector | var_124_cvector;
	var_128_int = var_125_cvector | var_125_cvector;
	var_129_float = var_127_int * var_128_int;
	var_130_float = sqrt(var_129_float);
	var_123_float = var_126_int / var_130_float;
	return 0;
}


func_370(var_168_bool, var_169_object, var_170_float)
{
	var_173_bool = 0; var_174_bool = 0;
	func_389();
	var_181_bool = 0; var_182_object = Obj(); var_183_float = 0; var_184_float = 0; var_185_bool = 0; var_186_bool = 0;
	var_169_object = var_182_object;
	var_183_float = var_170_float * (float)0.8999999761581421;
	func_465(var_173_bool, var_174_bool, var_181_bool, var_182_object, var_183_float, (float)5000, (bool)1, (bool)1);
	var_181_bool = var_174_bool;
	func_399();
	var_174_bool = var_168_bool;
	return 2;
}


func_1143(var_30_int, var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateIntVector(var_33_object);
	@@var_33_object:add(var_30_int);
	@@var_33_object:add(var_31_int);
	SendWorldWndMessage((int)3, var_33_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_889(var_136_cvector)
{
	var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0);
	GetPosition(var_138_cvector);
	var_138_cvector = var_136_cvector;
	return 2;
}


func_894(var_117_cvector, var_118_object)
{
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0);
	GetPosition(var_121_cvector);
	@@var_118_object:GetPosition(var_122_cvector);
	var_117_cvector = var_122_cvector - var_121_cvector;
	return 4;
}


