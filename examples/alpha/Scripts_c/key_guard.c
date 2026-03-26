// @IMPORTS: Hold/0,StopGroup0/0,SensePlayerOnly/1,GetPFPosition/1,GetDirection/1,irand/2,Sleep/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,WaitForAnimEnd/1,Sleep/1,Stop/0,GetPosition/1,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,HasAnimation/3,IsExisting3DSound/2,IsPlayerActor/2,rand/1,Face/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,SetTimer/2,FollowPath/5,KillTimer/1,RequestClearPath/1,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,self/1,GetProperty/2,SignalDeath/1,StopAnimation/0,CreateInvItem/1,GetInvItemByName/2,AddItem/3,WorkWithCorpse/1,CanSee/2,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:idle|W:guard_scene|W:uni_key|A:SetItemID|W:key_scene_name|W:class|W:guard|A:RemoveStationaryActor
// @GLOBALS: 0:bool:
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars=cvector,cvector,bool params=0
// @EVENT_0: op=0x1e vars=object
// @EVENT_17: op=0x32 vars=object
// @EVENT_30: op=0x46 vars=object,object
// @EVENT_40: op=0x60 vars=object
// @EVENT_42: op=0x74 vars=object,string
// @EVENT_6: op=0x8a vars=
// @EVENT_41: op=0x9b vars=object
// @TASK_2: vars= params=1
// @EVENT_0: op=0x10c vars=object
// @EVENT_6: op=0x11a vars=
// @EVENT_22: op=0x18b vars=object,int,float,float
// @EVENT_16: op=0x18d vars=object,string
// @EVENT_41: op=0x18f vars=object
// @TASK_3: vars=object,int,int,bool,int params=1
// @TASK_4: vars=bool,object params=6
// @EVENT_6: op=0x38a vars=
// @EVENT_7: op=0x3f7 vars=int
// @EVENT_10: op=0x409 vars=object
// @EVENT_41: op=0x414 vars=object
// @STANDALONE_EVENT_16: op=0x53c vars=object,string
// @STANDALONE_EVENT_41: op=0x549 vars=object
// @STANDALONE_EVENT_22: op=0x54f vars=object,int,float,float
// @PE: 0x9b,0xfd,0x175,0x18b,0x18d,0x18f,0x191,0x199,0x19c,0x384,0x3f7,0x409,0x414,0x41d,0x428,0x522,0x529,0x534,0x549,0x54f,0x586,0x590,0x598,0x59f,0x5ab,0x5ae,0x5b4,0x5b7,0x5b9,0x5bc,0x5d4

task_0_event_5(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	StopGroup0();
	return 0;
}


task_1_event_0(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1451(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_12_int > (int)1;
		if(var_18_bool != 0) {
			func_145();
		}
		var_20_object = Obj();
		var_10_object = var_20_object;
		func_1454(var_20_object);
	}
	return 2;
}


task_1_event_17(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1414(var_13_int, var_14_object);
	var_13_int = var_12_int;
	var_50_bool = var_12_int > (int)0;
	if(var_50_bool != 0) {
		var_52_bool = var_12_int > (int)1;
		if(var_52_bool != 0) {
			func_145();
		}
		var_54_object = Obj();
		var_10_object = var_54_object;
		func_1424(var_54_object);
	}
	return 2;
}


task_1_event_30(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_10_bool = var_15_object;
	var_11_object = var_16_object;
	func_1499(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_46_int = 0; var_47_object = Obj();
		var_10_bool = var_47_object;
		func_1432(var_46_int, var_47_object);
		var_46_int = var_13_int;
		var_79_bool = var_13_int > (int)0;
		if(var_79_bool != 0) {
			var_81_bool = var_13_int > (int)1;
			if(var_81_bool != 0) {
				func_145();
			}
			var_83_object = Obj();
			var_10_bool = var_83_object;
			func_1439(var_83_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1460(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_12_int > (int)1;
		if(var_18_bool != 0) {
			func_145();
		}
		var_10_object = Obj();
		func_1463();
	}
	return 2;
}


task_1_event_42(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_string = ""; var_16_object = Obj();
	var_11_object = var_15_string;
	var_10_bool = var_16_object;
	func_1465(var_16_object);
	var_14_int = var_13_int;
	var_18_bool = var_13_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_13_int > (int)1;
		if(var_20_bool != 0) {
			func_145();
		}
		var_22_string = ""; var_23_object = Obj();
		var_11_object = var_22_string;
		var_10_bool = var_23_object;
		func_1468();
	}
	return 2;
}


task_1_event_6(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_145();
	func_1445();
	return 0;
}


task_1_event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_145();
	var_10_object = Obj();
	func_1353();
	return 0;
}


task_2_event_0(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1451(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_17_object = Obj();
		var_10_object = var_17_object;
		func_1454(var_17_object);
	}
	return 2;
}


task_2_event_6(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_1445();
	return 0;
}


task_2_event_22(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_float, var_6_float, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	return 0;
}


task_2_event_16(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	return 0;
}


task_2_event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	return 0;
}


task_4_event_6(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_1037(var_9_object);
	func_1445();
	return 0;
}


task_4_event_7(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int != (int)0;
	if(var_12_bool != 0) {
		return 0;
	}
	var_13_bool = 0; var_14_object = Obj();
	var_14_object = var_1_cvector;
	func_1053(var_13_bool, var_14_object);
	var_49_bool = var_13_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_0_cvector = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_4_event_10(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	RequestClearPath(var_10_object);
	return 0;
}


task_4_event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	func_1037(var_10_object);
	var_10_object = Obj();
	func_1353();
	return 0;
}


event_16(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0;
	var_15_bool = var_11_string == "health";
	if(var_15_bool != 0) {
		GetProperty("health", var_13_float);
		var_18_bool = var_13_float <= (int)0;
		if(var_18_bool != 0) {
			SignalDeath(var_10_object);
		}
	}
	return 2;
}


event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_1332(var_11_object);
	return 0;
}


event_22(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1221(var_15_int, var_16_float);
	return 0;
}


main(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	var_2_bool = false;
	SensePlayerOnly((bool)1);
	func_1470();
	func_21();
	
Label_16:
	func_170(var_8_bool, var_9_object);
	goto Label_16;
}
EMIT "Return(); Pop(0)";


func_1536()
{
	var_64_object = Obj(); var_65_object = Obj();
	var_66_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	GetScene(var_65_object);
	var_69_object = Obj();
	func_1304(var_69_object);
	@@var_65_object:RemoveStationaryActor(var_69_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_0()
{
	Hold();
	return 0;
}


func_898(var_365_int)
{
	var_365_int = 0;
	return 0;
}


func_900()
{
	return 0;
}


func_1156(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0;
	@@var_31_object:IsDead(var_33_bool);
	var_33_bool = var_30_bool;
	return 2;
}


func_1414(var_48_int, var_49_object)
{
	var_50_bool = 0; var_51_object = Obj();
	var_49_object = var_51_object;
	func_1197(var_50_bool, var_51_object);
	if(var_50_bool != 0) {
		var_48_int = 2;
	} else {
		var_48_int = 0;
	}
	return 0;
	
}


func_902(var_294_int)
{
	var_294_int = 1;
	return 0;
}


func_1288(var_204_object)
{
	var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0);
	@@var_204_object:GetPosition(var_208_cvector);
	GetPosition(var_209_cvector);
	var_210_cvector = var_208_cvector - var_209_cvector;
	var_211_float = GetByIndex(var_210_cvector, 0);
	var_212_float = GetByIndex(var_210_cvector, 2);
	RotateAsync(var_211_float, var_212_float);
	return 6;
}


func_904(var_289_float)
{
	var_289_float = 0.5;
	return 0;
}


func_1161(var_19_bool, var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	var_25_bool = var_20_object == 0; //@ne
	if(var_25_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	var_26_bool = 0;
	var_26_bool = 0;
	var_29_bool = IsFuncExist(var_20_object, "IsDead", (int)1);
	if(var_29_bool != 0) {
		var_30_bool = 0; var_31_object = Obj();
		var_20_object = var_31_object;
		func_1156(var_30_bool, var_31_object);
		if(var_30_bool != 0) {
			var_26_bool = 1;
		}
	}
	if(var_26_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	GetScene(var_23_object);
	var_34_bool = var_23_object == 0; //@ne
	if(var_34_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	@@var_20_object:GetScene(var_24_object);
	var_35_bool = var_23_object != var_24_object;
	if(var_35_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	var_19_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1037(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1424(var_84_object)
{
	var_85_object = Obj();
	var_84_object = var_85_object;
	TaskCall(3);
	func_401(var_85_object);
	TaskReturn();
	return 0;
}


func_145()
{
	var_11_bool = var_2_bool;
	if(var_11_bool != 0) {
		func_1391();
	} else {
		func_248();
	}
	return 0;
	
}


func_913(var_0_cvector, var_1_cvector, var_142_bool, var_143_object, var_144_float, var_145_float, var_146_bool, var_147_bool)
{
	var_150_bool = 0; var_151_bool = 0; var_152_object = Obj(); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_cvector = CVector(0,0,0); var_156_float = 0; var_157_object = Obj(); var_158_bool = 0; var_159_bool = 0; var_160_object = Obj(); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_float = 0; var_165_object = Obj();
	var_0_cvector = false;
	var_1_cvector = var_143_object;
	var_147_bool = var_159_bool;
	
Label_917:
	var_166_bool = 0; var_167_object = Obj();
	var_143_object = var_167_object;
	func_1053(var_166_bool, var_167_object);
	var_170_bool = var_166_bool == 0; //@nz
	if(var_170_bool != 0) {
		var_142_bool = 0;
		return 16;
	}
	@@var_143_object:GetPosition(var_161_cvector);
	GetPosition(var_162_cvector);
	var_163_cvector = var_161_cvector - var_162_cvector;
	var_164_float = var_163_cvector | var_163_cvector;
	var_171_bool = 0;
	var_171_bool = 0;
	var_173_bool = var_145_float > (int)0;
	if(var_173_bool != 0) {
		var_174_float = var_145_float * var_145_float;
		var_175_bool = var_164_float > var_174_float;
		if(var_175_bool != 0) {
			var_171_bool = 1;
		}
	}
	if(var_171_bool != 0) {
		Stop();
		var_142_bool = 0;
		return 16;
	}
	var_176_float = var_144_float * var_144_float;
	var_177_bool = var_164_float > var_176_float;
	if(var_177_bool != 0) {
		@@var_143_object:GetPFPosition(var_161_cvector);
		FindPathTo(var_165_object, var_161_cvector);
		var_178_bool = var_165_object != 0; //@nn
		if(var_178_bool != 0) {
			var_165_object = var_160_object;
			var_165_object = 0;
		}
		var_179_bool = var_160_object != 0; //@nn
		if(var_179_bool != 0) {
			var_180_bool = var_159_bool;
			if(var_180_bool == 0) goto Label_966;
			var_159_bool = 0;
			RotatePath(var_160_object, var_158_bool);
			var_181_bool = var_158_bool == 0; //@nz
			if(var_181_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_184_string = "";
				func_1060(var_184_string);
				var_185_string = "";
				func_1062(var_185_string);
				FollowPath(var_160_object, var_146_bool, var_158_bool, var_184_string, var_185_string);
				var_186_bool = var_158_bool == 0; //@nz
				if(var_186_bool != 0) {
					var_187_cvector = var_0_cvector;
					if(var_187_cvector != 0) {
						var_160_object = 0;
						goto Label_1013;
					EMIT "GOTO 0x3da";
					}
				} else {
					var_160_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_158_bool);
					var_190_bool = var_158_bool == 0; //@nz
					if(var_190_bool != 0) {
						var_191_cvector = var_0_cvector;
						if(var_191_cvector != 0) {
							var_160_object = 0;
							goto Label_1013;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1013;
	}
			var_165_object = 0;
			goto Label_1011;

		Label_1011:
			var_160_object = 0;

		}
		goto Label_917;
	}
Label_1013:
	var_142_bool = !var_0_cvector;
	return 16;
	
}


func_1299(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0;
	IsLoaded(var_26_bool);
	var_26_bool = var_24_bool;
	return 2;
}


func_659(var_0_cvector, var_1_cvector, var_269_bool, var_270_float)
{
	var_271_int = 0; var_272_bool = 0; var_273_int = 0; var_274_bool = 0;
	irand(var_273_int, var_1_cvector);
	var_273_int = var_273_int + (int)1;
	Face(var_0_cvector);
	SetAttackState((bool)1);
	var_279_int = "attack_begin" + var_273_int;
	PlayAnimation("all", var_279_int);
	WaitForAnimEnd();
	func_866(var_273_int, var_274_bool);
	var_295_bool = 0; var_296_object = Obj();
	var_296_object = var_0_cvector;
	func_1197(var_295_bool, var_296_object);
	var_297_bool = var_295_bool == 0; //@nz
	if(var_297_bool != 0) {
		StopAsync();
		var_269_bool = 0;
		return 4;
	}
	var_298_float = 0; var_299_int = 0;
	var_270_float = var_298_float;
	var_273_int = var_299_int;
	func_620(var_274_bool, var_298_float, var_299_int);
	var_370_int = "attack_middle" + var_273_int;
	HasAnimation(var_274_bool, "all", var_370_int);
	var_371_bool = var_274_bool;
	if(var_371_bool != 0) {
		var_374_int = "attack_middle" + var_273_int;
		PlayAnimation("all", var_374_int);
		WaitForAnimEnd();
		var_375_bool = 0; var_376_object = Obj();
		var_376_object = var_0_cvector;
		func_1197(var_375_bool, var_376_object);
		var_377_bool = var_375_bool == 0; //@nz
		if(var_377_bool != 0) {
			StopAsync();
			var_269_bool = 0;
			return 4;
		}
		var_378_float = 0; var_379_int = 0;
		var_270_float = var_378_float;
		var_273_int = var_379_int;
		func_620(var_274_bool, var_378_float, var_379_int);
	}
	SetAttackState((bool)0);
	var_383_int = "attack_end" + var_273_int;
	PlayAnimation("all", var_383_int);
	var_384_bool = 0; var_385_float = 0;
	func_739(var_384_bool, (float)0.75);
	StopAsync();
	var_269_bool = 1;
	return 4;
}


func_21()
{
	var_24_bool = 0;
	func_1299(var_24_bool);
	var_27_bool = var_24_bool == 0; //@nz
	if(var_27_bool != 0) {
		func_1445();
	}
	return 0;
}


func_401(var_85_object)
{
	var_91_object = Obj(); var_92_bool = 0; var_93_float = 0;
	var_85_object = var_91_object;
	func_415(var_86_object, var_87_int, var_88_int, var_89_bool, var_90_int, var_85_object, var_91_object, (bool)1, (float)180.0);
	return 0;
}


func_1432(var_46_int, var_47_object)
{
	var_48_int = 0; var_49_object = Obj();
	var_47_object = var_49_object;
	func_1414(var_48_int, var_49_object);
	var_48_int = var_46_int;
	return 0;
}


func_409(var_309_float)
{
	var_309_float = 0.07000000029802322;
	return 0;
}


func_1304(var_69_object)
{
	var_70_object = Obj(); var_71_object = Obj();
	self(var_71_object);
	var_71_object = var_69_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_412(var_316_int)
{
	var_316_int = 0;
	return 0;
}


func_1053(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_1197(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
	return 0;
}


func_1310(var_61_float, var_62_cvector, var_63_cvector)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_63_cvector - var_62_cvector;
	var_61_float = var_65_cvector | var_65_cvector;
	return 2;
}


func_1439(var_83_object)
{
	var_84_object = Obj();
	var_83_object = var_84_object;
	func_1424(var_84_object);
	return 0;
}


func_286(var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0);
	var_34_bool = var_13_object == 0; //@ne
	if(var_34_bool != 0) {
		var_35_string = "";
		func_373("fdie");
	} else {
		@@var_13_object:GetPosition(var_24_cvector);
		GetPosition(var_25_cvector);
		GetDirection(var_26_cvector);
		var_27_cvector = var_25_cvector - var_24_cvector;
		var_38_float = GetByIndex(var_27_cvector, 0);
		var_39_float = GetByIndex(var_26_cvector, 0);
		var_40_float = var_38_float * var_39_float;
		var_41_float = GetByIndex(var_27_cvector, 2);
		var_42_float = GetByIndex(var_26_cvector, 2);
		var_43_float = var_41_float * var_42_float;
		var_44_int = var_40_float + var_43_float;
		var_46_bool = var_44_int >= (int)0;
		if(var_46_bool != 0) {
			var_28_string = "fdie";
		} else {
				var_28_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_13_object = var_29_object;
		var_49_bool = IsFuncExist(var_13_object, "GetScriptProperty", (int)2);
		if(var_49_bool != 0) {
			@@var_13_object:HasScriptProperty(var_30_bool, "Owner");
			var_51_bool = var_30_bool;
			if(var_51_bool != 0) {
				@@var_13_object:GetScriptProperty(var_29_object, "Owner");
				var_53_bool = var_29_object == 0; //@ne
				if(var_53_bool != 0) {
					var_13_object = var_29_object;
				}
			}
		}
		var_56_bool = IsFuncExist(var_29_object, "@GetEyesHeight", (int)1);
		if(var_56_bool != 0) {
			@@var_29_object:GetEyesHeight(var_32_float);
			var_33_cvector = CVector(0.0, 0.0, 0.0);
			var_57_float = GetByIndex(var_33_cvector, 1);
			var_32_float = var_57_float;
			SetByIndex(var_33_cvector, 1) = var_57_float;
			LookAsync(var_13_object, "head", var_33_cvector);
			var_31_bool = 1;
		} else {
			var_31_bool = 0;

		}
		PlayAnimation("all", var_28_string);
		WaitForAnimEnd();
		var_60_bool = var_31_bool;
		if(var_60_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_28_string);
		RemoveEnvelope();
		var_29_object = 0;
	}
	return 20;
	
}


func_415(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_91_object, var_92_bool, var_93_float, var_148_bool)
{
	var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_bool = 0; var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_bool = 0; var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_bool = 0; var_111_cvector = CVector(0,0,0); var_112_float = 0; var_113_float = 0;
	var_1_cvector = 0;
	
Label_417:
	var_117_int = var_1_cvector + (int)1;
	var_118_int = "attack_begin" + var_117_int;
	HasAnimation(var_104_bool, "all", var_118_int);
	var_119_bool = var_104_bool == 0; //@nz
	if(var_119_bool != 0) {
	} else {
									var_1_cvector = var_1_cvector + (int)1;
									goto Label_417;
	}
	var_2_bool = 0;
	
Label_431:
	var_122_int = var_2_bool + (int)1;
	var_123_int = "attack" + var_122_int;
	IsExisting3DSound(var_105_bool, var_123_int);
	var_124_bool = var_105_bool == 0; //@nz
	if(var_124_bool != 0) {
	} else {
								var_2_bool = var_2_bool + (int)1;
								goto Label_431;

	}
	var_4_object = 0;
	var_127_bool = IsFuncExist(var_91_object, "@GetAttackDistance", (int)1);
	if(var_127_bool != 0) {
		@@var_91_object:GetAttackDistance(var_106_float);
		var_106_float = var_106_float + (int)50;
	} else {
							var_93_float = var_106_float;

	}
	var_130_bool = var_106_float >= (int)150;
	if(var_130_bool != 0) {
		var_106_float = 150;
	}
	var_3_object = false;
	var_0_cvector = var_91_object;
	IsPlayerActor(var_0_cvector, var_109_bool);
	var_131_bool = var_92_bool;
	if(var_131_bool != 0) {
		var_110_bool = 0;
	} else {
						var_110_bool = 1;

	}
Label_467:
	var_132_bool = 0;
	var_132_bool = 0;
	var_133_bool = 0; var_134_object = Obj();
	var_134_object = var_0_cvector;
	func_1197(var_133_bool, var_134_object);
	if(var_133_bool != 0) {
		var_135_bool = var_3_object == 0; //@nz
		if(var_135_bool != 0) {
			var_132_bool = 1;
		}
	}
	if(var_132_bool != 0) {
		@@@var_0_cvector:GetPFPosition(var_107_cvector);
		GetPFPosition(var_108_cvector);
		var_111_cvector = var_107_cvector - var_108_cvector;
		var_112_float = var_111_cvector | var_111_cvector;
		var_137_int = (float)400.0 + var_106_float;
		var_139_int = (float)400.0 + var_106_float;
		var_140_float = var_137_int * var_139_int;
		var_141_bool = var_112_float >= var_140_float;
		if(var_141_bool != 0) {
			var_142_bool = 0; var_143_object = Obj(); var_144_float = 0; var_145_float = 0; var_146_bool = 0; var_147_bool = 0;
			var_143_object = var_0_cvector;
			var_106_float = var_144_float;
			TaskCall(4);
			func_913(var_148_bool, var_149_object, var_142_bool, var_143_object, var_144_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_195_bool = var_148_bool == 0; //@nz
			if(var_195_bool != 0) {
			} else {
		} else {
				var_201_float = var_93_float * var_93_float;
				var_202_bool = var_112_float >= var_201_float;
				if(var_202_bool != 0) {
					var_203_bool = (bool)0 == 0; //@nz
					if(var_203_bool != 0) {
						var_204_object = Obj();
						var_204_object = var_0_cvector;
						func_1288(var_204_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_110_bool = 1;
					}
					rand(var_113_float);
					var_215_bool = 0;
					var_217_bool = var_113_float < (float)0.6000000238418579;
					if(var_217_bool != 1) {
						var_218_bool = 0;
						func_855((bool)1, var_218_bool);
						if(var_218_bool != 1) {
							var_215_bool = 0;
						}
					}
					if(var_215_bool != 0) {
						Face(var_0_cvector);
						PlayAnimation("all", "attack_stay");
						var_226_bool = 0; var_227_float = 0;
						var_93_float = var_227_float;
						func_763(var_113_float, var_226_bool, var_227_float);
						StopAsync();
					} else {
						Face(var_0_cvector);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_396_bool = 0;
						func_855(var_113_float, var_396_bool);
						var_397_bool = var_396_bool == 0; //@nz
						if(var_397_bool == 0) goto Label_593;
						var_398_bool = 0; var_399_object = Obj();
						var_399_object = var_0_cvector;
						func_1197(var_398_bool, var_399_object);
						var_400_bool = var_398_bool == 0; //@nz
						if(var_400_bool != 0) {
							goto Label_603;
						}
						@@@var_0_cvector:GetPFPosition(var_107_cvector);
						GetPFPosition(var_108_cvector);
						var_111_cvector = var_107_cvector - var_108_cvector;
						var_112_float = var_111_cvector | var_111_cvector;
						var_401_float = var_93_float * var_93_float;
						var_402_bool = var_112_float < var_401_float;
						if(var_402_bool == 0) goto Label_593;
						var_403_bool = 0; var_404_float = 0;
						var_93_float = var_404_float;
						func_659(var_112_float, var_113_float, var_403_bool, var_404_float);
						var_405_bool = var_403_bool == 0; //@nz
						if(var_405_bool == 0) goto Label_593;
						goto Label_603;
				}
					var_406_bool = 0; var_407_float = 0;
					var_93_float = var_407_float;
					func_659(var_112_float, var_113_float, var_406_bool, var_407_float);
					var_408_bool = var_406_bool == 0; //@nz
					if(var_408_bool != 0) {
						goto Label_603;
					}
					var_110_bool = 1;

				}
			Label_593:
				goto Label_602;
		}
		Label_602:
			goto Label_467;

		}
	}
Label_603:
	WaitForAnimEnd();
	var_196_object = var_3_object;
	if(var_196_object != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_199_bool = var_109_bool;
	if(var_199_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_1314(var_348_float, var_349_float, var_350_float)
{
	var_353_bool = var_349_float < var_350_float;
	if(var_353_bool != 0) {
		var_349_float = var_348_float;
	} else {
		var_350_float = var_348_float;
	}
	return 0;
	
}


func_803(var_0_cvector, var_239_bool)
{
	var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_float = 0; var_244_float = 0; var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_float = 0; var_249_float = 0;
	var_250_bool = 0; var_251_object = Obj();
	var_251_object = var_0_cvector;
	func_1197(var_250_bool, var_251_object);
	var_252_bool = var_250_bool == 0; //@nz
	if(var_252_bool != 0) {
		var_239_bool = 0;
		return 10;
	}
	var_253_bool = 0;
	func_855(var_249_float, var_253_bool);
	if(var_253_bool != 0) {
		@@@var_0_cvector:GetPFPosition(var_245_cvector);
		GetPFPosition(var_246_cvector);
		var_247_cvector = var_245_cvector - var_246_cvector;
		var_248_float = var_247_cvector | var_247_cvector;
		@@@var_0_cvector:GetAttackDistance(var_249_float);
		var_249_float = var_249_float + (int)50;
		var_255_float = var_249_float * var_249_float;
		var_256_bool = var_248_float <= var_255_float;
		if(var_256_bool != 0) {
			func_836(var_249_float);
			var_239_bool = 1;
			return 10;
		}
	}
	var_239_bool = 0;
	return 10;
}


func_164(var_2_bool)
{
	var_2_bool = true;
	func_1394();
	var_2_bool = false;
	return 0;
}


func_1445()
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


func_1060(var_184_string)
{
	var_184_string = "walk";
	return 0;
}


func_1062(var_185_string)
{
	var_185_string = "run";
	return 0;
}


func_1064(var_340_string, var_341_int)
{
	var_343_bool = var_341_int == (int)1;
	if(var_343_bool != 0) {
		var_340_string = "fire";
		return 0;
	}
	var_340_string = "phys";
	return 0;
}


func_1321(var_358_float, var_359_float, var_360_float, var_361_float)
{
	var_362_bool = var_359_float < var_360_float;
	if(var_362_bool != 0) {
		var_360_float = var_358_float;
		return 0;
	}
	var_363_bool = var_359_float > var_361_float;
	if(var_363_bool != 0) {
		var_361_float = var_358_float;
		return 0;
	}
	var_359_float = var_358_float;
	return 0;
}


func_170(var_0_cvector, var_1_cvector)
{
	var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_object = Obj();
	GetPFPosition(var_1_cvector);
	GetDirection(var_0_cvector);
	
Label_175:
	irand(var_32_int, (int)60);
	var_38_int = var_32_int + (int)30;
	Sleep(var_38_int, var_33_bool);
	var_39_bool = var_33_bool;
	if(var_39_bool != 0) {
		func_164(var_35_object);
	} else {
		GetPFPosition(var_34_cvector);
		var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
		var_62_cvector = var_1_cvector;
		var_34_cvector = var_63_cvector;
		func_1310(var_61_float, var_62_cvector, var_63_cvector);
		var_67_bool = var_61_float > (int)40000;
		if(var_67_bool != 0) {
			FindPathTo(var_35_object, var_1_cvector);
			var_68_bool = var_35_object != 0; //@nn
			if(var_68_bool != 0) {
				RotatePath(var_35_object, var_33_bool);
				var_69_bool = var_33_bool == 0; //@nz
				if(var_69_bool != 0) {
				} else {
					FollowPath(var_35_object, (bool)0, var_33_bool);
					var_71_bool = var_33_bool == 0; //@nz
					if(var_71_bool != 0) {
						goto Label_245;
					}
					var_72_float = GetByIndex(var_0_cvector, 0);
					var_73_float = GetByIndex(var_0_cvector, 2);
					Rotate(var_72_float, var_73_float, var_33_bool);
					var_74_bool = var_33_bool == 0; //@nz
					if(var_74_bool != 0) {
						goto Label_245;
					}
					WaitForAnimEnd(var_33_bool);
					var_75_bool = var_33_bool == 0; //@nz
					if(var_75_bool != 0) {
						goto Label_245;
					}
					goto Label_246;
				EMIT "GOTO 0xe6";
			}
				Sleep((int)1);
				var_35_object = 0;
				goto Label_245;
		}
			var_77_float = GetByIndex(var_0_cvector, 0);
			var_78_float = GetByIndex(var_0_cvector, 2);
			Rotate(var_77_float, var_78_float, var_33_bool);
			var_79_bool = var_33_bool == 0; //@nz
			if(var_79_bool != 0) {
				goto Label_245;
			}
			WaitForAnimEnd(var_33_bool);
			var_80_bool = var_33_bool == 0; //@nz
			if(var_80_bool != 0) {
				goto Label_245;
			}
			goto Label_246;
		}
	Label_245:
		goto Label_188;
	}
Label_246:
	goto Label_175;
	
}
EMIT "Return(); Pop(8)";


func_1451(var_13_int)
{
	var_13_int = 2;
	return 0;
}


func_1197(var_15_bool, var_16_object)
{
	var_17_int = 0; var_18_int = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_16_object = var_20_object;
	func_1161(var_19_bool, var_20_object);
	var_36_bool = var_19_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj(); var_39_string = "";
	var_16_object = var_38_object;
	func_1080(var_37_bool, var_38_object, "noaccess");
	var_46_bool = var_37_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_15_bool = 1;
		return 2;
	}
	@@var_16_object:GetProperty("noaccess", var_18_int);
	var_15_bool = var_18_int == (int)0;
	return 2;
}


func_1454(var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_1492(var_18_object);
	return 0;
}


func_1072(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_1460(var_13_int)
{
	var_13_int = 0;
	return 0;
}


func_1332(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	TaskCall(2);
	func_253(var_12_object);
	TaskReturn();
	return 0;
}


func_1463()
{
	return 0;
}


func_1080(var_37_bool, var_38_object, var_39_string)
{
	var_40_bool = 0; var_41_bool = 0;
	var_44_bool = IsFuncExist(var_38_object, "HasProperty", (int)2);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_37_bool = 0;
		return 2;
	}
	@@var_38_object:HasProperty(var_39_string, var_41_bool);
	var_41_bool = var_37_bool;
	return 2;
}


func_1465(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_1468()
{
	return 0;
}


func_1470()
{
	var_11_string = ""; var_12_object = Obj(); var_13_int = 0; var_14_bool = 0; var_15_string = ""; var_16_object = Obj(); var_17_int = 0; var_18_bool = 0;
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	GetProperty("guard_scene", var_15_string);
	CreateInvItem(var_16_object);
	GetInvItemByName(var_17_int, "uni_key");
	@@var_16_object:SetItemID(var_17_int);
	@@var_16_object:SetProperty("key_scene_name", var_15_string);
	AddItem(var_18_bool, var_16_object, (int)0);
	return 8;
}
EMIT "Stack[-3] = 0";


func_1092(var_312_float, var_313_object, var_314_float, var_315_int)
{
	var_319_int = 0; var_320_string = ""; var_321_int = 0; var_322_float = 0; var_323_float = 0; var_324_float = 0; var_325_int = 0; var_326_string = ""; var_327_int = 0; var_328_float = 0; var_329_float = 0; var_330_float = 0;
	var_331_bool = 0; var_332_object = Obj(); var_333_string = "";
	var_313_object = var_332_object;
	func_1080(var_331_bool, var_332_object, "health");
	var_334_bool = var_331_bool == 0; //@nz
	if(var_334_bool != 0) {
		var_312_float = 0.0;
		return 12;
	}
	var_335_bool = 0; var_336_object = Obj(); var_337_string = "";
	var_313_object = var_336_object;
	func_1080(var_335_bool, var_336_object, "armor");
	var_338_bool = var_335_bool == 0; //@nz
	if(var_338_bool != 0) {
		var_325_int = 0;
	} else {
			@@var_313_object:GetProperty("armor", var_325_int);
	}
	var_340_string = ""; var_341_int = 0;
	var_315_int = var_341_int;
	func_1064(var_340_string, var_341_int);
	var_326_string = "armor_" + var_340_string;
	var_344_bool = 0; var_345_object = Obj(); var_346_string = "";
	var_313_object = var_345_object;
	var_326_string = var_346_string;
	func_1080(var_344_bool, var_345_object, var_346_string);
	var_347_bool = var_344_bool == 0; //@nz
	if(var_347_bool != 0) {
		var_327_int = 0;
	} else {
		@@var_313_object:GetProperty(var_326_string, var_327_int);

	}
	var_348_float = 0; var_349_float = 0; var_350_float = 0;
	var_351_int = var_325_int + var_327_int;
	var_349_float = var_351_int / (float)100.0;
	func_1314(var_348_float, var_349_float, (float)1);
	var_348_float = var_328_float;
	@@var_313_object:GetProperty("health", var_329_float);
	var_356_int = (int)1 - var_328_float;
	var_330_float = var_314_float * var_356_int;
	var_358_float = 0; var_359_float = 0; var_360_float = 0; var_361_float = 0;
	var_359_float = var_329_float - var_330_float;
	func_1321(var_358_float, var_359_float, (float)0, (float)1);
	@@var_313_object:SetProperty("health", var_358_float);
	var_330_float = var_312_float;
	return 12;
	
}


func_836(var_0_cvector)
{
	var_257_cvector = CVector(0,0,0); var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0);
	Face(var_0_cvector);
	PlayAnimation("all", "bjump");
	@@@var_0_cvector:GetPFPosition(var_259_cvector);
	GetPFPosition(var_260_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1221(var_14_object, var_15_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = "";
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_15_int != (int)4;
	if(var_39_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		GetScene(var_27_object);
		GetPosition(var_29_cvector);
		GetEyesHeight(var_30_float);
		var_42_float = GetByIndex(var_29_cvector, 1);
		var_44_float = var_30_float / (int)2;
		var_42_float = var_42_float + var_44_float;
		SetByIndex(var_29_cvector, 1) = var_42_float;
		AddActorByType(var_28_object, "scripted", var_27_object, var_29_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_28_object = 0;
		var_27_object = 0;
	}
	var_48_bool = var_14_object == 0; //@ne
	if(var_48_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_31_int);
	var_50_bool = var_31_int < (int)0;
	if(var_50_bool != 0) {
		return 20;
	}
	@@var_14_object:GetPosition(var_32_cvector);
	GetPosition(var_33_cvector);
	GetDirection(var_34_cvector);
	var_35_cvector = var_33_cvector - var_32_cvector;
	var_51_float = GetByIndex(var_35_cvector, 0);
	var_52_float = GetByIndex(var_34_cvector, 0);
	var_53_float = var_51_float * var_52_float;
	var_54_float = GetByIndex(var_35_cvector, 2);
	var_55_float = GetByIndex(var_34_cvector, 2);
	var_56_float = var_54_float * var_55_float;
	var_57_int = var_53_float + var_56_float;
	var_59_bool = var_57_int >= (int)0;
	if(var_59_bool != 0) {
		var_36_string = "fhit";
	} else {
		var_36_string = "bhit";
	}
	var_62_int = var_36_string + "1";
	var_64_int = var_36_string + "2";
	FadeSecondaryAnimation("hit_react", var_62_int, var_64_int, (int)-10);
	return 20;
	
}


func_1492(var_18_object)
{
	var_19_bool = GlobalVars[0];
	if(var_19_bool != 0) {
		WorkWithCorpse(var_18_object);
		return 0;
	}
	return 0;
}


func_855(var_0_cvector, var_218_bool)
{
	var_219_bool = 0; var_220_bool = 0;
	var_223_bool = IsFuncExist(var_0_cvector, "IsAttacking", (int)1);
	if(var_223_bool != 0) {
		@@@var_0_cvector:IsAttacking(var_220_bool);
		var_220_bool = var_218_bool;
		return 2;
	}
	var_218_bool = 0;
	return 2;
}


func_1367(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = "";
	var_54_int = var_51_int;
	if(var_54_int != 0) {
		"idle" = "idle" + var_51_int;
	}
	var_53_string = var_50_string;
	return 2;
}


func_1499(var_14_bool, var_15_object, var_16_object)
{
	var_17_string = ""; var_18_bool = 0; var_19_string = ""; var_20_bool = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_string = "";
	var_16_object = var_22_object;
	func_1080(var_21_bool, var_22_object, "class");
	var_30_bool = var_21_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	@@var_16_object:GetProperty("class", var_19_string);
	var_33_bool = var_19_string != "guard";
	if(var_33_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	CanSee(var_20_bool, var_15_object);
	var_34_bool = 0;
	var_34_bool = 1;
	var_35_bool = var_20_bool;
	if(var_35_bool != 1) {
		var_36_float = 0; var_37_object = Obj();
		var_15_object = var_37_object;
		func_1072(var_36_float, var_37_object);
		var_45_bool = var_36_float <= (float)1000000.0;
		if(var_45_bool != 1) {
			var_34_bool = 0;
		}
	}
	if(var_34_bool != 0) {
		var_14_bool = 1;
		return 4;
	}
	var_14_bool = 0;
	return 4;
}


func_1374(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0;
	var_47_int = 0;
	
Label_1376:
	var_50_string = ""; var_51_int = 0;
	var_47_int = var_51_int;
	func_1367(var_50_string, var_51_int);
	HasAnimation(var_48_bool, "all", var_50_string);
	var_55_bool = var_48_bool == 0; //@nz
	if(var_55_bool != 0) {
	} else {
		var_47_int = var_47_int + (int)1;
		goto Label_1376;
	}
	var_47_int = var_44_int;
	return 4;
	
}


func_866(var_2_bool, var_4_object)
{
	var_280_float = 0; var_281_int = 0; var_282_float = 0; var_283_int = 0;
	var_284_bool = var_2_bool == 0; //@nz
	if(var_284_bool != 0) {
		return 4;
	}
	var_285_object = var_4_object;
	if(var_285_object != 0) {
		var_4_object = var_4_object + (int)-1;
		var_288_bool = var_4_object > (int)0;
		if(var_288_bool != 0) {
			return 4;
		}
	}
	rand(var_282_float);
	var_289_float = 0;
	func_904(var_289_float);
	var_290_bool = var_282_float < var_289_float;
	if(var_290_bool != 0) {
		irand(var_283_int, var_2_bool);
		var_283_int = var_283_int + (int)1;
		var_293_int = "attack" + var_283_int;
		Speak(var_293_int);
		var_294_int = 0;
		func_902(var_294_int);
		var_4_object = var_294_int;
	}
	return 4;
}


func_739(var_384_bool, var_385_float)
{
	var_386_float = 0; var_387_bool = 0; var_388_float = 0; var_389_bool = 0;
	rand(var_388_float);
	var_390_bool = var_388_float < var_385_float;
	if(var_390_bool != 0) {

	Label_744:
		IsAnimationPlaying(var_389_bool);
		var_391_bool = var_389_bool == 0; //@nz
		if(var_391_bool != 0) {
		} else {
			var_392_bool = 0;
			func_803(var_389_bool, var_392_bool);
			if(var_392_bool != 0) {
				var_384_bool = 1;
				sync();
				goto Label_744;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_761;
	
Label_761:
	var_384_bool = 0;
	return 4;
	
}


func_620(var_0_cvector, var_298_float, var_299_int)
{
	var_300_object = Obj(); var_301_float = 0; var_302_float = 0; var_303_object = Obj(); var_304_float = 0; var_305_float = 0;
	var_307_float = var_298_float * (float)0.8999999761581421;
	GetVictim(var_307_float, var_303_object);
	ReportAttack(var_0_cvector);
	var_308_bool = var_303_object == var_0_cvector;
	if(var_308_bool != 0) {
		var_309_float = 0; var_310_object = Obj(); var_311_int = 0;
		var_303_object = var_310_object;
		var_299_int = var_311_int;
		func_409(var_311_int);
		var_309_float = var_304_float;
		var_312_float = 0; var_313_object = Obj(); var_314_float = 0; var_315_int = 0;
		var_303_object = var_313_object;
		var_304_float = var_314_float;
		var_316_int = 0; var_317_object = Obj(); var_318_int = 0;
		var_303_object = var_317_object;
		var_299_int = var_318_int;
		func_412(var_318_int);
		var_316_int = var_315_int;
		func_1092(var_312_float, var_313_object, var_314_float, var_315_int);
		var_312_float = var_305_float;
		var_365_int = 0;
		func_898(var_365_int);
		ReportHit(var_0_cvector, var_365_int, var_305_float, var_304_float);
		var_366_object = Obj(); var_367_float = 0;
		var_303_object = var_366_object;
		var_305_float = var_367_float;
		func_900();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1391()
{
	StopAnimation();
	return 0;
}


func_1394()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0;
	func_1374((int)0);
	var_44_int = var_42_int;
	var_57_bool = var_42_int == 0; //@nz
	if(var_57_bool != 0) {
		return 4;
	}
	irand(var_43_int, var_42_int);
	var_59_string = ""; var_60_int = 0;
	var_43_int = var_60_int;
	func_1367(var_59_string, var_60_int);
	PlayAnimation("all", var_59_string);
	WaitForAnimEnd();
	return 4;
}


func_373(var_35_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_35_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_35_string);
	RemoveEnvelope();
	return 0;
}


func_248()
{
	StopGroup0();
	Stop();
	return 0;
}


func_763(var_0_cvector, var_226_bool, var_227_float)
{
	var_228_bool = 0; var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_float = 0; var_233_bool = 0; var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_float = 0;
	
Label_764:
	IsAnimationPlaying(var_233_bool);
	var_238_bool = var_233_bool == 0; //@nz
	if(var_238_bool != 0) {
	} else {
		var_239_bool = 0;
		func_803(var_237_float, var_239_bool);
		if(var_239_bool != 0) {
			var_226_bool = 1;
			return 10;
		}
		var_264_bool = 0; var_265_object = Obj();
		var_265_object = var_0_cvector;
		func_1197(var_264_bool, var_265_object);
		var_266_bool = var_264_bool == 0; //@nz
		if(var_266_bool != 0) {
			var_226_bool = 0;
			return 10;
		}
		@@@var_0_cvector:GetPFPosition(var_234_cvector);
		GetPFPosition(var_235_cvector);
		var_236_cvector = var_234_cvector - var_235_cvector;
		var_237_float = var_236_cvector | var_236_cvector;
		var_267_float = var_227_float * var_227_float;
		var_268_bool = var_237_float < var_267_float;
		if(var_268_bool != 0) {
			var_269_bool = 0; var_270_float = 0;
			var_227_float = var_270_float;
			func_659(var_236_cvector, var_237_float, var_269_bool, var_270_float);
			var_226_bool = 1;
			sync();
			goto Label_764;
		}
		return 10;
	}
	var_226_bool = 0;
	return 10;
	
}


func_253(var_12_object)
{
	EventDisable(0);
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_286(var_13_object);
	var_12_object = Obj();
	func_1536();
	EventEnable(0);
	
Label_264:
	Hold();
	goto Label_264;
}
EMIT "Return(); Pop(0)";


