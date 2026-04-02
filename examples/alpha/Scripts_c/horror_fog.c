task task_0
{
}


maintask task_1
{
	void init(bool var_0_bool, object var_1_object)
	{
		@PutOnGrid();
		@FogLinear(1, 1);
		@SetTimer(10, 20);
		object var_3_object;
		@FindActor(var_3_object, "player");
	
		for(;;) {
			bool var_9_bool; object var_10_object;
			var_3_object = var_10_object;
			TaskCall(2);
			func_107(var_9_bool, var_10_object);
			TaskReturn();
			var_96_bool = !var_11_bool; //@nz
			if(var_96_bool == 0) goto Label_94;
			@Sleep(0.5);
		}
	
	Label_94:
		object var_98_object;
		var_3_object = var_98_object;
		TaskCall(0);
		func_0(var_98_object);
		TaskReturn();
		object var_188_object;
		func_451(var_188_object);
		@RemoveActor(var_188_object);
	}
	EMIT "Stack[-1] = 0";

}


task task_2
{
	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int)
	{
		int var_3_int;
		func_230(var_1_object, var_3_int, var_3_int);
		int var_44_int;
		var_2_int = var_44_int;
		func_474();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object)
	{
		@RequestClearPath(var_2_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object)
	{
		func_252(var_2_object);
		object var_4_object;
		var_2_object = var_4_object;
		func_472();
	}

}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, object var_2_object)
{
}


// @pe
void OnTimer(bool var_0_bool, object var_1_object, int var_2_int)
{
	if(var_2_int == 10) {
		@KillTimer(10);
		@SetVisirVisibility(false);
		@FogLinear(0, 2);
		@Sleep(2);
		object var_10_object;
		func_451(var_10_object);
		@RemoveActor(var_10_object);
		@Hold();
	}
}


void OnUnload(bool var_0_bool, object var_1_object)
{
	object var_2_object;
	func_451(var_2_object);
	@RemoveActor(var_2_object);
	@Hold();
}


void func_0(object var_98_object)
{
	float var_106_float;
	@FogLinear(1, 1);
	float var_103_float;
	@GetHeight(var_103_float);
	cvector var_104_cvector = [0.0, 0.0, 0.0];
	var_109_float = GetByIndex(var_104_cvector, 1);
	var_103_float = var_109_float;
	SetByIndex(var_104_cvector, 1) = var_109_float;
	@PlayGlobalSound("breath", var_104_cvector);
	cvector var_105_cvector;
	var_98_object->GetPFPosition(var_105_cvector);
	@MovePoint(var_105_cvector, 500);
	bool var_112_bool; object var_113_object;
	var_98_object = var_113_object;
	func_427(var_112_bool, var_113_object);
	if(var_112_bool != 0) {
		float var_114_float; cvector var_115_cvector; cvector var_116_cvector;
		cvector var_117_cvector;
		func_279(var_117_cvector);
		var_117_cvector = var_115_cvector;
		cvector var_120_cvector; object var_121_object;
		var_98_object = var_121_object;
		func_284(var_120_cvector, var_121_object);
		var_120_cvector = var_116_cvector;
		func_457(var_114_float, var_115_cvector, var_116_cvector);
		if(var_114_float <= 90000.0) {
			@PlaySound("attack");
			float var_129_float; object var_130_object;
			func_323(var_129_float, var_130_object, 0.2);
			var_129_float = var_106_float;
			@ReportHit(var_130_object, 5, var_106_float, 0.2);
		}
	}
	@SetVisirVisibility(false);
	@FogLinear(0, 2);
	@Sleep(5);
	object var_185_object;
	func_451(var_185_object);
	@RemoveActor(var_185_object);
}


void func_128(bool var_0_bool, object var_1_object, bool var_13_bool, object var_14_object, float var_15_float, float var_16_float, bool var_17_bool, bool var_18_bool)
{
	bool var_27_bool; object var_29_object; cvector var_30_cvector; cvector var_31_cvector; float var_33_float; object var_34_object;
	var_0_bool = false;
	var_1_object = var_14_object;
	bool var_28_bool;
	var_18_bool = var_28_bool;
	
	for(;;) {
		bool var_35_bool; object var_36_object;
		var_14_object = var_36_object;
		func_268(var_35_bool, var_36_object);
		if(!var_35_bool) { //@nz
			var_13_bool = false;
			return 16;
		}
		var_14_object->GetPosition(var_30_cvector);
		@GetPosition(var_31_cvector);
		var_33_float = (var_30_cvector - var_31_cvector) | (var_30_cvector - var_31_cvector);
		bool var_72_bool = false;
		if(var_16_float > 0) {
			if(var_33_float > (var_16_float * var_16_float))
				var_72_bool = true;
		}
		if(var_72_bool != 0) {
			@Stop();
			var_13_bool = false;
			return 16;
		}
		if(var_33_float > (var_15_float * var_15_float)) {
			var_14_object->GetPFPosition(var_30_cvector);
			@FindPathTo(var_34_object, var_30_cvector);
			if(var_34_object != null) {
				var_34_object = var_29_object;
				var_34_object = null;
			}
			if(var_29_object != null) {
				if(var_28_bool == 0) goto Label_181;
				var_28_bool = false;
				@RotatePath(var_29_object, var_27_bool);
				if(!var_27_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_85_string;
						func_275(var_85_string);
						string var_86_string;
						func_277(var_86_string);
						@FollowPath(var_29_object, var_17_bool, var_27_bool, var_85_string, var_86_string);
						if(!var_27_bool) { //@nz
							if(var_0_bool == 0) goto Label_200;
							var_29_object = null;
						}
					EMIT "GOTO 0xc9";

					Label_200:
						} else {
					var_29_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_27_bool);
					if(!var_27_bool) { //@nz
						if(var_0_bool != 0) {
							var_29_object = null;
							goto Label_228;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_228;
		}
			var_34_object = null;
			goto Label_226;

		Label_226:
			var_29_object = null;

		}
	Label_228:
		for(;;) {
			var_13_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_386(bool var_52_bool, object var_53_object)
{
	bool var_55_bool;
	var_53_object->IsDead(var_55_bool);
	var_55_bool = var_52_bool;
}


void func_391(bool var_41_bool, object var_42_object)
{
	if(var_42_object == null) {
		var_41_bool = false;
		return 4;
	}
	bool var_48_bool = false;
	var_51_bool = IsFuncExist(var_42_object, "IsDead", 1);
	if(var_51_bool != 0) {
		bool var_52_bool; object var_53_object;
		var_42_object = var_53_object;
		func_386(var_52_bool, var_53_object);
		if(var_52_bool != 0)
			var_48_bool = true;
	}
	if(var_48_bool != 0) {
		var_41_bool = false;
		return 4;
	}
	object var_45_object;
	@GetScene(var_45_object);
	if(var_45_object == null) {
		var_41_bool = false;
		return 4;
	}
	object var_46_object;
	var_42_object->GetScene(var_46_object);
	if(var_45_object != var_46_object) {
		var_41_bool = false;
		return 4;
	}
	var_41_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_268(bool var_35_bool, object var_36_object)
{
	object var_38_object;
	var_36_object = var_38_object;
	bool var_37_bool;
	func_427(var_37_bool, var_38_object);
	var_37_bool = var_35_bool;
}


void func_275(string var_85_string)
{
	var_85_string = "walk";
}


void func_277(string var_86_string)
{
	var_86_string = "run";
}


void func_279(cvector var_117_cvector)
{
	cvector var_119_cvector;
	@GetPosition(var_119_cvector);
	var_119_cvector = var_117_cvector;
}


void func_284(cvector var_120_cvector, object var_121_object)
{
	cvector var_123_cvector;
	var_121_object->GetPosition(var_123_cvector);
	var_123_cvector = var_120_cvector;
}


void func_289(bool var_59_bool, object var_60_object, string var_61_string)
{
	var_66_bool = IsFuncExist(var_60_object, "HasProperty", 2);
	if(!var_66_bool) { //@nz
		var_59_bool = false;
		return 2;
	}
	bool var_63_bool;
	var_60_object->HasProperty(var_61_string, var_63_bool);
	var_63_bool = var_59_bool;
}


void func_427(bool var_37_bool, object var_38_object)
{
	object var_42_object;
	var_38_object = var_42_object;
	bool var_41_bool;
	func_391(var_41_bool, var_42_object);
	if(!var_41_bool) { //@nz
		var_37_bool = false;
		return 2;
	}
	bool var_59_bool; object var_60_object;
	func_289(var_59_bool, var_60_object, "noaccess");
	if(!var_59_bool) { //@nz
		var_37_bool = true;
		return 2;
	}
	int var_40_int;
	var_60_object->GetProperty("noaccess", var_40_int);
	var_37_bool = var_40_int == 0;
}


void func_301(bool var_159_bool, object var_160_object, string var_161_string, float var_162_float, float var_163_float, float var_164_float)
{
	object var_168_object;
	var_160_object = var_168_object;
	string var_169_string;
	var_161_string = var_169_string;
	bool var_167_bool;
	func_289(var_167_bool, var_168_object, var_169_string);
	if(!var_167_bool) //@nz
		var_159_bool = false;
	float var_166_float;
	var_160_object->GetProperty(var_161_string, var_166_float);
	float var_171_float; float var_173_float; float var_174_float;
	var_163_float = var_173_float;
	var_164_float = var_174_float;
	func_461(var_171_float, (var_166_float + var_162_float), var_173_float, var_174_float);
	var_160_object->SetProperty(var_161_string, var_171_float);
	var_159_bool = true;
}


void func_323(float var_129_float, object var_130_object, float var_131_float)
{
	int var_135_int; float var_136_float; float var_137_float;
	object var_139_object;
	var_130_object = var_139_object;
	bool var_138_bool;
	func_289(var_138_bool, var_139_object, "disease");
	if(!var_138_bool) { //@nz
		var_129_float = 0;
		return 6;
	}
	bool var_142_bool; object var_143_object;
	func_289(var_142_bool, var_143_object, "armor_disease");
	if(var_142_bool != 0) {
		var_143_object->GetProperty("armor_disease", var_135_int);
		if(var_135_int < 100) {
			var_131_float *= (1 - (var_135_int / 100.0));
		} else {
					var_129_float = 0;
					return 6;
		}
	}
	bool var_152_bool; object var_153_object;
	var_130_object = var_153_object;
	func_289(var_152_bool, var_153_object, "immunity");
	if(var_152_bool != 0) {
		var_130_object->GetProperty("immunity", var_137_float);
		if(var_137_float < var_131_float) {
			var_130_object->SetProperty("immunity", 0);
			var_136_float = var_131_float - var_137_float;
		} else {
			var_130_object->SetProperty("immunity", (var_137_float - var_131_float));
			var_131_float = var_129_float;
			return 6;

		}
	}
	bool var_159_bool; object var_160_object; float var_162_float;
	var_130_object = var_160_object;
	var_136_float = var_162_float;
	func_301(var_159_bool, var_160_object, "disease", var_162_float, (float)0, (float)1);
	var_131_float = var_129_float;
	
}


void func_451(object var_185_object)
{
	object var_187_object;
	@self(var_187_object);
	var_187_object = var_185_object;
}
EMIT "Stack[-1] = 0";


void func_457(float var_114_float, cvector var_115_cvector, cvector var_116_cvector)
{
	var_114_float = (var_116_cvector - var_115_cvector) | (var_116_cvector - var_115_cvector);
}


// @pe
void func_461(float var_171_float, float var_172_float, float var_173_float, float var_174_float)
{
	if(var_172_float < var_173_float) {
		var_173_float = var_171_float;
		return 0;
	}
	if(var_172_float > var_174_float) {
		var_174_float = var_171_float;
		return 0;
	}
	var_172_float = var_171_float;
}


// @pe
void func_230(bool var_0_bool, object var_1_object, int var_3_int)
{
	if(var_3_int != 0)
		return 0;
	bool var_6_bool;
	func_268(var_6_bool, var_1_object);
	if(!var_6_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_107(bool var_9_bool, object var_10_object)
{
	bool var_13_bool; object var_14_object;
	func_128(var_9_bool, var_14_object, var_13_bool, var_14_object, (float)150, (float)0, false, false);
	var_13_bool = var_9_bool;
}


void func_252(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


