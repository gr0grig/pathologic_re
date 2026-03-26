// @IMPORTS: IsPlayerActor/2,GetPFPosition/1,GetDirection/1,irand/2,Sleep/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,WaitForAnimEnd/1,Sleep/1,StopGroup0/0,Stop/0,FindActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,CanReachByPF/2,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,GetProperty/2,SignalDeath/1
// @STRINGS: W:player|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:all|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|A:RemoveStationaryActor|W:revolver_ammo|W:alpha_pills
// @GLOBALS: 0:object:
// @RUN_OP: 0x2b
// @RUN_TASK: 0
// @TASK_0: vars=cvector,cvector params=0
// @EVENT_3: op=0x1 vars=object
// @EVENT_1: op=0xf vars=object
// @EVENT_17: op=0x1d vars=object
// @TASK_1: vars=object,int,int,bool,float,int params=0
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_7: op=0x361 vars=int
// @EVENT_1: op=0x37c vars=object
// @EVENT_2: op=0x38b vars=object
// @EVENT_10: op=0x411 vars=object
// @EVENT_41: op=0x41c vars=object
// @TASK_3: vars= params=1
// @EVENT_0: op=0x43d vars=object
// @EVENT_22: op=0x4bc vars=object,int,float,float
// @EVENT_16: op=0x4be vars=object,string
// @EVENT_41: op=0x4c0 vars=object
// @STANDALONE_EVENT_22: op=0x6d8 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x6e0 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x6ea vars=object,string
// @STANDALONE_EVENT_41: op=0x6f7 vars=object
// @PE: 0x94,0x97,0x328,0x361,0x37c,0x38b,0x3ff,0x411,0x41c,0x425,0x430,0x4a2,0x4bc,0x4be,0x4c0,0x4c2,0x643,0x64a,0x680,0x6d8,0x6e0,0x6f7

task_0_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0;
	IsPlayerActor(var_11_bool, var_13_bool);
	var_14_bool = var_13_bool;
	if(var_14_bool != 0) {
		func_127();
		TaskCall(1);
		func_133();
		TaskReturn();
	}
	return 2;
}


task_0_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0;
	IsPlayerActor(var_11_bool, var_13_bool);
	var_14_bool = var_13_bool;
	if(var_14_bool != 0) {
		func_127();
		TaskCall(1);
		func_133();
		TaskReturn();
	}
	return 2;
}


task_0_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0;
	IsPlayerActor(var_11_bool, var_13_bool);
	var_14_bool = var_13_bool;
	if(var_14_bool != 0) {
		func_127();
		TaskCall(1);
		func_133();
		TaskReturn();
	}
	return 2;
}


task_2_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_int)
{
	var_13_bool = var_11_int == (int)1;
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_14_object = var_1_cvector;
		func_1638(var_14_object);
	} else {
		var_19_int = 0;
		var_11_int = var_19_int;
		func_1023(var_10_bool, var_11_int, var_19_int);
	}
	return 0;
	
}


task_2_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_1_cvector == var_11_object;
	if(var_13_bool != 0) {
		var_14_bool = var_2_object == 0; //@nz
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_2_object = true;
		var_15_object = Obj();
		var_11_object = var_15_object;
		func_1531(var_15_object);
	}
	return 0;
}


task_2_event_2(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_1_cvector == var_11_object;
	if(var_13_bool != 0) {
		var_14_object = var_2_object;
		if(var_14_object != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	RequestClearPath(var_11_object);
	return 0;
}


task_2_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	func_879(var_11_object);
	var_11_object = Obj();
	func_1783();
	return 0;
}


task_3_event_0(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	IsOverrideActive(var_13_bool);
	var_14_bool = var_13_bool == 0; //@nz
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_11_object = var_15_object;
		func_1664(var_15_object);
	}
	return 2;
}


task_3_event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	return 0;
}


task_3_event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_string)
{
	return 0;
}


task_3_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	return 0;
}


event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1438(var_15_object, var_16_int, var_17_float);
	return 0;
}


event_43(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	var_11_object = var_17_object;
	var_12_int = var_18_int;
	var_13_float = var_19_float;
	var_15_cvector = var_20_cvector;
	var_16_cvector = var_21_cvector;
	func_1506(var_19_float, var_20_cvector, var_21_cvector);
	return 0;
}


event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0;
	var_16_bool = var_12_string == "health";
	if(var_16_bool != 0) {
		GetProperty("health", var_14_float);
		var_19_bool = var_14_float <= (int)0;
		if(var_19_bool != 0) {
			SignalDeath(var_11_object);
		}
	}
	return 2;
}


event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_1728(var_12_object);
	return 0;
}


main(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_object = Obj();
	GetPFPosition(var_1_cvector);
	GetDirection(var_0_cvector);
	
Label_48:
	func_132();
	irand(var_15_int, (int)10);
	var_21_int = var_15_int + (int)5;
	Sleep(var_21_int, var_16_bool);
	var_22_bool = var_16_bool;
	if(var_22_bool != 0) {
		func_0();
	} else {
		func_132();
		GetPFPosition(var_17_cvector);
		var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0);
		var_24_cvector = var_1_cvector;
		var_17_cvector = var_25_cvector;
		func_1599(var_23_float, var_24_cvector, var_25_cvector);
		var_29_bool = var_23_float > (int)40000;
		if(var_29_bool != 0) {
			FindPathTo(var_18_object, var_1_cvector);
			var_30_bool = var_18_object != 0; //@nn
			if(var_30_bool != 0) {
				RotatePath(var_18_object, var_16_bool);
				var_31_bool = var_16_bool == 0; //@nz
				if(var_31_bool != 0) {
				} else {
					FollowPath(var_18_object, (bool)0, var_16_bool);
					var_33_bool = var_16_bool == 0; //@nz
					if(var_33_bool != 0) {
						goto Label_124;
					}
					var_34_float = GetByIndex(var_0_cvector, 0);
					var_35_float = GetByIndex(var_0_cvector, 2);
					Rotate(var_34_float, var_35_float, var_16_bool);
					var_36_bool = var_16_bool == 0; //@nz
					if(var_36_bool != 0) {
						goto Label_124;
					}
					WaitForAnimEnd(var_16_bool);
					var_37_bool = var_16_bool == 0; //@nz
					if(var_37_bool != 0) {
						goto Label_124;
					}
					goto Label_125;
				EMIT "GOTO 0x6d";
			}
				Sleep((int)1);
				var_18_object = 0;
				goto Label_124;
		}
			var_39_float = GetByIndex(var_0_cvector, 0);
			var_40_float = GetByIndex(var_0_cvector, 2);
			Rotate(var_39_float, var_40_float, var_16_bool);
			var_41_bool = var_16_bool == 0; //@nz
			if(var_41_bool != 0) {
				goto Label_124;
			}
			WaitForAnimEnd(var_16_bool);
			var_42_bool = var_16_bool == 0; //@nz
			if(var_42_bool != 0) {
				goto Label_124;
			}
			goto Label_125;
		}
	Label_124:
		goto Label_64;
	}
Label_125:
	goto Label_48;
	
}
EMIT "Return(); Pop(8)";


func_0()
{
	return 0;
}


func_1664(var_15_object)
{
	var_16_int = 0;
	func_1658(var_16_int);
	var_21_bool = var_16_int == (int)1;
	if(var_21_bool != 0) {
		WorkWithCorpse(var_15_object);
	} else {
		Barter(var_15_object);
	}
	return 0;
	
}


func_132()
{
	return 0;
}


func_133()
{
	var_21_object = Obj(); var_22_object = Obj();
	FindActor(var_22_object, "player");
	var_24_bool = var_22_object == 0; //@nz
	if(var_24_bool != 0) {
		return 2;
	}
	var_25_object = Obj(); var_26_bool = 0; var_27_float = 0;
	var_22_object = var_25_object;
	func_154(var_18_bool, var_19_float, var_20_int, var_21_object, var_22_object, var_25_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1542(var_70_string)
{
	var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	IsExisting3DSound(var_79_bool, var_70_string);
	var_87_bool = var_79_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_80_int = 0;

	Label_1548:
		var_89_int = var_80_int + (int)1;
		var_90_int = var_70_string + var_89_int;
		IsExisting3DSound(var_81_bool, var_90_int);
		var_91_bool = var_81_bool == 0; //@nz
		if(var_91_bool != 0) {
		} else {
			var_80_int = var_80_int + (int)1;
			goto Label_1548;
		}
		var_92_bool = var_80_int == 0; //@nz
		if(var_92_bool != 0) {
			return 16;
		}
		irand(var_82_int, var_80_int);
		var_94_int = var_82_int + (int)1;
		var_70_string = var_70_string + var_94_int;
	}
	Is3DSoundLoaded(var_83_bool, var_70_string);
	var_95_bool = var_83_bool;
	if(var_95_bool != 0) {
		GetEyesHeight(var_84_float);
		GetDirection(var_85_cvector);
		var_86_cvector = var_85_cvector * (int)50;
		var_97_float = GetByIndex(var_86_cvector, 1);
		var_97_float = var_97_float + var_84_float;
		SetByIndex(var_86_cvector, 1) = var_97_float;
		PlayGlobalSound(var_70_string, var_86_cvector);
	}
	return 16;
	
}


func_764(var_2_object, var_5_int)
{
	var_365_float = 0; var_366_int = 0; var_367_float = 0; var_368_int = 0;
	var_369_bool = var_2_object == 0; //@nz
	if(var_369_bool != 0) {
		return 4;
	}
	var_370_int = var_5_int;
	if(var_370_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_373_bool = var_5_int > (int)0;
		if(var_373_bool != 0) {
			return 4;
		}
	}
	rand(var_367_float);
	var_374_float = 0;
	func_814(var_374_float);
	var_375_bool = var_367_float < var_374_float;
	if(var_375_bool != 0) {
		irand(var_368_int, var_2_object);
		var_368_int = var_368_int + (int)1;
		var_378_int = "attack" + var_368_int;
		Speak(var_378_int);
		var_379_int = 0;
		func_812(var_379_int);
		var_5_int = var_379_int;
	}
	return 4;
}


func_1677(var_27_string)
{
	var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_int = 0; var_33_bool = 0;
	CreateInvItem(var_31_object);
	@@var_31_object:SetItemName(var_27_string);
	@@var_31_object:SetProperty("Organ", (int)1);
	@@var_31_object:GetItemID(var_32_int);
	AddItem(var_33_bool, var_31_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_148(var_394_float)
{
	var_394_float = 0.15000000596046448;
	return 0;
}


func_1045(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_151(var_401_int)
{
	var_401_int = 0;
	return 0;
}


func_664(var_0_cvector, var_300_bool)
{
	var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_float = 0; var_305_float = 0; var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_float = 0; var_310_float = 0;
	var_311_bool = 0; var_312_object = Obj();
	var_312_object = var_0_cvector;
	func_1370(var_311_bool, var_312_object);
	var_313_bool = var_311_bool == 0; //@nz
	if(var_313_bool != 0) {
		var_300_bool = 0;
		return 10;
	}
	var_314_bool = 0;
	func_753(var_310_float, var_314_bool);
	if(var_314_bool != 0) {
		@@@var_0_cvector:GetPFPosition(var_306_cvector);
		GetPFPosition(var_307_cvector);
		var_308_cvector = var_306_cvector - var_307_cvector;
		var_309_float = var_308_cvector | var_308_cvector;
		@@@var_0_cvector:GetAttackDistance(var_310_float);
		var_310_float = var_310_float + (int)50;
		var_316_float = var_310_float * var_310_float;
		var_300_bool = var_309_float <= var_316_float;
		return 10;
	}
	var_300_bool = 0;
	return 10;
}


func_921(var_0_cvector, var_1_cvector, var_157_bool, var_158_object, var_159_float, var_160_float, var_161_bool, var_162_bool)
{
	var_163_bool = 0; var_164_bool = 0; var_165_object = Obj(); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_float = 0; var_170_object = Obj(); var_171_bool = 0; var_172_bool = 0; var_173_object = Obj(); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_object = Obj();
	var_0_cvector = false;
	var_1_cvector = var_158_object;
	var_162_bool = var_172_bool;
	
Label_925:
	var_179_bool = 0; var_180_object = Obj();
	var_158_object = var_180_object;
	func_1061(var_179_bool, var_180_object);
	var_183_bool = var_179_bool == 0; //@nz
	if(var_183_bool != 0) {
		var_157_bool = 0;
		return 16;
	}
	@@var_158_object:GetPosition(var_174_cvector);
	GetPosition(var_175_cvector);
	var_176_cvector = var_174_cvector - var_175_cvector;
	var_177_float = var_176_cvector | var_176_cvector;
	var_184_bool = 0;
	var_184_bool = 0;
	var_186_bool = var_160_float > (int)0;
	if(var_186_bool != 0) {
		var_187_float = var_160_float * var_160_float;
		var_188_bool = var_177_float > var_187_float;
		if(var_188_bool != 0) {
			var_184_bool = 1;
		}
	}
	if(var_184_bool != 0) {
		Stop();
		var_157_bool = 0;
		return 16;
	}
	var_189_float = var_159_float * var_159_float;
	var_190_bool = var_177_float > var_189_float;
	if(var_190_bool != 0) {
		@@var_158_object:GetPFPosition(var_174_cvector);
		FindPathTo(var_178_object, var_174_cvector);
		var_191_bool = var_178_object != 0; //@nn
		if(var_191_bool != 0) {
			var_178_object = var_173_object;
			var_178_object = 0;
		}
		var_192_bool = var_173_object != 0; //@nn
		if(var_192_bool != 0) {
			var_193_bool = var_172_bool;
			if(var_193_bool == 0) goto Label_974;
			var_172_bool = 0;
			RotatePath(var_173_object, var_171_bool);
			var_194_bool = var_171_bool == 0; //@nz
			if(var_194_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_197_string = "";
				func_1068(var_197_string);
				var_198_string = "";
				func_1070(var_198_string);
				FollowPath(var_173_object, var_161_bool, var_171_bool, var_197_string, var_198_string);
				var_199_bool = var_171_bool == 0; //@nz
				if(var_199_bool != 0) {
					var_200_cvector = var_0_cvector;
					if(var_200_cvector != 0) {
						var_173_object = 0;
						goto Label_1021;
					EMIT "GOTO 0x3e2";
					}
				} else {
					var_173_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_171_bool);
					var_203_bool = var_171_bool == 0; //@nz
					if(var_203_bool != 0) {
						var_204_cvector = var_0_cvector;
						if(var_204_cvector != 0) {
							var_173_object = 0;
							goto Label_1021;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1021;
	}
			var_178_object = 0;
			goto Label_1019;

		Label_1019:
			var_173_object = 0;

		}
		goto Label_925;
	}
Label_1021:
	var_157_bool = !var_0_cvector;
	return 16;
	
}


func_154(var_0_cvector, var_3_object, var_5_int, var_25_object, var_26_bool, var_27_float, var_134_bool, var_226_bool)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_float = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_float = 0;
	func_383(var_47_cvector, var_48_bool, var_49_float);
	var_5_int = 0;
	var_74_bool = IsFuncExist(var_25_object, "@GetAttackDistance", (int)1);
	if(var_74_bool != 0) {
		@@var_25_object:GetAttackDistance(var_39_float);
		var_39_float = var_39_float + (int)50;
	} else {
							var_27_float = var_39_float;
	}
	var_77_bool = var_39_float >= (int)150;
	if(var_77_bool != 0) {
		var_39_float = 150;
	}
	var_3_object = false;
	var_0_cvector = var_25_object;
	IsPlayerActor(var_0_cvector, var_42_bool);
	var_78_bool = var_42_bool;
	if(var_78_bool != 0) {
		PlayGlobalMusic("attack");
		var_80_object = Obj();
		func_1583(var_80_object);
		SendPlayerEnemy(var_25_object, var_80_object);
	}
	var_83_bool = var_26_bool;
	if(var_83_bool != 0) {
		var_43_bool = 0;
	} else {
						var_43_bool = 1;

	}
	var_44_float = (float)400.0 + var_39_float;
	
Label_194:
	var_85_bool = 0;
	var_85_bool = 0;
	var_86_bool = 0; var_87_object = Obj();
	var_87_object = var_0_cvector;
	func_1370(var_86_bool, var_87_object);
	if(var_86_bool != 0) {
		var_120_bool = var_3_object == 0; //@nz
		if(var_120_bool != 0) {
			var_85_bool = 1;
		}
	}
	if(var_85_bool != 0) {
		func_796(var_49_float);
		@@@var_0_cvector:GetPFPosition(var_40_cvector);
		GetPFPosition(var_41_cvector);
		var_45_cvector = var_40_cvector - var_41_cvector;
		var_46_float = var_45_cvector | var_45_cvector;
		var_126_float = var_44_float * var_44_float;
		var_127_bool = var_46_float >= var_126_float;
		if(var_127_bool != 0) {
			var_128_bool = 0; var_129_object = Obj(); var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_bool = 0;
			var_129_object = var_0_cvector;
			var_39_float = var_130_float;
			TaskCall(2);
			func_816(var_136_bool, var_128_bool, var_129_object, var_130_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_211_bool = var_134_bool == 0; //@nz
			if(var_211_bool != 0) {
			} else {
				var_43_bool = 0;
		} else {
				var_217_float = var_27_float * var_27_float;
				var_218_bool = var_46_float >= var_217_float;
				if(var_218_bool != 0) {
					@@@var_0_cvector:GetPFPosition(var_47_cvector);
					CanReachByPF(var_48_bool, var_47_cvector);
					var_219_bool = var_48_bool == 0; //@nz
					if(var_219_bool != 0) {
						var_220_bool = 0; var_221_object = Obj(); var_222_float = 0; var_223_float = 0; var_224_bool = 0; var_225_bool = 0;
						var_221_object = var_0_cvector;
						var_39_float = var_222_float;
						TaskCall(2);
						func_816(var_228_bool, var_220_bool, var_221_object, var_222_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_229_bool = var_226_bool == 0; //@nz
						if(var_229_bool != 0) {
							goto Label_366;
						}
						var_43_bool = 0;
						goto Label_194;
					}
					var_230_bool = var_43_bool == 0; //@nz
					if(var_230_bool != 0) {
						var_231_object = Obj();
						var_231_object = var_0_cvector;
						func_1520(var_231_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_796(var_49_float);
						StopAsync();
						var_43_bool = 1;
						var_242_bool = 0; var_243_object = Obj();
						var_243_object = var_0_cvector;
						func_1370(var_242_bool, var_243_object);
						var_244_bool = var_242_bool == 0; //@nz
						if(var_244_bool != 0) {
							goto Label_366;
						}
					}
					rand(var_49_float);
					var_245_bool = 0;
					var_247_bool = var_49_float < (float)0.25;
					if(var_247_bool != 1) {
						var_248_bool = 0;
						func_753((bool)1, var_248_bool);
						if(var_248_bool != 1) {
							var_245_bool = 0;
						}
					}
					if(var_245_bool != 0) {
						Face(var_0_cvector);
						func_803();
						PlayAnimation("all", "attack_stay");
						var_285_bool = 0; var_286_float = 0;
						var_27_float = var_286_float;
						func_621(var_49_float, var_285_bool, var_286_float);
						StopAsync();
					} else {
						Face(var_0_cvector);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_796(var_49_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_507_bool = 0;
						func_753(var_49_float, var_507_bool);
						var_508_bool = var_507_bool == 0; //@nz
						if(var_508_bool == 0) goto Label_356;
						var_509_bool = 0; var_510_object = Obj();
						var_510_object = var_0_cvector;
						func_1370(var_509_bool, var_510_object);
						var_511_bool = var_509_bool == 0; //@nz
						if(var_511_bool != 0) {
							goto Label_366;
						}
						@@@var_0_cvector:GetPFPosition(var_40_cvector);
						GetPFPosition(var_41_cvector);
						var_45_cvector = var_40_cvector - var_41_cvector;
						var_46_float = var_45_cvector | var_45_cvector;
						var_512_float = var_27_float * var_27_float;
						var_513_bool = var_46_float < var_512_float;
						if(var_513_bool == 0) goto Label_356;
						var_514_bool = 0; var_515_float = 0;
						var_27_float = var_515_float;
						func_457(var_48_bool, var_49_float, var_514_bool, var_515_float);
						var_516_bool = var_514_bool == 0; //@nz
						if(var_516_bool == 0) goto Label_356;
						goto Label_366;
				}
					var_517_bool = 0; var_518_float = 0;
					var_27_float = var_518_float;
					func_457(var_48_bool, var_49_float, var_517_bool, var_518_float);
					var_519_bool = var_517_bool == 0; //@nz
					if(var_519_bool != 0) {
						goto Label_366;
					}
					var_43_bool = 1;

				}
			Label_356:
				goto Label_365;
		}
		Label_365:
			goto Label_194;

		}
	}
Label_366:
	WaitForAnimEnd();
	var_212_object = var_3_object;
	if(var_212_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_215_bool = var_42_bool;
	if(var_215_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1023(var_0_cvector, var_1_cvector, var_19_int)
{
	var_21_bool = var_19_int != (int)0;
	if(var_21_bool != 0) {
		return 0;
	}
	var_22_bool = 0; var_23_object = Obj();
	var_23_object = var_1_cvector;
	func_1061(var_22_bool, var_23_object);
	var_58_bool = var_22_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_0_cvector = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_796(var_0_cvector)
{
	var_121_object = Obj();
	var_121_object = var_0_cvector;
	func_1638(var_121_object);
	return 0;
}


func_1694()
{
	var_21_int = 0;
	func_1658(var_21_int);
	var_26_bool = var_21_int != (int)1;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_string = "";
	func_1677("liver");
	var_38_string = "";
	func_1677("kidney");
	var_39_string = "";
	func_1677("heart");
	var_40_string = "";
	func_1677("blood");
	return 0;
}


func_1438(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0);
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_object = var_15_object;
	if(var_38_object != 0) {
		var_40_bool = var_16_int != (int)4;
		if(var_40_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_42_bool = var_16_int != (int)5;
		if(var_42_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
		var_45_cvector = CVector(0,0,0); var_46_object = Obj();
		var_15_object = var_46_object;
		func_1232(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1589(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		CreateVectorVector(var_28_object);
		var_29_int = 1;

	Label_1467:
		var_57_int = "hit" + var_29_int;
		GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector);
		var_58_bool = var_30_bool == 0; //@nz
		if(var_58_bool != 0) {
		} else {
			var_106_int = var_32_cvector | var_27_cvector;
			var_108_bool = var_106_int >= (float)0.7071067690849304;
			if(var_108_bool != 0) {
				@@var_28_object:add(var_31_cvector);
			}
			var_29_int = var_29_int + (int)1;
			goto Label_1467;
		}
		@@var_28_object:size(var_33_int);
		var_59_int = var_33_int;
		if(var_59_int != 0) {
			irand(var_34_int, var_33_int);
			@@var_28_object:get(var_35_cvector, var_34_int);
			var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
			var_15_object = var_60_object;
			var_16_int = var_61_int;
			var_17_float = var_62_float;
			var_35_cvector = var_63_cvector;
			var_64_cvector = -var_27_cvector;
			func_1506(var_62_float, var_63_cvector, var_64_cvector);
			return 18;
		}
		var_28_object = 0;
	}
	var_105_object = Obj();
	var_15_object = var_105_object;
	func_1394(var_105_object);
	return 18;
	
}


func_801(var_462_int)
{
	var_462_int = 0;
	return 0;
}


func_418(var_0_cvector, var_383_float, var_384_int)
{
	var_385_object = Obj(); var_386_float = 0; var_387_float = 0; var_388_object = Obj(); var_389_float = 0; var_390_float = 0;
	var_392_float = var_383_float * (float)0.8999999761581421;
	GetVictim(var_392_float, var_388_object);
	ReportAttack(var_0_cvector);
	var_393_bool = var_388_object == var_0_cvector;
	if(var_393_bool != 0) {
		var_394_float = 0; var_395_object = Obj(); var_396_int = 0;
		var_388_object = var_395_object;
		var_384_int = var_396_int;
		func_148(var_396_int);
		var_394_float = var_389_float;
		var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_int = 0;
		var_388_object = var_398_object;
		var_389_float = var_399_float;
		var_401_int = 0; var_402_object = Obj(); var_403_int = 0;
		var_388_object = var_402_object;
		var_384_int = var_403_int;
		func_151(var_403_int);
		var_401_int = var_400_int;
		func_1256(var_397_float, var_398_object, var_399_float, var_400_int);
		var_397_float = var_390_float;
		var_462_int = 0;
		func_801(var_462_int);
		ReportHit(var_0_cvector, var_462_int, var_390_float, var_389_float);
		var_463_object = Obj(); var_464_float = 0;
		var_388_object = var_463_object;
		var_390_float = var_464_float;
		func_808();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_803()
{
	var_254_string = "";
	func_1542("attack_stay");
	return 0;
}


func_1186(var_69_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_70_string = "";
	var_69_string = var_70_string;
	func_1542(var_70_string);
	PlayAnimation("all", var_69_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_69_string);
	RemoveEnvelope();
	return 0;
}


func_1061(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	func_1370(var_24_bool, var_25_object);
	var_24_bool = var_22_bool;
	return 0;
}


func_808()
{
	return 0;
}


func_810(var_487_bool)
{
	var_487_bool = 1;
	return 0;
}


func_812(var_379_int)
{
	var_379_int = 1;
	return 0;
}


func_1068(var_197_string)
{
	var_197_string = "walk";
	return 0;
}


func_814(var_374_float)
{
	var_374_float = 0.5;
	return 0;
}


func_1583(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj();
	self(var_45_object);
	var_45_object = var_43_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_816(var_2_object, var_128_bool, var_129_object, var_130_float, var_131_float, var_132_bool, var_133_bool)
{
	var_137_bool = 0; var_138_bool = 0; var_139_bool = 0; var_140_bool = 0;
	var_141_object = Obj();
	var_129_object = var_141_object;
	func_1638(var_141_object);
	SetTimer((int)1, (int)5);
	CanSee(var_139_bool, var_129_object);
	var_144_bool = var_139_bool;
	if(var_144_bool != 0) {
		var_2_object = true;
		var_145_object = Obj();
		var_129_object = var_145_object;
		func_1531(var_145_object);
	} else {
		var_2_object = false;
	}
	var_152_bool = 0; var_153_object = Obj();
	var_129_object = var_153_object;
	func_1239(var_152_bool, var_153_object);
	if(var_152_bool != 0) {
		var_156_object = Obj();
		func_1583(var_156_object);
		SendPlayerEnemy(var_129_object, var_156_object);
	}
	var_157_bool = 0; var_158_object = Obj(); var_159_float = 0; var_160_float = 0; var_161_bool = 0; var_162_bool = 0;
	var_129_object = var_158_object;
	var_130_float = var_159_float;
	var_131_float = var_160_float;
	var_132_bool = var_161_bool;
	var_133_bool = var_162_bool;
	func_921(var_139_bool, var_140_bool, var_157_bool, var_158_object, var_159_float, var_160_float, var_161_bool, var_162_bool);
	var_157_bool = var_140_bool;
	var_208_object = var_2_object;
	if(var_208_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_140_bool = var_128_bool;
	return 4;
	
}


func_1070(var_198_string)
{
	var_198_string = "run";
	return 0;
}


func_1329(var_39_bool, var_40_object)
{
	var_41_bool = 0; var_42_bool = 0;
	@@var_40_object:IsDead(var_42_bool);
	var_42_bool = var_39_bool;
	return 2;
}


func_1072(var_46_object)
{
	var_47_object = Obj();
	var_46_object = var_47_object;
	func_1095(var_47_object);
	SetRTEnvelope((int)50, (int)40);
	
Label_1081:
	Hold();
	goto Label_1081;
}
EMIT "Return(); Pop(0)";


func_692(var_298_bool)
{
	var_299_bool = 0;
	var_299_bool = 0;
	var_300_bool = 0;
	func_664(var_299_bool, var_300_bool);
	if(var_300_bool != 0) {
		var_317_bool = 0;
		func_708(var_298_bool, var_299_bool, var_317_bool);
		if(var_317_bool != 0) {
			var_299_bool = 1;
		}
	}
	if(var_299_bool != 0) {
		var_298_bool = 1;
		return 0;
	}
	var_298_bool = 0;
	return 0;
}


func_1589(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0;
	var_53_int = var_44_cvector | var_44_cvector;
	var_52_float = sqrt(var_53_int);
	var_54_float = 9.999999974752427e-07;
	var_55_bool = var_52_float < var_54_float;
	if(var_55_bool != 0) {
		var_43_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_43_cvector = var_44_cvector / var_52_float;
	return 2;
}


func_1334(var_28_bool, var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	var_34_bool = var_29_object == 0; //@ne
	if(var_34_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	var_35_bool = 0;
	var_35_bool = 0;
	var_38_bool = IsFuncExist(var_29_object, "IsDead", (int)1);
	if(var_38_bool != 0) {
		var_39_bool = 0; var_40_object = Obj();
		var_29_object = var_40_object;
		func_1329(var_39_bool, var_40_object);
		if(var_39_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	GetScene(var_32_object);
	var_43_bool = var_32_object == 0; //@ne
	if(var_43_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	@@var_29_object:GetScene(var_33_object);
	var_44_bool = var_32_object != var_33_object;
	if(var_44_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	var_28_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1718()
{
	var_41_object = Obj(); var_42_object = Obj();
	GetScene(var_42_object);
	var_43_object = Obj();
	func_1583(var_43_object);
	@@var_42_object:RemoveStationaryActor(var_43_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1599(var_23_float, var_24_cvector, var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	var_27_cvector = var_25_cvector - var_24_cvector;
	var_23_float = var_27_cvector | var_27_cvector;
	return 2;
}


func_1728(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	AddItem(var_14_bool, "revolver_ammo", (int)0, (int)2);
	AddItem(var_14_bool, "alpha_pills", (int)0, (int)12);
	func_1694();
	func_1718();
	var_46_object = Obj();
	var_12_object = var_46_object;
	TaskCall(3);
	func_1072(var_46_object);
	TaskReturn();
	return 2;
}


func_1218(var_425_string, var_426_int)
{
	var_428_bool = var_426_int == (int)2;
	if(var_428_bool != 0) {
		var_425_string = "fire";
		return 0;
	EMIT "GOTO 0x4ce";
	}
	var_430_bool = var_426_int == (int)1;
	if(var_430_bool != 0) {
		var_425_string = "bullet";
		return 0;
	}
	var_425_string = "phys";
	return 0;
}


func_1603(var_435_float, var_436_float, var_437_float)
{
	var_440_bool = var_436_float < var_437_float;
	if(var_440_bool != 0) {
		var_436_float = var_435_float;
	} else {
		var_437_float = var_435_float;
	}
	return 0;
	
}


func_708(var_0_cvector, var_4_int, var_317_bool)
{
	var_318_object = Obj(); var_319_bool = 0; var_320_float = 0; var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_object = Obj(); var_324_bool = 0; var_325_float = 0; var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0);
	GetScene(var_323_object);
	var_324_bool = 0;
	
Label_712:
	var_328_cvector = CVector(0,0,0); var_329_object = Obj();
	var_329_object = var_0_cvector;
	func_1232(var_328_cvector, var_329_object);
	var_334_int = -var_328_cvector;
	FindDirLength(var_325_float, var_334_int, var_4_int);
	var_335_bool = var_325_float < var_4_int;
	if(var_335_bool != 0) {
	} else {
		Face(var_0_cvector);
		PlayAnimation("all", "bjump");
		@@@var_0_cvector:GetPFPosition(var_326_cvector);
		GetPFPosition(var_327_cvector);
		WaitForAnimEnd();
		func_796(var_327_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_324_bool = 1;
		var_339_bool = 0;
		func_664(var_327_cvector, var_339_bool);
		var_340_bool = var_339_bool == 0; //@nz
		if(var_340_bool != 0) {
			goto Label_750;
		}
		goto Label_712;
	}
Label_750:
	var_324_bool = var_317_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1095(var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_string = ""; var_63_object = Obj(); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0);
	var_68_bool = var_47_object == 0; //@ne
	if(var_68_bool != 0) {
		var_69_string = "";
		func_1186("fdie");
	} else {
		@@var_47_object:GetPosition(var_58_cvector);
		GetPosition(var_59_cvector);
		GetDirection(var_60_cvector);
		var_61_cvector = var_59_cvector - var_58_cvector;
		var_101_float = GetByIndex(var_61_cvector, 0);
		var_102_float = GetByIndex(var_60_cvector, 0);
		var_103_float = var_101_float * var_102_float;
		var_104_float = GetByIndex(var_61_cvector, 2);
		var_105_float = GetByIndex(var_60_cvector, 2);
		var_106_float = var_104_float * var_105_float;
		var_107_int = var_103_float + var_106_float;
		var_109_bool = var_107_int >= (int)0;
		if(var_109_bool != 0) {
			var_62_string = "fdie";
		} else {
				var_62_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_47_object = var_63_object;
		var_112_bool = IsFuncExist(var_47_object, "GetScriptProperty", (int)2);
		if(var_112_bool != 0) {
			@@var_47_object:HasScriptProperty(var_64_bool, "Owner");
			var_114_bool = var_64_bool;
			if(var_114_bool != 0) {
				@@var_47_object:GetScriptProperty(var_63_object, "Owner");
				var_116_bool = var_63_object == 0; //@ne
				if(var_116_bool != 0) {
					var_47_object = var_63_object;
				}
			}
		}
		var_119_bool = IsFuncExist(var_63_object, "@GetEyesHeight", (int)1);
		if(var_119_bool != 0) {
			@@var_63_object:GetEyesHeight(var_66_float);
			var_67_cvector = CVector(0.0, 0.0, 0.0);
			var_120_float = GetByIndex(var_67_cvector, 1);
			var_66_float = var_120_float;
			SetByIndex(var_67_cvector, 1) = var_120_float;
			LookAsync(var_47_object, "head", var_67_cvector);
			var_65_bool = 1;
		} else {
			var_65_bool = 0;

		}
		var_122_string = "";
		var_62_string = var_122_string;
		func_1542(var_122_string);
		PlayAnimation("all", var_62_string);
		WaitForAnimEnd();
		var_124_bool = var_65_bool;
		if(var_124_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_62_string);
		RemoveEnvelope();
		var_63_object = 0;
	}
	return 20;
	
}


func_457(var_0_cvector, var_1_cvector, var_346_bool, var_347_float)
{
	var_348_int = 0; var_349_bool = 0; var_350_int = 0; var_351_string = ""; var_352_int = 0; var_353_bool = 0; var_354_int = 0; var_355_string = "";
	func_796(var_355_string);
	irand(var_352_int, var_1_cvector);
	var_352_int = var_352_int + (int)1;
	Face(var_0_cvector);
	SetAttackState((bool)1);
	func_1647();
	var_364_int = "attack_begin" + var_352_int;
	PlayAnimation("all", var_364_int);
	WaitForAnimEnd();
	func_764(var_354_int, var_355_string);
	var_380_bool = 0; var_381_object = Obj();
	var_381_object = var_0_cvector;
	func_1370(var_380_bool, var_381_object);
	var_382_bool = var_380_bool == 0; //@nz
	if(var_382_bool != 0) {
		StopAsync();
		var_346_bool = 0;
		return 8;
	}
	var_383_float = 0; var_384_int = 0;
	var_347_float = var_383_float;
	var_352_int = var_384_int;
	func_418(var_355_string, var_383_float, var_384_int);
	var_467_int = "attack_middle" + var_352_int;
	HasAnimation(var_353_bool, "all", var_467_int);
	var_468_bool = var_353_bool;
	if(var_468_bool != 0) {
		func_1647();
		var_471_int = "attack_middle" + var_352_int;
		PlayAnimation("all", var_471_int);
		WaitForAnimEnd();
		func_796(var_355_string);
		var_472_bool = 0; var_473_object = Obj();
		var_473_object = var_0_cvector;
		func_1370(var_472_bool, var_473_object);
		var_474_bool = var_472_bool == 0; //@nz
		if(var_474_bool != 0) {
			StopAsync();
			var_346_bool = 0;
			return 8;
		}
		var_475_float = 0; var_476_int = 0;
		var_347_float = var_475_float;
		var_352_int = var_476_int;
		func_418(var_355_string, var_475_float, var_476_int);
		var_354_int = 1;

	Label_534:
		var_478_int = "attack_middle" + var_352_int;
		var_480_int = var_478_int + "_";
		var_355_string = var_480_int + var_354_int;
		HasAnimation(var_353_bool, "all", var_355_string);
		var_482_bool = var_353_bool == 0; //@nz
		if(var_482_bool != 0) {
		} else {
			func_1647();
			PlayAnimation("all", var_355_string);
			WaitForAnimEnd();
			func_796(var_355_string);
			var_498_bool = 0; var_499_object = Obj();
			var_499_object = var_0_cvector;
			func_1370(var_498_bool, var_499_object);
			var_500_bool = var_498_bool == 0; //@nz
			if(var_500_bool != 0) {
				StopAsync();
				var_346_bool = 0;
				var_501_float = 0; var_502_int = 0;
				var_347_float = var_501_float;
				var_352_int = var_502_int;
				func_418(var_355_string, var_501_float, var_502_int);
				var_354_int = var_354_int + (int)1;
				goto Label_534;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_486_int = "attack_end" + var_352_int;
	PlayAnimation("all", var_486_int);
	var_487_bool = 0;
	func_810(var_487_bool);
	if(var_487_bool != 0) {
		var_488_bool = 0; var_489_float = 0;
		func_594(var_488_bool, (float)0.75);
		StopAsync();
	}
	var_346_bool = 1;
	return 8;
	
}


func_1610(var_445_float, var_446_float, var_447_float, var_448_float)
{
	var_449_bool = var_446_float < var_447_float;
	if(var_449_bool != 0) {
		var_447_float = var_445_float;
		return 0;
	}
	var_450_bool = var_446_float > var_448_float;
	if(var_450_bool != 0) {
		var_448_float = var_445_float;
		return 0;
	}
	var_446_float = var_445_float;
	return 0;
}


func_1232(var_45_cvector, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	GetPosition(var_49_cvector);
	@@var_46_object:GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
	return 4;
}


func_594(var_488_bool, var_489_float)
{
	var_490_float = 0; var_491_bool = 0; var_492_float = 0; var_493_bool = 0;
	rand(var_492_float);
	var_494_bool = var_492_float < var_489_float;
	if(var_494_bool != 0) {

	Label_599:
		IsAnimationPlaying(var_493_bool);
		var_495_bool = var_493_bool == 0; //@nz
		if(var_495_bool != 0) {
		} else {
			var_496_bool = 0;
			func_692(var_496_bool);
			if(var_496_bool != 0) {
				var_488_bool = 1;
				sync();
				goto Label_599;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_796(var_493_bool);
	}
	goto Label_619;
	
Label_619:
	var_488_bool = 0;
	return 4;
	
}


func_1621(var_453_float)
{
	var_454_object = Obj(); var_455_object = Obj();
	CreateFloatVector(var_455_object);
	@@var_455_object:add(var_453_float);
	var_457_bool = var_453_float < (int)0;
	if(var_457_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_455_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1239(var_152_bool, var_153_object)
{
	var_154_bool = 0; var_155_bool = 0;
	IsPlayerActor(var_153_object, var_155_bool);
	var_155_bool = var_152_bool;
	return 2;
}


func_1370(var_24_bool, var_25_object)
{
	var_26_int = 0; var_27_int = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_25_object = var_29_object;
	func_1334(var_28_bool, var_29_object);
	var_45_bool = var_28_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_24_bool = 0;
		return 2;
	}
	var_46_bool = 0; var_47_object = Obj(); var_48_string = "";
	var_25_object = var_47_object;
	func_1244(var_46_bool, var_47_object, "noaccess");
	var_55_bool = var_46_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_24_bool = 1;
		return 2;
	}
	@@var_25_object:GetProperty("noaccess", var_27_int);
	var_24_bool = var_27_int == (int)0;
	return 2;
}


func_1244(var_46_bool, var_47_object, var_48_string)
{
	var_49_bool = 0; var_50_bool = 0;
	var_53_bool = IsFuncExist(var_47_object, "HasProperty", (int)2);
	var_54_bool = var_53_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_46_bool = 0;
		return 2;
	}
	@@var_47_object:HasProperty(var_48_string, var_50_bool);
	var_50_bool = var_46_bool;
	return 2;
}


func_1506(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetScene(var_24_object);
	AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	var_28_object = Obj();
	var_17_object = var_28_object;
	func_1394(var_28_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1638(var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1256(var_397_float, var_398_object, var_399_float, var_400_int)
{
	var_404_int = 0; var_405_string = ""; var_406_int = 0; var_407_float = 0; var_408_float = 0; var_409_float = 0; var_410_int = 0; var_411_string = ""; var_412_int = 0; var_413_float = 0; var_414_float = 0; var_415_float = 0;
	var_416_bool = 0; var_417_object = Obj(); var_418_string = "";
	var_398_object = var_417_object;
	func_1244(var_416_bool, var_417_object, "health");
	var_419_bool = var_416_bool == 0; //@nz
	if(var_419_bool != 0) {
		var_397_float = 0.0;
		return 12;
	}
	var_420_bool = 0; var_421_object = Obj(); var_422_string = "";
	var_398_object = var_421_object;
	func_1244(var_420_bool, var_421_object, "armor");
	var_423_bool = var_420_bool == 0; //@nz
	if(var_423_bool != 0) {
		var_410_int = 0;
	} else {
			@@var_398_object:GetProperty("armor", var_410_int);
	}
	var_425_string = ""; var_426_int = 0;
	var_400_int = var_426_int;
	func_1218(var_425_string, var_426_int);
	var_411_string = "armor_" + var_425_string;
	var_431_bool = 0; var_432_object = Obj(); var_433_string = "";
	var_398_object = var_432_object;
	var_411_string = var_433_string;
	func_1244(var_431_bool, var_432_object, var_433_string);
	var_434_bool = var_431_bool == 0; //@nz
	if(var_434_bool != 0) {
		var_412_int = 0;
	} else {
		@@var_398_object:GetProperty(var_411_string, var_412_int);

	}
	var_435_float = 0; var_436_float = 0; var_437_float = 0;
	var_438_int = var_410_int + var_412_int;
	var_436_float = var_438_int / (float)100.0;
	func_1603(var_435_float, var_436_float, (float)1);
	var_435_float = var_413_float;
	@@var_398_object:GetProperty("health", var_414_float);
	var_443_int = (int)1 - var_413_float;
	var_415_float = var_399_float * var_443_int;
	var_445_float = 0; var_446_float = 0; var_447_float = 0; var_448_float = 0;
	var_446_float = var_414_float - var_415_float;
	func_1610(var_445_float, var_446_float, (float)0, (float)1);
	@@var_398_object:SetProperty("health", var_445_float);
	var_451_bool = 0; var_452_object = Obj();
	var_398_object = var_452_object;
	func_1239(var_451_bool, var_452_object);
	if(var_451_bool != 0) {
		var_453_float = 0;
		var_453_float = -var_415_float;
		func_1621(var_453_float);
	}
	var_415_float = var_397_float;
	return 12;
	
}


func_621(var_0_cvector, var_285_bool, var_286_float)
{
	var_287_bool = 0; var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_float = 0; var_292_bool = 0; var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0;
	
Label_622:
	IsAnimationPlaying(var_292_bool);
	var_297_bool = var_292_bool == 0; //@nz
	if(var_297_bool != 0) {
	} else {
		var_298_bool = 0;
		func_692(var_298_bool);
		if(var_298_bool != 0) {
			var_285_bool = 1;
			return 10;
		}
		var_341_bool = 0; var_342_object = Obj();
		var_342_object = var_0_cvector;
		func_1370(var_341_bool, var_342_object);
		var_343_bool = var_341_bool == 0; //@nz
		if(var_343_bool != 0) {
			var_285_bool = 0;
			return 10;
		}
		@@@var_0_cvector:GetPFPosition(var_293_cvector);
		GetPFPosition(var_294_cvector);
		var_295_cvector = var_293_cvector - var_294_cvector;
		var_296_float = var_295_cvector | var_295_cvector;
		var_344_float = var_286_float * var_286_float;
		var_345_bool = var_296_float < var_344_float;
		if(var_345_bool != 0) {
			var_346_bool = 0; var_347_float = 0;
			var_286_float = var_347_float;
			func_457(var_295_cvector, var_296_float, var_346_bool, var_347_float);
			var_285_bool = 1;
			sync();
			goto Label_622;
		}
		return 10;
	}
	func_796(var_296_float);
	var_285_bool = 0;
	return 10;
	
}


func_1647()
{
	var_358_object = Obj(); var_359_object = Obj();
	GetScene(var_359_object);
	var_361_object = Obj();
	func_1583(var_361_object);
	BroadcastMessage("battle", var_361_object, var_359_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1520(var_231_object)
{
	var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0);
	@@var_231_object:GetPosition(var_235_cvector);
	GetPosition(var_236_cvector);
	var_237_cvector = var_235_cvector - var_236_cvector;
	var_238_float = GetByIndex(var_237_cvector, 0);
	var_239_float = GetByIndex(var_237_cvector, 2);
	RotateAsync(var_238_float, var_239_float);
	return 6;
}


func_753(var_0_cvector, var_248_bool)
{
	var_249_bool = 0; var_250_bool = 0;
	var_253_bool = IsFuncExist(var_0_cvector, "IsAttacking", (int)1);
	if(var_253_bool != 0) {
		@@@var_0_cvector:IsAttacking(var_250_bool);
		var_250_bool = var_248_bool;
		return 2;
	}
	var_248_bool = 0;
	return 2;
}


func_879(var_2_object)
{
	KillTimer((int)1);
	var_13_object = var_2_object;
	if(var_13_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1045(var_11_object);
	return 0;
}


func_1394(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = "";
	var_43_bool = var_28_object == 0; //@ne
	if(var_43_bool != 0) {
		return 14;
	}
	IsDead(var_36_bool);
	var_44_bool = var_36_bool;
	if(var_44_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_37_int);
	var_46_bool = var_37_int < (int)0;
	if(var_46_bool != 0) {
		return 14;
	}
	@@var_28_object:GetPosition(var_38_cvector);
	GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_41_cvector = var_39_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_41_cvector, 0);
	var_48_float = GetByIndex(var_40_cvector, 0);
	var_49_float = var_47_float * var_48_float;
	var_50_float = GetByIndex(var_41_cvector, 2);
	var_51_float = GetByIndex(var_40_cvector, 2);
	var_52_float = var_50_float * var_51_float;
	var_53_int = var_49_float + var_52_float;
	var_55_bool = var_53_int >= (int)0;
	if(var_55_bool != 0) {
		var_42_string = "fhit";
	} else {
		var_42_string = "bhit";
	}
	var_58_int = var_42_string + "1";
	var_60_int = var_42_string + "2";
	FadeSecondaryAnimation("hit_react", var_58_int, var_60_int, (int)-10);
	return 14;
	
}


func_1658(var_21_int)
{
	var_22_int = 0; var_23_int = 0;
	GetVariable("branch", var_23_int);
	var_23_int = var_21_int;
	return 2;
}


func_1531(var_15_object)
{
	var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0);
	@@var_15_object:GetEyesHeight(var_18_float);
	var_19_cvector = CVector(0.0, 0.0, 0.0);
	var_20_float = GetByIndex(var_19_cvector, 1);
	var_18_float = var_20_float;
	SetByIndex(var_19_cvector, 1) = var_20_float;
	LookAsync(var_15_object, "head", var_19_cvector);
	return 4;
}


func_127()
{
	StopGroup0();
	Stop();
	return 0;
}


func_383(var_1_cvector, var_2_object, var_4_int)
{
	var_50_bool = 0; var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0);
	var_1_cvector = 0;
	
Label_385:
	var_59_int = var_1_cvector + (int)1;
	var_60_int = "attack_begin" + var_59_int;
	HasAnimation(var_53_bool, "all", var_60_int);
	var_61_bool = var_53_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
			var_1_cvector = var_1_cvector + (int)1;
			goto Label_385;
	}
	var_2_object = 0;
	
Label_399:
	var_64_int = var_2_object + (int)1;
	var_65_int = "attack" + var_64_int;
	IsExisting3DSound(var_54_bool, var_65_int);
	var_66_bool = var_54_bool == 0; //@nz
	if(var_66_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_399;

	}
	GetAnimationOffset(var_55_cvector, "all", "bjump");
	var_69_float = GetByIndex(var_55_cvector, 2);
	var_4_int = -var_69_float;
	return 6;
	
}


