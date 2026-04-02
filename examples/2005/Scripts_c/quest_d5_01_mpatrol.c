// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		if(1 != 0) {
			func_1945();
			if(var_15_bool == 12905) {
				object var_20_object; object var_21_object;
				var_20_object = var_1_object;
				var_21_object = var_0_object;
				func_2101();
				object var_40_object = var_1_object;
				func_2079(var_0_object);
			}
			if(var_15_bool == 12906) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_2101();
			}
			if(var_15_bool == 16859) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_2101();
				object var_74_object = var_1_object;
				func_2079(var_0_object);
			}
			if(var_14_object == 12892) {
				bool var_78_bool;
				func_2121(var_1_object);
				if(var_78_bool != 0) {
					object var_86_object; object var_87_object;
					var_86_object = var_1_object;
					var_87_object = var_0_object;
					func_2095();
					func_157(var_15_bool, "Neutral");
					var_0_object->SetMessage(511690); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511691, 12894, 12893); //@t
					return 0;
				}
				func_157(var_15_bool, "Neutral");
				var_0_object->SetMessage(512483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512484, -1, 13652); //@t
				var_0_object->AddReply(515786, -1, 16858); //@t
				return 0;
			}
			if(var_14_object == 12894) {
				func_157(var_15_bool, "Neutral");
				var_0_object->SetMessage(511692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511693, 12901, 12895); //@t
				var_0_object->AddReply(511694, 12898, 12896); //@t
				var_0_object->AddReply(511695, 12898, 12897); //@t
				return 0;
			}
			if(var_14_object == 12898) {
				func_157(var_15_bool, "Neutral");
				var_0_object->SetMessage(511696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511697, 12901, 12900); //@t
				var_0_object->AddReply(515787, -1, 16859); //@t
				return 0;
			}
			if(var_14_object == 12901) {
				func_157(var_15_bool, "Neutral");
				var_0_object->SetMessage(511698); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511699, 12904, 12902); //@t
				var_0_object->AddReply(515788, -1, 16860); //@t
				return 0;
			}
			if(var_14_object == 12904) {
				func_157(var_15_bool, "Neutral");
				var_0_object->SetMessage(511700); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511701, -1, 12905); //@t
				var_0_object->AddReply(511702, -1, 12906); //@t
				return 0;
			}
			var_3_string = true;
			bool var_157_bool;
			func_2305(var_157_bool);
			if(var_157_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, int var_14_int)
	{
		if(var_14_int == 1) {
			func_2059(var_1_object);
		} else {
			int var_22_int;
			func_1267(var_13_bool, var_22_int, var_22_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		bool var_15_bool = false;
		if(var_1_object == var_14_object) {
			if(!var_2_object) //@nz
				var_15_bool = true;
		}
		if(var_15_bool != 0) {
			var_2_object = true;
			object var_18_object;
			var_14_object = var_18_object;
			func_1934(var_18_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		bool var_15_bool = false;
		if(var_1_object == var_14_object) {
			if(var_2_object != 0)
				var_15_bool = true;
		}
		if(var_15_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		@RequestClearPath(var_14_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		func_1123(var_14_object);
		object var_19_object;
		var_14_object = var_19_object;
		func_2291();
	}

}


task task_4
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		bool var_16_bool;
		@IsOverrideActive(var_16_bool);
		if(!var_16_bool) { //@nz
			object var_18_object;
			var_14_object = var_18_object;
			func_2206(var_18_object);
		}
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_14_object;
		func_1993(var_14_object);
		@RemoveActor(var_14_object);
		@Hold();
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, string var_15_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
	}

}


maintask task_5
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		bool var_15_bool;
		func_1500(var_15_bool);
		if(var_15_bool != 0) {
			object var_16_object;
			var_14_object = var_16_object;
			func_1478(var_16_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		bool var_16_bool;
		@IsPlayerActor(var_14_object, var_16_bool);
		if(var_16_bool != 0) {
			bool var_18_bool;
			func_2042(var_18_bool, "quest_d5_01", "factory_fight");
		}
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, string var_14_string)
	{
		if(var_14_string == "attack") {
			TaskCall(2);
			func_377();
			TaskReturn();
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
{
	object var_18_object;
	var_14_object = var_18_object;
	int var_19_int;
	var_15_int = var_19_int;
	float var_20_float;
	var_16_float = var_20_float;
	func_1743(var_18_object, var_19_int, var_20_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_20_object;
	var_14_object = var_20_object;
	int var_21_int;
	var_15_int = var_21_int;
	float var_22_float;
	var_16_float = var_22_float;
	cvector var_23_cvector;
	var_18_cvector = var_23_cvector;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	func_1811(var_22_float, var_23_cvector, var_24_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, string var_15_string)
{
	float var_17_float;
	if(var_15_string == "health") {
		@GetProperty("health", var_17_float);
		if(var_17_float <= 0)
			@SignalDeath(var_14_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_2307(var_15_object);
}


void func_0(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_1836(var_28_bool, var_29_object, 70.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_75_int;
	func_2299(var_75_int);
	var_24_object->SetNPCName(var_75_int);
	int var_76_int;
	func_2297(var_76_int);
	var_24_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_2301(var_77_string);
	var_24_object->SetPhoto(var_77_string);
	string var_78_string;
	func_2303(var_78_string);
	var_24_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_2183(var_79_int);
	var_24_object->SetPlayerName(var_79_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_88_object; object var_89_object;
	var_18_object = var_88_object;
	var_24_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_144_bool = !var_27_bool; //@nz
		if(var_144_bool == 0) goto Label_63;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_63:
	object var_145_object;
	var_18_object = var_145_object;
	func_1904();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_1537(cvector var_48_cvector, object var_49_object)
{
	cvector var_52_cvector;
	@GetPosition(var_52_cvector);
	cvector var_53_cvector;
	var_49_object->GetPosition(var_53_cvector);
	var_48_cvector = var_53_cvector - var_52_cvector;
}


void func_2305(bool var_70_bool)
{
	var_70_bool = false;
}


void func_2307(object var_15_object)
{
	bool var_17_bool;
	@AddItem(var_17_bool, "revolver_ammo", 0, 2);
	@AddItem(var_17_bool, "alpha_pills", 0, 2);
	object var_24_object;
	var_15_object = var_24_object;
	TaskCall(4);
	func_1316(var_24_object);
	TaskReturn();
}


void func_2054(float var_37_float)
{
	float var_39_float;
	@GetGameTime(var_39_float);
	var_39_float = var_37_float;
}


void func_1544(bool var_154_bool, object var_155_object)
{
	bool var_157_bool;
	@IsPlayerActor(var_155_object, var_157_bool);
	var_157_bool = var_154_bool;
}


void func_1289(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2059(object var_123_object)
{
	bool var_125_bool;
	@IsPlayerActor(var_123_object, var_125_bool);
	if(var_125_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1549(bool var_110_bool, object var_111_object, string var_112_string)
{
	var_117_bool = IsFuncExist(var_111_object, "HasProperty", 2);
	if(!var_117_bool) { //@nz
		var_110_bool = false;
		return 2;
	}
	bool var_114_bool;
	var_111_object->HasProperty(var_112_string, var_114_bool);
	var_114_bool = var_110_bool;
}


void func_1040(object var_0_object)
{
	func_2059(var_0_object);
}


void func_1811(object var_20_object, cvector var_23_cvector, cvector var_24_cvector)
{
	object var_27_object;
	@GetScene(var_27_object);
	object var_28_object;
	@AddActorByType(var_28_object, "scripted", var_27_object, var_23_cvector, var_24_cvector, "blood_dir.xml");
	object var_31_object;
	var_20_object = var_31_object;
	func_1699(var_31_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2068(void)
{
	object var_361_object;
	@GetScene(var_361_object);
	object var_363_object;
	func_1993(var_363_object);
	@BroadcastMessage("battle", var_363_object, var_361_object);
}
EMIT "Stack[-1] = 0";


void func_1045(int var_460_int)
{
	var_460_int = 0;
}


void func_1047(void)
{
	func_1952("attack_stay");
}


void func_1561(float var_399_float, object var_400_object, float var_401_float, int var_402_int)
{
	int var_412_int; int var_414_int;
	object var_419_object;
	var_400_object = var_419_object;
	bool var_418_bool;
	func_1549(var_418_bool, var_419_object, "health");
	if(!var_418_bool) //@nz
		var_399_float = 0.0;
	bool var_422_bool; object var_423_object;
	func_1549(var_422_bool, var_423_object, "armor");
	if(!var_422_bool) //@nz
		var_412_int = 0;
	else
		var_423_object->GetProperty("armor", var_412_int);
	string var_427_string; int var_428_int;
	var_402_int = var_428_int;
	func_1523(var_427_string, var_428_int);
	string var_413_string = "armor_" + var_427_string;
	bool var_433_bool; object var_434_object; string var_435_string;
	var_400_object = var_434_object;
	func_1549(var_433_bool, var_434_object, var_435_string);
	if(!var_433_bool) //@nz
		var_414_int = 0;
	else
		var_400_object->GetProperty(var_435_string, var_414_int);

	float var_437_float;
	func_2009(var_437_float, ((var_412_int + var_414_int) / 100.0), (float)1);
	float var_415_float;
	var_437_float = var_415_float;
	float var_416_float;
	var_400_object->GetProperty("health", var_416_float);
	float var_417_float = var_401_float * (1 - var_415_float);
	float var_447_float;
	func_2016(var_447_float, (var_416_float - var_417_float), (float)0, (float)1);
	var_400_object->SetProperty("health", var_447_float);
	bool var_453_bool; object var_454_object;
	var_400_object = var_454_object;
	func_1544(var_453_bool, var_454_object);
	if(var_453_bool != 0) {
		float var_455_float = -var_417_float;
		func_2032(var_455_float);
	}
	var_417_float = var_399_float;
	
}


// @pe
void func_1305(bool var_181_bool, object var_182_object)
{
	object var_184_object;
	var_182_object = var_184_object;
	bool var_183_bool;
	func_1675(var_183_bool, var_184_object);
	var_183_bool = var_181_bool;
}


// @pe
void func_1052(void)
{
}


void func_1054(bool var_485_bool)
{
	var_485_bool = true;
}


// @pe
void func_2079(object var_41_object)
{
	object var_45_object;
	func_2133(var_45_object);
	object var_42_object;
	var_45_object = var_42_object;
	func_2150(var_42_object, "pt_map_grif", (float)2);
	object var_65_object;
	func_2133(var_65_object);
	var_41_object->ShowMap(var_65_object);
}


void func_1056(int var_381_int)
{
	var_381_int = 1;
}


void func_1312(string var_199_string)
{
	var_199_string = "walk";
}


void func_1058(float var_376_float)
{
	var_376_float = 0.5;
}


void func_1825(object var_233_object)
{
	cvector var_237_cvector;
	var_233_object->GetPosition(var_237_cvector);
	cvector var_238_cvector;
	@GetPosition(var_238_cvector);
	cvector var_239_cvector = var_237_cvector - var_238_cvector;
	var_240_float = GetByIndex(var_239_cvector, 0);
	var_241_float = GetByIndex(var_239_cvector, 2);
	@RotateAsync(var_240_float, var_241_float);
}


void func_1060(object var_2_object, bool var_130_bool, object var_131_object, float var_132_float, float var_133_float, bool var_134_bool, bool var_135_bool)
{
	object var_143_object;
	func_2059(var_143_object);
	@SetTimer(1, 5);
	bool var_141_bool;
	@CanSee(var_141_bool, var_143_object);
	if(var_141_bool != 0) {
		var_2_object = true;
		object var_147_object;
		var_131_object = var_147_object;
		func_1934(var_147_object);
	} else {
		var_2_object = false;
	}
	bool var_154_bool; object var_155_object;
	func_1544(var_154_bool, var_155_object);
	if(var_154_bool != 0) {
		object var_158_object;
		func_1993(var_158_object);
		@SendPlayerEnemy(var_155_object, var_158_object);
	}
	bool var_159_bool; object var_160_object; float var_161_float; float var_162_float; bool var_163_bool; bool var_164_bool;
	var_131_object = var_160_object;
	var_132_float = var_161_float;
	var_133_float = var_162_float;
	var_134_bool = var_163_bool;
	var_135_bool = var_164_bool;
	bool var_142_bool;
	func_1165(var_141_bool, var_142_bool, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool);
	var_159_bool = var_142_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_142_bool = var_130_bool;
	
}


void func_1314(string var_200_string)
{
	var_200_string = "run";
}


// @pe
void func_1316(object var_24_object)
{
	bool var_25_bool;
	func_2042(var_25_bool, "quest_d5_01", "dead");
	object var_31_object;
	var_24_object = var_31_object;
	func_1355(var_31_object);
	@SetRTEnvelope(50, 40);
	func_2236();
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1836(bool var_28_bool, object var_29_object, float var_30_float)
{
	cvector var_41_cvector; bool var_48_bool;
	var_29_object->GetPosition(var_41_cvector);
	float var_40_float;
	var_29_object->GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_40_float);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	@GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_40_float);
	cvector var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_53_float = sqrt(var_43_cvector | var_43_cvector);
	var_43_cvector /= var_53_float;
	cvector var_44_cvector = -var_43_cvector;
	cvector var_55_cvector;
	func_1999(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_45_cvector = ((var_43_cvector * var_30_float) + (var_55_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_42_cvector + var_45_cvector), var_44_cvector);
	var_68_float = GetByIndex(var_45_cvector, 0);
	var_69_float = GetByIndex(var_45_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_2305(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_1898;
		@LookAsyncCamera("head");
	}
Label_1898:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


// @pe
void func_2095(void)
{
	@SetVariable("ood5PatrolGuard1", 1);
}


void func_2101(void)
{
	@SetVariable("d5q01", 6);
	object var_26_object;
	func_2133(var_26_object);
	object var_23_object;
	var_26_object = var_23_object;
	float var_37_float;
	func_2054(var_37_float);
	var_23_object->AddMark("d5q01PatrolGotoGrif", "pt_map_grif", 1, 515349, var_37_float);
}
EMIT "Stack[-1] = 0";


void func_838(bool var_486_bool, float var_487_float)
{
	float var_490_float; bool var_491_bool;
	@rand(var_490_float);
	if(var_490_float < var_487_float) {

		for(;;) {
			@IsAnimationPlaying(var_491_bool);
			if(!var_491_bool) { //@nz
			} else {
				bool var_494_bool;
				func_936(var_494_bool);
				if(var_494_bool != 0) {
					var_486_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_486_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1040(var_491_bool);
}


// @pe
void func_2121(bool var_95_bool)
{
	int var_97_int;
	func_2027(var_97_int, "ood5PatrolGuard1");
	if(var_97_int == 0) {
		var_95_bool = true;
		return 0;
	}
	var_95_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_95_bool;
		func_2121(var_1_object);
		if(var_95_bool != 0) {
			object var_103_object; object var_104_object;
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_2095();
			func_157(var_89_object, "Neutral");
			var_0_object->SetMessage(511690); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511691, 12894, 12893); //@t
		} else {
					func_157(var_89_object, "Neutral");
					var_0_object->SetMessage(512483); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512484, -1, 13652); //@t
					var_0_object->AddReply(515786, -1, 16858); //@t
		}
	}
	for(;;) {
		bool var_123_bool;
		func_2305(var_123_bool);
		if(var_123_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1921(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_156;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_156:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_1355(object var_31_object)
{
	cvector var_42_cvector; cvector var_43_cvector; cvector var_44_cvector; cvector var_45_cvector; string var_46_string; object var_47_object; bool var_48_bool; bool var_49_bool; float var_50_float; cvector var_51_cvector;
	if(var_31_object == null) {
		func_1446("fdie");
	} else {
		var_31_object->GetPosition(var_42_cvector);
		@GetPosition(var_43_cvector);
		@GetDirection(var_44_cvector);
		var_45_cvector = var_43_cvector - var_42_cvector;
		var_85_float = GetByIndex(var_45_cvector, 0);
		var_86_float = GetByIndex(var_44_cvector, 0);
		var_88_float = GetByIndex(var_45_cvector, 2);
		var_89_float = GetByIndex(var_44_cvector, 2);
		if(((var_85_float * var_86_float) + (var_88_float * var_89_float)) >= 0)
			var_46_string = "fdie";
		else
			var_46_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_31_object = var_47_object;
		var_96_bool = IsFuncExist(var_31_object, "GetScriptProperty", 2);
		if(var_96_bool != 0) {
			var_31_object->HasScriptProperty(var_48_bool, "Owner");
			if(var_48_bool != 0) {
				var_31_object->GetScriptProperty(var_47_object, "Owner");
				if(var_47_object == null)
					var_31_object = var_47_object;
			}
		}
		var_103_bool = IsFuncExist(var_47_object, "@GetEyesHeight", 1);
		if(var_103_bool != 0) {
			var_47_object->GetEyesHeight(var_50_float);
			var_51_cvector = [0.0, 0.0, 0.0];
			var_104_float = GetByIndex(var_51_cvector, 1);
			var_50_float = var_104_float;
			SetByIndex(var_51_cvector, 1) = var_104_float;
			@LookAsync(var_31_object, "head", var_51_cvector);
			var_49_bool = true;
		} else {
			var_49_bool = false;

		}
		string var_106_string;
		var_46_string = var_106_string;
		func_1952(var_106_string);
		@PlayAnimation("all", var_46_string);
		@WaitForAnimEnd();
		if(var_49_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_46_string);
		@RemoveEnvelope();
		var_47_object = null;
	}
	
}


void func_2133(object var_26_object)
{
	object var_29_object; object var_30_object;
	@GetMainOutdoorScene(var_29_object);
	if(var_29_object == null) {
		@Trace("Can't find main outdoor scene");
		var_30_object = null;
		var_30_object = var_26_object;
	}
	var_29_object->GetMap(var_30_object);
	var_30_object = var_26_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_865(object var_0_object, bool var_287_bool, float var_288_float)
{
	bool var_294_bool; cvector var_295_cvector; cvector var_296_cvector; cvector var_297_cvector; float var_298_float;
	
	for(;;) {
		@IsAnimationPlaying(var_294_bool);
		if(!var_294_bool) //@nz
			break;
		bool var_300_bool;
		func_936(var_300_bool);
		if(var_300_bool != 0) {
			var_287_bool = true;
			return 10;
		}
		bool var_343_bool;
		func_1675(var_343_bool, var_0_object);
		if(!var_343_bool) { //@nz
			var_287_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_295_cvector); //@t
		@GetPFPosition(var_296_cvector);
		var_297_cvector = var_295_cvector - var_296_cvector;
		var_298_float = var_297_cvector | var_297_cvector;
		if(var_298_float < (var_288_float * var_288_float)) {
			bool var_348_bool; float var_349_float;
			var_288_float = var_349_float;
			func_701(var_297_cvector, var_298_float, var_348_bool, var_349_float);
			var_287_bool = true;
			return 10;
		}
		@sync();
	}
	func_1040(var_298_float);
	var_287_bool = false;
}


void func_1634(bool var_103_bool, object var_104_object)
{
	bool var_106_bool;
	var_104_object->IsDead(var_106_bool);
	var_106_bool = var_103_bool;
}


void func_1123(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1289(var_14_object);
}


void func_2150(object var_42_object, string var_43_string, float var_44_float)
{
	object var_52_object;
	@GetMainOutdoorScene(var_52_object);
	if(var_52_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_50_cvector;
	cvector var_51_cvector;
	bool var_53_bool;
	var_52_object->GetLocator(var_43_string, var_53_bool, var_50_cvector, var_51_cvector);
	if(!var_53_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_43_string) + " doesnt exist");
	var_52_object->GetMap(var_42_object);
	if(var_42_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_63_float = GetByIndex(var_50_cvector, 0);
	var_64_float = GetByIndex(var_50_cvector, 2);
	var_42_object->SetMapParams(var_63_float, var_64_float, var_44_float);
}
EMIT "Stack[-2] = 0";


void func_1639(bool var_92_bool, object var_93_object)
{
	if(var_93_object == null) {
		var_92_bool = false;
		return 4;
	}
	bool var_99_bool = false;
	var_102_bool = IsFuncExist(var_93_object, "IsDead", 1);
	if(var_102_bool != 0) {
		bool var_103_bool; object var_104_object;
		var_93_object = var_104_object;
		func_1634(var_103_bool, var_104_object);
		if(var_103_bool != 0)
			var_99_bool = true;
	}
	if(var_99_bool != 0) {
		var_92_bool = false;
		return 4;
	}
	object var_96_object;
	@GetScene(var_96_object);
	if(var_96_object == null) {
		var_92_bool = false;
		return 4;
	}
	object var_97_object;
	var_93_object->GetScene(var_97_object);
	if(var_96_object != var_97_object) {
		var_92_bool = false;
		return 4;
	}
	var_92_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1904(void)
{
	bool var_147_bool;
	@CameraSwitchToNormal();
	bool var_148_bool;
	func_2305(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		@HasAnimationTrack(var_147_bool, "head");
		if(var_147_bool == 0) goto Label_1920;
		@UnlookAsync("head");
	}
Label_1920:
	
}


void func_627(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_55_bool; bool var_56_bool; cvector var_57_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_55_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_55_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_56_bool, ("attack" + (var_2_object + 1)));
			if(!var_56_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_57_cvector, "all", "bjump");
		var_71_float = GetByIndex(var_57_cvector, 2);
		var_4_bool = -var_71_float;

	}
}


void func_377(void)
{
	object var_24_object;
	@FindActor(var_24_object, "player");
	if(!var_24_object) { //@nz
	}
	object var_27_object;
	object var_23_object;
	func_398(var_20_bool, var_21_float, var_22_int, var_23_object, var_27_object, var_27_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_1921(string var_125_string)
{
	float var_128_float; float var_129_float;
	@lshGetAnimTimes(var_125_string, var_128_float, var_129_float);
	@lshPlayAnimation(var_128_float, var_129_float, false);
}


void func_2183(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x896";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_1928(string var_111_string, bool var_112_bool)
{
	float var_117_float; float var_118_float;
	@lshGetAnimTimes(var_111_string, var_117_float, var_118_float);
	@lshPlayAnimation(var_117_float, var_118_float, var_112_bool);
}


// @pe
void func_392(float var_396_float)
{
	var_396_float = 0.3;
}


void func_1675(bool var_88_bool, object var_89_object)
{
	object var_93_object;
	var_89_object = var_93_object;
	bool var_92_bool;
	func_1639(var_92_bool, var_93_object);
	if(!var_92_bool) { //@nz
		var_88_bool = false;
		return 2;
	}
	bool var_110_bool; object var_111_object;
	func_1549(var_110_bool, var_111_object, "noaccess");
	if(!var_110_bool) { //@nz
		var_88_bool = true;
		return 2;
	}
	int var_91_int;
	var_111_object->GetProperty("noaccess", var_91_int);
	var_88_bool = var_91_int == 0;
}


// @pe
void func_395(int var_403_int)
{
	var_403_int = 0;
}


void func_1165(object var_0_object, object var_1_object, bool var_159_bool, object var_160_object, float var_161_float, float var_162_float, bool var_163_bool, bool var_164_bool)
{
	bool var_173_bool; object var_175_object; cvector var_176_cvector; cvector var_177_cvector; float var_179_float; object var_180_object;
	var_0_object = false;
	var_1_object = var_160_object;
	bool var_174_bool;
	var_164_bool = var_174_bool;
	
	for(;;) {
		bool var_181_bool; object var_182_object;
		var_160_object = var_182_object;
		func_1305(var_181_bool, var_182_object);
		if(!var_181_bool) { //@nz
			var_159_bool = false;
			return 16;
		}
		var_160_object->GetPosition(var_176_cvector);
		@GetPosition(var_177_cvector);
		var_179_float = (var_176_cvector - var_177_cvector) | (var_176_cvector - var_177_cvector);
		bool var_186_bool = false;
		if(var_162_float > 0) {
			if(var_179_float > (var_162_float * var_162_float))
				var_186_bool = true;
		}
		if(var_186_bool != 0) {
			@Stop();
			var_159_bool = false;
			return 16;
		}
		if(var_179_float > (var_161_float * var_161_float)) {
			var_160_object->GetPFPosition(var_176_cvector);
			@FindPathTo(var_180_object, var_176_cvector);
			if(var_180_object != null) {
				var_180_object = var_175_object;
				var_180_object = null;
			}
			if(var_175_object != null) {
				if(var_174_bool == 0) goto Label_1218;
				var_174_bool = false;
				@RotatePath(var_175_object, var_173_bool);
				if(!var_173_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_199_string;
						func_1312(var_199_string);
						string var_200_string;
						func_1314(var_200_string);
						@FollowPath(var_175_object, var_163_bool, var_173_bool, var_199_string, var_200_string);
						if(!var_173_bool) { //@nz
							if(var_0_object == 0) goto Label_1237;
							var_175_object = null;
						}
					EMIT "GOTO 0x4d6";

					Label_1237:
						} else {
					var_175_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_173_bool);
					if(!var_173_bool) { //@nz
						if(var_0_object != 0) {
							var_175_object = null;
							goto Label_1265;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1265;
		}
			var_180_object = null;
			goto Label_1263;

		Label_1263:
			var_175_object = null;

		}
	Label_1265:
		for(;;) {
			var_159_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_908(object var_0_object, bool var_302_bool)
{
	cvector var_308_cvector; cvector var_309_cvector;
	bool var_313_bool;
	func_1675(var_313_bool, var_0_object);
	if(!var_313_bool) { //@nz
		var_302_bool = false;
		return 10;
	}
	bool var_316_bool;
	float var_312_float;
	func_997(var_312_float, var_316_bool);
	if(var_316_bool != 0) {
		var_0_object->GetPFPosition(var_308_cvector); //@t
		@GetPFPosition(var_309_cvector);
		var_0_object->GetAttackDistance(var_312_float); //@t
		var_302_bool = ((var_308_cvector - var_309_cvector) | (var_308_cvector - var_309_cvector)) <= ((var_312_float + 50) * (var_312_float + 50));
		return 10;
	}
	var_302_bool = false;
}


void func_1934(object var_147_object)
{
	float var_150_float;
	var_147_object->GetEyesHeight(var_150_float);
	cvector var_151_cvector = [0.0, 0.0, 0.0];
	var_152_float = GetByIndex(var_151_cvector, 1);
	var_150_float = var_152_float;
	SetByIndex(var_151_cvector, 1) = var_152_float;
	@LookAsync(var_147_object, "head", var_151_cvector);
}


void func_398(object var_0_object, string var_3_string, object var_5_object, object var_27_object, bool var_28_bool, float var_29_float, bool var_136_bool, bool var_228_bool)
{
	float var_41_float; cvector var_42_cvector; cvector var_43_cvector; bool var_45_bool; float var_48_float; cvector var_49_cvector; bool var_50_bool; float var_51_float;
	func_627(var_49_cvector, var_50_bool, var_51_float);
	var_5_object = 0;
	var_76_bool = IsFuncExist(var_27_object, "@GetAttackDistance", 1);
	if(var_76_bool != 0) {
		var_27_object->GetAttackDistance(var_41_float);
		var_41_float += 50;
	} else {
						var_29_float = var_41_float;
	}
	if(var_41_float >= 150)
		var_41_float = 150;
	var_3_string = false;
	var_0_object = var_27_object;
	bool var_44_bool;
	@IsPlayerActor(var_0_object, var_44_bool);
	if(var_44_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_82_object;
		func_1993(var_82_object);
		@SendPlayerEnemy(var_27_object, var_82_object);
	}
	if(var_28_bool != 0)
		var_45_bool = false;
	else
		var_45_bool = true;

	
Label_438:
	for(;;) {
		bool var_87_bool = false;
		bool var_88_bool;
		func_1675(var_88_bool, var_0_object);
		if(var_88_bool != 0) {
			if(!var_3_string) //@nz
				var_87_bool = true;
		}
		if(var_87_bool != 0) {
			func_1040(var_51_float);
			var_0_object->GetPFPosition(var_42_cvector); //@t
			@GetPFPosition(var_43_cvector);
			var_48_float = (var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector);
			if(var_48_float >= ((400.0 + var_41_float) * (400.0 + var_41_float))) {
				bool var_130_bool; float var_132_float;
				var_41_float = var_132_float;
				TaskCall(3);
				func_1060(var_138_bool, var_130_bool, var_0_object, var_132_float, 10000.0, true, false);
				TaskReturn();
				if(!var_136_bool) { //@nz
				} else {
					var_45_bool = false;
			} else {
			if(var_48_float >= (var_29_float * var_29_float)) {
				var_0_object->GetPFPosition(var_49_cvector); //@t
				@CanReachByPF(var_50_bool, var_49_cvector);
				if(!var_50_bool) { //@nz
					bool var_222_bool; float var_224_float;
					var_41_float = var_224_float;
					TaskCall(3);
					func_1060(var_230_bool, var_222_bool, var_0_object, var_224_float, 10000.0, true, false);
					TaskReturn();
					if(!var_228_bool) { //@nz
						goto Label_610;
					}
					var_45_bool = false;
					goto Label_438;
				}
				if(!var_45_bool) { //@nz
					func_1825(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1040(var_51_float);
					@StopAsync();
					var_45_bool = true;
					bool var_244_bool;
					func_1675(var_244_bool, var_0_object);
					if(!var_244_bool) { //@nz
						goto Label_610;
					}
				}
				@rand(var_51_float);
				bool var_247_bool;
				var_249_bool = var_51_float < 0.25;
				if(var_249_bool != 1) {
					bool var_250_bool;
					func_997(true, var_250_bool);
					if(var_250_bool != 1)
						var_247_bool = false;
				}
				if(var_247_bool != 0) {
					@Face(var_0_object);
					func_1047();
					@PlayAnimation("all", "attack_stay");
					bool var_287_bool; float var_288_float;
					func_865(var_51_float, var_287_bool, var_288_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1040(var_51_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_505_bool;
					func_997(var_51_float, var_505_bool);
					var_506_bool = !var_505_bool; //@nz
					if(var_506_bool == 0) goto Label_600;
					bool var_507_bool;
					func_1675(var_507_bool, var_0_object);
					if(!var_507_bool) { //@nz
						goto Label_610;
					}
					var_0_object->GetPFPosition(var_42_cvector); //@t
					@GetPFPosition(var_43_cvector);
					if(!(((var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector)) < (var_288_float * var_288_float))) goto Label_600;
					bool var_512_bool; float var_513_float;
					var_29_float = var_513_float;
					func_701(var_50_bool, var_51_float, var_512_bool, var_513_float);
					var_514_bool = !var_512_bool; //@nz
					if(var_514_bool == 0) goto Label_600;
					goto Label_610;
			}
				bool var_515_bool; float var_516_float;
				var_29_float = var_516_float;
				func_701(var_50_bool, var_51_float, var_515_bool, var_516_float);
				if(!var_515_bool) { //@nz
					goto Label_610;
				}
				var_45_bool = true;

			}
		Label_600:
			goto Label_609;
			}
			Label_609:
			}
		}
	Label_610:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_44_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_662(object var_0_object, float var_385_float, int var_386_int)
{
	object var_390_object; float var_391_float; float var_392_float;
	@GetVictim((var_385_float * 0.9), var_390_object);
	@ReportAttack(var_0_object);
	if(var_390_object == var_0_object) {
		float var_396_float; object var_397_object; int var_398_int;
		var_390_object = var_397_object;
		var_386_int = var_398_int;
		func_392(var_398_int);
		var_396_float = var_391_float;
		float var_399_float; object var_400_object; float var_401_float; int var_402_int;
		var_390_object = var_400_object;
		int var_403_int; object var_404_object; int var_405_int;
		var_390_object = var_404_object;
		var_386_int = var_405_int;
		func_395(var_405_int);
		var_403_int = var_402_int;
		func_1561(var_399_float, var_400_object, var_401_float, var_402_int);
		var_399_float = var_392_float;
		int var_460_int;
		func_1045(var_460_int);
		@ReportHit(var_0_object, var_460_int, var_392_float, var_401_float);
		object var_461_object; float var_462_float;
		var_390_object = var_461_object;
		var_392_float = var_462_float;
		func_1052();
	}
}
EMIT "Stack[-3] = 0";


void func_2200(int var_113_int)
{
	int var_115_int;
	@GetVariable("branch", var_115_int);
	var_115_int = var_113_int;
}


void func_1945(void)
{
	bool var_17_bool;
	func_2305(var_17_bool);
	if(var_17_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_157(object var_2_object, string var_107_string)
{
	bool var_108_bool;
	func_2305(var_108_bool);
	if(!var_108_bool) //@nz
		return 0;
	if(var_107_string == var_2_object)
		return 0;
	string var_111_string; bool var_112_bool;
	var_107_string = var_111_string;
	if(var_107_string == "")
		var_112_bool = false;
	else
		var_112_bool = true;
	func_1928(var_111_string, var_112_bool);
	var_2_object = var_107_string;
	
}


// @pe
void func_2206(object var_18_object)
{
	int var_19_int;
	func_2200(var_19_int);
	if(var_19_int == 1)
		@WorkWithCorpse(var_18_object);
	else
		@Barter(var_18_object);
	
}


void func_1952(string var_54_string)
{
	bool var_63_bool; int var_64_int; bool var_65_bool; int var_66_int; bool var_67_bool; float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
	@IsExisting3DSound(var_63_bool, var_54_string);
	if(!var_63_bool) { //@nz
		var_64_int = 0;

		for(;;) {
			@IsExisting3DSound(var_65_bool, (var_54_string + (var_64_int + 1)));
			if(!var_65_bool) { //@nz
				break;
			Label_1972:
				@irand(var_66_int, var_64_int);
				var_54_string += (var_66_int + 1);
	}
			@Is3DSoundLoaded(var_67_bool, var_54_string);
			if(var_67_bool != 0) {
				@GetEyesHeight(var_68_float);
				@GetDirection(var_69_cvector);
				var_70_cvector = var_69_cvector * 50;
				var_81_float = GetByIndex(var_70_cvector, 1);
				SetByIndex(var_70_cvector, 1) = (var_81_float + var_68_float);
				@PlayGlobalSound(var_54_string, var_70_cvector);
			}
		}
		var_64_int += 1;
	}
	var_76_bool = !var_64_int; //@nz
	if(var_76_bool == 0) goto Label_1972;
}


void func_1699(object var_31_object)
{
	string var_45_string;
	if(var_31_object == null)
		return 14;
	bool var_39_bool;
	@IsDead(var_39_bool);
	if(var_39_bool != 0)
		return 14;
	int var_40_int;
	@GetSecondaryAnimationType(var_40_int);
	if(var_40_int < 0)
		return 14;
	cvector var_41_cvector;
	var_31_object->GetPosition(var_41_cvector);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetDirection(var_43_cvector);
	cvector var_44_cvector = var_42_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_44_cvector, 0);
	var_51_float = GetByIndex(var_43_cvector, 0);
	var_53_float = GetByIndex(var_44_cvector, 2);
	var_54_float = GetByIndex(var_43_cvector, 2);
	if(((var_50_float * var_51_float) + (var_53_float * var_54_float)) >= 0)
		var_45_string = "fhit";
	else
		var_45_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_45_string + "1"), (var_45_string + "2"), -10);
	
}


// @pe
void func_1446(string var_53_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_54_string;
	var_53_string = var_54_string;
	func_1952(var_54_string);
	@PlayAnimation("all", var_53_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_53_string);
	@RemoveEnvelope();
}


void func_936(bool var_300_bool)
{
	bool var_301_bool = false;
	bool var_302_bool;
	func_908(var_301_bool, var_302_bool);
	if(var_302_bool != 0) {
		bool var_319_bool;
		func_952(var_300_bool, var_301_bool, var_319_bool);
		if(var_319_bool != 0)
			var_301_bool = true;
	}
	if(var_301_bool != 0) {
		var_300_bool = true;
		return 0;
	}
	var_300_bool = false;
}


void func_2219(string var_119_string)
{
	object var_123_object;
	@CreateInvItem(var_123_object);
	var_123_object->SetItemName(var_119_string);
	var_123_object->SetProperty("Organ", 1);
	int var_124_int;
	var_123_object->GetItemID(var_124_int);
	bool var_125_bool;
	@AddItem(var_125_bool, var_123_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_952(object var_0_object, bool var_4_bool, bool var_319_bool)
{
	object var_325_object; float var_327_float; cvector var_328_cvector; cvector var_329_cvector;
	@GetScene(var_325_object);
	bool var_326_bool = false;
	
	for(;;) {
		cvector var_330_cvector;
		func_1537(var_330_cvector, var_0_object);
		var_336_int = -var_330_cvector;
		@FindDirLength(var_327_float, var_336_int, var_4_bool);
		if(var_327_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_328_cvector); //@t
				@GetPFPosition(var_329_cvector);
				@WaitForAnimEnd();
				func_1040(var_329_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_326_bool = true;
				bool var_341_bool;
				func_908(var_329_cvector, var_341_bool);
				var_342_bool = !var_341_bool; //@nz
				if(var_342_bool == 0) goto Label_993;
		}
		for(;;) {
			var_326_bool = var_319_bool;

		}

	Label_993:
	}
}
EMIT "Stack[-5] = 0";


void func_2236(void)
{
	int var_113_int;
	func_2200(var_113_int);
	if(var_113_int != 1) {
	}
	func_2219("liver");
	func_2219("kidney");
	func_2219("heart");
	func_2219("blood");
}


void func_701(object var_0_object, object var_1_object, bool var_348_bool, float var_349_float)
{
	string var_357_string;
	func_1040(var_357_string);
	int var_354_int;
	@irand(var_354_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2068();
	@PlayAnimation("all", ("attack_begin" + (var_354_int + 1)));
	@WaitForAnimEnd();
	int var_356_int;
	func_1008(var_356_int, var_357_string);
	bool var_382_bool;
	func_1675(var_382_bool, var_0_object);
	if(!var_382_bool) { //@nz
		@StopAsync();
		var_348_bool = false;
		return 8;
	}
	float var_385_float; int var_386_int;
	var_349_float = var_385_float;
	var_354_int = var_386_int;
	func_662(var_357_string, var_385_float, var_386_int);
	bool var_355_bool;
	@HasAnimation(var_355_bool, "all", ("attack_middle" + var_354_int));
	if(var_355_bool != 0) {
		func_2068();
		@PlayAnimation("all", ("attack_middle" + var_354_int));
		@WaitForAnimEnd();
		func_1040(var_357_string);
		bool var_470_bool;
		func_1675(var_470_bool, var_0_object);
		if(!var_470_bool) { //@nz
			@StopAsync();
			var_348_bool = false;
			return 8;
		}
		float var_473_float; int var_474_int;
		var_349_float = var_473_float;
		func_662(var_357_string, var_473_float, var_474_int);
		var_356_int = 1;

		for(;;) {
			var_357_string = (("attack_middle" + var_474_int) + "_") + var_356_int;
			@HasAnimation(var_355_bool, "all", var_357_string);
			if(!var_355_bool) { //@nz
			} else {
				func_2068();
				@PlayAnimation("all", var_357_string);
				@WaitForAnimEnd();
				func_1040(var_357_string);
				bool var_496_bool;
				func_1675(var_496_bool, var_0_object);
				if(!var_496_bool) { //@nz
					@StopAsync();
					var_348_bool = false;
					return 8;
				}
				float var_499_float; int var_500_int;
				var_349_float = var_499_float;
				var_354_int = var_500_int;
				func_662(var_357_string, var_499_float, var_500_int);
				var_356_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_354_int));
		bool var_485_bool;
		func_1054(var_485_bool);
		if(var_485_bool != 0) {
			bool var_486_bool;
			func_838(var_486_bool, 0.75);
			@StopAsync();
		}
		var_348_bool = true;
		return 8;

	}
}


// @pe
void func_1478(object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	TaskCall(0);
	int var_17_int;
	func_0(var_19_object, var_17_int, var_18_object);
	TaskReturn();
}


void func_1993(object var_82_object)
{
	object var_84_object;
	@self(var_84_object);
	var_84_object = var_82_object;
}
EMIT "Stack[-1] = 0";


void func_1743(object var_18_object, int var_19_int, float var_20_float)
{
	cvector var_30_cvector; object var_31_object; int var_32_int; bool var_33_bool; cvector var_34_cvector; cvector var_35_cvector;
	bool var_39_bool = false;
	bool var_40_bool = false;
	if(var_18_object != 0) {
		if(var_19_int != 4)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		if(var_19_int != 5)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		cvector var_46_cvector; cvector var_47_cvector;
		cvector var_48_cvector; object var_49_object;
		var_18_object = var_49_object;
		func_1537(var_48_cvector, var_49_object);
		var_48_cvector = var_47_cvector;
		func_1999(var_46_cvector, var_47_cvector);
		var_46_cvector = var_30_cvector;
		@CreateVectorVector(var_31_object);
		var_32_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_32_int), var_33_bool, var_34_cvector, var_35_cvector);
			if(!var_33_bool) { //@nz
				break;
			Label_1805:
				var_31_object = null;
	}
			object var_108_object;
			var_18_object = var_108_object;
			func_1699(var_108_object);
		}
		if((var_35_cvector | var_30_cvector) >= 0.70710677)
			var_31_object->add(var_34_cvector);
		var_32_int += 1;
	}
	int var_36_int;
	var_31_object->size(var_36_int);
	if(var_36_int == 0) goto Label_1805;
	int var_37_int;
	@irand(var_37_int, var_36_int);
	cvector var_38_cvector;
	var_31_object->get(var_38_cvector, var_37_int);
	object var_63_object; int var_64_int; float var_65_float; cvector var_66_cvector; cvector var_67_cvector;
	var_18_object = var_63_object;
	var_19_int = var_64_int;
	var_20_float = var_65_float;
	var_38_cvector = var_66_cvector;
	var_67_cvector = -var_30_cvector;
	func_1811(var_65_float, var_66_cvector, var_67_cvector);
}


void func_1999(cvector var_46_cvector, cvector var_47_cvector)
{
	float var_55_float = sqrt(var_47_cvector | var_47_cvector);
	if(var_55_float < 0.000001)
		var_46_cvector = [0.0, 0.0, 0.0];
	var_46_cvector = var_47_cvector / var_55_float;
}


// @pe
void func_2009(float var_437_float, float var_438_float, float var_439_float)
{
	if(var_438_float < var_439_float)
		var_438_float = var_437_float;
	else
		var_439_float = var_437_float;
	
}


void func_1500(bool var_15_bool)
{
	var_15_bool = true;
}


// @pe
void func_2016(float var_447_float, float var_448_float, float var_449_float, float var_450_float)
{
	if(var_448_float < var_449_float) {
		var_449_float = var_447_float;
		return 0;
	}
	if(var_448_float > var_450_float) {
		var_450_float = var_447_float;
		return 0;
	}
	var_448_float = var_447_float;
}


void func_997(object var_0_object, bool var_250_bool)
{
	bool var_252_bool;
	var_255_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_255_bool != 0) {
		var_0_object->IsAttacking(var_252_bool); //@t
		var_252_bool = var_250_bool;
	}
	var_250_bool = false;
}


void func_2027(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_1008(object var_2_object, object var_5_object)
{
	int var_370_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_object != 0) {
		if((var_5_object + -1) > 0)
			return 4;
	}
	float var_369_float;
	@rand(var_369_float);
	float var_376_float;
	func_1058(var_376_float);
	if(var_369_float < var_376_float) {
		@irand(var_370_int, var_2_object);
		@Speak("attack" + (var_370_int + 1));
		int var_381_int;
		func_1056(var_381_int);
		var_5_object = var_381_int;
	}
}


void func_2032(float var_455_float)
{
	object var_457_object;
	@CreateFloatVector(var_457_object);
	var_457_object->add(var_455_float);
	@SendWorldWndMessage(15, var_457_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1267(object var_0_object, object var_1_object, int var_22_int)
{
	if(var_22_int != 0)
		return 0;
	bool var_25_bool;
	func_1305(var_25_bool, var_1_object);
	if(!var_25_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1523(string var_427_string, int var_428_int)
{
	if(var_428_int == 2) {
		var_427_string = "fire";
		return 0;
	EMIT "GOTO 0x5ff";
	}
	if(var_428_int == 1) {
		var_427_string = "bullet";
		return 0;
	}
	var_427_string = "phys";
}


void func_2297(int var_76_int)
{
	var_76_int = 515572;
}


void func_2042(bool var_25_bool, string var_26_string, string var_27_string)
{
	object var_29_object;
	@FindActor(var_29_object, var_26_string);
	if(var_29_object == null)
		var_25_bool = false;
	@Trigger(var_29_object, var_27_string);
	var_25_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2299(int var_75_int)
{
	var_75_int = 504031;
}


void func_2301(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png";
}


void func_2303(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png";
}


