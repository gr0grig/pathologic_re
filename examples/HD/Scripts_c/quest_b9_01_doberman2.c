// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, int var_9_int)
	{
		if(var_9_int == 1) {
			func_1645(var_1_int);
		} else {
			int var_17_int;
			func_890(var_8_bool, var_17_int, var_17_int);
		}
	
	}

	// @pe
	void OnSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool = false;
		if(var_1_int == var_9_object) {
			if(!var_2_int) //@nz
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			var_2_int = true;
			object var_13_object;
			var_9_object = var_13_object;
			func_1485(var_13_object);
		}
	}

	// @pe
	void OnStopSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool = false;
		if(var_1_int == var_9_object) {
			if(var_2_int != 0)
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		@RequestClearPath(var_9_object);
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		func_746(var_9_object);
		object var_14_object;
		var_9_object = var_14_object;
		func_1756();
	}

}


task task_2
{
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_11_bool;
		@IsOverrideActive(var_11_bool);
		if(!var_11_bool) { //@nz
			object var_13_object;
			var_9_object = var_13_object;
			func_1671(var_13_object);
		}
	}

	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		object var_9_object;
		func_1537(var_9_object);
		@RemoveActor(var_9_object);
		@Hold();
	}

	// @pe
	void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, string var_10_string)
	{
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
	}

}


maintask task_3
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool;
		func_1127(var_10_bool);
		if(var_10_bool != 0) {
			object var_11_object;
			var_9_object = var_11_object;
			func_1111();
		}
	}

	void OnAttacked(object actor, int iDamageType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_11_bool;
		@IsPlayerActor(var_9_object, var_11_bool);
		if(var_11_bool != 0) {
			bool var_13_bool;
			func_1633(var_13_bool, "quest_b9_01", "factory_fight");
		}
	}

	// @pe
	void OnTrigger(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, string var_9_string)
	{
		if(var_9_string == "attack") {
			TaskCall(0);
			func_0();
			TaskReturn();
		}
	}

}


// @pe
void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float)
{
	object var_13_object;
	var_9_object = var_13_object;
	int var_14_int;
	var_10_int = var_14_int;
	float var_15_float;
	var_11_float = var_15_float;
	func_1392(var_13_object, var_14_int, var_15_float);
}


// @pe
void OnHit2(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float, cvector var_13_cvector, cvector var_14_cvector)
{
	object var_15_object;
	var_9_object = var_15_object;
	int var_16_int;
	var_10_int = var_16_int;
	float var_17_float;
	var_11_float = var_17_float;
	cvector var_18_cvector;
	var_13_cvector = var_18_cvector;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	func_1460(var_17_float, var_18_cvector, var_19_cvector);
}


void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, string var_10_string)
{
	float var_12_float;
	if(var_10_string == "health") {
		@GetProperty("health", var_12_float);
		if(var_12_float <= 0)
			@SignalDeath(var_9_object);
	}
}


// @pe
void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	func_1762(var_10_object);
}


void func_0(void)
{
	object var_19_object;
	@FindActor(var_19_object, "player");
	if(!var_19_object) { //@nz
	}
	object var_22_object;
	object var_18_object;
	func_21(var_15_bool, var_16_float, var_17_int, var_18_object, var_22_object, var_22_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_1537(object var_77_object)
{
	object var_79_object;
	@self(var_79_object);
	var_79_object = var_77_object;
}
EMIT "Stack[-1] = 0";


void func_1665(int var_100_int)
{
	int var_102_int;
	@GetVariable("branch", var_102_int);
	var_102_int = var_100_int;
}


void func_1283(bool var_98_bool, object var_99_object)
{
	bool var_101_bool;
	var_99_object->IsDead(var_101_bool);
	var_101_bool = var_98_bool;
}


// @pe
void func_1671(object var_13_object)
{
	int var_14_int;
	func_1665(var_14_int);
	if(var_14_int == 1)
		@WorkWithCorpse(var_13_object);
	else
		@Barter(var_13_object);
	
}


void func_1288(bool var_87_bool, object var_88_object)
{
	if(var_88_object == null) {
		var_87_bool = false;
		return 4;
	}
	bool var_94_bool = false;
	var_97_bool = IsFuncExist(var_88_object, "IsDead", 1);
	if(var_97_bool != 0) {
		bool var_98_bool; object var_99_object;
		var_88_object = var_99_object;
		func_1283(var_98_bool, var_99_object);
		if(var_98_bool != 0)
			var_94_bool = true;
	}
	if(var_94_bool != 0) {
		var_87_bool = false;
		return 4;
	}
	object var_91_object;
	@GetScene(var_91_object);
	if(var_91_object == null) {
		var_87_bool = false;
		return 4;
	}
	object var_92_object;
	var_88_object->GetScene(var_92_object);
	if(var_91_object != var_92_object) {
		var_87_bool = false;
		return 4;
	}
	var_87_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1543(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_50_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_50_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_50_float;
}


void func_1164(cvector var_43_cvector, object var_44_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_44_object->GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
}


// @pe
void func_15(float var_391_float)
{
	var_391_float = 0.3;
}


void func_912(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1553(float var_432_float, float var_433_float, float var_434_float)
{
	if(var_433_float < var_434_float)
		var_433_float = var_432_float;
	else
		var_434_float = var_432_float;
	
}


// @pe
void func_18(int var_398_int)
{
	var_398_int = 0;
}


void func_531(object var_0_object, bool var_297_bool)
{
	cvector var_303_cvector; cvector var_304_cvector;
	bool var_308_bool;
	func_1324(var_308_bool, var_0_object);
	if(!var_308_bool) { //@nz
		var_297_bool = false;
		return 10;
	}
	bool var_311_bool;
	float var_307_float;
	func_620(var_307_float, var_311_bool);
	if(var_311_bool != 0) {
		var_0_object->GetPFPosition(var_303_cvector); //@t
		@GetPFPosition(var_304_cvector);
		var_0_object->GetAttackDistance(var_307_float); //@t
		var_297_bool = ((var_303_cvector - var_304_cvector) | (var_303_cvector - var_304_cvector)) <= ((var_307_float + 50) * (var_307_float + 50));
		return 10;
	}
	var_297_bool = false;
}


void func_1171(bool var_120_bool, object var_121_object)
{
	bool var_123_bool;
	@IsPlayerActor(var_121_object, var_123_bool);
	var_123_bool = var_120_bool;
}


void func_21(object var_0_object, bool var_3_bool, int var_5_int, object var_22_object, bool var_23_bool, float var_24_float, bool var_131_bool, bool var_223_bool)
{
	float var_36_float; cvector var_37_cvector; cvector var_38_cvector; bool var_40_bool; float var_43_float; cvector var_44_cvector; bool var_45_bool; float var_46_float;
	func_250(var_44_cvector, var_45_bool, var_46_float);
	var_5_int = 0;
	var_71_bool = IsFuncExist(var_22_object, "@GetAttackDistance", 1);
	if(var_71_bool != 0) {
		var_22_object->GetAttackDistance(var_36_float);
		var_36_float += 50;
	} else {
						var_24_float = var_36_float;
	}
	if(var_36_float >= 150)
		var_36_float = 150;
	var_3_bool = false;
	var_0_object = var_22_object;
	bool var_39_bool;
	@IsPlayerActor(var_0_object, var_39_bool);
	if(var_39_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_77_object;
		func_1537(var_77_object);
		@SendPlayerEnemy(var_22_object, var_77_object);
	}
	if(var_23_bool != 0)
		var_40_bool = false;
	else
		var_40_bool = true;

	
Label_61:
	for(;;) {
		bool var_82_bool = false;
		bool var_83_bool;
		func_1324(var_83_bool, var_0_object);
		if(var_83_bool != 0) {
			if(!var_3_bool) //@nz
				var_82_bool = true;
		}
		if(var_82_bool != 0) {
			func_663(var_46_float);
			var_0_object->GetPFPosition(var_37_cvector); //@t
			@GetPFPosition(var_38_cvector);
			var_43_float = (var_37_cvector - var_38_cvector) | (var_37_cvector - var_38_cvector);
			if(var_43_float >= ((400.0 + var_36_float) * (400.0 + var_36_float))) {
				bool var_125_bool; float var_127_float;
				var_36_float = var_127_float;
				TaskCall(1);
				func_683(var_133_bool, var_125_bool, var_0_object, var_127_float, 10000.0, true, false);
				TaskReturn();
				if(!var_131_bool) { //@nz
				} else {
					var_40_bool = false;
			} else {
			if(var_43_float >= (var_24_float * var_24_float)) {
				var_0_object->GetPFPosition(var_44_cvector); //@t
				@CanReachByPF(var_45_bool, var_44_cvector);
				if(!var_45_bool) { //@nz
					bool var_217_bool; float var_219_float;
					var_36_float = var_219_float;
					TaskCall(1);
					func_683(var_225_bool, var_217_bool, var_0_object, var_219_float, 10000.0, true, false);
					TaskReturn();
					if(!var_223_bool) { //@nz
						goto Label_233;
					}
					var_40_bool = false;
					goto Label_61;
				}
				if(!var_40_bool) { //@nz
					func_1474(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_663(var_46_float);
					@StopAsync();
					var_40_bool = true;
					bool var_239_bool;
					func_1324(var_239_bool, var_0_object);
					if(!var_239_bool) { //@nz
						goto Label_233;
					}
				}
				@rand(var_46_float);
				bool var_242_bool;
				var_244_bool = var_46_float < 0.25;
				if(var_244_bool != 1) {
					bool var_245_bool;
					func_620(true, var_245_bool);
					if(var_245_bool != 1)
						var_242_bool = false;
				}
				if(var_242_bool != 0) {
					@Face(var_0_object);
					func_670();
					@PlayAnimation("all", "attack_stay");
					bool var_282_bool; float var_283_float;
					func_488(var_46_float, var_282_bool, var_283_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_663(var_46_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_504_bool;
					func_620(var_46_float, var_504_bool);
					var_505_bool = !var_504_bool; //@nz
					if(var_505_bool == 0) goto Label_223;
					bool var_506_bool;
					func_1324(var_506_bool, var_0_object);
					if(!var_506_bool) { //@nz
						goto Label_233;
					}
					var_0_object->GetPFPosition(var_37_cvector); //@t
					@GetPFPosition(var_38_cvector);
					if(!(((var_37_cvector - var_38_cvector) | (var_37_cvector - var_38_cvector)) < (var_283_float * var_283_float))) goto Label_223;
					bool var_511_bool; float var_512_float;
					var_24_float = var_512_float;
					func_324(var_45_bool, var_46_float, var_511_bool, var_512_float);
					var_513_bool = !var_511_bool; //@nz
					if(var_513_bool == 0) goto Label_223;
					goto Label_233;
			}
				bool var_514_bool; float var_515_float;
				var_24_float = var_515_float;
				func_324(var_45_bool, var_46_float, var_514_bool, var_515_float);
				if(!var_514_bool) { //@nz
					goto Label_233;
				}
				var_40_bool = true;

			}
		Label_223:
			goto Label_232;
			}
			Label_232:
			}
		}
	Label_233:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_39_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_788(object var_0_object, int var_1_int, bool var_154_bool, object var_155_object, float var_156_float, float var_157_float, bool var_158_bool, bool var_159_bool)
{
	bool var_168_bool; object var_170_object; cvector var_171_cvector; cvector var_172_cvector; float var_174_float; object var_175_object;
	var_0_object = false;
	var_1_int = var_155_object;
	bool var_169_bool;
	var_159_bool = var_169_bool;
	
	for(;;) {
		bool var_176_bool; object var_177_object;
		var_155_object = var_177_object;
		func_928(var_176_bool, var_177_object);
		if(!var_176_bool) { //@nz
			var_154_bool = false;
			return 16;
		}
		var_155_object->GetPosition(var_171_cvector);
		@GetPosition(var_172_cvector);
		var_174_float = (var_171_cvector - var_172_cvector) | (var_171_cvector - var_172_cvector);
		bool var_181_bool = false;
		if(var_157_float > 0) {
			if(var_174_float > (var_157_float * var_157_float))
				var_181_bool = true;
		}
		if(var_181_bool != 0) {
			@Stop();
			var_154_bool = false;
			return 16;
		}
		if(var_174_float > (var_156_float * var_156_float)) {
			var_155_object->GetPFPosition(var_171_cvector);
			@FindPathTo(var_175_object, var_171_cvector);
			if(var_175_object != null) {
				var_175_object = var_170_object;
				var_175_object = null;
			}
			if(var_170_object != null) {
				if(var_169_bool == 0) goto Label_841;
				var_169_bool = false;
				@RotatePath(var_170_object, var_168_bool);
				if(!var_168_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_194_string;
						func_935(var_194_string);
						string var_195_string;
						func_937(var_195_string);
						@FollowPath(var_170_object, var_158_bool, var_168_bool, var_194_string, var_195_string);
						if(!var_168_bool) { //@nz
							if(var_0_object == 0) goto Label_860;
							var_170_object = null;
						}
					EMIT "GOTO 0x35d";

					Label_860:
						} else {
					var_170_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_168_bool);
					if(!var_168_bool) { //@nz
						if(var_0_object != 0) {
							var_170_object = null;
							goto Label_888;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_888;
		}
			var_175_object = null;
			goto Label_886;

		Label_886:
			var_170_object = null;

		}
	Label_888:
		for(;;) {
			var_154_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_663(object var_0_object)
{
	func_1645(var_0_object);
}


// @pe
void func_1560(float var_153_float, float var_154_float, float var_155_float, float var_156_float)
{
	if(var_154_float < var_155_float) {
		var_155_float = var_153_float;
		return 0;
	}
	if(var_154_float > var_156_float) {
		var_156_float = var_153_float;
		return 0;
	}
	var_154_float = var_153_float;
}


void func_1176(bool var_143_bool, object var_144_object, string var_145_string)
{
	var_150_bool = IsFuncExist(var_144_object, "HasProperty", 2);
	if(!var_150_bool) { //@nz
		var_143_bool = false;
		return 2;
	}
	bool var_147_bool;
	var_144_object->HasProperty(var_145_string, var_147_bool);
	var_147_bool = var_143_bool;
}


void func_1684(string var_106_string)
{
	object var_110_object;
	@CreateInvItem(var_110_object);
	var_110_object->SetItemName(var_106_string);
	var_110_object->SetProperty("Organ", 1);
	int var_111_int;
	var_110_object->GetItemID(var_111_int);
	bool var_112_bool;
	@AddItem(var_112_bool, var_110_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_668(int var_459_int)
{
	var_459_int = 0;
}


void func_285(object var_0_object, float var_380_float, int var_381_int)
{
	object var_385_object; float var_386_float; float var_387_float;
	@GetVictim((var_380_float * 0.9), var_385_object);
	@ReportAttack(var_0_object);
	if(var_385_object == var_0_object) {
		float var_391_float; object var_392_object; int var_393_int;
		var_385_object = var_392_object;
		var_381_int = var_393_int;
		func_15(var_393_int);
		var_391_float = var_386_float;
		float var_394_float; object var_395_object; float var_396_float; int var_397_int;
		var_385_object = var_395_object;
		int var_398_int; object var_399_object; int var_400_int;
		var_385_object = var_399_object;
		var_381_int = var_400_int;
		func_18(var_400_int);
		var_398_int = var_397_int;
		func_1210(var_394_float, var_395_object, var_396_float, var_397_int);
		var_394_float = var_387_float;
		int var_459_int;
		func_668(var_459_int);
		@ReportHit(var_0_object, var_459_int, var_387_float, var_396_float);
		object var_460_object; float var_461_float;
		var_385_object = var_460_object;
		var_387_float = var_461_float;
		func_675();
	}
}
EMIT "Stack[-3] = 0";


void func_670(void)
{
	func_1496("attack_stay");
}


// @pe
void func_928(bool var_176_bool, object var_177_object)
{
	object var_179_object;
	var_177_object = var_179_object;
	bool var_178_bool;
	func_1324(var_178_bool, var_179_object);
	var_178_bool = var_176_bool;
}


// @pe
void func_675(void)
{
}


// @pe
void func_1571(bool var_124_bool, object var_125_object, float var_126_float)
{
	if(!var_125_object) { //@nz
		var_124_bool = false;
		return 0;
	}
	if(var_126_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_126_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_131_float;
		var_126_float = var_131_float;
		func_1623(var_131_float);
		bool var_135_bool; object var_136_object; float var_138_float;
		var_125_object = var_136_object;
		var_126_float = var_138_float;
		func_1188(var_135_bool, var_136_object, "reputation", var_138_float, (float)0, (float)1);
		var_124_bool = true;
		return 0;

	}
	
	var_124_bool = false;
}


void func_677(bool var_484_bool)
{
	var_484_bool = true;
}


void func_1701(void)
{
	int var_100_int;
	func_1665(var_100_int);
	if(var_100_int != 1) {
	}
	func_1684("liver");
	func_1684("kidney");
	func_1684("heart");
	func_1684("blood");
}


void func_679(int var_376_int)
{
	var_376_int = 1;
}


void func_935(string var_194_string)
{
	var_194_string = "walk";
}


void func_681(float var_371_float)
{
	var_371_float = 0.5;
}


void func_937(string var_195_string)
{
	var_195_string = "run";
}


void func_683(int var_2_int, bool var_125_bool, object var_126_object, float var_127_float, float var_128_float, bool var_129_bool, bool var_130_bool)
{
	object var_138_object;
	func_1645(var_138_object);
	@SetTimer(1, 5);
	bool var_136_bool;
	@CanSee(var_136_bool, var_138_object);
	if(var_136_bool != 0) {
		var_2_int = true;
		object var_142_object;
		var_126_object = var_142_object;
		func_1485(var_142_object);
	} else {
		var_2_int = false;
	}
	bool var_149_bool; object var_150_object;
	func_1171(var_149_bool, var_150_object);
	if(var_149_bool != 0) {
		object var_153_object;
		func_1537(var_153_object);
		@SendPlayerEnemy(var_150_object, var_153_object);
	}
	bool var_154_bool; object var_155_object; float var_156_float; float var_157_float; bool var_158_bool; bool var_159_bool;
	var_126_object = var_155_object;
	var_127_float = var_156_float;
	var_128_float = var_157_float;
	var_129_bool = var_158_bool;
	var_130_bool = var_159_bool;
	bool var_137_bool;
	func_788(var_136_bool, var_137_bool, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool);
	var_154_bool = var_137_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_137_bool = var_125_bool;
	
}


void func_1324(bool var_83_bool, object var_84_object)
{
	object var_88_object;
	var_84_object = var_88_object;
	bool var_87_bool;
	func_1288(var_87_bool, var_88_object);
	if(!var_87_bool) { //@nz
		var_83_bool = false;
		return 2;
	}
	bool var_105_bool; object var_106_object;
	func_1176(var_105_bool, var_106_object, "noaccess");
	if(!var_105_bool) { //@nz
		var_83_bool = true;
		return 2;
	}
	int var_86_int;
	var_106_object->GetProperty("noaccess", var_86_int);
	var_83_bool = var_86_int == 0;
}


void func_1188(bool var_135_bool, object var_136_object, string var_137_string, float var_138_float, float var_139_float, float var_140_float)
{
	object var_144_object;
	var_136_object = var_144_object;
	string var_145_string;
	var_137_string = var_145_string;
	bool var_143_bool;
	func_1176(var_143_bool, var_144_object, var_145_string);
	if(!var_143_bool) //@nz
		var_135_bool = false;
	float var_142_float;
	var_136_object->GetProperty(var_137_string, var_142_float);
	float var_153_float; float var_155_float; float var_156_float;
	var_139_float = var_155_float;
	var_140_float = var_156_float;
	func_1560(var_153_float, (var_142_float + var_138_float), var_155_float, var_156_float);
	var_136_object->SetProperty(var_137_string, var_153_float);
	var_135_bool = true;
}


// @pe
void func_939(object var_11_object)
{
	bool var_12_bool;
	func_1633(var_12_bool, "quest_b9_01", "doberman_dead");
	object var_18_object;
	var_11_object = var_18_object;
	func_988(var_18_object);
	@SetRTEnvelope(50, 40);
	func_1701();
	bool var_120_bool; object var_121_object;
	var_11_object = var_121_object;
	func_1171(var_120_bool, var_121_object);
	if(var_120_bool != 0) {
		bool var_124_bool; object var_125_object;
		var_11_object = var_125_object;
		func_1571(var_124_bool, var_125_object, -0.03);
	}
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_559(bool var_295_bool)
{
	bool var_296_bool = false;
	bool var_297_bool;
	func_531(var_296_bool, var_297_bool);
	if(var_297_bool != 0) {
		bool var_314_bool;
		func_575(var_295_bool, var_296_bool, var_314_bool);
		if(var_314_bool != 0)
			var_296_bool = true;
	}
	if(var_296_bool != 0) {
		var_295_bool = true;
		return 0;
	}
	var_295_bool = false;
}


void func_1460(object var_15_object, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	@AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	object var_26_object;
	var_15_object = var_26_object;
	func_1348(var_26_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1079(string var_40_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_41_string;
	var_40_string = var_41_string;
	func_1496(var_41_string);
	@PlayAnimation("all", var_40_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_40_string);
	@RemoveEnvelope();
}


void func_1210(float var_394_float, object var_395_object, float var_396_float, int var_397_int)
{
	int var_407_int; int var_409_int;
	object var_414_object;
	var_395_object = var_414_object;
	bool var_413_bool;
	func_1176(var_413_bool, var_414_object, "health");
	if(!var_413_bool) //@nz
		var_394_float = 0.0;
	bool var_417_bool; object var_418_object;
	func_1176(var_417_bool, var_418_object, "armor");
	if(!var_417_bool) //@nz
		var_407_int = 0;
	else
		var_418_object->GetProperty("armor", var_407_int);
	string var_422_string; int var_423_int;
	var_397_int = var_423_int;
	func_1150(var_422_string, var_423_int);
	string var_408_string = "armor_" + var_422_string;
	bool var_428_bool; object var_429_object; string var_430_string;
	var_395_object = var_429_object;
	func_1176(var_428_bool, var_429_object, var_430_string);
	if(!var_428_bool) //@nz
		var_409_int = 0;
	else
		var_395_object->GetProperty(var_430_string, var_409_int);

	float var_432_float;
	func_1553(var_432_float, ((var_407_int + var_409_int) / 100.0), (float)1);
	float var_410_float;
	var_432_float = var_410_float;
	float var_411_float;
	var_395_object->GetProperty("health", var_411_float);
	float var_412_float = var_396_float * (1 - var_410_float);
	float var_442_float;
	func_1560(var_442_float, (var_411_float - var_412_float), (float)0, (float)1);
	var_395_object->SetProperty("health", var_442_float);
	bool var_448_bool; object var_449_object;
	var_395_object = var_449_object;
	func_1171(var_448_bool, var_449_object);
	if(var_448_bool != 0) {
		float var_450_float = -var_412_float;
		func_1606(var_450_float);
	}
	var_412_float = var_394_float;
	
}


void func_575(object var_0_object, float var_4_float, bool var_314_bool)
{
	object var_320_object; float var_322_float; cvector var_323_cvector; cvector var_324_cvector;
	@GetScene(var_320_object);
	bool var_321_bool = false;
	
	for(;;) {
		cvector var_325_cvector;
		func_1164(var_325_cvector, var_0_object);
		var_331_int = -var_325_cvector;
		@FindDirLength(var_322_float, var_331_int, var_4_float);
		if(var_322_float < var_4_float) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_323_cvector); //@t
				@GetPFPosition(var_324_cvector);
				@WaitForAnimEnd();
				func_663(var_324_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_321_bool = true;
				bool var_336_bool;
				func_531(var_324_cvector, var_336_bool);
				var_337_bool = !var_336_bool; //@nz
				if(var_337_bool == 0) goto Label_616;
		}
		for(;;) {
			var_321_bool = var_314_bool;

		}

	Label_616:
	}
}
EMIT "Stack[-5] = 0";


void func_1474(object var_228_object)
{
	cvector var_232_cvector;
	var_228_object->GetPosition(var_232_cvector);
	cvector var_233_cvector;
	@GetPosition(var_233_cvector);
	cvector var_234_cvector = var_232_cvector - var_233_cvector;
	var_235_float = GetByIndex(var_234_cvector, 0);
	var_236_float = GetByIndex(var_234_cvector, 2);
	@RotateAsync(var_235_float, var_236_float);
}


void func_324(object var_0_object, int var_1_int, bool var_343_bool, float var_344_float)
{
	string var_352_string;
	func_663(var_352_string);
	int var_349_int;
	@irand(var_349_int, var_1_int);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1654();
	@PlayAnimation("all", ("attack_begin" + (var_349_int + 1)));
	@WaitForAnimEnd();
	int var_351_int;
	func_631(var_351_int, var_352_string);
	bool var_377_bool;
	func_1324(var_377_bool, var_0_object);
	if(!var_377_bool) { //@nz
		@StopAsync();
		var_343_bool = false;
		return 8;
	}
	float var_380_float; int var_381_int;
	var_344_float = var_380_float;
	var_349_int = var_381_int;
	func_285(var_352_string, var_380_float, var_381_int);
	bool var_350_bool;
	@HasAnimation(var_350_bool, "all", ("attack_middle" + var_349_int));
	if(var_350_bool != 0) {
		func_1654();
		@PlayAnimation("all", ("attack_middle" + var_349_int));
		@WaitForAnimEnd();
		func_663(var_352_string);
		bool var_469_bool;
		func_1324(var_469_bool, var_0_object);
		if(!var_469_bool) { //@nz
			@StopAsync();
			var_343_bool = false;
			return 8;
		}
		float var_472_float; int var_473_int;
		var_344_float = var_472_float;
		func_285(var_352_string, var_472_float, var_473_int);
		var_351_int = 1;

		for(;;) {
			var_352_string = (("attack_middle" + var_473_int) + "_") + var_351_int;
			@HasAnimation(var_350_bool, "all", var_352_string);
			if(!var_350_bool) { //@nz
			} else {
				func_1654();
				@PlayAnimation("all", var_352_string);
				@WaitForAnimEnd();
				func_663(var_352_string);
				bool var_495_bool;
				func_1324(var_495_bool, var_0_object);
				if(!var_495_bool) { //@nz
					@StopAsync();
					var_343_bool = false;
					return 8;
				}
				float var_498_float; int var_499_int;
				var_344_float = var_498_float;
				var_349_int = var_499_int;
				func_285(var_352_string, var_498_float, var_499_int);
				var_351_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_349_int));
		bool var_484_bool;
		func_677(var_484_bool);
		if(var_484_bool != 0) {
			bool var_485_bool;
			func_461(var_485_bool, 0.75);
			@StopAsync();
		}
		var_343_bool = true;
		return 8;

	}
}


void func_1348(object var_26_object)
{
	string var_40_string;
	if(var_26_object == null)
		return 14;
	bool var_34_bool;
	@IsDead(var_34_bool);
	if(var_34_bool != 0)
		return 14;
	int var_35_int;
	@GetSecondaryAnimationType(var_35_int);
	if(var_35_int < 0)
		return 14;
	cvector var_36_cvector;
	var_26_object->GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_39_cvector, 0);
	var_46_float = GetByIndex(var_38_cvector, 0);
	var_48_float = GetByIndex(var_39_cvector, 2);
	var_49_float = GetByIndex(var_38_cvector, 2);
	if(((var_45_float * var_46_float) + (var_48_float * var_49_float)) >= 0)
		var_40_string = "fhit";
	else
		var_40_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_40_string + "1"), (var_40_string + "2"), -10);
	
}


void func_1606(float var_450_float)
{
	object var_452_object;
	@CreateFloatVector(var_452_object);
	var_452_object->add(var_450_float);
	if(var_450_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_452_object);
}
EMIT "Stack[-1] = 0";


void func_461(bool var_485_bool, float var_486_float)
{
	float var_489_float; bool var_490_bool;
	@rand(var_489_float);
	if(var_489_float < var_486_float) {

		for(;;) {
			@IsAnimationPlaying(var_490_bool);
			if(!var_490_bool) { //@nz
			} else {
				bool var_493_bool;
				func_559(var_493_bool);
				if(var_493_bool != 0) {
					var_485_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_485_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_663(var_490_bool);
}


void func_1485(object var_142_object)
{
	float var_145_float;
	var_142_object->GetEyesHeight(var_145_float);
	cvector var_146_cvector = [0.0, 0.0, 0.0];
	var_147_float = GetByIndex(var_146_cvector, 1);
	var_145_float = var_147_float;
	SetByIndex(var_146_cvector, 1) = var_147_float;
	@LookAsync(var_142_object, "head", var_146_cvector);
}


// @pe
void func_1111(void)
{
}


void func_1496(string var_41_string)
{
	bool var_50_bool; int var_51_int; bool var_52_bool; int var_53_int; bool var_54_bool; float var_55_float; cvector var_56_cvector; cvector var_57_cvector;
	@IsExisting3DSound(var_50_bool, var_41_string);
	if(!var_50_bool) { //@nz
		var_51_int = 0;

		for(;;) {
			@IsExisting3DSound(var_52_bool, (var_41_string + (var_51_int + 1)));
			if(!var_52_bool) { //@nz
				break;
			Label_1516:
				@irand(var_53_int, var_51_int);
				var_41_string += (var_53_int + 1);
	}
			@Is3DSoundLoaded(var_54_bool, var_41_string);
			if(var_54_bool != 0) {
				@GetEyesHeight(var_55_float);
				@GetDirection(var_56_cvector);
				var_57_cvector = var_56_cvector * 50;
				var_68_float = GetByIndex(var_57_cvector, 1);
				SetByIndex(var_57_cvector, 1) = (var_68_float + var_55_float);
				@PlayGlobalSound(var_41_string, var_57_cvector);
			}
		}
		var_51_int += 1;
	}
	var_63_bool = !var_51_int; //@nz
	if(var_63_bool == 0) goto Label_1516;
}


void func_1623(float var_131_float)
{
	object var_133_object;
	@CreateFloatVector(var_133_object);
	var_133_object->add(var_131_float);
	@SendWorldWndMessage(16, var_133_object);
}
EMIT "Stack[-1] = 0";


void func_988(object var_18_object)
{
	cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; string var_33_string; object var_34_object; bool var_35_bool; bool var_36_bool; float var_37_float; cvector var_38_cvector;
	if(var_18_object == null) {
		func_1079("fdie");
	} else {
		var_18_object->GetPosition(var_29_cvector);
		@GetPosition(var_30_cvector);
		@GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		if(((var_72_float * var_73_float) + (var_75_float * var_76_float)) >= 0)
			var_33_string = "fdie";
		else
			var_33_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", 2);
		if(var_83_bool != 0) {
			var_18_object->HasScriptProperty(var_35_bool, "Owner");
			if(var_35_bool != 0) {
				var_18_object->GetScriptProperty(var_34_object, "Owner");
				if(var_34_object == null)
					var_18_object = var_34_object;
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", 1);
		if(var_90_bool != 0) {
			var_34_object->GetEyesHeight(var_37_float);
			var_38_cvector = [0.0, 0.0, 0.0];
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			@LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = true;
		} else {
			var_36_bool = false;

		}
		string var_93_string;
		var_33_string = var_93_string;
		func_1496(var_93_string);
		@PlayAnimation("all", var_33_string);
		@WaitForAnimEnd();
		if(var_36_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_33_string);
		@RemoveEnvelope();
		var_34_object = null;
	}
	
}


void func_1633(bool var_12_bool, string var_13_string, string var_14_string)
{
	object var_16_object;
	@FindActor(var_16_object, var_13_string);
	if(var_16_object == null)
		var_12_bool = false;
	@Trigger(var_16_object, var_14_string);
	var_12_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1762(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	TaskCall(2);
	func_939(var_11_object);
	TaskReturn();
}


void func_1127(bool var_10_bool)
{
	var_10_bool = true;
}


void func_488(object var_0_object, bool var_282_bool, float var_283_float)
{
	bool var_289_bool; cvector var_290_cvector; cvector var_291_cvector; cvector var_292_cvector; float var_293_float;
	
	for(;;) {
		@IsAnimationPlaying(var_289_bool);
		if(!var_289_bool) //@nz
			break;
		bool var_295_bool;
		func_559(var_295_bool);
		if(var_295_bool != 0) {
			var_282_bool = true;
			return 10;
		}
		bool var_338_bool;
		func_1324(var_338_bool, var_0_object);
		if(!var_338_bool) { //@nz
			var_282_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_290_cvector); //@t
		@GetPFPosition(var_291_cvector);
		var_292_cvector = var_290_cvector - var_291_cvector;
		var_293_float = var_292_cvector | var_292_cvector;
		if(var_293_float < (var_283_float * var_283_float)) {
			bool var_343_bool; float var_344_float;
			var_283_float = var_344_float;
			func_324(var_292_cvector, var_293_float, var_343_bool, var_344_float);
			var_282_bool = true;
			return 10;
		}
		@sync();
	}
	func_663(var_293_float);
	var_282_bool = false;
}


void func_746(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_912(var_9_object);
}


void func_250(int var_1_int, int var_2_int, float var_4_float)
{
	bool var_50_bool; bool var_51_bool; cvector var_52_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_50_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_50_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_51_bool, ("attack" + (var_2_int + 1)));
			if(!var_51_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_52_cvector, "all", "bjump");
		var_66_float = GetByIndex(var_52_cvector, 2);
		var_4_float = -var_66_float;

	}
}


void func_620(object var_0_object, bool var_245_bool)
{
	bool var_247_bool;
	var_250_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_250_bool != 0) {
		var_0_object->IsAttacking(var_247_bool); //@t
		var_247_bool = var_245_bool;
	}
	var_245_bool = false;
}


void func_1645(object var_118_object)
{
	bool var_120_bool;
	@IsPlayerActor(var_118_object, var_120_bool);
	if(var_120_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1392(object var_13_object, int var_14_int, float var_15_float)
{
	cvector var_25_cvector; object var_26_object; int var_27_int; bool var_28_bool; cvector var_29_cvector; cvector var_30_cvector;
	bool var_34_bool = false;
	bool var_35_bool = false;
	if(var_13_object != 0) {
		if(var_14_int != 4)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		if(var_14_int != 5)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		cvector var_41_cvector; cvector var_42_cvector;
		cvector var_43_cvector; object var_44_object;
		var_13_object = var_44_object;
		func_1164(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1543(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		@CreateVectorVector(var_26_object);
		var_27_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_27_int), var_28_bool, var_29_cvector, var_30_cvector);
			if(!var_28_bool) { //@nz
				break;
			Label_1454:
				var_26_object = null;
	}
			object var_103_object;
			var_13_object = var_103_object;
			func_1348(var_103_object);
		}
		if((var_30_cvector | var_25_cvector) >= 0.70710677)
			var_26_object->add(var_29_cvector);
		var_27_int += 1;
	}
	int var_31_int;
	var_26_object->size(var_31_int);
	if(var_31_int == 0) goto Label_1454;
	int var_32_int;
	@irand(var_32_int, var_31_int);
	cvector var_33_cvector;
	var_26_object->get(var_33_cvector, var_32_int);
	object var_58_object; int var_59_int; float var_60_float; cvector var_61_cvector; cvector var_62_cvector;
	var_13_object = var_58_object;
	var_14_int = var_59_int;
	var_15_float = var_60_float;
	var_33_cvector = var_61_cvector;
	var_62_cvector = -var_25_cvector;
	func_1460(var_60_float, var_61_cvector, var_62_cvector);
}


void func_1654(void)
{
	object var_356_object;
	@GetScene(var_356_object);
	object var_358_object;
	func_1537(var_358_object);
	@BroadcastMessage("battle", var_358_object, var_356_object);
}
EMIT "Stack[-1] = 0";


void func_631(int var_2_int, int var_5_int)
{
	int var_365_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_364_float;
	@rand(var_364_float);
	float var_371_float;
	func_681(var_371_float);
	if(var_364_float < var_371_float) {
		@irand(var_365_int, var_2_int);
		@Speak("attack" + (var_365_int + 1));
		int var_376_int;
		func_679(var_376_int);
		var_5_int = var_376_int;
	}
}


// @pe
void func_890(object var_0_object, int var_1_int, int var_17_int)
{
	if(var_17_int != 0)
		return 0;
	bool var_20_bool;
	func_928(var_20_bool, var_1_int);
	if(!var_20_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1150(string var_422_string, int var_423_int)
{
	if(var_423_int == 2) {
		var_422_string = "fire";
		return 0;
	EMIT "GOTO 0x48a";
	}
	if(var_423_int == 1) {
		var_422_string = "bullet";
		return 0;
	}
	var_422_string = "phys";
}


