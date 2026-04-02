maintask task_0
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_42();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
		void OnAttacked(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_13_object)
		{
		object var_15_object;
		var_13_object = var_15_object;
			bool var_14_bool;
		func_1812(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_123();
			object var_50_object;
			var_13_object = var_50_object;
			func_1819(var_50_object);
		}
		}

	void OnSee(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		bool var_11_bool;
		@IsPlayerActor(var_9_bool, var_11_bool);
		if(var_11_bool != 0) {
			object var_13_object;
			var_9_bool = var_13_object;
			func_8();
		}
	}

	void OnHear(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		bool var_11_bool;
		@IsPlayerActor(var_9_bool, var_11_bool);
		if(var_11_bool != 0) {
			object var_13_object;
			var_9_bool = var_13_object;
			func_8();
		}
	}

}


task task_1
{
	void OnUse(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		bool var_11_bool;
		@IsOverrideActive(var_11_bool);
		if(!var_11_bool) { //@nz
			object var_13_object;
			var_9_bool = var_13_object;
			func_1831(var_13_object);
		}
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, int var_9_int)
	{
		if(var_9_int == 1) {
			func_1723(var_1_int);
		} else {
			int var_17_int;
			func_1186(var_8_bool, var_17_int, var_17_int);
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
			func_1575(var_13_object);
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
		func_1042(var_9_object);
		object var_14_object;
		var_9_object = var_14_object;
		func_1806();
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
	func_1477(var_13_object, var_14_int, var_15_float);
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
	func_1545(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1767(var_10_object);
}


void func_1545(object var_15_object, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	@AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	object var_26_object;
	var_15_object = var_26_object;
	func_1433(var_26_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_267(string var_99_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_100_string;
	var_99_string = var_100_string;
	func_1586(var_100_string);
	@PlayAnimation("all", var_99_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_99_string);
	@RemoveEnvelope();
}


void func_1295(float var_404_float, object var_405_object, float var_406_float, int var_407_int)
{
	int var_417_int; int var_419_int;
	object var_424_object;
	var_405_object = var_424_object;
	bool var_423_bool;
	func_1261(var_423_bool, var_424_object, "health");
	if(!var_423_bool) //@nz
		var_404_float = 0.0;
	bool var_427_bool; object var_428_object;
	func_1261(var_427_bool, var_428_object, "armor");
	if(!var_427_bool) //@nz
		var_417_int = 0;
	else
		var_428_object->GetProperty("armor", var_417_int);
	string var_432_string; int var_433_int;
	var_407_int = var_433_int;
	func_1235(var_432_string, var_433_int);
	string var_418_string = "armor_" + var_432_string;
	bool var_438_bool; object var_439_object; string var_440_string;
	var_405_object = var_439_object;
	func_1261(var_438_bool, var_439_object, var_440_string);
	if(!var_438_bool) //@nz
		var_419_int = 0;
	else
		var_405_object->GetProperty(var_440_string, var_419_int);

	float var_442_float;
	func_1643(var_442_float, ((var_417_int + var_419_int) / 100.0), (float)1);
	float var_420_float;
	var_442_float = var_420_float;
	float var_421_float;
	var_405_object->GetProperty("health", var_421_float);
	float var_422_float = var_406_float * (1 - var_420_float);
	float var_452_float;
	func_1650(var_452_float, (var_421_float - var_422_float), (float)0, (float)1);
	var_405_object->SetProperty("health", var_452_float);
	bool var_458_bool; object var_459_object;
	var_405_object = var_459_object;
	func_1256(var_458_bool, var_459_object);
	if(var_458_bool != 0) {
		float var_460_float = -var_422_float;
		func_1696(var_460_float);
	}
	var_422_float = var_404_float;
	
}


void func_784(object var_0_object, bool var_292_bool, float var_293_float)
{
	bool var_299_bool; cvector var_300_cvector; cvector var_301_cvector; cvector var_302_cvector; float var_303_float;
	
	for(;;) {
		@IsAnimationPlaying(var_299_bool);
		if(!var_299_bool) //@nz
			break;
		bool var_305_bool;
		func_855(var_305_bool);
		if(var_305_bool != 0) {
			var_292_bool = true;
			return 10;
		}
		bool var_348_bool;
		func_1409(var_348_bool, var_0_object);
		if(!var_348_bool) { //@nz
			var_292_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_300_cvector); //@t
		@GetPFPosition(var_301_cvector);
		var_302_cvector = var_300_cvector - var_301_cvector;
		var_303_float = var_302_cvector | var_302_cvector;
		if(var_303_float < (var_293_float * var_293_float)) {
			bool var_353_bool; float var_354_float;
			var_293_float = var_354_float;
			func_620(var_302_cvector, var_303_float, var_353_bool, var_354_float);
			var_292_bool = true;
			return 10;
		}
		@sync();
	}
	func_959(var_303_float);
	var_292_bool = false;
}


void func_1042(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1208(var_9_object);
}


// @pe
void func_1812(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1409(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
}


void func_1559(object var_238_object)
{
	cvector var_242_cvector;
	var_238_object->GetPosition(var_242_cvector);
	cvector var_243_cvector;
	@GetPosition(var_243_cvector);
	cvector var_244_cvector = var_242_cvector - var_243_cvector;
	var_245_float = GetByIndex(var_244_cvector, 0);
	var_246_float = GetByIndex(var_244_cvector, 2);
	@RotateAsync(var_245_float, var_246_float);
}


// @pe
void func_1819(object var_50_object)
{
	object var_51_object;
	var_50_object = var_51_object;
	func_1885(var_51_object);
}


void func_1825(int var_54_int)
{
	int var_56_int;
	@GetVariable("branch", var_56_int);
	var_56_int = var_54_int;
}


void func_1570(bool var_24_bool)
{
	bool var_26_bool;
	@IsLoaded(var_26_bool);
	var_26_bool = var_24_bool;
}


void func_546(object var_1_object, int var_2_int, bool var_4_bool)
{
	bool var_94_bool; bool var_95_bool; cvector var_96_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_94_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_94_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_95_bool, ("attack" + (var_2_int + 1)));
			if(!var_95_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_96_cvector, "all", "bjump");
		var_110_float = GetByIndex(var_96_cvector, 2);
		var_4_bool = -var_110_float;

	}
}


// @pe
void func_1831(object var_13_object)
{
	int var_14_int;
	func_1825(var_14_int);
	if(var_14_int == 1)
		@WorkWithCorpse(var_13_object);
	else
		@Barter(var_13_object);
	
}


void func_1575(object var_13_object)
{
	float var_16_float;
	var_13_object->GetEyesHeight(var_16_float);
	cvector var_17_cvector = [0.0, 0.0, 0.0];
	var_18_float = GetByIndex(var_17_cvector, 1);
	var_16_float = var_18_float;
	SetByIndex(var_17_cvector, 1) = var_18_float;
	@LookAsync(var_13_object, "head", var_17_cvector);
}


void func_42(void)
{
	int var_19_int; int var_20_int; bool var_21_bool; float var_22_float; bool var_23_bool;
	@WaitForAnimEnd();
	bool var_24_bool;
	func_1570(var_24_bool);
	if(!var_24_bool) //@nz
		return 14;
	int var_28_int;
	func_1750(var_28_int);
	int var_17_int;
	var_28_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_41_bool = false;
		if(var_18_int < 5) {
			bool var_44_bool;
			func_1570(var_44_bool);
			if(var_44_bool != 0)
				var_41_bool = true;
		}
		if(var_41_bool != 0) {
			@irand(var_19_int, 3);
			if(var_19_int == 0) {
				if(var_17_int == 0) goto Label_89;
				@irand(var_20_int, var_17_int);
				string var_50_string; int var_51_int;
				var_20_int = var_51_int;
				func_1743(var_50_string, var_51_int);
				@PlayAnimation("all", var_50_string);
				@WaitForAnimEnd(var_21_bool);
				if(!var_21_bool) { //@nz
				} else {
			} else {
			if(var_19_int == 1) {
				@rand(var_22_float, 4);
				@Sleep((var_22_float + 1), var_23_bool);
				if(!var_23_bool) { //@nz
					goto Label_118;
				}
			} else if(var_18_int != 0) {
				goto Label_118;
			}
			}
					bool var_53_bool;
					func_121(var_53_bool);
					var_54_bool = !var_53_bool; //@nz
					if(var_54_bool == 0) goto Label_113;
			}
		}
	Label_118:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_113:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


// @pe
void func_299(object var_59_object)
{
	
	for(;;) {
		object var_66_object;
		func_317(var_62_int, var_63_bool, var_64_float, var_65_int, var_66_object, var_66_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_1586(string var_100_string)
{
	bool var_109_bool; int var_110_int; bool var_111_bool; int var_112_int; bool var_113_bool; float var_114_float; cvector var_115_cvector; cvector var_116_cvector;
	@IsExisting3DSound(var_109_bool, var_100_string);
	if(!var_109_bool) { //@nz
		var_110_int = 0;

		for(;;) {
			@IsExisting3DSound(var_111_bool, (var_100_string + (var_110_int + 1)));
			if(!var_111_bool) { //@nz
				break;
			Label_1606:
				@irand(var_112_int, var_110_int);
				var_100_string += (var_112_int + 1);
	}
			@Is3DSoundLoaded(var_113_bool, var_100_string);
			if(var_113_bool != 0) {
				@GetEyesHeight(var_114_float);
				@GetDirection(var_115_cvector);
				var_116_cvector = var_115_cvector * 50;
				var_127_float = GetByIndex(var_116_cvector, 1);
				SetByIndex(var_116_cvector, 1) = (var_127_float + var_114_float);
				@PlayGlobalSound(var_100_string, var_116_cvector);
			}
		}
		var_110_int += 1;
	}
	var_122_bool = !var_110_int; //@nz
	if(var_122_bool == 0) goto Label_1606;
}


void func_1844(string var_60_string)
{
	object var_64_object;
	@CreateInvItem(var_64_object);
	var_64_object->SetItemName(var_60_string);
	var_64_object->SetProperty("Organ", 1);
	int var_65_int;
	var_64_object->GetItemID(var_65_int);
	bool var_66_bool;
	@AddItem(var_66_bool, var_64_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_311(float var_401_float)
{
	var_401_float = 0.03;
}


// @pe
void func_314(int var_408_int)
{
	var_408_int = 0;
}


void func_827(object var_0_object, bool var_307_bool)
{
	cvector var_313_cvector; cvector var_314_cvector;
	bool var_318_bool;
	func_1409(var_318_bool, var_0_object);
	if(!var_318_bool) { //@nz
		var_307_bool = false;
		return 10;
	}
	bool var_321_bool;
	float var_317_float;
	func_916(var_317_float, var_321_bool);
	if(var_321_bool != 0) {
		var_0_object->GetPFPosition(var_313_cvector); //@t
		@GetPFPosition(var_314_cvector);
		var_0_object->GetAttackDistance(var_317_float); //@t
		var_307_bool = ((var_313_cvector - var_314_cvector) | (var_313_cvector - var_314_cvector)) <= ((var_317_float + 50) * (var_317_float + 50));
		return 10;
	}
	var_307_bool = false;
}


void func_1084(object var_0_object, object var_1_object, bool var_164_bool, object var_165_object, float var_166_float, float var_167_float, bool var_168_bool, bool var_169_bool)
{
	bool var_178_bool; object var_180_object; cvector var_181_cvector; cvector var_182_cvector; float var_184_float; object var_185_object;
	var_0_object = false;
	var_1_object = var_165_object;
	bool var_179_bool;
	var_169_bool = var_179_bool;
	
	for(;;) {
		bool var_186_bool; object var_187_object;
		var_165_object = var_187_object;
		func_1224(var_186_bool, var_187_object);
		if(!var_186_bool) { //@nz
			var_164_bool = false;
			return 16;
		}
		var_165_object->GetPosition(var_181_cvector);
		@GetPosition(var_182_cvector);
		var_184_float = (var_181_cvector - var_182_cvector) | (var_181_cvector - var_182_cvector);
		bool var_191_bool = false;
		if(var_167_float > 0) {
			if(var_184_float > (var_167_float * var_167_float))
				var_191_bool = true;
		}
		if(var_191_bool != 0) {
			@Stop();
			var_164_bool = false;
			return 16;
		}
		if(var_184_float > (var_166_float * var_166_float)) {
			var_165_object->GetPFPosition(var_181_cvector);
			@FindPathTo(var_185_object, var_181_cvector);
			if(var_185_object != null) {
				var_185_object = var_180_object;
				var_185_object = null;
			}
			if(var_180_object != null) {
				if(var_179_bool == 0) goto Label_1137;
				var_179_bool = false;
				@RotatePath(var_180_object, var_178_bool);
				if(!var_178_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_204_string;
						func_1231(var_204_string);
						string var_205_string;
						func_1233(var_205_string);
						@FollowPath(var_180_object, var_168_bool, var_178_bool, var_204_string, var_205_string);
						if(!var_178_bool) { //@nz
							if(var_0_object == 0) goto Label_1156;
							var_180_object = null;
						}
					EMIT "GOTO 0x485";

					Label_1156:
						} else {
					var_180_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_178_bool);
					if(!var_178_bool) { //@nz
						if(var_0_object != 0) {
							var_180_object = null;
							goto Label_1184;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1184;
		}
			var_185_object = null;
			goto Label_1182;

		Label_1182:
			var_180_object = null;

		}
	Label_1184:
		for(;;) {
			var_164_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_317(object var_0_object, int var_3_int, float var_5_float, object var_66_object, bool var_67_bool, float var_68_float, bool var_141_bool, bool var_233_bool)
{
	float var_80_float; cvector var_81_cvector; cvector var_82_cvector; bool var_84_bool; float var_87_float; cvector var_88_cvector; bool var_89_bool; float var_90_float;
	func_546(var_88_cvector, var_89_bool, var_90_float);
	var_5_float = 0;
	var_115_bool = IsFuncExist(var_66_object, "@GetAttackDistance", 1);
	if(var_115_bool != 0) {
		var_66_object->GetAttackDistance(var_80_float);
		var_80_float += 50;
	} else {
						var_68_float = var_80_float;
	}
	if(var_80_float >= 150)
		var_80_float = 150;
	var_3_int = false;
	var_0_object = var_66_object;
	bool var_83_bool;
	@IsPlayerActor(var_0_object, var_83_bool);
	if(var_83_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_121_object;
		func_1627(var_121_object);
		@SendPlayerEnemy(var_66_object, var_121_object);
	}
	if(var_67_bool != 0)
		var_84_bool = false;
	else
		var_84_bool = true;

	
Label_357:
	for(;;) {
		bool var_124_bool = false;
		bool var_125_bool;
		func_1409(var_125_bool, var_0_object);
		if(var_125_bool != 0) {
			if(!var_3_int) //@nz
				var_124_bool = true;
		}
		if(var_124_bool != 0) {
			func_959(var_90_float);
			var_0_object->GetPFPosition(var_81_cvector); //@t
			@GetPFPosition(var_82_cvector);
			var_87_float = (var_81_cvector - var_82_cvector) | (var_81_cvector - var_82_cvector);
			if(var_87_float >= ((400.0 + var_80_float) * (400.0 + var_80_float))) {
				bool var_135_bool; float var_137_float;
				var_80_float = var_137_float;
				TaskCall(3);
				func_979(var_143_bool, var_135_bool, var_0_object, var_137_float, 3000.0, true, false);
				TaskReturn();
				if(!var_141_bool) { //@nz
				} else {
					var_84_bool = false;
			} else {
			if(var_87_float >= (var_68_float * var_68_float)) {
				var_0_object->GetPFPosition(var_88_cvector); //@t
				@CanReachByPF(var_89_bool, var_88_cvector);
				if(!var_89_bool) { //@nz
					bool var_227_bool; float var_229_float;
					var_80_float = var_229_float;
					TaskCall(3);
					func_979(var_235_bool, var_227_bool, var_0_object, var_229_float, 3000.0, true, false);
					TaskReturn();
					if(!var_233_bool) { //@nz
						goto Label_529;
					}
					var_84_bool = false;
					goto Label_357;
				}
				if(!var_84_bool) { //@nz
					func_1559(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_959(var_90_float);
					@StopAsync();
					var_84_bool = true;
					bool var_249_bool;
					func_1409(var_249_bool, var_0_object);
					if(!var_249_bool) { //@nz
						goto Label_529;
					}
				}
				@rand(var_90_float);
				bool var_252_bool;
				var_254_bool = var_90_float < 0.25;
				if(var_254_bool != 1) {
					bool var_255_bool;
					func_916(true, var_255_bool);
					if(var_255_bool != 1)
						var_252_bool = false;
				}
				if(var_252_bool != 0) {
					@Face(var_0_object);
					func_966();
					@PlayAnimation("all", "attack_stay");
					bool var_292_bool; float var_293_float;
					func_784(var_90_float, var_292_bool, var_293_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_959(var_90_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_514_bool;
					func_916(var_90_float, var_514_bool);
					var_515_bool = !var_514_bool; //@nz
					if(var_515_bool == 0) goto Label_519;
					bool var_516_bool;
					func_1409(var_516_bool, var_0_object);
					if(!var_516_bool) { //@nz
						goto Label_529;
					}
					var_0_object->GetPFPosition(var_81_cvector); //@t
					@GetPFPosition(var_82_cvector);
					if(!(((var_81_cvector - var_82_cvector) | (var_81_cvector - var_82_cvector)) < (var_293_float * var_293_float))) goto Label_519;
					bool var_521_bool; float var_522_float;
					var_68_float = var_522_float;
					func_620(var_89_bool, var_90_float, var_521_bool, var_522_float);
					var_523_bool = !var_521_bool; //@nz
					if(var_523_bool == 0) goto Label_519;
					goto Label_529;
			}
				bool var_524_bool; float var_525_float;
				var_68_float = var_525_float;
				func_620(var_89_bool, var_90_float, var_524_bool, var_525_float);
				if(!var_524_bool) { //@nz
					goto Label_529;
				}
				var_84_bool = true;

			}
		Label_519:
			goto Label_528;
			}
			Label_528:
			}
		}
	Label_529:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_83_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1861(void)
{
	int var_54_int;
	func_1825(var_54_int);
	if(var_54_int != 1) {
	}
	func_1844("liver");
	func_1844("kidney");
	func_1844("heart");
	func_1844("blood");
}


void func_581(object var_0_object, float var_390_float, int var_391_int)
{
	object var_395_object; float var_396_float; float var_397_float;
	@GetVictim((var_390_float * 0.9), var_395_object);
	@ReportAttack(var_0_object);
	if(var_395_object == var_0_object) {
		float var_401_float; object var_402_object; int var_403_int;
		var_395_object = var_402_object;
		var_391_int = var_403_int;
		func_311(var_403_int);
		var_401_float = var_396_float;
		float var_404_float; object var_405_object; float var_406_float; int var_407_int;
		var_395_object = var_405_object;
		int var_408_int; object var_409_object; int var_410_int;
		var_395_object = var_409_object;
		var_391_int = var_410_int;
		func_314(var_410_int);
		var_408_int = var_407_int;
		func_1295(var_404_float, var_405_object, var_406_float, var_407_int);
		var_404_float = var_397_float;
		int var_469_int;
		func_964(var_469_int);
		@ReportHit(var_0_object, var_469_int, var_397_float, var_406_float);
		object var_470_object; float var_471_float;
		var_395_object = var_470_object;
		var_397_float = var_471_float;
		func_971();
	}
}
EMIT "Stack[-3] = 0";


void func_855(bool var_305_bool)
{
	bool var_306_bool = false;
	bool var_307_bool;
	func_827(var_306_bool, var_307_bool);
	if(var_307_bool != 0) {
		bool var_324_bool;
		func_871(var_305_bool, var_306_bool, var_324_bool);
		if(var_324_bool != 0)
			var_306_bool = true;
	}
	if(var_306_bool != 0) {
		var_305_bool = true;
		return 0;
	}
	var_305_bool = false;
}


void func_1368(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	var_38_object->IsDead(var_40_bool);
	var_40_bool = var_37_bool;
}


void func_1627(object var_56_object)
{
	object var_58_object;
	@self(var_58_object);
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


void func_1373(bool var_26_bool, object var_27_object)
{
	if(var_27_object == null) {
		var_26_bool = false;
		return 4;
	}
	bool var_33_bool = false;
	var_36_bool = IsFuncExist(var_27_object, "IsDead", 1);
	if(var_36_bool != 0) {
		bool var_37_bool; object var_38_object;
		var_27_object = var_38_object;
		func_1368(var_37_bool, var_38_object);
		if(var_37_bool != 0)
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		var_26_bool = false;
		return 4;
	}
	object var_30_object;
	@GetScene(var_30_object);
	if(var_30_object == null) {
		var_26_bool = false;
		return 4;
	}
	object var_31_object;
	var_27_object->GetScene(var_31_object);
	if(var_30_object != var_31_object) {
		var_26_bool = false;
		return 4;
	}
	var_26_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1885(object var_51_object)
{
	@SetVariable("b1q04_attack", 1);
	object var_53_object;
	@GetScene(var_53_object);
	object var_56_object;
	func_1627(var_56_object);
	var_53_object->RemoveStationaryActor(var_56_object);
	object var_59_object;
	var_51_object = var_59_object;
	TaskCall(2);
	func_299(var_59_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1633(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_50_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_50_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_50_float;
}


void func_871(object var_0_object, bool var_4_bool, bool var_324_bool)
{
	object var_330_object; float var_332_float; cvector var_333_cvector; cvector var_334_cvector;
	@GetScene(var_330_object);
	bool var_331_bool = false;
	
	for(;;) {
		cvector var_335_cvector;
		func_1249(var_335_cvector, var_0_object);
		var_341_int = -var_335_cvector;
		@FindDirLength(var_332_float, var_341_int, var_4_bool);
		if(var_332_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_333_cvector); //@t
				@GetPFPosition(var_334_cvector);
				@WaitForAnimEnd();
				func_959(var_334_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_331_bool = true;
				bool var_346_bool;
				func_827(var_334_cvector, var_346_bool);
				var_347_bool = !var_346_bool; //@nz
				if(var_347_bool == 0) goto Label_912;
		}
		for(;;) {
			var_331_bool = var_324_bool;

		}

	Label_912:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1643(float var_442_float, float var_443_float, float var_444_float)
{
	if(var_443_float < var_444_float)
		var_443_float = var_442_float;
	else
		var_444_float = var_442_float;
	
}


void func_620(object var_0_object, object var_1_object, bool var_353_bool, float var_354_float)
{
	string var_362_string;
	func_959(var_362_string);
	int var_359_int;
	@irand(var_359_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1732();
	@PlayAnimation("all", ("attack_begin" + (var_359_int + 1)));
	@WaitForAnimEnd();
	int var_361_int;
	func_927(var_361_int, var_362_string);
	bool var_387_bool;
	func_1409(var_387_bool, var_0_object);
	if(!var_387_bool) { //@nz
		@StopAsync();
		var_353_bool = false;
		return 8;
	}
	float var_390_float; int var_391_int;
	var_354_float = var_390_float;
	var_359_int = var_391_int;
	func_581(var_362_string, var_390_float, var_391_int);
	bool var_360_bool;
	@HasAnimation(var_360_bool, "all", ("attack_middle" + var_359_int));
	if(var_360_bool != 0) {
		func_1732();
		@PlayAnimation("all", ("attack_middle" + var_359_int));
		@WaitForAnimEnd();
		func_959(var_362_string);
		bool var_479_bool;
		func_1409(var_479_bool, var_0_object);
		if(!var_479_bool) { //@nz
			@StopAsync();
			var_353_bool = false;
			return 8;
		}
		float var_482_float; int var_483_int;
		var_354_float = var_482_float;
		func_581(var_362_string, var_482_float, var_483_int);
		var_361_int = 1;

		for(;;) {
			var_362_string = (("attack_middle" + var_483_int) + "_") + var_361_int;
			@HasAnimation(var_360_bool, "all", var_362_string);
			if(!var_360_bool) { //@nz
			} else {
				func_1732();
				@PlayAnimation("all", var_362_string);
				@WaitForAnimEnd();
				func_959(var_362_string);
				bool var_505_bool;
				func_1409(var_505_bool, var_0_object);
				if(!var_505_bool) { //@nz
					@StopAsync();
					var_353_bool = false;
					return 8;
				}
				float var_508_float; int var_509_int;
				var_354_float = var_508_float;
				var_359_int = var_509_int;
				func_581(var_362_string, var_508_float, var_509_int);
				var_361_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_359_int));
		bool var_494_bool;
		func_973(var_494_bool);
		if(var_494_bool != 0) {
			bool var_495_bool;
			func_757(var_495_bool, 0.75);
			@StopAsync();
		}
		var_353_bool = true;
		return 8;

	}
}


// @pe
void func_1650(float var_45_float, float var_46_float, float var_47_float, float var_48_float)
{
	if(var_46_float < var_47_float) {
		var_47_float = var_45_float;
		return 0;
	}
	if(var_46_float > var_48_float) {
		var_48_float = var_45_float;
		return 0;
	}
	var_46_float = var_45_float;
}


void func_121(bool var_53_bool)
{
	var_53_bool = true;
}


void func_123(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1661(bool var_16_bool, object var_17_object, float var_18_float)
{
	if(!var_17_object) { //@nz
		var_16_bool = false;
		return 0;
	}
	if(var_18_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_18_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_23_float;
		var_18_float = var_23_float;
		func_1713(var_23_float);
		bool var_27_bool; object var_28_object; float var_30_float;
		var_17_object = var_28_object;
		var_18_float = var_30_float;
		func_1273(var_27_bool, var_28_object, "reputation", var_30_float, (float)0, (float)1);
		var_16_bool = true;
		return 0;

	}
	
	var_16_bool = false;
}


// @pe
void func_128(object var_11_object)
{
	object var_13_object;
	var_11_object = var_13_object;
	bool var_12_bool;
	func_1256(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		bool var_16_bool; object var_17_object;
		var_11_object = var_17_object;
		func_1661(var_16_bool, var_17_object, 0.0);
	}
	func_1861();
	@SetVariable("b1q04_dead", 1);
	object var_76_object;
	var_11_object = var_76_object;
	func_151(var_76_object);
}


void func_1409(bool var_22_bool, object var_23_object)
{
	object var_27_object;
	var_23_object = var_27_object;
	bool var_26_bool;
	func_1373(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_44_bool; object var_45_object;
	func_1261(var_44_bool, var_45_object, "noaccess");
	if(!var_44_bool) { //@nz
		var_22_bool = true;
		return 2;
	}
	int var_25_int;
	var_45_object->GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == 0;
}


void func_916(object var_0_object, bool var_255_bool)
{
	bool var_257_bool;
	var_260_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_260_bool != 0) {
		var_0_object->IsAttacking(var_257_bool); //@t
		var_257_bool = var_255_bool;
	}
	var_255_bool = false;
}


// @pe
void func_151(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	func_176(var_77_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1433(object var_26_object)
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


void func_927(int var_2_int, float var_5_float)
{
	int var_375_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_float != 0) {
		if((var_5_float + -1) > 0)
			return 4;
	}
	float var_374_float;
	@rand(var_374_float);
	float var_381_float;
	func_977(var_381_float);
	if(var_374_float < var_381_float) {
		@irand(var_375_int, var_2_int);
		@Speak("attack" + (var_375_int + 1));
		int var_386_int;
		func_975(var_386_int);
		var_5_float = var_386_int;
	}
}


void func_1696(float var_460_float)
{
	object var_462_object;
	@CreateFloatVector(var_462_object);
	var_462_object->add(var_460_float);
	if(var_460_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_462_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1186(object var_0_object, int var_1_int, int var_17_int)
{
	if(var_17_int != 0)
		return 0;
	bool var_20_bool;
	func_1224(var_20_bool, var_1_int);
	if(!var_20_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_176(object var_77_object)
{
	cvector var_88_cvector; cvector var_89_cvector; cvector var_90_cvector; cvector var_91_cvector; string var_92_string; object var_93_object; bool var_94_bool; bool var_95_bool; float var_96_float; cvector var_97_cvector;
	if(var_77_object == null) {
		func_267("fdie");
	} else {
		var_77_object->GetPosition(var_88_cvector);
		@GetPosition(var_89_cvector);
		@GetDirection(var_90_cvector);
		var_91_cvector = var_89_cvector - var_88_cvector;
		var_131_float = GetByIndex(var_91_cvector, 0);
		var_132_float = GetByIndex(var_90_cvector, 0);
		var_134_float = GetByIndex(var_91_cvector, 2);
		var_135_float = GetByIndex(var_90_cvector, 2);
		if(((var_131_float * var_132_float) + (var_134_float * var_135_float)) >= 0)
			var_92_string = "fdie";
		else
			var_92_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_77_object = var_93_object;
		var_142_bool = IsFuncExist(var_77_object, "GetScriptProperty", 2);
		if(var_142_bool != 0) {
			var_77_object->HasScriptProperty(var_94_bool, "Owner");
			if(var_94_bool != 0) {
				var_77_object->GetScriptProperty(var_93_object, "Owner");
				if(var_93_object == null)
					var_77_object = var_93_object;
			}
		}
		var_149_bool = IsFuncExist(var_93_object, "@GetEyesHeight", 1);
		if(var_149_bool != 0) {
			var_93_object->GetEyesHeight(var_96_float);
			var_97_cvector = [0.0, 0.0, 0.0];
			var_150_float = GetByIndex(var_97_cvector, 1);
			var_96_float = var_150_float;
			SetByIndex(var_97_cvector, 1) = var_150_float;
			@LookAsync(var_77_object, "head", var_97_cvector);
			var_95_bool = true;
		} else {
			var_95_bool = false;

		}
		string var_152_string;
		var_92_string = var_152_string;
		func_1586(var_152_string);
		@PlayAnimation("all", var_92_string);
		@WaitForAnimEnd();
		if(var_95_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_92_string);
		@RemoveEnvelope();
		var_93_object = null;
	}
	
}


void func_1713(float var_23_float)
{
	object var_25_object;
	@CreateFloatVector(var_25_object);
	var_25_object->add(var_23_float);
	@SendWorldWndMessage(16, var_25_object);
}
EMIT "Stack[-1] = 0";


void func_1208(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1723(object var_12_object)
{
	bool var_14_bool;
	@IsPlayerActor(var_12_object, var_14_bool);
	if(var_14_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_959(object var_0_object)
{
	func_1723(var_0_object);
}


void func_964(int var_469_int)
{
	var_469_int = 0;
}


void func_1732(void)
{
	object var_366_object;
	@GetScene(var_366_object);
	object var_368_object;
	func_1627(var_368_object);
	@BroadcastMessage("battle", var_368_object, var_366_object);
}
EMIT "Stack[-1] = 0";


void func_966(void)
{
	func_1586("attack_stay");
}


void func_1477(object var_13_object, int var_14_int, float var_15_float)
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
		func_1249(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1633(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		@CreateVectorVector(var_26_object);
		var_27_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_27_int), var_28_bool, var_29_cvector, var_30_cvector);
			if(!var_28_bool) { //@nz
				break;
			Label_1539:
				var_26_object = null;
	}
			object var_103_object;
			var_13_object = var_103_object;
			func_1433(var_103_object);
		}
		if((var_30_cvector | var_25_cvector) >= 0.70710677)
			var_26_object->add(var_29_cvector);
		var_27_int += 1;
	}
	int var_31_int;
	var_26_object->size(var_31_int);
	if(var_31_int == 0) goto Label_1539;
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
	func_1545(var_60_float, var_61_cvector, var_62_cvector);
}


// @pe
void func_1224(bool var_20_bool, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_1409(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
}


// @pe
void func_971(void)
{
}


void func_973(bool var_494_bool)
{
	var_494_bool = true;
}


void func_1743(string var_34_string, int var_35_int)
{
	string var_37_string = "idle";
	if(var_35_int != 0)
		var_37_string += var_35_int;
	var_37_string = var_34_string;
}


void func_975(int var_386_int)
{
	var_386_int = 1;
}


void func_977(float var_381_float)
{
	var_381_float = 0.5;
}


void func_1231(string var_204_string)
{
	var_204_string = "walk";
}


void func_979(int var_2_int, bool var_135_bool, object var_136_object, float var_137_float, float var_138_float, bool var_139_bool, bool var_140_bool)
{
	object var_148_object;
	func_1723(var_148_object);
	@SetTimer(1, 5);
	bool var_146_bool;
	@CanSee(var_146_bool, var_148_object);
	if(var_146_bool != 0) {
		var_2_int = true;
		object var_152_object;
		var_136_object = var_152_object;
		func_1575(var_152_object);
	} else {
		var_2_int = false;
	}
	bool var_159_bool; object var_160_object;
	func_1256(var_159_bool, var_160_object);
	if(var_159_bool != 0) {
		object var_163_object;
		func_1627(var_163_object);
		@SendPlayerEnemy(var_160_object, var_163_object);
	}
	bool var_164_bool; object var_165_object; float var_166_float; float var_167_float; bool var_168_bool; bool var_169_bool;
	var_136_object = var_165_object;
	var_137_float = var_166_float;
	var_138_float = var_167_float;
	var_139_bool = var_168_bool;
	var_140_bool = var_169_bool;
	bool var_147_bool;
	func_1084(var_146_bool, var_147_bool, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool);
	var_164_bool = var_147_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_147_bool = var_135_bool;
	
}


void func_1233(string var_205_string)
{
	var_205_string = "run";
}


// @pe
void func_1235(string var_432_string, int var_433_int)
{
	if(var_433_int == 2) {
		var_432_string = "fire";
		return 0;
	EMIT "GOTO 0x4df";
	}
	if(var_433_int == 1) {
		var_432_string = "bullet";
		return 0;
	}
	var_432_string = "phys";
}


void func_1750(int var_28_int)
{
	int var_31_int; bool var_32_bool;
	var_31_int = 0;
	
	for(;;) {
		string var_34_string; int var_35_int;
		var_31_int = var_35_int;
		func_1743(var_34_string, var_35_int);
		@HasAnimation(var_32_bool, "all", var_34_string);
		if(!var_32_bool) //@nz
			break;
		var_31_int += 1;
	}
	var_31_int = var_28_int;
}


void func_1249(cvector var_43_cvector, object var_44_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_44_object->GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
}


// @pe
void func_1767(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	TaskCall(1);
	func_128(var_11_object);
	TaskReturn();
}


void func_1256(bool var_12_bool, object var_13_object)
{
	bool var_15_bool;
	@IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
}


void func_1261(bool var_35_bool, object var_36_object, string var_37_string)
{
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", 2);
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 2;
	}
	bool var_39_bool;
	var_36_object->HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
}


void func_757(bool var_495_bool, float var_496_float)
{
	float var_499_float; bool var_500_bool;
	@rand(var_499_float);
	if(var_499_float < var_496_float) {

		for(;;) {
			@IsAnimationPlaying(var_500_bool);
			if(!var_500_bool) { //@nz
			} else {
				bool var_503_bool;
				func_855(var_503_bool);
				if(var_503_bool != 0) {
					var_495_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_495_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_959(var_500_bool);
}


void func_1273(bool var_27_bool, object var_28_object, string var_29_string, float var_30_float, float var_31_float, float var_32_float)
{
	object var_36_object;
	var_28_object = var_36_object;
	string var_37_string;
	var_29_string = var_37_string;
	bool var_35_bool;
	func_1261(var_35_bool, var_36_object, var_37_string);
	if(!var_35_bool) //@nz
		var_27_bool = false;
	float var_34_float;
	var_28_object->GetProperty(var_29_string, var_34_float);
	float var_45_float; float var_47_float; float var_48_float;
	var_31_float = var_47_float;
	var_32_float = var_48_float;
	func_1650(var_45_float, (var_34_float + var_30_float), var_47_float, var_48_float);
	var_28_object->SetProperty(var_29_string, var_45_float);
	var_27_bool = true;
}


