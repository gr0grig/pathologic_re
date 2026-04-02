// @GLOBALS: 0:int:Region

task task_0
{
	// @pe
	void OnTimer(object var_0_object, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, int var_4_int, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		if(21 == var_8_object) {
			var_3_cvector = var_2_cvector;
			var_11_float = GetByIndex(var_3_cvector, 1);
			SetByIndex(var_3_cvector, 1) = (float)0;
			var_0_object->GetPFPosition(var_2_cvector); //@t
			var_12_float = GetByIndex(var_2_cvector, 1);
			SetByIndex(var_2_cvector, 1) = (float)0;
			float var_13_float;
			func_863(var_13_float, var_2_cvector, var_3_cvector);
			if(var_13_float > 220.0)
				var_1_bool = true;
		}
	}

}


maintask task_1
{
	void init(object var_0_object, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		@Trace("fog hunter inited");
		@PutOnGrid();
		@SetTimer(20, 1);
	
		for(;;) {
			TaskCall(2);
			func_285(var_11_bool, var_12_bool);
			TaskReturn();
			TaskCall(3);
			func_380();
			TaskReturn();
		}
	}
	EMIT "Return(); Pop(0)";

}


task task_2
{
	// @pe
	void OnTimer(object var_0_object, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, int var_6_int, bool var_7_bool, object var_8_object)
	{
		int var_9_int;
		var_8_object = var_9_int;
		func_935(var_9_int);
		if(var_8_object == 20) {
			bool var_14_bool; object var_15_object;
			object var_16_object;
			func_667(var_16_object);
			var_16_object = var_15_object;
			func_942(var_14_bool, var_15_object);
			if(var_14_bool != 0)
				func_356(var_7_bool, var_8_object);
		}
	}

	// @pe
	void OnSee(object actor, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object)
	{
		bool var_9_bool; object var_10_object;
		func_893(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_356(var_7_bool, var_10_object);
			object var_48_object;
			var_8_object = var_48_object;
			func_919(var_48_object);
		}
	}

	// @pe
	void OnHear(object actor, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object)
	{
		bool var_9_bool; object var_10_object;
		func_906(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_356(var_7_bool, var_10_object);
			object var_48_object;
			var_8_object = var_48_object;
			func_927(var_48_object);
		}
	}

	// @pe
	void OnCollision(object actor, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object)
	{
		@RequestClearPath(var_8_object);
	}

	void OnActorStuck(object var_0_object, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		@Stop();
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object)
	{
		func_356(var_7_bool, var_8_object);
		object var_9_object;
		var_8_object = var_9_object;
		func_981();
	}

}


task task_3
{
	// @pe
	void OnTimer(object var_0_object, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int)
	{
		int var_9_int;
		var_8_int = var_9_int;
		func_935(var_9_int);
		int var_12_int;
		var_8_int = var_12_int;
		func_567(var_7_object, var_8_int, var_12_int);
		if(var_8_int == 20) {
			bool var_79_bool; object var_80_object;
			object var_81_object;
			func_667(var_81_object);
			var_81_object = var_80_object;
			func_942(var_79_bool, var_80_object);
			if(!var_79_bool) //@nz
				func_589(var_8_int);
		}
	}

	// @pe
	void OnSee(object actor, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		bool var_9_bool; object var_10_object;
		func_893(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_589(var_10_object);
			object var_49_object;
			var_8_object = var_49_object;
			func_919(var_49_object);
		}
	}

	// @pe
	void OnHear(object actor, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		bool var_9_bool; object var_10_object;
		func_906(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_589(var_10_object);
			object var_49_object;
			var_8_object = var_49_object;
			func_927(var_49_object);
		}
	}

	// @pe
	void OnCollision(object actor, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		@RequestClearPath(var_8_object);
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		func_589(var_8_object);
		object var_10_object;
		var_8_object = var_10_object;
		func_981();
	}

}


task task_4
{
	// @pe
	void OnTimer(object var_0_object, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int)
	{
		int var_9_int;
		var_8_int = var_9_int;
		func_935(var_9_int);
	}

}


// @pe
void OnDeath(object actor, bool var_1_bool, cvector var_2_cvector, cvector var_3_cvector, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
{
}


void func_0(object var_0_object, cvector var_2_cvector, object var_50_object)
{
	float var_72_float; cvector var_74_cvector; float var_75_float; cvector var_76_cvector; cvector var_77_cvector; float var_78_float; float var_79_float; cvector var_80_cvector; cvector var_81_cvector; float var_82_float;
	var_0_object = var_50_object;
	@Trace("TFogAttack");
	@FogLinear(0.8, 2.0);
	float var_71_float = 0;
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	cvector var_70_cvector;
	var_50_object->GetPFPosition(var_70_cvector);
	bool var_73_bool = true;
	
	for(;;) {
		if(true != 0) {
			@Trace("Watching");
			var_50_object->GetPFPosition(var_70_cvector);
			@GetPosition(var_74_cvector);
			float var_88_float; cvector var_89_cvector; cvector var_90_cvector;
			var_74_cvector = var_89_cvector;
			func_868(var_88_float, var_89_cvector, var_90_cvector);
			var_88_float = var_75_float;
			if(var_75_float > 160000.0) {
				cvector var_95_cvector;
				func_853(var_95_cvector, (var_90_cvector - var_74_cvector));
				var_95_cvector = var_77_cvector;
				var_102_float = sqrt(var_75_float);
				var_78_float = var_102_float - 360.0;
				var_76_cvector = var_74_cvector + (var_77_cvector * var_78_float);
				if(var_73_bool != 0) {
					@MovePoint(var_76_cvector, 700);
					var_72_float = var_78_float / 700.0;
				} else {
					@MovePoint(var_76_cvector, 220);
					var_72_float = var_78_float / 100.0;
			}
				@Sleep(1.0);
				var_72_float = 1.0;
			}
		} else {
			@KillTimer(21);
			@Trace("Attacking");
			@FogLinear(1, 0.5);
			@GetHeight(var_79_float);
			var_80_cvector = [0.0, 0.0, 0.0];
			var_135_float = GetByIndex(var_80_cvector, 1);
			var_79_float = var_135_float;
			SetByIndex(var_80_cvector, 1) = var_135_float;
			@PlayGlobalSound("breath", var_80_cvector);
			var_50_object->GetPFPosition(var_81_cvector);
			@MovePoint(var_81_cvector, 500);
			bool var_138_bool; object var_139_object;
			var_50_object = var_139_object;
			func_823(var_138_bool, var_139_object);
			if(var_138_bool != 0) {
				float var_140_float; cvector var_141_cvector; cvector var_142_cvector;
				cvector var_143_cvector;
				func_649(var_143_cvector);
				var_143_cvector = var_141_cvector;
				cvector var_146_cvector; object var_147_object;
				var_50_object = var_147_object;
				func_654(var_146_cvector, var_147_object);
				var_146_cvector = var_142_cvector;
				func_868(var_140_float, var_141_cvector, var_142_cvector);
				if(var_140_float <= 90000.0) {
					@PlaySound("attack");
					float var_153_float; object var_154_object;
					func_713(var_153_float, var_154_object, 0.2);
					var_153_float = var_82_float;
					@ReportHit(var_154_object, 5, var_82_float, 0.2);
				}
			}
			@SetVisirVisibility(false);
			@FogLinear(0, 1);
			@Sleep(5);
			object var_217_object;
			func_847(var_217_object);
			@RemoveActor(var_217_object);
			return 28;
		}
		bool var_108_bool; object var_109_object;
		func_823(var_108_bool, var_109_object);
		if(!var_108_bool) { //@nz
			if(!var_73_bool) //@nz
				@KillTimer(21);
			@FogLinear(0, 0.5);
			@Sleep(0.5);
			return 28;
		}
		if(var_73_bool != 0) {
			var_73_bool = false;
			var_109_object->GetPFPosition(var_2_cvector);
			@SetTimer(21, 1);
		} else {
		if(var_1_bool != 0) {
		} else {
			if((var_71_float + var_72_float) >= 12.0) {
				@Trace("Leaving");
				@KillTimer(21);
				@FogLinear(0, 1.0);
				@MovePoint(var_69_cvector, 900);
				@Sleep(5);
				object var_127_object;
				func_847(var_127_object);
				@RemoveActor(var_127_object);
				return 28;
			}
		}
		}
	}
	
}


void func_649(cvector var_143_cvector)
{
	cvector var_145_cvector;
	@GetPosition(var_145_cvector);
	var_145_cvector = var_143_cvector;
}


void func_906(bool var_9_bool, object var_10_object)
{
	bool var_12_bool;
	@IsPlayerActor(var_10_object, var_12_bool);
	var_9_bool = false;
	if(var_12_bool != 0) {
		bool var_14_bool; object var_15_object;
		var_10_object = var_15_object;
		func_823(var_14_bool, var_15_object);
		if(var_14_bool != 0)
			var_9_bool = true;
	}
}


void func_654(cvector var_146_cvector, object var_147_object)
{
	cvector var_149_cvector;
	var_147_object->GetPosition(var_149_cvector);
	var_149_cvector = var_146_cvector;
}


void func_782(bool var_91_bool, object var_92_object)
{
	bool var_94_bool;
	var_92_object->IsDead(var_94_bool);
	var_94_bool = var_91_bool;
}


void func_787(bool var_80_bool, object var_81_object)
{
	if(var_81_object == null) {
		var_80_bool = false;
		return 4;
	}
	bool var_87_bool = false;
	var_90_bool = IsFuncExist(var_81_object, "IsDead", 1);
	if(var_90_bool != 0) {
		bool var_91_bool; object var_92_object;
		var_81_object = var_92_object;
		func_782(var_91_bool, var_92_object);
		if(var_91_bool != 0)
			var_87_bool = true;
	}
	if(var_87_bool != 0) {
		var_80_bool = false;
		return 4;
	}
	object var_84_object;
	@GetScene(var_84_object);
	if(var_84_object == null) {
		var_80_bool = false;
		return 4;
	}
	object var_85_object;
	var_81_object->GetScene(var_85_object);
	if(var_84_object != var_85_object) {
		var_80_bool = false;
		return 4;
	}
	var_80_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_659(float var_118_float, object var_119_object)
{
	cvector var_123_cvector;
	@GetPosition(var_123_cvector);
	cvector var_124_cvector;
	var_119_object->GetPosition(var_124_cvector);
	var_118_float = (var_124_cvector - var_123_cvector) | (var_124_cvector - var_123_cvector);
}


// @pe
void func_919(object var_49_object)
{
	object var_50_object;
	var_49_object = var_50_object;
	TaskCall(0);
	func_0(var_53_cvector, var_54_cvector, var_50_object);
	TaskReturn();
}


void func_667(object var_66_object)
{
	object var_68_object;
	@FindActor(var_68_object, "player");
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


void func_285(object var_0_object, bool var_1_bool)
{
	float var_19_float; cvector var_20_cvector; cvector var_21_cvector; bool var_22_bool; object var_23_object; bool var_24_bool;
	@rand(var_19_float, 0.5);
	@Sleep(var_19_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_297:
				@GetPosition(var_21_cvector);
				float var_28_float;
				func_344(var_28_float);
				@GetRandomPFPointInCircle(var_20_cvector, var_21_cvector, var_28_float, var_22_bool);
				if(var_22_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_297;
			}
				var_1_bool = false;
		}
		}
		goto Label_313;

	Label_313:
		object var_32_object; cvector var_33_cvector;
		var_20_cvector = var_33_cvector;
		func_374(var_32_object, var_33_cvector);
		var_32_object = var_23_object;
		if(var_23_object != null) {
			@RotatePath(var_23_object, var_24_bool);
			if(var_24_bool != 0) {
				bool var_38_bool;
				func_372(var_38_bool);
				@FollowPath(var_23_object, var_38_bool, var_24_bool);
				var_23_object = null;
				if(var_24_bool != 0) {
					TaskCall(4);
					func_609();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_23_object = null;
	}
	
}


// @pe
void func_927(object var_49_object)
{
	object var_50_object;
	var_49_object = var_50_object;
	TaskCall(0);
	func_0(var_53_cvector, var_54_cvector, var_50_object);
	TaskReturn();
}


void func_674(bool var_203_bool, object var_204_object)
{
	bool var_206_bool;
	@IsPlayerActor(var_204_object, var_206_bool);
	var_206_bool = var_203_bool;
}


// @pe
void func_935(int var_9_int)
{
	if(var_9_int == 20)
		@ResetAAS();
}


void func_679(bool var_98_bool, object var_99_object, string var_100_string)
{
	var_105_bool = IsFuncExist(var_99_object, "HasProperty", 2);
	if(!var_105_bool) { //@nz
		var_98_bool = false;
		return 2;
	}
	bool var_102_bool;
	var_99_object->HasProperty(var_100_string, var_102_bool);
	var_102_bool = var_98_bool;
}


void func_942(bool var_70_bool, object var_71_object)
{
	int var_75_int;
	object var_77_object;
	var_71_object = var_77_object;
	bool var_76_bool;
	func_823(var_76_bool, var_77_object);
	if(!var_76_bool) { //@nz
		var_70_bool = false;
		return 4;
	}
	object var_74_object;
	@GetActiveScene(var_74_object);
	bool var_111_bool = false;
	if(var_74_object != null) {
		var_115_bool = IsFuncExist(var_74_object, "GetCurrentRegion", 1);
		if(var_115_bool != 0)
			var_111_bool = true;
	}
	if(var_111_bool != 0) {
		var_74_object->GetCurrentRegion(var_75_int);
		var_70_bool = false;
		var_116_int = GlobalVars[0];
		if(var_75_int == var_116_int) {
			float var_118_float; object var_119_object;
			var_71_object = var_119_object;
			func_659(var_118_float, var_119_object);
			if(var_118_float < 4000000)
				var_70_bool = true;
		}
		return 4;
	}
	var_70_bool = false;
}
EMIT "Stack[-2] = 0";


void func_691(bool var_173_bool, object var_174_object, string var_175_string, float var_176_float, float var_177_float, float var_178_float)
{
	object var_182_object;
	var_174_object = var_182_object;
	string var_183_string;
	var_175_string = var_183_string;
	bool var_181_bool;
	func_679(var_181_bool, var_182_object, var_183_string);
	if(!var_181_bool) //@nz
		var_173_bool = false;
	float var_180_float;
	var_174_object->GetProperty(var_175_string, var_180_float);
	float var_185_float; float var_187_float; float var_188_float;
	var_177_float = var_187_float;
	var_178_float = var_188_float;
	func_872(var_185_float, (var_180_float + var_176_float), var_187_float, var_188_float);
	var_174_object->SetProperty(var_175_string, var_185_float);
	var_173_bool = true;
}


// @pe
void func_567(object var_0_object, bool var_1_bool, int var_12_int)
{
	if(var_12_int != 0)
		return 0;
	bool var_15_bool;
	func_458(var_15_bool, var_1_bool);
	if(!var_15_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_823(bool var_76_bool, object var_77_object)
{
	object var_81_object;
	var_77_object = var_81_object;
	bool var_80_bool;
	func_787(var_80_bool, var_81_object);
	if(!var_80_bool) { //@nz
		var_76_bool = false;
		return 2;
	}
	bool var_98_bool; object var_99_object;
	func_679(var_98_bool, var_99_object, "noaccess");
	if(!var_98_bool) { //@nz
		var_76_bool = true;
		return 2;
	}
	int var_79_int;
	var_99_object->GetProperty("noaccess", var_79_int);
	var_76_bool = var_79_int == 0;
}


void func_713(float var_153_float, object var_154_object, float var_155_float)
{
	float var_159_float;
	object var_161_object;
	var_154_object = var_161_object;
	bool var_160_bool;
	func_679(var_160_bool, var_161_object, "disease");
	if(!var_160_bool) { //@nz
		var_153_float = 0;
		return 4;
	}
	float var_158_float = 0;
	bool var_164_bool; object var_165_object;
	func_679(var_164_bool, var_165_object, "armor_disease");
	if(var_164_bool != 0) {
		var_165_object->GetProperty("armor_disease", var_158_float);
		var_158_float /= 100;
	}
	bool var_169_bool; object var_170_object;
	func_679(var_169_bool, var_170_object, "immunity");
	if(var_169_bool != 0) {
		var_170_object->GetProperty("immunity", var_159_float);
		var_158_float += var_159_float;
		bool var_173_bool; object var_174_object; float var_176_float;
		var_154_object = var_174_object;
		var_176_float = -var_155_float;
		func_691(var_173_bool, var_174_object, "immunity", var_176_float, (float)0, (float)1);
	}
	if(var_158_float >= 1) {
		var_153_float = 0.0;
		return 4;
	}
	var_155_float *= ((1 - var_158_float) / 2);
	bool var_197_bool; object var_198_object; float var_200_float;
	var_154_object = var_198_object;
	var_155_float = var_200_float;
	func_691(var_197_bool, var_198_object, "disease", var_200_float, (float)0, (float)1);
	bool var_203_bool; object var_204_object;
	var_154_object = var_204_object;
	func_674(var_203_bool, var_204_object);
	if(var_203_bool != 0) {
		float var_207_float;
		var_155_float = var_207_float;
		func_883(var_207_float);
	}
	var_155_float = var_153_float;
}


// @pe
void func_458(bool var_151_bool, object var_152_object)
{
	object var_154_object;
	var_152_object = var_154_object;
	bool var_153_bool;
	func_942(var_153_bool, var_154_object);
	var_153_bool = var_151_bool;
}


void func_589(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_847(object var_127_object)
{
	object var_129_object;
	@self(var_129_object);
	var_129_object = var_127_object;
}
EMIT "Stack[-1] = 0";


void func_465(object var_0_object, bool var_1_bool, bool var_129_bool, object var_130_object, float var_131_float, float var_132_float, bool var_133_bool, bool var_134_bool)
{
	bool var_143_bool; object var_145_object; cvector var_146_cvector; cvector var_147_cvector; float var_149_float; object var_150_object;
	var_0_object = false;
	var_1_bool = var_130_object;
	bool var_144_bool;
	var_134_bool = var_144_bool;
	
	for(;;) {
		bool var_151_bool; object var_152_object;
		var_130_object = var_152_object;
		func_458(var_151_bool, var_152_object);
		if(!var_151_bool) { //@nz
			var_129_bool = false;
			return 16;
		}
		var_130_object->GetPosition(var_146_cvector);
		@GetPosition(var_147_cvector);
		var_149_float = (var_146_cvector - var_147_cvector) | (var_146_cvector - var_147_cvector);
		bool var_156_bool = false;
		if(var_132_float > 0) {
			if(var_149_float > (var_132_float * var_132_float))
				var_156_bool = true;
		}
		if(var_156_bool != 0) {
			@Stop();
			var_129_bool = false;
			return 16;
		}
		if(var_149_float > (var_131_float * var_131_float)) {
			var_130_object->GetPFPosition(var_146_cvector);
			@FindPathTo(var_150_object, var_146_cvector);
			if(var_150_object != null) {
				var_150_object = var_145_object;
				var_150_object = null;
			}
			if(var_145_object != null) {
				if(var_144_bool == 0) goto Label_518;
				var_144_bool = false;
				@RotatePath(var_145_object, var_143_bool);
				if(!var_143_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_169_string;
						func_605(var_169_string);
						string var_170_string;
						func_607(var_170_string);
						@FollowPath(var_145_object, var_133_bool, var_143_bool, var_169_string, var_170_string);
						if(!var_143_bool) { //@nz
							if(var_0_object == 0) goto Label_537;
							var_145_object = null;
						}
					EMIT "GOTO 0x21a";

					Label_537:
						} else {
					var_145_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_143_bool);
					if(!var_143_bool) { //@nz
						if(var_0_object != 0) {
							var_145_object = null;
							goto Label_565;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_565;
		}
			var_150_object = null;
			goto Label_563;

		Label_563:
			var_145_object = null;

		}
	Label_565:
		for(;;) {
			var_129_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_853(cvector var_95_cvector, cvector var_96_cvector)
{
	float var_98_float = sqrt(var_96_cvector | var_96_cvector);
	if(var_98_float < 0.000001)
		var_95_cvector = [0.0, 0.0, 0.0];
	var_95_cvector = var_96_cvector / var_98_float;
}


void func_344(float var_28_float)
{
	float var_30_float;
	@GetCameraFarDistance(var_30_float);
	var_30_float = var_28_float;
}


void func_605(string var_169_string)
{
	var_169_string = "walk";
}


void func_863(float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
{
	var_13_float = sqrt((var_15_cvector - var_14_cvector) | (var_15_cvector - var_14_cvector));
}


void func_607(string var_170_string)
{
	var_170_string = "run";
}


void func_609(void)
{
	@Trace("fog hunter idling");
	float var_44_float;
	@rand(var_44_float, 2);
	@FogLinear(1, 1);
	@Sleep(1);
	@Sleep(var_44_float);
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector;
	bool var_47_bool;
	@GetRandomPFPointInCircle(var_46_cvector, var_45_cvector, 1000, var_47_bool);
	@FogLinear(0, 0.5);
	if(var_47_bool != 0)
		@MovePoint(var_46_cvector, 500);
	@Sleep(1);
}


void func_868(float var_88_float, cvector var_89_cvector, cvector var_90_cvector)
{
	var_88_float = (var_90_cvector - var_89_cvector) | (var_90_cvector - var_89_cvector);
}


void func_356(object var_0_object, bool var_1_bool)
{
	var_0_object = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_872(float var_185_float, float var_186_float, float var_187_float, float var_188_float)
{
	if(var_186_float < var_187_float) {
		var_187_float = var_185_float;
		return 0;
	}
	if(var_186_float > var_188_float) {
		var_188_float = var_185_float;
		return 0;
	}
	var_186_float = var_185_float;
}


void func_883(float var_207_float)
{
	object var_209_object;
	@CreateFloatVector(var_209_object);
	var_209_object->add(var_207_float);
	@SendWorldWndMessage(14, var_209_object);
}
EMIT "Stack[-1] = 0";


void func_372(bool var_38_bool)
{
	var_38_bool = false;
}


void func_374(object var_32_object, cvector var_33_cvector)
{
	object var_35_object;
	@FindShiftedPathTo(var_35_object, var_33_cvector);
	var_35_object = var_32_object;
}
EMIT "Stack[-1] = 0";


void func_380(void)
{
	@Trace("fog hunter following");
	object var_66_object;
	func_667(var_66_object);
	object var_64_object;
	var_66_object = var_64_object;
	bool var_70_bool; object var_71_object;
	var_64_object = var_71_object;
	func_942(var_70_bool, var_71_object);
	if(!var_70_bool) { //@nz
	}
	bool var_129_bool; object var_130_object;
	object var_63_object;
	func_465(var_63_object, var_130_object, var_129_bool, var_130_object, (float)100, (float)0, false, false);
}
EMIT "Stack[-1] = 0";


void func_893(bool var_9_bool, object var_10_object)
{
	bool var_12_bool;
	@IsPlayerActor(var_10_object, var_12_bool);
	var_9_bool = false;
	if(var_12_bool != 0) {
		bool var_14_bool; object var_15_object;
		var_10_object = var_15_object;
		func_823(var_14_bool, var_15_object);
		if(var_14_bool != 0)
			var_9_bool = true;
	}
}


