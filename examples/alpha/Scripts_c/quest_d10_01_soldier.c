// @IMPORTS: Hold/0,StopGroup0/0,SetRTEnvelope/2,IsOverrideActive/1,WorkWithCorpse/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,Sleep/2,KillTimer/1,SetTimer/2,SetAttackState/1,CanSee/2,WaitForAnimEnd/1,Sleep/1,Trace/1,StopAnimation/0,ReportAttack/1,Speak/1,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,GetScene/1,AddActorByType/6,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,FindActor/2,GetEyesHeight/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,self/1,CreateObjectSet/1,Trigger/2,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetProperty/2,SignalDeath/1,ResetAAS/0,IsPlayerActor/2,ReportReputationChange/3,RemoveActor/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_on|W:hunt|W:attack_off|W:@Stop hunt|W:attack_begin1|W:shot|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|A:in|W:attack|W:quest_d10_01|W:soldier_fight|W:fire|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:2|W:GenerateMoney: iMin > iMax|W:Money|W:rifle_ammo|W:rusk|A:add|W:reputation
// @GLOBALS: 0:object:
// @RUN_OP: 0x281
// @RUN_TASK: 4
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=1
// @EVENT_0: op=0x1e vars=object
// @EVENT_22: op=0x93 vars=object,int,float,float
// @EVENT_16: op=0x95 vars=object,string
// @EVENT_41: op=0x97 vars=object
// @TASK_2: vars=object params=1
// @EVENT_41: op=0xb9 vars=object
// @EVENT_3: op=0xc2 vars=object
// @EVENT_4: op=0xcb vars=object
// @EVENT_17: op=0xd7 vars=object
// @EVENT_30: op=0xeb vars=object,object
// @EVENT_1: op=0xf7 vars=object
// @EVENT_7: op=0x105 vars=int
// @TASK_3: vars=object,object,bool params=2
// @EVENT_3: op=0x195 vars=object
// @EVENT_1: op=0x1a3 vars=object
// @EVENT_17: op=0x213 vars=object
// @EVENT_30: op=0x22b vars=object,object
// @TASK_4: vars=cvector,cvector params=0
// @EVENT_0: op=0x23c vars=object
// @EVENT_26: op=0x247 vars=string
// @EVENT_17: op=0x258 vars=object
// @EVENT_30: op=0x25f vars=object,object
// @EVENT_6: op=0x261 vars=
// @EVENT_3: op=0x26a vars=object
// @EVENT_1: op=0x28a vars=object
// @STANDALONE_EVENT_22: op=0x48d vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x495 vars=object,string
// @STANDALONE_EVENT_41: op=0x4a2 vars=object
// @STANDALONE_EVENT_6: op=0x527 vars=
// @PE: 0x6,0xf,0x7d,0x93,0x95,0x97,0xb9,0xc2,0xcb,0xd7,0xeb,0xf7,0x105,0x195,0x1a3,0x213,0x22b,0x237,0x258,0x25f,0x28a,0x2eb,0x3f5,0x3fc,0x40d,0x416,0x420,0x485,0x48d,0x4a2,0x4af,0x4c7,0x4ed,0x52f

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector)
{
	StopGroup0();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	var_7_bool = 0; var_8_bool = 0;
	IsOverrideActive(var_8_bool);
	var_9_bool = var_8_bool == 0; //@nz
	if(var_9_bool != 0) {
		WorkWithCorpse(var_6_cvector);
	}
	return 2;
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector)
{
	return 0;
}


task_1_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	return 0;
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	func_177();
	var_6_cvector = Obj();
	func_1186();
	return 0;
}


task_2_event_3(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	var_7_bool = var_6_cvector == var_0_object;
	if(var_7_bool != 0) {
		KillTimer((int)100);
		Face(var_0_object);
	}
	return 0;
}


task_2_event_4(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	var_7_bool = var_6_cvector == var_0_object;
	if(var_7_bool != 0) {
		SetTimer((int)100, (float)3.0);
		var_10_object = Obj();
		var_10_object = var_0_object;
		func_985(var_10_object);
	}
	return 0;
}


	task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_41_object)
	{
	var_42_bool = 0; var_43_object = Obj();
	var_41_object = var_43_object;
	func_894(var_42_bool, var_43_object);
	var_70_bool = var_42_bool == 0; //@nz
	if(var_70_bool != 0) {
		var_71_object = Obj();
		var_41_object = var_71_object;
		func_1210(var_71_object);
		return 0;
	}
	func_177();
	var_79_object = Obj();
	var_41_object = var_79_object;
	func_1223(var_79_object);
	return 0;
	}


task_2_event_30(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	var_8_bool = 0; var_9_object = Obj(); var_10_object = Obj();
	var_6_cvector = var_9_object;
	var_7_cvector = var_10_object;
	func_1267(var_8_bool, var_9_object, var_10_object);
	if(var_8_bool != 0) {
		var_6_cvector = Obj();
		func_215();
	}
	return 0;
}


task_2_event_1(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	var_7_bool = 0; var_8_object = Obj();
	var_6_cvector = var_8_object;
	func_1239(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		func_177();
		var_53_object = Obj();
		var_6_cvector = var_53_object;
		func_1261(var_53_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_int, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	var_8_bool = var_6_cvector != (int)100;
	if(var_8_bool != 0) {
		return 0;
	}
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_cvector, var_6_cvector)
{
	var_7_bool = 0;
	var_7_bool = 0;
	var_8_object = var_2_object;
	if(var_8_object != 0) {
		var_9_bool = var_6_cvector == var_0_object;
		if(var_9_bool != 0) {
			var_7_bool = 1;
		}
	}
	if(var_7_bool != 0) {
		var_10_object = Obj();
		var_10_object = var_0_object;
		func_985(var_10_object);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_cvector, var_6_cvector)
{
	var_7_bool = 0;
	var_7_bool = 0;
	var_8_object = var_2_object;
	if(var_8_object != 0) {
		var_9_bool = var_6_cvector == var_0_object;
		if(var_9_bool != 0) {
			var_7_bool = 1;
		}
	}
	if(var_7_bool != 0) {
		Trace("@Stop hunt");
		StopAnimation();
		StopGroup0();
	}
	return 0;
}


	task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_cvector, var_41_object)
	{
	var_42_bool = 0; var_43_object = Obj();
	var_41_object = var_43_object;
	func_894(var_42_bool, var_43_object);
	var_70_bool = var_42_bool == 0; //@nz
	if(var_70_bool != 0) {
		return 0;
	}
	var_71_object = Obj();
	var_41_object = var_71_object;
	func_1210(var_71_object);
	var_78_bool = var_41_object == var_0_object;
	if(var_78_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_41_object;
		var_79_object = var_2_object;
		if(var_79_object == 0) goto Label_554;
		StopAnimation();
		StopGroup0();
	}
Label_554:
	return 0;
	
	}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_cvector)
{
	var_8_bool = 0; var_9_object = Obj(); var_10_object = Obj();
	var_6_cvector = var_9_object;
	var_7_cvector = var_10_object;
	func_1267(var_8_bool, var_9_object, var_10_object);
	if(var_8_bool != 0) {
		var_6_cvector = Obj();
		func_531();
	}
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0;
	var_9_object = GlobalVars[0];
	@@var_9_object:in(var_8_bool, var_6_object);
	var_10_bool = var_8_bool == 0; //@nz
	if(var_10_bool != 0) {
		var_6_object = Obj();
		func_567();
	}
	return 2;
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj();
	var_10_bool = var_6_string == "attack";
	if(var_10_bool != 0) {
		func_770(Obj());
		var_11_object = var_8_object;
		func_742();
		var_15_object = Obj();
		var_8_object = var_15_object;
		func_1223(var_15_object);
		var_8_object = 0;
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = "";
	func_1073(var_7_bool, "quest_d10_01", "soldier_fight");
	return 0;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object, var_7_object)
{
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector)
{
	func_742();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_4_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0;
	var_9_bool = 0; var_10_object = Obj();
	var_6_object = var_10_object;
	func_894(var_9_bool, var_10_object);
	var_43_bool = var_9_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 2;
	}
	var_44_object = GlobalVars[0];
	@@var_44_object:in(var_8_bool, var_6_object);
	var_45_bool = var_8_bool;
	if(var_45_bool != 0) {
		func_742();
		var_46_object = Obj();
		var_6_object = var_46_object;
		TaskCall(2);
		func_153(var_47_object, var_46_object);
		TaskReturn();
	}
	return 2;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object)
{
	var_7_bool = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	func_1239(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		func_742();
		var_52_object = Obj();
		var_6_object = var_52_object;
		func_1307(var_52_object);
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object, var_7_int, var_8_float, var_9_float)
{
	var_10_object = Obj(); var_11_int = 0; var_12_float = 0;
	var_6_object = var_10_object;
	var_7_int = var_11_int;
	var_8_float = var_12_float;
	func_918(var_11_int, var_12_float);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object, var_7_string)
{
	var_8_float = 0; var_9_float = 0;
	var_11_bool = var_7_string == "health";
	if(var_11_bool != 0) {
		GetProperty("health", var_9_float);
		var_14_bool = var_9_float <= (int)0;
		if(var_14_bool != 0) {
			SignalDeath(var_6_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object)
{
	var_7_object = Obj();
	var_6_object = var_7_object;
	func_1327(var_7_object);
	return 0;
}


event_6(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector)
{
	var_6_object = Obj();
	func_1003(var_6_object);
	RemoveActor(var_6_object);
	Hold();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector)
{
	func_1192();
	
Label_644:
	func_664(var_4_cvector, var_5_cvector);
	goto Label_644;
}
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_1152(var_38_int, var_39_string)
{
	var_40_int = 0; var_41_int = 0;
	GetInvItemByName(var_41_int, var_39_string);
	var_41_int = var_38_int;
	return 2;
}


func_770(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	FindActor(var_13_object, "player");
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1157(var_8_object)
{
	var_9_object = Obj();
	var_8_object = var_9_object;
	TaskCall(1);
	func_6(var_9_object);
	TaskReturn();
	return 0;
}


func_6(var_9_object)
{
	func_1115();
	var_50_object = Obj();
	var_9_object = var_50_object;
	func_15(var_50_object);
	return 0;
}


func_1031(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj();
	CreateObjectSet(var_9_object);
	var_9_object = var_7_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_649()
{
	return 0;
}


func_777(var_33_bool, var_34_object, var_35_string)
{
	var_36_bool = 0; var_37_bool = 0;
	var_40_bool = IsFuncExist(var_34_object, "HasProperty", (int)2);
	var_41_bool = var_40_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_33_bool = 0;
		return 2;
	}
	@@var_34_object:HasProperty(var_35_string, var_37_bool);
	var_37_bool = var_33_bool;
	return 2;
}


func_1037(var_104_float, var_105_cvector, var_106_cvector)
{
	var_107_float = GetByIndex(var_105_cvector, 0);
	var_108_float = GetByIndex(var_106_cvector, 0);
	var_109_float = var_107_float * var_108_float;
	var_110_float = GetByIndex(var_105_cvector, 2);
	var_111_float = GetByIndex(var_106_cvector, 2);
	var_112_float = var_110_float * var_111_float;
	var_104_float = var_109_float + var_112_float;
	return 0;
}


func_15(var_50_object)
{
	EventDisable(0);
	var_51_object = Obj();
	var_50_object = var_51_object;
	func_38(var_51_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_26:
	Hold();
	goto Label_26;
}
EMIT "Return(); Pop(0)";


func_272(var_0_object, var_1_object, var_2_object, var_59_object, var_60_bool)
{
	var_64_bool = 0; var_65_bool = 0; var_66_bool = 0; var_67_bool = 0;
	var_0_object = var_59_object;
	Face(var_0_object);
	var_68_bool = var_60_bool;
	if(var_68_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_291:
	var_74_bool = 0; var_75_object = Obj();
	var_75_object = var_0_object;
	func_894(var_74_bool, var_75_object);
	if(var_74_bool != 0) {
		CanSee(var_67_bool, var_0_object);
		var_76_bool = var_67_bool;
		if(var_76_bool != 0) {
			func_441(var_67_bool);
		} else {
				var_206_object = Obj();
				var_206_object = var_0_object;
				func_985(var_206_object);
				var_2_object = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_66_bool);
				var_217_bool = var_66_bool == 0; //@nz
				if(var_217_bool != 0) {
					var_218_bool = var_1_object != 0; //@nn
					if(var_218_bool != 0) {
						func_436(var_66_bool, var_67_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_291;
				}
				var_221_bool = 0; var_222_object = Obj();
				var_222_object = var_0_object;
				func_894(var_221_bool, var_222_object);
				var_223_bool = var_221_bool == 0; //@nz
				if(var_223_bool != 0) {
				} else {
					CanSee(var_67_bool, var_0_object);
					var_227_bool = var_67_bool;
					if(var_227_bool != 0) {
						var_2_object = false;
						Face(var_0_object);
						func_441(var_67_bool);
						goto Label_383;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_66_bool);
					var_231_bool = var_66_bool == 0; //@nz
					if(var_231_bool != 0) {
						var_232_bool = var_1_object != 0; //@nn
						if(var_232_bool != 0) {
							func_436(var_66_bool, var_67_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_291;
					}
					var_235_bool = 0; var_236_object = Obj();
					var_236_object = var_0_object;
					func_894(var_235_bool, var_236_object);
					var_237_bool = var_235_bool == 0; //@nz
					if(var_237_bool != 0) {
						goto Label_393;
					}
					var_2_object = false;
					CanSee(var_67_bool, var_0_object);
					var_238_bool = var_67_bool;
					if(var_238_bool != 0) {
						Face(var_0_object);
						func_441(var_67_bool);
						goto Label_383;
					}
					goto Label_393;
				}
	}
		Label_393:
			SetAttackState((bool)0);
			StopAsync();
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 4;
	}
Label_383:
	var_204_bool = var_1_object != 0; //@nn
	if(var_204_bool != 0) {
		func_436(var_66_bool, var_67_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_291;
	
}


func_789(var_142_float, var_143_object, var_144_float, var_145_int)
{
	var_146_int = 0; var_147_string = ""; var_148_int = 0; var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_int = 0; var_153_string = ""; var_154_int = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0;
	var_158_bool = 0; var_159_object = Obj(); var_160_string = "";
	var_143_object = var_159_object;
	func_777(var_158_bool, var_159_object, "health");
	var_161_bool = var_158_bool == 0; //@nz
	if(var_161_bool != 0) {
		var_142_float = 0.0;
		return 12;
	}
	var_162_bool = 0; var_163_object = Obj(); var_164_string = "";
	var_143_object = var_163_object;
	func_777(var_162_bool, var_163_object, "armor");
	var_165_bool = var_162_bool == 0; //@nz
	if(var_165_bool != 0) {
		var_152_int = 0;
	} else {
			@@var_143_object:GetProperty("armor", var_152_int);
	}
	var_167_string = ""; var_168_int = 0;
	var_145_int = var_168_int;
	func_747(var_167_string, var_168_int);
	var_153_string = "armor_" + var_167_string;
	var_171_bool = 0; var_172_object = Obj(); var_173_string = "";
	var_143_object = var_172_object;
	var_153_string = var_173_string;
	func_777(var_171_bool, var_172_object, var_173_string);
	var_174_bool = var_171_bool == 0; //@nz
	if(var_174_bool != 0) {
		var_154_int = 0;
	} else {
		@@var_143_object:GetProperty(var_153_string, var_154_int);

	}
	var_175_float = 0; var_176_float = 0; var_177_float = 0;
	var_178_int = var_152_int + var_154_int;
	var_176_float = var_178_int / (float)100.0;
	func_1013(var_175_float, var_176_float, (float)1);
	var_175_float = var_155_float;
	@@var_143_object:GetProperty("health", var_156_float);
	var_183_int = (int)1 - var_155_float;
	var_157_float = var_144_float * var_183_int;
	var_185_float = 0; var_186_float = 0; var_187_float = 0; var_188_float = 0;
	var_186_float = var_156_float - var_157_float;
	func_1020(var_185_float, var_186_float, (float)0, (float)1);
	@@var_143_object:SetProperty("health", var_185_float);
	var_157_float = var_142_float;
	return 12;
	
}


func_1046(var_113_float, var_114_cvector)
{
	var_115_float = GetByIndex(var_114_cvector, 0);
	var_116_float = GetByIndex(var_114_cvector, 0);
	var_117_float = var_115_float * var_116_float;
	var_118_float = GetByIndex(var_114_cvector, 2);
	var_119_float = GetByIndex(var_114_cvector, 2);
	var_120_float = var_118_float * var_119_float;
	var_121_int = var_117_float + var_120_float;
	var_113_float = sqrt(var_121_int);
	return 0;
}


func_918(var_10_object, var_11_int)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_int = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_string = ""; var_23_object = Obj(); var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = "";
	var_33_bool = 0;
	var_33_bool = 0;
	var_35_bool = var_11_int != (int)4;
	if(var_35_bool != 0) {
		var_37_bool = var_11_int != (int)5;
		if(var_37_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		GetScene(var_23_object);
		GetPosition(var_25_cvector);
		GetEyesHeight(var_26_float);
		var_38_float = GetByIndex(var_25_cvector, 1);
		var_40_float = var_26_float / (int)2;
		var_38_float = var_38_float + var_40_float;
		SetByIndex(var_25_cvector, 1) = var_38_float;
		AddActorByType(var_24_object, "scripted", var_23_object, var_25_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_24_object = 0;
		var_23_object = 0;
	}
	var_44_bool = var_10_object == 0; //@ne
	if(var_44_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_27_int);
	var_46_bool = var_27_int < (int)0;
	if(var_46_bool != 0) {
		return 20;
	}
	@@var_10_object:GetPosition(var_28_cvector);
	GetPosition(var_29_cvector);
	GetDirection(var_30_cvector);
	var_31_cvector = var_29_cvector - var_28_cvector;
	var_47_float = GetByIndex(var_31_cvector, 0);
	var_48_float = GetByIndex(var_30_cvector, 0);
	var_49_float = var_47_float * var_48_float;
	var_50_float = GetByIndex(var_31_cvector, 2);
	var_51_float = GetByIndex(var_30_cvector, 2);
	var_52_float = var_50_float * var_51_float;
	var_53_int = var_49_float + var_52_float;
	var_55_bool = var_53_int >= (int)0;
	if(var_55_bool != 0) {
		var_32_string = "fhit";
	} else {
		var_32_string = "bhit";
	}
	var_58_int = var_32_string + "1";
	var_60_int = var_32_string + "2";
	FadeSecondaryAnimation("hit_react", var_58_int, var_60_int, (int)-10);
	return 20;
	
}


func_664(var_0_object, var_1_object)
{
	var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_object = Obj(); var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_669:
	irand(var_14_int, (int)60);
	var_20_int = var_14_int + (int)30;
	Sleep(var_20_int, var_15_bool);
	var_21_bool = var_15_bool;
	if(var_21_bool != 0) {
		func_649();
	} else {
		GetPFPosition(var_16_cvector);
		var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
		var_23_cvector = var_1_object;
		var_16_cvector = var_24_cvector;
		func_1009(var_22_float, var_23_cvector, var_24_cvector);
		var_28_bool = var_22_float > (int)40000;
		if(var_28_bool != 0) {
			FindPathTo(var_17_object, var_1_object);
			var_29_bool = var_17_object != 0; //@nn
			if(var_29_bool != 0) {
				RotatePath(var_17_object, var_15_bool);
				var_30_bool = var_15_bool == 0; //@nz
				if(var_30_bool != 0) {
				} else {
					FollowPath(var_17_object, (bool)0, var_15_bool);
					var_32_bool = var_15_bool == 0; //@nz
					if(var_32_bool != 0) {
						goto Label_739;
					}
					var_33_float = GetByIndex(var_0_object, 0);
					var_34_float = GetByIndex(var_0_object, 2);
					Rotate(var_33_float, var_34_float, var_15_bool);
					var_35_bool = var_15_bool == 0; //@nz
					if(var_35_bool != 0) {
						goto Label_739;
					}
					WaitForAnimEnd(var_15_bool);
					var_36_bool = var_15_bool == 0; //@nz
					if(var_36_bool != 0) {
						goto Label_739;
					}
					goto Label_740;
				EMIT "GOTO 0x2d4";
			}
				Sleep((int)1);
				var_17_object = 0;
				goto Label_739;
		}
			var_38_float = GetByIndex(var_0_object, 0);
			var_39_float = GetByIndex(var_0_object, 2);
			Rotate(var_38_float, var_39_float, var_15_bool);
			var_40_bool = var_15_bool == 0; //@nz
			if(var_40_bool != 0) {
				goto Label_739;
			}
			WaitForAnimEnd(var_15_bool);
			var_41_bool = var_15_bool == 0; //@nz
			if(var_41_bool != 0) {
				goto Label_739;
			}
			goto Label_740;
		}
	Label_739:
		goto Label_682;
	}
Label_740:
	goto Label_669;
	
}
EMIT "Return(); Pop(8)";


func_153(var_0_object, var_46_object)
{
	var_48_bool = 0; var_49_bool = 0;
	var_0_object = var_46_object;
	Face(var_46_object);
	
Label_157:
	Sleep((float)0.5, var_49_bool);
	var_51_bool = 0;
	var_51_bool = 1;
	var_52_bool = var_49_bool == 0; //@nz
	if(var_52_bool != 1) {
		var_53_bool = 0; var_54_object = Obj();
		var_54_object = var_0_object;
		func_894(var_53_bool, var_54_object);
		var_55_bool = var_53_bool == 0; //@nz
		if(var_55_bool != 1) {
			var_51_bool = 0;
		}
	}
	if(var_51_bool != 0) {
	} else {
		goto Label_157;
	}
	StopAsync();
	return 2;
	
}


func_1307(var_52_object)
{
	var_53_bool = 0; var_54_bool = 0;
	var_55_object = GlobalVars[0];
	@@var_55_object:in(var_54_bool, var_52_object);
	var_56_bool = var_54_bool;
	if(var_56_bool != 0) {
		var_57_object = Obj(); var_58_bool = 0;
		var_52_object = var_57_object;
		func_1199(var_57_object, (bool)1);
	}
	return 2;
}


func_1056(var_101_float, var_102_cvector, var_103_cvector)
{
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0);
	var_102_cvector = var_105_cvector;
	var_103_cvector = var_106_cvector;
	func_1037(var_104_float, var_105_cvector, var_106_cvector);
	var_113_float = 0; var_114_cvector = CVector(0,0,0);
	var_102_cvector = var_114_cvector;
	func_1046(var_113_float, var_114_cvector);
	var_122_float = 0; var_123_cvector = CVector(0,0,0);
	var_103_cvector = var_123_cvector;
	func_1046(var_122_float, var_123_cvector);
	var_124_float = var_113_float * var_122_float;
	var_101_float = var_104_float / var_124_float;
	return 0;
}


func_38(var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_string = ""; var_57_object = Obj(); var_58_bool = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_string = ""; var_67_object = Obj(); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0);
	var_72_bool = var_51_object == 0; //@ne
	if(var_72_bool != 0) {
		var_73_string = "";
		func_125("fdie");
	} else {
		@@var_51_object:GetPosition(var_62_cvector);
		GetPosition(var_63_cvector);
		GetDirection(var_64_cvector);
		var_65_cvector = var_63_cvector - var_62_cvector;
		var_76_float = GetByIndex(var_65_cvector, 0);
		var_77_float = GetByIndex(var_64_cvector, 0);
		var_78_float = var_76_float * var_77_float;
		var_79_float = GetByIndex(var_65_cvector, 2);
		var_80_float = GetByIndex(var_64_cvector, 2);
		var_81_float = var_79_float * var_80_float;
		var_82_int = var_78_float + var_81_float;
		var_84_bool = var_82_int >= (int)0;
		if(var_84_bool != 0) {
			var_66_string = "fdie";
		} else {
				var_66_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_51_object = var_67_object;
		var_87_bool = IsFuncExist(var_51_object, "GetScriptProperty", (int)2);
		if(var_87_bool != 0) {
			@@var_51_object:HasScriptProperty(var_68_bool, "Owner");
			var_89_bool = var_68_bool;
			if(var_89_bool != 0) {
				@@var_51_object:GetScriptProperty(var_67_object, "Owner");
				var_91_bool = var_67_object == 0; //@ne
				if(var_91_bool != 0) {
					var_51_object = var_67_object;
				}
			}
		}
		var_94_bool = IsFuncExist(var_67_object, "@GetEyesHeight", (int)1);
		if(var_94_bool != 0) {
			@@var_67_object:GetEyesHeight(var_70_float);
			var_71_cvector = CVector(0.0, 0.0, 0.0);
			var_95_float = GetByIndex(var_71_cvector, 1);
			var_70_float = var_95_float;
			SetByIndex(var_71_cvector, 1) = var_95_float;
			LookAsync(var_51_object, "head", var_71_cvector);
			var_69_bool = 1;
		} else {
			var_69_bool = 0;

		}
		PlayAnimation("all", var_66_string);
		WaitForAnimEnd();
		var_98_bool = var_69_bool;
		if(var_98_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_66_string);
		RemoveEnvelope();
		var_67_object = 0;
	}
	return 20;
	
}


func_1192()
{
	var_6_object = GlobalVars[0];
	func_1031(Obj());
	var_7_object = var_6_object;
	GlobalVars[0] = var_6_object;
	return 0;
}


func_1327(var_7_object)
{
	var_8_object = Obj();
	var_7_object = var_8_object;
	func_1157(var_8_object);
	return 0;
}


func_1199(var_57_object, var_58_bool)
{
	var_59_object = Obj(); var_60_bool = 0;
	var_57_object = var_59_object;
	var_58_bool = var_60_bool;
	TaskCall(3);
	func_272(var_61_object, var_62_object, var_63_bool, var_59_object, var_60_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_177()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_1073(var_7_bool, var_8_string, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj();
	FindActor(var_11_object, var_8_string);
	var_12_bool = var_11_object == 0; //@ne
	if(var_12_bool != 0) {
		var_7_bool = 0;
		return 2;
	}
	Trigger(var_11_object, var_9_string);
	var_7_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_436(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_567()
{
	func_742();
	return 0;
}


func_441(var_0_object)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_object = Obj(); var_81_int = 0; var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_object = Obj(); var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_object = Obj(); var_90_int = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_object = Obj(); var_94_object = Obj();
	ReportAttack(var_0_object);
	GetDirection(var_86_cvector);
	var_95_cvector = CVector(0,0,0); var_96_object = Obj();
	var_96_object = var_0_object;
	func_755(var_95_cvector, var_96_object);
	var_95_cvector = var_87_cvector;
	var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0);
	var_86_cvector = var_102_cvector;
	var_87_cvector = var_103_cvector;
	func_1056(var_101_float, var_102_cvector, var_103_cvector);
	var_126_bool = var_101_float < (float)0.9659258127212524;
	if(var_126_bool != 0) {
		return 18;
	}
	PlayAnimation("all", "attack_begin1");
	WaitForAnimEnd();
	Speak("shot");
	GetDirection(var_86_cvector);
	var_130_cvector = CVector(0,0,0); var_131_object = Obj();
	var_131_object = var_0_object;
	func_755(var_130_cvector, var_131_object);
	var_130_cvector = var_87_cvector;
	var_132_float = GetByIndex(var_87_cvector, 1);
	var_133_float = 0; var_134_object = Obj();
	var_134_object = var_0_object;
	func_996(var_133_float, var_134_object);
	var_132_float = var_132_float + var_133_float;
	SetByIndex(var_87_cvector, 1) = var_132_float;
	RandVecCone3D(var_88_cvector, var_87_cvector, (float)0.2617993950843811);
	GetVictimMaterial(var_88_cvector, var_89_object, var_90_int, var_91_cvector);
	var_140_bool = var_89_object != 0; //@nn
	if(var_140_bool != 0) {
		var_141_bool = var_89_object == var_0_object;
		if(var_141_bool != 0) {
			var_142_float = 0; var_143_object = Obj(); var_144_float = 0; var_145_int = 0;
			var_143_object = var_0_object;
			func_789(var_142_float, var_143_object, (float)1.5, (int)0);
			var_142_float = var_92_float;
			ReportHit(var_0_object, (int)2, var_92_float, (float)1.5);
		} else {
			var_199_bool = var_90_int != (int)-1;
			if(var_199_bool == 0) goto Label_519;
			GetScene(var_93_object);
			AddActorByType(var_94_object, "scripted", var_93_object, var_91_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_94_object:SetScriptProperty("Material", var_90_int);
			var_94_object = 0;
			var_93_object = 0;
		}
	}
Label_519:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 18;
	
}
EMIT "Stack[-6] = 0";


func_1210(var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	var_19_bool = var_16_object == 0; //@ne
	if(var_19_bool != 0) {
		return 2;
	}
	var_20_object = GlobalVars[0];
	@@var_20_object:in(var_18_bool, var_16_object);
	var_21_bool = var_18_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_22_object = GlobalVars[0];
		@@var_22_object:add(var_16_object);
	}
	return 2;
}


func_1085(var_15_int, var_16_int)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0;
	var_25_bool = var_15_int > var_16_int;
	if(var_25_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_27_bool = var_15_int != var_16_int;
	if(var_27_bool != 0) {
		var_28_int = var_16_int - var_15_int;
		irand(var_22_int, var_28_int);
	} else {
		var_34_bool = var_15_int == (int)0;
		if(var_34_bool == 0) goto Label_1103;
		return 8;
	}
Label_1103:
	(int)0 = (int)0 + var_15_int;
	var_30_bool = var_21_int == (int)0;
	if(var_30_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_23_int, "Money");
	AddItem(var_24_bool, var_23_int, (int)0, var_21_int);
	return 8;
	
}


func_1223(var_15_object)
{
	var_16_object = Obj();
	var_15_object = var_16_object;
	func_1210(var_16_object);
	var_23_object = Obj(); var_24_bool = 0;
	var_15_object = var_23_object;
	func_1199(var_23_object, (bool)1);
	return 0;
}


func_1234(var_48_bool, var_49_object)
{
	var_50_bool = 0; var_51_bool = 0;
	IsPlayerActor(var_49_object, var_51_bool);
	var_51_bool = var_48_bool;
	return 2;
}


func_853(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0;
	@@var_27_object:IsDead(var_29_bool);
	var_29_bool = var_26_bool;
	return 2;
}


func_1239(var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_8_object = var_12_object;
	func_894(var_11_bool, var_12_object);
	var_45_bool = var_11_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_7_bool = 0;
		return 2;
	}
	var_46_object = GlobalVars[0];
	@@var_46_object:in(var_10_bool, var_8_object);
	var_47_bool = var_10_bool;
	if(var_47_bool != 0) {
		var_7_bool = 1;
		return 2;
	}
	var_48_bool = 0; var_49_object = Obj();
	var_8_object = var_49_object;
	func_1234(var_48_bool, var_49_object);
	var_48_bool = var_7_bool;
	return 2;
}


func_985(var_206_object)
{
	var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0);
	@@var_206_object:GetPosition(var_210_cvector);
	GetPosition(var_211_cvector);
	var_212_cvector = var_210_cvector - var_211_cvector;
	var_213_float = GetByIndex(var_212_cvector, 0);
	var_214_float = GetByIndex(var_212_cvector, 2);
	RotateAsync(var_213_float, var_214_float);
	return 6;
}


func_858(var_15_bool, var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj();
	var_21_bool = var_16_object == 0; //@ne
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_bool = 0;
	var_22_bool = 0;
	var_25_bool = IsFuncExist(var_16_object, "IsDead", (int)1);
	if(var_25_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_16_object = var_27_object;
		func_853(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_22_bool = 1;
		}
	}
	if(var_22_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	GetScene(var_19_object);
	var_30_bool = var_19_object == 0; //@ne
	if(var_30_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	@@var_16_object:GetScene(var_20_object);
	var_31_bool = var_19_object != var_20_object;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_15_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1115()
{
	var_10_int = 0; var_11_bool = 0; var_12_int = 0; var_13_bool = 0;
	ClearSubContainer((int)0);
	var_15_int = 0; var_16_int = 0;
	func_1085((int)500, (int)1000);
	irand(var_12_int, (int)4);
	var_37_bool = var_12_int != (int)0;
	if(var_37_bool != 0) {
		var_38_int = 0; var_39_string = "";
		func_1152(var_38_int, "rifle_ammo");
		AddItem(var_13_bool, var_38_int, (int)0, var_12_int);
	}
	irand(var_12_int, (int)3);
	var_45_bool = var_12_int == (int)0;
	if(var_45_bool != 0) {
		var_46_int = 0; var_47_string = "";
		func_1152(var_46_int, "rusk");
		AddItem(var_13_bool, var_46_int, (int)0, (int)1);
	}
	return 4;
}


func_996(var_133_float, var_134_object)
{
	var_135_float = 0; var_136_float = 0; var_137_float = 0; var_138_float = 0;
	GetEyesHeight(var_137_float);
	@@var_134_object:GetEyesHeight(var_138_float);
	var_133_float = var_138_float - var_137_float;
	return 4;
}


func_742()
{
	StopGroup0();
	Stop();
	return 0;
}


func_747(var_167_string, var_168_int)
{
	var_170_bool = var_168_int == (int)1;
	if(var_170_bool != 0) {
		var_167_string = "fire";
		return 0;
	}
	var_167_string = "phys";
	return 0;
}


func_1003(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj();
	self(var_8_object);
	var_8_object = var_6_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1261(var_53_object)
{
	var_54_object = Obj();
	var_53_object = var_54_object;
	func_1307(var_54_object);
	return 0;
}


func_1009(var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	var_26_cvector = var_24_cvector - var_23_cvector;
	var_22_float = var_26_cvector | var_26_cvector;
	return 2;
}


func_1267(var_8_bool, var_9_object, var_10_object)
{
	var_11_float = 0; var_12_bool = 0; var_13_float = 0; var_14_bool = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_string = "";
	var_10_object = var_16_object;
	func_777(var_15_bool, var_16_object, "reputation");
	var_24_bool = var_15_bool == 0; //@nz
	if(var_24_bool != 0) {
		var_8_bool = 0;
		return 4;
	}
	@@var_10_object:GetProperty("reputation", var_13_float);
	var_27_bool = var_13_float < (float)0.5;
	if(var_27_bool != 0) {
		var_8_bool = 0;
		return 4;
	}
	CanSee(var_14_bool, var_9_object);
	var_28_bool = 0;
	var_28_bool = 1;
	var_29_bool = var_14_bool;
	if(var_29_bool != 1) {
		var_30_float = 0; var_31_object = Obj();
		var_9_object = var_31_object;
		func_762(var_30_float, var_31_object);
		var_39_bool = var_30_float <= (float)160000.0;
		if(var_39_bool != 1) {
			var_28_bool = 0;
		}
	}
	if(var_28_bool != 0) {
		ReportReputationChange(var_9_object, var_10_object, (float)-0.20000000298023224);
		var_8_bool = 1;
		return 4;
	}
	var_8_bool = 0;
	return 4;
}


func_755(var_95_cvector, var_96_object)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0);
	GetPosition(var_99_cvector);
	@@var_96_object:GetPosition(var_100_cvector);
	var_95_cvector = var_100_cvector - var_99_cvector;
	return 4;
}


func_1013(var_175_float, var_176_float, var_177_float)
{
	var_180_bool = var_176_float < var_177_float;
	if(var_180_bool != 0) {
		var_176_float = var_175_float;
	} else {
		var_177_float = var_175_float;
	}
	return 0;
	
}


func_762(var_30_float, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0);
	GetPosition(var_35_cvector);
	@@var_31_object:GetPosition(var_36_cvector);
	var_37_cvector = var_36_cvector - var_35_cvector;
	var_30_float = var_37_cvector | var_37_cvector;
	return 6;
}


func_1020(var_185_float, var_186_float, var_187_float, var_188_float)
{
	var_189_bool = var_186_float < var_187_float;
	if(var_189_bool != 0) {
		var_187_float = var_185_float;
		return 0;
	}
	var_190_bool = var_186_float > var_188_float;
	if(var_190_bool != 0) {
		var_188_float = var_185_float;
		return 0;
	}
	var_186_float = var_185_float;
	return 0;
}


func_125(var_73_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_73_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_73_string);
	RemoveEnvelope();
	return 0;
}


func_894(var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_858(var_15_bool, var_16_object);
	var_32_bool = var_15_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_11_bool = 0;
		return 2;
	}
	var_33_bool = 0; var_34_object = Obj(); var_35_string = "";
	var_12_object = var_34_object;
	func_777(var_33_bool, var_34_object, "noaccess");
	var_42_bool = var_33_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_11_bool = 1;
		return 2;
	}
	@@var_12_object:GetProperty("noaccess", var_14_int);
	var_11_bool = var_14_int == (int)0;
	return 2;
}


