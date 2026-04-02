maintask task_0
{
	void init(void)
	{
		object var_1_object;
	
		for(;;) {
			object var_2_object;
			func_83(var_2_object);
			var_2_object = var_1_object;

			for(;;) {
				bool var_6_bool; object var_7_object;
				var_1_object = var_7_object;
				func_198(var_6_bool, var_7_object);
				if(var_6_bool == 0) goto Label_17;
				object var_19_object;
				var_1_object = var_19_object;
				TaskCall(1);
				func_23(var_19_object);
				TaskReturn();
			}

		Label_17:
			@Sleep(1);
			var_1_object = null;
		}
	}
	EMIT "Return(); Pop(2)";

}


task task_1
{
}


void func_102(bool var_73_bool, object var_74_object, string var_75_string, float var_76_float, float var_77_float, float var_78_float)
{
	object var_82_object;
	var_74_object = var_82_object;
	string var_83_string;
	var_75_string = var_83_string;
	bool var_81_bool;
	func_90(var_81_bool, var_82_object, var_83_string);
	if(!var_81_bool) //@nz
		var_73_bool = false;
	float var_80_float;
	var_74_object->GetProperty(var_75_string, var_80_float);
	float var_85_float; float var_87_float; float var_88_float;
	var_77_float = var_87_float;
	var_78_float = var_88_float;
	func_187(var_85_float, (var_80_float + var_76_float), var_87_float, var_88_float);
	var_74_object->SetProperty(var_75_string, var_85_float);
	var_73_bool = true;
}


// @pe
void func_198(bool var_6_bool, object var_7_object)
{
	var_6_bool = false;
	if(var_7_object != 0) {
		float var_9_float; object var_10_object;
		var_7_object = var_10_object;
		func_75(var_9_float, var_10_object);
		if(var_9_float < 160000.0)
			var_6_bool = true;
	}
}


void func_75(float var_9_float, object var_10_object)
{
	cvector var_14_cvector;
	@GetPosition(var_14_cvector);
	cvector var_15_cvector;
	var_10_object->GetPosition(var_15_cvector);
	var_9_float = (var_15_cvector - var_14_cvector) | (var_15_cvector - var_14_cvector);
}


void func_83(object var_2_object)
{
	object var_4_object;
	@FindActor(var_4_object, "player");
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_211(bool var_32_bool, object var_33_object)
{
	object var_35_object;
	var_33_object = var_35_object;
	float var_34_float;
	func_75(var_34_float, var_35_object);
	var_32_bool = var_34_float < 40000.0;
}


void func_23(object var_19_object)
{
	float var_24_float; float var_27_float;
	@GetHeight(var_24_float);
	cvector var_25_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_25_cvector, 1);
	var_24_float = var_28_float;
	SetByIndex(var_25_cvector, 1) = var_28_float;
	object var_26_object;
	@PlayLoopedGlobalSound(var_26_object, "attack", var_25_cvector);
	@FogLinear(1, 1);
	
	for(;;) {
		bool var_32_bool; object var_33_object;
		var_19_object = var_33_object;
		func_211(var_32_bool, var_33_object);
		if(var_32_bool != 0) {
			float var_37_float; object var_38_object;
			func_124(var_37_float, var_38_object, 0.1);
			var_37_float = var_27_float;
			@ReportHit(var_38_object, 5, var_27_float, 0.1);
		}
		@Sleep(1);
		bool var_96_bool; object var_97_object;
		var_19_object = var_97_object;
		func_198(var_96_bool, var_97_object);
		if(!var_96_bool) //@nz
			break;
	}
	@FogLinear(0, 1);
	var_26_object->FadeOut(1);
	@Sleep(1);
}
EMIT "Stack[-2] = 0";


void func_90(bool var_46_bool, object var_47_object, string var_48_string)
{
	var_53_bool = IsFuncExist(var_47_object, "HasProperty", 2);
	if(!var_53_bool) { //@nz
		var_46_bool = false;
		return 2;
	}
	bool var_50_bool;
	var_47_object->HasProperty(var_48_string, var_50_bool);
	var_50_bool = var_46_bool;
}


// @pe
void func_187(float var_85_float, float var_86_float, float var_87_float, float var_88_float)
{
	if(var_86_float < var_87_float) {
		var_87_float = var_85_float;
		return 0;
	}
	if(var_86_float > var_88_float) {
		var_88_float = var_85_float;
		return 0;
	}
	var_86_float = var_85_float;
}


void func_124(float var_37_float, object var_38_object, float var_39_float)
{
	int var_43_int; float var_44_float; float var_45_float;
	object var_47_object;
	var_38_object = var_47_object;
	bool var_46_bool;
	func_90(var_46_bool, var_47_object, "disease");
	if(!var_46_bool) { //@nz
		var_37_float = 0;
		return 6;
	}
	bool var_56_bool; object var_57_object;
	func_90(var_56_bool, var_57_object, "armor_disease");
	if(var_56_bool != 0) {
		var_57_object->GetProperty("armor_disease", var_43_int);
		if(var_43_int < 100) {
			var_39_float *= (1 - (var_43_int / 100.0));
		} else {
					var_37_float = 0;
					return 6;
		}
	}
	bool var_66_bool; object var_67_object;
	var_38_object = var_67_object;
	func_90(var_66_bool, var_67_object, "immunity");
	if(var_66_bool != 0) {
		var_38_object->GetProperty("immunity", var_45_float);
		if(var_45_float < var_39_float) {
			var_38_object->SetProperty("immunity", 0);
			var_44_float = var_39_float - var_45_float;
		} else {
			var_38_object->SetProperty("immunity", (var_45_float - var_39_float));
			var_39_float = var_37_float;
			return 6;

		}
	}
	bool var_73_bool; object var_74_object; float var_76_float;
	var_38_object = var_74_object;
	var_44_float = var_76_float;
	func_102(var_73_bool, var_74_object, "disease", var_76_float, (float)0, (float)1);
	var_39_float = var_37_float;
	
}


