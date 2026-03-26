// @IMPORTS: SensePlayerOnly/1,Sleep/1,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,GetSceneByName/2,RemoveScene/1,Hold/0,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,FindActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,CreateIntVector/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateObjectVector/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,Trace/1,Teleport/4,RemoveActor/1,BroadcastMessage/3,GetProperty/2,SignalDeath/1
// @STRINGS: A:RemoveAllItems|A:SelectWeapon|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:all|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:boiny_arena|W:NPC_Starshina|W:boiny|W:pt_Starshina|W:quest_b11_01|W:fight_win|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|A:GetItemCount|A:GetItem|A:GetItemAmount|A:IsItemSelected|A:AddItem|A:SelectItem|A:GetLocator|W:Teleport location '|W:' not found in scene '|W:battle
// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,int,int,bool,float,int params=0
// @TASK_1: vars=bool,object,bool params=6
// @EVENT_7: op=0x36c vars=int
// @EVENT_1: op=0x387 vars=object
// @EVENT_2: op=0x396 vars=object
// @EVENT_10: op=0x41c vars=object
// @EVENT_41: op=0x427 vars=object
// @TASK_2: vars= params=1
// @EVENT_22: op=0x51b vars=object,int,float,float
// @EVENT_16: op=0x51d vars=object,string
// @EVENT_41: op=0x51f vars=object
// @STANDALONE_EVENT_22: op=0x76d vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x775 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x77f vars=object,string
// @STANDALONE_EVENT_41: op=0x78c vars=object
// @PE: 0x9f,0xa2,0x333,0x36c,0x387,0x396,0x40a,0x41c,0x427,0x430,0x501,0x51b,0x51d,0x51f,0x521,0x6f2,0x6f9,0x765,0x76d,0x775,0x78c

task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_11_bool = var_9_int == (int)1;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_12_object = var_1_int;
		func_1873(var_12_object);
	} else {
		var_17_int = 0;
		var_9_int = var_17_int;
		func_1034(var_8_bool, var_9_int, var_17_int);
	}
	return 0;
	
}


task_1_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = var_1_int == var_9_object;
	if(var_11_bool != 0) {
		var_12_bool = var_2_int == 0; //@nz
		if(var_12_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_2_int = true;
		var_13_object = Obj();
		var_9_object = var_13_object;
		func_1710(var_13_object);
	}
	return 0;
}


task_1_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = var_1_int == var_9_object;
	if(var_11_bool != 0) {
		var_12_int = var_2_int;
		if(var_12_int != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object);
	return 0;
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_890(var_9_object);
	var_9_object = Obj();
	func_1932();
	return 0;
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0;
	var_9_object = var_13_object;
	var_10_int = var_14_int;
	var_11_float = var_15_float;
	func_1540(var_13_object, var_14_int, var_15_float);
	return 0;
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	var_9_object = var_15_object;
	var_10_int = var_16_int;
	var_11_float = var_17_float;
	var_13_cvector = var_18_cvector;
	var_14_cvector = var_19_cvector;
	func_1608(var_17_float, var_18_cvector, var_19_cvector);
	return 0;
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0;
	var_14_bool = var_10_string == "health";
	if(var_14_bool != 0) {
		GetProperty("health", var_12_float);
		var_17_bool = var_12_float <= (int)0;
		if(var_17_bool != 0) {
			SignalDeath(var_9_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	func_1893(var_10_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_int = 0;
	func_1334(Obj());
	var_13_object = var_11_object;
	var_17_object = GlobalVars[1];
	func_1796(Obj());
	var_18_object = var_17_object;
	GlobalVars[1] = var_17_object;
	var_21_object = GlobalVars[3];
	func_1796(Obj());
	var_22_object = var_21_object;
	GlobalVars[3] = var_21_object;
	var_23_object = GlobalVars[5];
	func_1796(Obj());
	var_24_object = var_23_object;
	GlobalVars[5] = var_23_object;
	var_25_object = GlobalVars[7];
	func_1796(Obj());
	var_26_object = var_25_object;
	GlobalVars[7] = var_25_object;
	var_27_object = GlobalVars[9];
	func_1796(Obj());
	var_28_object = var_27_object;
	GlobalVars[9] = var_27_object;
	var_29_object = GlobalVars[0];
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj();
	var_11_object = var_31_object;
	var_34_object = GlobalVars[1];
	var_34_object = var_33_object;
	func_1633(var_30_object, var_31_object, (int)0, var_33_object);
	var_30_object = var_29_object;
	GlobalVars[0] = var_29_object;
	var_50_object = GlobalVars[2];
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj();
	var_11_object = var_52_object;
	var_55_object = GlobalVars[3];
	var_55_object = var_54_object;
	func_1633(var_51_object, var_52_object, (int)1, var_54_object);
	var_51_object = var_50_object;
	GlobalVars[2] = var_50_object;
	var_56_object = GlobalVars[4];
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj();
	var_11_object = var_58_object;
	var_61_object = GlobalVars[5];
	var_61_object = var_60_object;
	func_1633(var_57_object, var_58_object, (int)2, var_60_object);
	var_57_object = var_56_object;
	GlobalVars[4] = var_56_object;
	var_62_object = GlobalVars[6];
	var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; var_66_object = Obj();
	var_11_object = var_64_object;
	var_67_object = GlobalVars[7];
	var_67_object = var_66_object;
	func_1633(var_63_object, var_64_object, (int)3, var_66_object);
	var_63_object = var_62_object;
	GlobalVars[6] = var_62_object;
	var_68_object = GlobalVars[8];
	var_69_object = Obj(); var_70_object = Obj(); var_71_int = 0; var_72_object = Obj();
	var_11_object = var_70_object;
	var_73_object = GlobalVars[9];
	var_73_object = var_72_object;
	func_1633(var_69_object, var_70_object, (int)4, var_72_object);
	var_69_object = var_68_object;
	GlobalVars[8] = var_68_object;
	var_74_object = GlobalVars[10];
	var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0;
	var_11_object = var_76_object;
	func_1658(var_75_object, var_76_object, (int)0);
	var_75_object = var_74_object;
	GlobalVars[10] = var_74_object;
	var_89_object = GlobalVars[11];
	var_90_object = Obj(); var_91_object = Obj(); var_92_int = 0;
	var_11_object = var_91_object;
	func_1658(var_90_object, var_91_object, (int)1);
	var_90_object = var_89_object;
	GlobalVars[11] = var_89_object;
	var_93_object = GlobalVars[12];
	var_94_object = Obj(); var_95_object = Obj(); var_96_int = 0;
	var_11_object = var_95_object;
	func_1658(var_94_object, var_95_object, (int)2);
	var_94_object = var_93_object;
	GlobalVars[12] = var_93_object;
	var_97_object = GlobalVars[13];
	var_98_object = Obj(); var_99_object = Obj(); var_100_int = 0;
	var_11_object = var_99_object;
	func_1658(var_98_object, var_99_object, (int)3);
	var_98_object = var_97_object;
	GlobalVars[13] = var_97_object;
	var_101_object = GlobalVars[14];
	var_102_object = Obj(); var_103_object = Obj(); var_104_int = 0;
	var_11_object = var_103_object;
	func_1658(var_102_object, var_103_object, (int)4);
	var_102_object = var_101_object;
	GlobalVars[14] = var_101_object;
	var_12_int = 0;
	
Label_131:
	var_106_bool = var_12_int < (int)5;
	if(var_106_bool != 0) {
		@@var_11_object:RemoveAllItems(var_12_int);
		var_12_int = var_12_int + (int)1;
		goto Label_131;
	}
	@@var_11_object:SelectWeapon();
	SensePlayerOnly((bool)1);
	Sleep((float)1.5);
	
Label_147:
	var_110_object = Obj(); var_111_bool = 0; var_112_float = 0;
	var_11_object = var_110_object;
	func_165(var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_110_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_147;
}
EMIT "Return(); Pop(4)";
EMIT "Stack[-2] = 0";


func_1281(var_38_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_39_string = "";
	var_38_string = var_39_string;
	func_1721(var_39_string);
	PlayAnimation("all", var_38_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_38_string);
	RemoveEnvelope();
	return 0;
}


func_1796(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj();
	CreateIntVector(var_20_object);
	var_20_object = var_18_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1540(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0);
	var_34_bool = 0;
	var_34_bool = 0;
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_object = var_13_object;
	if(var_36_object != 0) {
		var_38_bool = var_14_int != (int)4;
		if(var_38_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_40_bool = var_14_int != (int)5;
		if(var_40_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
		var_43_cvector = CVector(0,0,0); var_44_object = Obj();
		var_13_object = var_44_object;
		func_1327(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1768(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		CreateVectorVector(var_26_object);
		var_27_int = 1;

	Label_1569:
		var_55_int = "hit" + var_27_int;
		GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector);
		var_56_bool = var_28_bool == 0; //@nz
		if(var_56_bool != 0) {
		} else {
			var_104_int = var_30_cvector | var_25_cvector;
			var_106_bool = var_104_int >= (float)0.7071067690849304;
			if(var_106_bool != 0) {
				@@var_26_object:add(var_29_cvector);
			}
			var_27_int = var_27_int + (int)1;
			goto Label_1569;
		}
		@@var_26_object:size(var_31_int);
		var_57_int = var_31_int;
		if(var_57_int != 0) {
			irand(var_32_int, var_31_int);
			@@var_26_object:get(var_33_cvector, var_32_int);
			var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
			var_13_object = var_58_object;
			var_14_int = var_59_int;
			var_15_float = var_60_float;
			var_33_cvector = var_61_cvector;
			var_62_cvector = -var_25_cvector;
			func_1608(var_60_float, var_61_cvector, var_62_cvector);
			return 18;
		}
		var_26_object = 0;
	}
	var_103_object = Obj();
	var_13_object = var_103_object;
	func_1496(var_103_object);
	return 18;
	
}


func_775(var_2_int, var_5_int)
{
	var_450_float = 0; var_451_int = 0; var_452_float = 0; var_453_int = 0;
	var_454_bool = var_2_int == 0; //@nz
	if(var_454_bool != 0) {
		return 4;
	}
	var_455_int = var_5_int;
	if(var_455_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_458_bool = var_5_int > (int)0;
		if(var_458_bool != 0) {
			return 4;
		}
	}
	rand(var_452_float);
	var_459_float = 0;
	func_825(var_459_float);
	var_460_bool = var_452_float < var_459_float;
	if(var_460_bool != 0) {
		irand(var_453_int, var_2_int);
		var_453_int = var_453_int + (int)1;
		var_463_int = "attack" + var_453_int;
		Speak(var_463_int);
		var_464_int = 0;
		func_823(var_464_int);
		var_5_int = var_464_int;
	}
	return 4;
}


func_394(var_1_int, var_2_int, var_4_float)
{
	var_135_bool = 0; var_136_bool = 0; var_137_cvector = CVector(0,0,0); var_138_bool = 0; var_139_bool = 0; var_140_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_396:
	var_144_int = var_1_int + (int)1;
	var_145_int = "attack_begin" + var_144_int;
	HasAnimation(var_138_bool, "all", var_145_int);
	var_146_bool = var_138_bool == 0; //@nz
	if(var_146_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_396;
	}
	var_2_int = 0;
	
Label_410:
	var_149_int = var_2_int + (int)1;
	var_150_int = "attack" + var_149_int;
	IsExisting3DSound(var_139_bool, var_150_int);
	var_151_bool = var_139_bool == 0; //@nz
	if(var_151_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_410;

	}
	GetAnimationOffset(var_140_cvector, "all", "bjump");
	var_154_float = GetByIndex(var_140_cvector, 2);
	var_4_float = -var_154_float;
	return 6;
	
}


func_1034(var_0_object, var_1_int, var_17_int)
{
	var_19_bool = var_17_int != (int)0;
	if(var_19_bool != 0) {
		return 0;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_1_int;
	func_1072(var_20_bool, var_21_object);
	var_56_bool = var_20_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1802(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj();
	CreateObjectVector(var_47_object);
	var_47_object = var_45_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1678(var_106_object, var_107_int, var_108_object, var_109_object, var_110_object)
{
	var_114_int = 0; var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_int = 0;
	@@var_106_object:RemoveAllItems(var_107_int);
	@@var_108_object:size(var_121_int);
	var_122_int = 0;
	
Label_1684:
	var_128_bool = var_122_int < var_121_int;
	if(var_128_bool != 0) {
		@@var_108_object:get(var_123_object, var_122_int);
		@@var_109_object:get(var_124_int, var_122_int);
		@@var_106_object:AddItem(var_125_bool, var_123_object, var_107_int, var_124_int);
		var_123_object = 0;
		var_122_int = var_122_int + (int)1;
		goto Label_1684;
	}
	@@var_110_object:size(var_121_int);
	var_126_int = 0;
	
Label_1699:
	var_130_bool = var_126_int < var_121_int;
	if(var_130_bool != 0) {
		@@var_110_object:get(var_127_int, var_126_int);
		@@var_106_object:SelectItem(var_127_int, (bool)1, var_107_int);
		var_126_int = var_126_int + (int)1;
		goto Label_1699;
	}
	return 14;
}


func_1808(var_538_float)
{
	var_539_object = Obj(); var_540_object = Obj();
	CreateFloatVector(var_540_object);
	@@var_540_object:add(var_538_float);
	var_542_bool = var_538_float < (int)0;
	if(var_542_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_540_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1431(var_186_bool, var_187_object)
{
	var_188_bool = 0; var_189_bool = 0;
	@@var_187_object:IsDead(var_189_bool);
	var_189_bool = var_186_bool;
	return 2;
}


func_1436(var_175_bool, var_176_object)
{
	var_177_object = Obj(); var_178_object = Obj(); var_179_object = Obj(); var_180_object = Obj();
	var_181_bool = var_176_object == 0; //@ne
	if(var_181_bool != 0) {
		var_175_bool = 0;
		return 4;
	}
	var_182_bool = 0;
	var_182_bool = 0;
	var_185_bool = IsFuncExist(var_176_object, "IsDead", (int)1);
	if(var_185_bool != 0) {
		var_186_bool = 0; var_187_object = Obj();
		var_176_object = var_187_object;
		func_1431(var_186_bool, var_187_object);
		if(var_186_bool != 0) {
			var_182_bool = 1;
		}
	}
	if(var_182_bool != 0) {
		var_175_bool = 0;
		return 4;
	}
	GetScene(var_179_object);
	var_190_bool = var_179_object == 0; //@ne
	if(var_190_bool != 0) {
		var_175_bool = 0;
		return 4;
	}
	@@var_176_object:GetScene(var_180_object);
	var_191_bool = var_179_object != var_180_object;
	if(var_191_bool != 0) {
		var_175_bool = 0;
		return 4;
	}
	var_175_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_159(var_479_float)
{
	var_479_float = 0.25;
	return 0;
}


func_1056(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1825(var_185_bool, var_186_string, var_187_string)
{
	var_188_object = Obj(); var_189_object = Obj();
	FindActor(var_189_object, var_186_string);
	var_190_bool = var_189_object == 0; //@ne
	if(var_190_bool != 0) {
		var_185_bool = 0;
		return 2;
	}
	Trigger(var_189_object, var_187_string);
	var_185_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_162(var_486_int)
{
	var_486_int = 0;
	return 0;
}


func_675(var_0_object, var_385_bool)
{
	var_386_cvector = CVector(0,0,0); var_387_cvector = CVector(0,0,0); var_388_cvector = CVector(0,0,0); var_389_float = 0; var_390_float = 0; var_391_cvector = CVector(0,0,0); var_392_cvector = CVector(0,0,0); var_393_cvector = CVector(0,0,0); var_394_float = 0; var_395_float = 0;
	var_396_bool = 0; var_397_object = Obj();
	var_397_object = var_0_object;
	func_1472(var_396_bool, var_397_object);
	var_398_bool = var_396_bool == 0; //@nz
	if(var_398_bool != 0) {
		var_385_bool = 0;
		return 10;
	}
	var_399_bool = 0;
	func_764(var_395_float, var_399_bool);
	if(var_399_bool != 0) {
		@@@var_0_object:GetPFPosition(var_391_cvector);
		GetPFPosition(var_392_cvector);
		var_393_cvector = var_391_cvector - var_392_cvector;
		var_394_float = var_393_cvector | var_393_cvector;
		@@@var_0_object:GetAttackDistance(var_395_float);
		var_395_float = var_395_float + (int)50;
		var_401_float = var_395_float * var_395_float;
		var_385_bool = var_394_float <= var_401_float;
		return 10;
	}
	var_385_bool = 0;
	return 10;
}


func_932(var_0_object, var_1_int, var_242_bool, var_243_object, var_244_float, var_245_float, var_246_bool, var_247_bool)
{
	var_248_bool = 0; var_249_bool = 0; var_250_object = Obj(); var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0); var_253_cvector = CVector(0,0,0); var_254_float = 0; var_255_object = Obj(); var_256_bool = 0; var_257_bool = 0; var_258_object = Obj(); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_float = 0; var_263_object = Obj();
	var_0_object = false;
	var_1_int = var_243_object;
	var_247_bool = var_257_bool;
	
Label_936:
	var_264_bool = 0; var_265_object = Obj();
	var_243_object = var_265_object;
	func_1072(var_264_bool, var_265_object);
	var_268_bool = var_264_bool == 0; //@nz
	if(var_268_bool != 0) {
		var_242_bool = 0;
		return 16;
	}
	@@var_243_object:GetPosition(var_259_cvector);
	GetPosition(var_260_cvector);
	var_261_cvector = var_259_cvector - var_260_cvector;
	var_262_float = var_261_cvector | var_261_cvector;
	var_269_bool = 0;
	var_269_bool = 0;
	var_271_bool = var_245_float > (int)0;
	if(var_271_bool != 0) {
		var_272_float = var_245_float * var_245_float;
		var_273_bool = var_262_float > var_272_float;
		if(var_273_bool != 0) {
			var_269_bool = 1;
		}
	}
	if(var_269_bool != 0) {
		Stop();
		var_242_bool = 0;
		return 16;
	}
	var_274_float = var_244_float * var_244_float;
	var_275_bool = var_262_float > var_274_float;
	if(var_275_bool != 0) {
		@@var_243_object:GetPFPosition(var_259_cvector);
		FindPathTo(var_263_object, var_259_cvector);
		var_276_bool = var_263_object != 0; //@nn
		if(var_276_bool != 0) {
			var_263_object = var_258_object;
			var_263_object = 0;
		}
		var_277_bool = var_258_object != 0; //@nn
		if(var_277_bool != 0) {
			var_278_bool = var_257_bool;
			if(var_278_bool == 0) goto Label_985;
			var_257_bool = 0;
			RotatePath(var_258_object, var_256_bool);
			var_279_bool = var_256_bool == 0; //@nz
			if(var_279_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_282_string = "";
				func_1079(var_282_string);
				var_283_string = "";
				func_1081(var_283_string);
				FollowPath(var_258_object, var_246_bool, var_256_bool, var_282_string, var_283_string);
				var_284_bool = var_256_bool == 0; //@nz
				if(var_284_bool != 0) {
					var_285_object = var_0_object;
					if(var_285_object != 0) {
						var_258_object = 0;
						goto Label_1032;
					EMIT "GOTO 0x3ed";
					}
				} else {
					var_258_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_256_bool);
					var_288_bool = var_256_bool == 0; //@nz
					if(var_288_bool != 0) {
						var_289_object = var_0_object;
						if(var_289_object != 0) {
							var_258_object = 0;
							goto Label_1032;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1032;
	}
			var_263_object = 0;
			goto Label_1030;

		Label_1030:
			var_258_object = 0;

		}
		goto Label_936;
	}
Label_1032:
	var_242_bool = !var_0_object;
	return 16;
	
}


func_165(var_0_object, var_3_bool, var_5_int, var_110_object, var_111_bool, var_112_float, var_219_bool, var_311_bool)
{
	var_113_float = 0; var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_bool = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_bool = 0; var_128_bool = 0; var_129_float = 0; var_130_cvector = CVector(0,0,0); var_131_float = 0; var_132_cvector = CVector(0,0,0); var_133_bool = 0; var_134_float = 0;
	func_394(var_132_cvector, var_133_bool, var_134_float);
	var_5_int = 0;
	var_159_bool = IsFuncExist(var_110_object, "@GetAttackDistance", (int)1);
	if(var_159_bool != 0) {
		@@var_110_object:GetAttackDistance(var_124_float);
		var_124_float = var_124_float + (int)50;
	} else {
							var_112_float = var_124_float;
	}
	var_162_bool = var_124_float >= (int)150;
	if(var_162_bool != 0) {
		var_124_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_110_object;
	IsPlayerActor(var_0_object, var_127_bool);
	var_163_bool = var_127_bool;
	if(var_163_bool != 0) {
		PlayGlobalMusic("attack");
		var_165_object = Obj();
		func_1762(var_165_object);
		SendPlayerEnemy(var_110_object, var_165_object);
	}
	var_168_bool = var_111_bool;
	if(var_168_bool != 0) {
		var_128_bool = 0;
	} else {
						var_128_bool = 1;

	}
	var_129_float = (float)400.0 + var_124_float;
	
Label_205:
	var_170_bool = 0;
	var_170_bool = 0;
	var_171_bool = 0; var_172_object = Obj();
	var_172_object = var_0_object;
	func_1472(var_171_bool, var_172_object);
	if(var_171_bool != 0) {
		var_205_bool = var_3_bool == 0; //@nz
		if(var_205_bool != 0) {
			var_170_bool = 1;
		}
	}
	if(var_170_bool != 0) {
		func_807(var_134_float);
		@@@var_0_object:GetPFPosition(var_125_cvector);
		GetPFPosition(var_126_cvector);
		var_130_cvector = var_125_cvector - var_126_cvector;
		var_131_float = var_130_cvector | var_130_cvector;
		var_211_float = var_129_float * var_129_float;
		var_212_bool = var_131_float >= var_211_float;
		if(var_212_bool != 0) {
			var_213_bool = 0; var_214_object = Obj(); var_215_float = 0; var_216_float = 0; var_217_bool = 0; var_218_bool = 0;
			var_214_object = var_0_object;
			var_124_float = var_215_float;
			TaskCall(1);
			func_827(var_221_bool, var_213_bool, var_214_object, var_215_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_296_bool = var_219_bool == 0; //@nz
			if(var_296_bool != 0) {
			} else {
				var_128_bool = 0;
		} else {
				var_302_float = var_112_float * var_112_float;
				var_303_bool = var_131_float >= var_302_float;
				if(var_303_bool != 0) {
					@@@var_0_object:GetPFPosition(var_132_cvector);
					CanReachByPF(var_133_bool, var_132_cvector);
					var_304_bool = var_133_bool == 0; //@nz
					if(var_304_bool != 0) {
						var_305_bool = 0; var_306_object = Obj(); var_307_float = 0; var_308_float = 0; var_309_bool = 0; var_310_bool = 0;
						var_306_object = var_0_object;
						var_124_float = var_307_float;
						TaskCall(1);
						func_827(var_313_bool, var_305_bool, var_306_object, var_307_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_314_bool = var_311_bool == 0; //@nz
						if(var_314_bool != 0) {
							goto Label_377;
						}
						var_128_bool = 0;
						goto Label_205;
					}
					var_315_bool = var_128_bool == 0; //@nz
					if(var_315_bool != 0) {
						var_316_object = Obj();
						var_316_object = var_0_object;
						func_1622(var_316_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_807(var_134_float);
						StopAsync();
						var_128_bool = 1;
						var_327_bool = 0; var_328_object = Obj();
						var_328_object = var_0_object;
						func_1472(var_327_bool, var_328_object);
						var_329_bool = var_327_bool == 0; //@nz
						if(var_329_bool != 0) {
							goto Label_377;
						}
					}
					rand(var_134_float);
					var_330_bool = 0;
					var_332_bool = var_134_float < (float)0.25;
					if(var_332_bool != 1) {
						var_333_bool = 0;
						func_764((bool)1, var_333_bool);
						if(var_333_bool != 1) {
							var_330_bool = 0;
						}
					}
					if(var_330_bool != 0) {
						Face(var_0_object);
						func_814();
						PlayAnimation("all", "attack_stay");
						var_370_bool = 0; var_371_float = 0;
						var_112_float = var_371_float;
						func_632(var_134_float, var_370_bool, var_371_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_807(var_134_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_592_bool = 0;
						func_764(var_134_float, var_592_bool);
						var_593_bool = var_592_bool == 0; //@nz
						if(var_593_bool == 0) goto Label_367;
						var_594_bool = 0; var_595_object = Obj();
						var_595_object = var_0_object;
						func_1472(var_594_bool, var_595_object);
						var_596_bool = var_594_bool == 0; //@nz
						if(var_596_bool != 0) {
							goto Label_377;
						}
						@@@var_0_object:GetPFPosition(var_125_cvector);
						GetPFPosition(var_126_cvector);
						var_130_cvector = var_125_cvector - var_126_cvector;
						var_131_float = var_130_cvector | var_130_cvector;
						var_597_float = var_112_float * var_112_float;
						var_598_bool = var_131_float < var_597_float;
						if(var_598_bool == 0) goto Label_367;
						var_599_bool = 0; var_600_float = 0;
						var_112_float = var_600_float;
						func_468(var_133_bool, var_134_float, var_599_bool, var_600_float);
						var_601_bool = var_599_bool == 0; //@nz
						if(var_601_bool == 0) goto Label_367;
						goto Label_377;
				}
					var_602_bool = 0; var_603_float = 0;
					var_112_float = var_603_float;
					func_468(var_133_bool, var_134_float, var_602_bool, var_603_float);
					var_604_bool = var_602_bool == 0; //@nz
					if(var_604_bool != 0) {
						goto Label_377;
					}
					var_128_bool = 1;

				}
			Label_367:
				goto Label_376;
		}
		Label_376:
			goto Label_205;

		}
	}
Label_377:
	WaitForAnimEnd();
	var_297_bool = var_3_bool;
	if(var_297_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_300_bool = var_127_bool;
	if(var_300_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1190(var_16_object)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0);
	var_37_bool = var_16_object == 0; //@ne
	if(var_37_bool != 0) {
		var_38_string = "";
		func_1281("fdie");
	} else {
		@@var_16_object:GetPosition(var_27_cvector);
		GetPosition(var_28_cvector);
		GetDirection(var_29_cvector);
		var_30_cvector = var_28_cvector - var_27_cvector;
		var_70_float = GetByIndex(var_30_cvector, 0);
		var_71_float = GetByIndex(var_29_cvector, 0);
		var_72_float = var_70_float * var_71_float;
		var_73_float = GetByIndex(var_30_cvector, 2);
		var_74_float = GetByIndex(var_29_cvector, 2);
		var_75_float = var_73_float * var_74_float;
		var_76_int = var_72_float + var_75_float;
		var_78_bool = var_76_int >= (int)0;
		if(var_78_bool != 0) {
			var_31_string = "fdie";
		} else {
				var_31_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_16_object = var_32_object;
		var_81_bool = IsFuncExist(var_16_object, "GetScriptProperty", (int)2);
		if(var_81_bool != 0) {
			@@var_16_object:HasScriptProperty(var_33_bool, "Owner");
			var_83_bool = var_33_bool;
			if(var_83_bool != 0) {
				@@var_16_object:GetScriptProperty(var_32_object, "Owner");
				var_85_bool = var_32_object == 0; //@ne
				if(var_85_bool != 0) {
					var_16_object = var_32_object;
				}
			}
		}
		var_88_bool = IsFuncExist(var_32_object, "@GetEyesHeight", (int)1);
		if(var_88_bool != 0) {
			@@var_32_object:GetEyesHeight(var_35_float);
			var_36_cvector = CVector(0.0, 0.0, 0.0);
			var_89_float = GetByIndex(var_36_cvector, 1);
			var_35_float = var_89_float;
			SetByIndex(var_36_cvector, 1) = var_89_float;
			LookAsync(var_16_object, "head", var_36_cvector);
			var_34_bool = 1;
		} else {
			var_34_bool = 0;

		}
		var_91_string = "";
		var_31_string = var_91_string;
		func_1721(var_91_string);
		PlayAnimation("all", var_31_string);
		WaitForAnimEnd();
		var_93_bool = var_34_bool;
		if(var_93_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_31_string);
		RemoveEnvelope();
		var_32_object = 0;
	}
	return 20;
	
}


func_807(var_0_object)
{
	var_206_object = Obj();
	var_206_object = var_0_object;
	func_1873(var_206_object);
	return 0;
}


func_1313(var_510_string, var_511_int)
{
	var_513_bool = var_511_int == (int)2;
	if(var_513_bool != 0) {
		var_510_string = "fire";
		return 0;
	EMIT "GOTO 0x52d";
	}
	var_515_bool = var_511_int == (int)1;
	if(var_515_bool != 0) {
		var_510_string = "bullet";
		return 0;
	}
	var_510_string = "phys";
	return 0;
}


func_812(var_547_int)
{
	var_547_int = 0;
	return 0;
}


func_429(var_0_object, var_468_float, var_469_int)
{
	var_470_object = Obj(); var_471_float = 0; var_472_float = 0; var_473_object = Obj(); var_474_float = 0; var_475_float = 0;
	var_477_float = var_468_float * (float)0.8999999761581421;
	GetVictim(var_477_float, var_473_object);
	ReportAttack(var_0_object);
	var_478_bool = var_473_object == var_0_object;
	if(var_478_bool != 0) {
		var_479_float = 0; var_480_object = Obj(); var_481_int = 0;
		var_473_object = var_480_object;
		var_469_int = var_481_int;
		func_159(var_481_int);
		var_479_float = var_474_float;
		var_482_float = 0; var_483_object = Obj(); var_484_float = 0; var_485_int = 0;
		var_473_object = var_483_object;
		var_474_float = var_484_float;
		var_486_int = 0; var_487_object = Obj(); var_488_int = 0;
		var_473_object = var_487_object;
		var_469_int = var_488_int;
		func_162(var_488_int);
		var_486_int = var_485_int;
		func_1358(var_482_float, var_483_object, var_484_float, var_485_int);
		var_482_float = var_475_float;
		var_547_int = 0;
		func_812(var_547_int);
		ReportHit(var_0_object, var_547_int, var_475_float, var_474_float);
		var_548_object = Obj(); var_549_float = 0;
		var_473_object = var_548_object;
		var_475_float = var_549_float;
		func_819();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_814()
{
	var_339_string = "";
	func_1721("attack_stay");
	return 0;
}


func_1327(var_413_cvector, var_414_object)
{
	var_415_cvector = CVector(0,0,0); var_416_cvector = CVector(0,0,0); var_417_cvector = CVector(0,0,0); var_418_cvector = CVector(0,0,0);
	GetPosition(var_417_cvector);
	@@var_414_object:GetPosition(var_418_cvector);
	var_413_cvector = var_418_cvector - var_417_cvector;
	return 4;
}


func_1710(var_230_object)
{
	var_231_float = 0; var_232_cvector = CVector(0,0,0); var_233_float = 0; var_234_cvector = CVector(0,0,0);
	@@var_230_object:GetEyesHeight(var_233_float);
	var_234_cvector = CVector(0.0, 0.0, 0.0);
	var_235_float = GetByIndex(var_234_cvector, 1);
	var_233_float = var_235_float;
	SetByIndex(var_234_cvector, 1) = var_235_float;
	LookAsync(var_230_object, "head", var_234_cvector);
	return 4;
}


func_1072(var_264_bool, var_265_object)
{
	var_266_bool = 0; var_267_object = Obj();
	var_265_object = var_267_object;
	func_1472(var_266_bool, var_267_object);
	var_266_bool = var_264_bool;
	return 0;
}


func_1837(var_165_object, var_166_string, var_167_string)
{
	var_168_object = Obj(); var_169_bool = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_object = Obj(); var_173_bool = 0; var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0);
	var_176_bool = var_165_object == 0; //@nz
	if(var_176_bool != 0) {
		return 8;
	}
	GetSceneByName(var_172_object, var_166_string);
	@@var_172_object:GetLocator(var_167_string, var_173_bool, var_174_cvector, var_175_cvector);
	var_177_bool = var_173_bool == 0; //@nz
	if(var_177_bool != 0) {
		var_179_int = "Teleport location '" + var_167_string;
		var_181_int = var_179_int + "' not found in scene '";
		var_182_int = var_181_int + var_166_string;
		var_184_int = var_182_int + "'";
		Trace(var_184_int);
	} else {
		Teleport(var_165_object, var_172_object, var_174_cvector, var_175_cvector);
	}
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_819()
{
	return 0;
}


func_821(var_572_bool)
{
	var_572_bool = 1;
	return 0;
}


func_1334(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	FindActor(var_15_object, "player");
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_823(var_464_int)
{
	var_464_int = 1;
	return 0;
}


func_1079(var_282_string)
{
	var_282_string = "walk";
	return 0;
}


func_825(var_459_float)
{
	var_459_float = 0.5;
	return 0;
}


func_1721(var_339_string)
{
	var_340_bool = 0; var_341_int = 0; var_342_bool = 0; var_343_int = 0; var_344_bool = 0; var_345_float = 0; var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0); var_348_bool = 0; var_349_int = 0; var_350_bool = 0; var_351_int = 0; var_352_bool = 0; var_353_float = 0; var_354_cvector = CVector(0,0,0); var_355_cvector = CVector(0,0,0);
	IsExisting3DSound(var_348_bool, var_339_string);
	var_356_bool = var_348_bool == 0; //@nz
	if(var_356_bool != 0) {
		var_349_int = 0;

	Label_1727:
		var_358_int = var_349_int + (int)1;
		var_359_int = var_339_string + var_358_int;
		IsExisting3DSound(var_350_bool, var_359_int);
		var_360_bool = var_350_bool == 0; //@nz
		if(var_360_bool != 0) {
		} else {
			var_349_int = var_349_int + (int)1;
			goto Label_1727;
		}
		var_361_bool = var_349_int == 0; //@nz
		if(var_361_bool != 0) {
			return 16;
		}
		irand(var_351_int, var_349_int);
		var_363_int = var_351_int + (int)1;
		var_339_string = var_339_string + var_363_int;
	}
	Is3DSoundLoaded(var_352_bool, var_339_string);
	var_364_bool = var_352_bool;
	if(var_364_bool != 0) {
		GetEyesHeight(var_353_float);
		GetDirection(var_354_cvector);
		var_355_cvector = var_354_cvector * (int)50;
		var_366_float = GetByIndex(var_355_cvector, 1);
		var_366_float = var_366_float + var_353_float;
		SetByIndex(var_355_cvector, 1) = var_366_float;
		PlayGlobalSound(var_339_string, var_355_cvector);
	}
	return 16;
	
}


func_827(var_2_int, var_213_bool, var_214_object, var_215_float, var_216_float, var_217_bool, var_218_bool)
{
	var_222_bool = 0; var_223_bool = 0; var_224_bool = 0; var_225_bool = 0;
	var_226_object = Obj();
	var_214_object = var_226_object;
	func_1873(var_226_object);
	SetTimer((int)1, (int)5);
	CanSee(var_224_bool, var_214_object);
	var_229_bool = var_224_bool;
	if(var_229_bool != 0) {
		var_2_int = true;
		var_230_object = Obj();
		var_214_object = var_230_object;
		func_1710(var_230_object);
	} else {
		var_2_int = false;
	}
	var_237_bool = 0; var_238_object = Obj();
	var_214_object = var_238_object;
	func_1341(var_237_bool, var_238_object);
	if(var_237_bool != 0) {
		var_241_object = Obj();
		func_1762(var_241_object);
		SendPlayerEnemy(var_214_object, var_241_object);
	}
	var_242_bool = 0; var_243_object = Obj(); var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_bool = 0;
	var_214_object = var_243_object;
	var_215_float = var_244_float;
	var_216_float = var_245_float;
	var_217_bool = var_246_bool;
	var_218_bool = var_247_bool;
	func_932(var_224_bool, var_225_bool, var_242_bool, var_243_object, var_244_float, var_245_float, var_246_bool, var_247_bool);
	var_242_bool = var_225_bool;
	var_293_int = var_2_int;
	if(var_293_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_225_bool = var_213_bool;
	return 4;
	
}


func_1081(var_283_string)
{
	var_283_string = "run";
	return 0;
}


func_1341(var_237_bool, var_238_object)
{
	var_239_bool = 0; var_240_bool = 0;
	IsPlayerActor(var_238_object, var_240_bool);
	var_240_bool = var_237_bool;
	return 2;
}


func_1083(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj();
	var_16_object = Obj();
	var_11_object = var_16_object;
	func_1190(var_16_object);
	GetSceneByName(var_14_object, "boiny_arena");
	RemoveScene(var_14_object);
	var_97_bool = 0; var_98_string = "";
	func_1861(var_97_bool, "NPC_Starshina");
	func_1334(Obj());
	var_102_object = var_15_object;
	var_106_object = Obj(); var_107_int = 0; var_108_object = Obj(); var_109_object = Obj(); var_110_object = Obj();
	var_15_object = var_106_object;
	var_111_object = GlobalVars[0];
	var_111_object = var_108_object;
	var_112_object = GlobalVars[1];
	var_112_object = var_109_object;
	var_113_object = GlobalVars[10];
	var_113_object = var_110_object;
	func_1678(var_106_object, (int)0, var_108_object, var_109_object, var_110_object);
	var_133_object = Obj(); var_134_int = 0; var_135_object = Obj(); var_136_object = Obj(); var_137_object = Obj();
	var_15_object = var_133_object;
	var_138_object = GlobalVars[2];
	var_138_object = var_135_object;
	var_139_object = GlobalVars[3];
	var_139_object = var_136_object;
	var_140_object = GlobalVars[11];
	var_140_object = var_137_object;
	func_1678(var_133_object, (int)1, var_135_object, var_136_object, var_137_object);
	var_141_object = Obj(); var_142_int = 0; var_143_object = Obj(); var_144_object = Obj(); var_145_object = Obj();
	var_15_object = var_141_object;
	var_146_object = GlobalVars[4];
	var_146_object = var_143_object;
	var_147_object = GlobalVars[5];
	var_147_object = var_144_object;
	var_148_object = GlobalVars[12];
	var_148_object = var_145_object;
	func_1678(var_141_object, (int)2, var_143_object, var_144_object, var_145_object);
	var_149_object = Obj(); var_150_int = 0; var_151_object = Obj(); var_152_object = Obj(); var_153_object = Obj();
	var_15_object = var_149_object;
	var_154_object = GlobalVars[6];
	var_154_object = var_151_object;
	var_155_object = GlobalVars[7];
	var_155_object = var_152_object;
	var_156_object = GlobalVars[13];
	var_156_object = var_153_object;
	func_1678(var_149_object, (int)3, var_151_object, var_152_object, var_153_object);
	var_157_object = Obj(); var_158_int = 0; var_159_object = Obj(); var_160_object = Obj(); var_161_object = Obj();
	var_15_object = var_157_object;
	var_162_object = GlobalVars[8];
	var_162_object = var_159_object;
	var_163_object = GlobalVars[9];
	var_163_object = var_160_object;
	var_164_object = GlobalVars[14];
	var_164_object = var_161_object;
	func_1678(var_157_object, (int)4, var_159_object, var_160_object, var_161_object);
	@@var_15_object:SelectWeapon();
	var_165_object = Obj(); var_166_string = ""; var_167_string = "";
	var_15_object = var_165_object;
	func_1837(var_165_object, "boiny", "pt_Starshina");
	var_185_bool = 0; var_186_string = ""; var_187_string = "";
	func_1825(var_185_bool, "quest_b11_01", "fight_win");
	
Label_1184:
	Hold();
	goto Label_1184;
}
EMIT "Return(); Pop(4)";
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_703(var_383_bool)
{
	var_384_bool = 0;
	var_384_bool = 0;
	var_385_bool = 0;
	func_675(var_384_bool, var_385_bool);
	if(var_385_bool != 0) {
		var_402_bool = 0;
		func_719(var_383_bool, var_384_bool, var_402_bool);
		if(var_402_bool != 0) {
			var_384_bool = 1;
		}
	}
	if(var_384_bool != 0) {
		var_383_bool = 1;
		return 0;
	}
	var_383_bool = 0;
	return 0;
}


func_1472(var_171_bool, var_172_object)
{
	var_173_int = 0; var_174_int = 0;
	var_175_bool = 0; var_176_object = Obj();
	var_172_object = var_176_object;
	func_1436(var_175_bool, var_176_object);
	var_192_bool = var_175_bool == 0; //@nz
	if(var_192_bool != 0) {
		var_171_bool = 0;
		return 2;
	}
	var_193_bool = 0; var_194_object = Obj(); var_195_string = "";
	var_172_object = var_194_object;
	func_1346(var_193_bool, var_194_object, "noaccess");
	var_202_bool = var_193_bool == 0; //@nz
	if(var_202_bool != 0) {
		var_171_bool = 1;
		return 2;
	}
	@@var_172_object:GetProperty("noaccess", var_174_int);
	var_171_bool = var_174_int == (int)0;
	return 2;
}


func_1346(var_193_bool, var_194_object, var_195_string)
{
	var_196_bool = 0; var_197_bool = 0;
	var_200_bool = IsFuncExist(var_194_object, "HasProperty", (int)2);
	var_201_bool = var_200_bool == 0; //@nz
	if(var_201_bool != 0) {
		var_193_bool = 0;
		return 2;
	}
	@@var_194_object:HasProperty(var_195_string, var_197_bool);
	var_197_bool = var_193_bool;
	return 2;
}


func_1861(var_97_bool, var_98_string)
{
	var_99_object = Obj(); var_100_object = Obj();
	FindActor(var_100_object, var_98_string);
	var_101_bool = var_100_object == 0; //@nz
	if(var_101_bool != 0) {
		var_97_bool = 0;
		return 2;
	}
	RemoveActor(var_100_object);
	var_97_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1608(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_22_object);
	AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	var_26_object = Obj();
	var_15_object = var_26_object;
	func_1496(var_26_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1358(var_482_float, var_483_object, var_484_float, var_485_int)
{
	var_489_int = 0; var_490_string = ""; var_491_int = 0; var_492_float = 0; var_493_float = 0; var_494_float = 0; var_495_int = 0; var_496_string = ""; var_497_int = 0; var_498_float = 0; var_499_float = 0; var_500_float = 0;
	var_501_bool = 0; var_502_object = Obj(); var_503_string = "";
	var_483_object = var_502_object;
	func_1346(var_501_bool, var_502_object, "health");
	var_504_bool = var_501_bool == 0; //@nz
	if(var_504_bool != 0) {
		var_482_float = 0.0;
		return 12;
	}
	var_505_bool = 0; var_506_object = Obj(); var_507_string = "";
	var_483_object = var_506_object;
	func_1346(var_505_bool, var_506_object, "armor");
	var_508_bool = var_505_bool == 0; //@nz
	if(var_508_bool != 0) {
		var_495_int = 0;
	} else {
			@@var_483_object:GetProperty("armor", var_495_int);
	}
	var_510_string = ""; var_511_int = 0;
	var_485_int = var_511_int;
	func_1313(var_510_string, var_511_int);
	var_496_string = "armor_" + var_510_string;
	var_516_bool = 0; var_517_object = Obj(); var_518_string = "";
	var_483_object = var_517_object;
	var_496_string = var_518_string;
	func_1346(var_516_bool, var_517_object, var_518_string);
	var_519_bool = var_516_bool == 0; //@nz
	if(var_519_bool != 0) {
		var_497_int = 0;
	} else {
		@@var_483_object:GetProperty(var_496_string, var_497_int);

	}
	var_520_float = 0; var_521_float = 0; var_522_float = 0;
	var_523_int = var_495_int + var_497_int;
	var_521_float = var_523_int / (float)100.0;
	func_1778(var_520_float, var_521_float, (float)1);
	var_520_float = var_498_float;
	@@var_483_object:GetProperty("health", var_499_float);
	var_528_int = (int)1 - var_498_float;
	var_500_float = var_484_float * var_528_int;
	var_530_float = 0; var_531_float = 0; var_532_float = 0; var_533_float = 0;
	var_531_float = var_499_float - var_500_float;
	func_1785(var_530_float, var_531_float, (float)0, (float)1);
	@@var_483_object:SetProperty("health", var_530_float);
	var_536_bool = 0; var_537_object = Obj();
	var_483_object = var_537_object;
	func_1341(var_536_bool, var_537_object);
	if(var_536_bool != 0) {
		var_538_float = 0;
		var_538_float = -var_500_float;
		func_1808(var_538_float);
	}
	var_500_float = var_482_float;
	return 12;
	
}


func_719(var_0_object, var_4_float, var_402_bool)
{
	var_403_object = Obj(); var_404_bool = 0; var_405_float = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_object = Obj(); var_409_bool = 0; var_410_float = 0; var_411_cvector = CVector(0,0,0); var_412_cvector = CVector(0,0,0);
	GetScene(var_408_object);
	var_409_bool = 0;
	
Label_723:
	var_413_cvector = CVector(0,0,0); var_414_object = Obj();
	var_414_object = var_0_object;
	func_1327(var_413_cvector, var_414_object);
	var_419_int = -var_413_cvector;
	FindDirLength(var_410_float, var_419_int, var_4_float);
	var_420_bool = var_410_float < var_4_float;
	if(var_420_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_411_cvector);
		GetPFPosition(var_412_cvector);
		WaitForAnimEnd();
		func_807(var_412_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_409_bool = 1;
		var_424_bool = 0;
		func_675(var_412_cvector, var_424_bool);
		var_425_bool = var_424_bool == 0; //@nz
		if(var_425_bool != 0) {
			goto Label_761;
		}
		goto Label_723;
	}
Label_761:
	var_409_bool = var_402_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1873(var_206_object)
{
	var_207_bool = 0; var_208_bool = 0;
	IsPlayerActor(var_206_object, var_208_bool);
	var_209_bool = var_208_bool;
	if(var_209_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_468(var_0_object, var_1_int, var_431_bool, var_432_float)
{
	var_433_int = 0; var_434_bool = 0; var_435_int = 0; var_436_string = ""; var_437_int = 0; var_438_bool = 0; var_439_int = 0; var_440_string = "";
	func_807(var_440_string);
	irand(var_437_int, var_1_int);
	var_437_int = var_437_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_1882();
	var_449_int = "attack_begin" + var_437_int;
	PlayAnimation("all", var_449_int);
	WaitForAnimEnd();
	func_775(var_439_int, var_440_string);
	var_465_bool = 0; var_466_object = Obj();
	var_466_object = var_0_object;
	func_1472(var_465_bool, var_466_object);
	var_467_bool = var_465_bool == 0; //@nz
	if(var_467_bool != 0) {
		StopAsync();
		var_431_bool = 0;
		return 8;
	}
	var_468_float = 0; var_469_int = 0;
	var_432_float = var_468_float;
	var_437_int = var_469_int;
	func_429(var_440_string, var_468_float, var_469_int);
	var_552_int = "attack_middle" + var_437_int;
	HasAnimation(var_438_bool, "all", var_552_int);
	var_553_bool = var_438_bool;
	if(var_553_bool != 0) {
		func_1882();
		var_556_int = "attack_middle" + var_437_int;
		PlayAnimation("all", var_556_int);
		WaitForAnimEnd();
		func_807(var_440_string);
		var_557_bool = 0; var_558_object = Obj();
		var_558_object = var_0_object;
		func_1472(var_557_bool, var_558_object);
		var_559_bool = var_557_bool == 0; //@nz
		if(var_559_bool != 0) {
			StopAsync();
			var_431_bool = 0;
			return 8;
		}
		var_560_float = 0; var_561_int = 0;
		var_432_float = var_560_float;
		var_437_int = var_561_int;
		func_429(var_440_string, var_560_float, var_561_int);
		var_439_int = 1;

	Label_545:
		var_563_int = "attack_middle" + var_437_int;
		var_565_int = var_563_int + "_";
		var_440_string = var_565_int + var_439_int;
		HasAnimation(var_438_bool, "all", var_440_string);
		var_567_bool = var_438_bool == 0; //@nz
		if(var_567_bool != 0) {
		} else {
			func_1882();
			PlayAnimation("all", var_440_string);
			WaitForAnimEnd();
			func_807(var_440_string);
			var_583_bool = 0; var_584_object = Obj();
			var_584_object = var_0_object;
			func_1472(var_583_bool, var_584_object);
			var_585_bool = var_583_bool == 0; //@nz
			if(var_585_bool != 0) {
				StopAsync();
				var_431_bool = 0;
				var_586_float = 0; var_587_int = 0;
				var_432_float = var_586_float;
				var_437_int = var_587_int;
				func_429(var_440_string, var_586_float, var_587_int);
				var_439_int = var_439_int + (int)1;
				goto Label_545;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_571_int = "attack_end" + var_437_int;
	PlayAnimation("all", var_571_int);
	var_572_bool = 0;
	func_821(var_572_bool);
	if(var_572_bool != 0) {
		var_573_bool = 0; var_574_float = 0;
		func_605(var_573_bool, (float)0.75);
		StopAsync();
	}
	var_431_bool = 1;
	return 8;
	
}


func_1622(var_316_object)
{
	var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0);
	@@var_316_object:GetPosition(var_320_cvector);
	GetPosition(var_321_cvector);
	var_322_cvector = var_320_cvector - var_321_cvector;
	var_323_float = GetByIndex(var_322_cvector, 0);
	var_324_float = GetByIndex(var_322_cvector, 2);
	RotateAsync(var_323_float, var_324_float);
	return 6;
}


func_1496(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = "";
	var_41_bool = var_26_object == 0; //@ne
	if(var_41_bool != 0) {
		return 14;
	}
	IsDead(var_34_bool);
	var_42_bool = var_34_bool;
	if(var_42_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_35_int);
	var_44_bool = var_35_int < (int)0;
	if(var_44_bool != 0) {
		return 14;
	}
	@@var_26_object:GetPosition(var_36_cvector);
	GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_39_cvector = var_37_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_39_cvector, 0);
	var_46_float = GetByIndex(var_38_cvector, 0);
	var_47_float = var_45_float * var_46_float;
	var_48_float = GetByIndex(var_39_cvector, 2);
	var_49_float = GetByIndex(var_38_cvector, 2);
	var_50_float = var_48_float * var_49_float;
	var_51_int = var_47_float + var_50_float;
	var_53_bool = var_51_int >= (int)0;
	if(var_53_bool != 0) {
		var_40_string = "fhit";
	} else {
		var_40_string = "bhit";
	}
	var_56_int = var_40_string + "1";
	var_58_int = var_40_string + "2";
	FadeSecondaryAnimation("hit_react", var_56_int, var_58_int, (int)-10);
	return 14;
	
}


func_1882()
{
	var_443_object = Obj(); var_444_object = Obj();
	GetScene(var_444_object);
	var_446_object = Obj();
	func_1762(var_446_object);
	BroadcastMessage("battle", var_446_object, var_444_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_605(var_573_bool, var_574_float)
{
	var_575_float = 0; var_576_bool = 0; var_577_float = 0; var_578_bool = 0;
	rand(var_577_float);
	var_579_bool = var_577_float < var_574_float;
	if(var_579_bool != 0) {

	Label_610:
		IsAnimationPlaying(var_578_bool);
		var_580_bool = var_578_bool == 0; //@nz
		if(var_580_bool != 0) {
		} else {
			var_581_bool = 0;
			func_703(var_581_bool);
			if(var_581_bool != 0) {
				var_573_bool = 1;
				sync();
				goto Label_610;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_807(var_578_bool);
	}
	goto Label_630;
	
Label_630:
	var_573_bool = 0;
	return 4;
	
}


func_1633(var_30_object, var_31_object, var_32_int, var_33_object)
{
	var_35_object = Obj(); var_36_int = 0; var_37_int = 0; var_38_object = Obj(); var_39_int = 0; var_40_object = Obj(); var_41_int = 0; var_42_int = 0; var_43_object = Obj(); var_44_int = 0;
	func_1802(Obj());
	var_45_object = var_40_object;
	@@var_31_object:GetItemCount(var_41_int, var_32_int);
	var_42_int = 0;
	
Label_1641:
	var_48_bool = var_42_int < var_41_int;
	if(var_48_bool != 0) {
		@@var_31_object:GetItem(var_43_object, var_42_int, var_32_int);
		@@var_40_object:add(var_43_object);
		@@var_31_object:GetItemAmount(var_44_int, var_42_int, var_32_int);
		@@var_33_object:add(var_44_int);
		var_43_object = 0;
		var_42_int = var_42_int + (int)1;
		goto Label_1641;
	}
	var_40_object = var_30_object;
	return 10;
}
EMIT "Stack[-5] = 0";


func_1762(var_165_object)
{
	var_166_object = Obj(); var_167_object = Obj();
	self(var_167_object);
	var_167_object = var_165_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1893(var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	TaskCall(2);
	func_1083(var_11_object);
	TaskReturn();
	return 0;
}


func_1768(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_50_float = sqrt(var_51_int);
	var_52_float = 9.999999974752427e-07;
	var_53_bool = var_50_float < var_52_float;
	if(var_53_bool != 0) {
		var_41_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_41_cvector = var_42_cvector / var_50_float;
	return 2;
}


func_1778(var_520_float, var_521_float, var_522_float)
{
	var_525_bool = var_521_float < var_522_float;
	if(var_525_bool != 0) {
		var_521_float = var_520_float;
	} else {
		var_522_float = var_520_float;
	}
	return 0;
	
}


func_632(var_0_object, var_370_bool, var_371_float)
{
	var_372_bool = 0; var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_float = 0; var_377_bool = 0; var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_float = 0;
	
Label_633:
	IsAnimationPlaying(var_377_bool);
	var_382_bool = var_377_bool == 0; //@nz
	if(var_382_bool != 0) {
	} else {
		var_383_bool = 0;
		func_703(var_383_bool);
		if(var_383_bool != 0) {
			var_370_bool = 1;
			return 10;
		}
		var_426_bool = 0; var_427_object = Obj();
		var_427_object = var_0_object;
		func_1472(var_426_bool, var_427_object);
		var_428_bool = var_426_bool == 0; //@nz
		if(var_428_bool != 0) {
			var_370_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_378_cvector);
		GetPFPosition(var_379_cvector);
		var_380_cvector = var_378_cvector - var_379_cvector;
		var_381_float = var_380_cvector | var_380_cvector;
		var_429_float = var_371_float * var_371_float;
		var_430_bool = var_381_float < var_429_float;
		if(var_430_bool != 0) {
			var_431_bool = 0; var_432_float = 0;
			var_371_float = var_432_float;
			func_468(var_380_cvector, var_381_float, var_431_bool, var_432_float);
			var_370_bool = 1;
			sync();
			goto Label_633;
		}
		return 10;
	}
	func_807(var_381_float);
	var_370_bool = 0;
	return 10;
	
}


func_1785(var_530_float, var_531_float, var_532_float, var_533_float)
{
	var_534_bool = var_531_float < var_532_float;
	if(var_534_bool != 0) {
		var_532_float = var_530_float;
		return 0;
	}
	var_535_bool = var_531_float > var_533_float;
	if(var_535_bool != 0) {
		var_533_float = var_530_float;
		return 0;
	}
	var_531_float = var_530_float;
	return 0;
}


func_1658(var_75_object, var_76_object, var_77_int)
{
	var_78_object = Obj(); var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; var_84_int = 0; var_85_bool = 0;
	CreateIntVector(var_82_object);
	@@var_76_object:GetItemCount(var_83_int, var_77_int);
	var_84_int = 0;
	
Label_1664:
	var_86_bool = var_84_int < var_83_int;
	if(var_86_bool != 0) {
		@@var_76_object:IsItemSelected(var_85_bool, var_84_int, var_77_int);
		var_87_bool = var_85_bool;
		if(var_87_bool != 0) {
			@@var_82_object:add(var_84_int);
		}
		var_84_int = var_84_int + (int)1;
		goto Label_1664;
	}
	var_82_object = var_75_object;
	return 8;
}
EMIT "Stack[-4] = 0";


func_764(var_0_object, var_333_bool)
{
	var_334_bool = 0; var_335_bool = 0;
	var_338_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_338_bool != 0) {
		@@@var_0_object:IsAttacking(var_335_bool);
		var_335_bool = var_333_bool;
		return 2;
	}
	var_333_bool = 0;
	return 2;
}


func_890(var_2_int)
{
	KillTimer((int)1);
	var_11_int = var_2_int;
	if(var_11_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1056(var_9_object);
	return 0;
}


