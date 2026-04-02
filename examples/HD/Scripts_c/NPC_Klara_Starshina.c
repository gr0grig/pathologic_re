// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2273();
			if(var_21_bool == 26884) {
				func_139(var_22_cvector, "Neutral");
				var_0_object->SetMessage(525528); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525529, -1, 26885); //@t
				var_0_object->AddReply(529271, -1, 30724); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_2360(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2273();
			if(var_22_cvector == 27712) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_2362();
			}
			if(var_22_cvector == 27732) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_2371();
			}
			if(var_22_cvector == 27734) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_2371();
			}
			if(var_21_bool == 27705) {
				bool var_74_bool;
				func_2416(var_1_object);
				if(var_74_bool != 0) {
					func_372(var_22_cvector, "Neutral");
					var_0_object->SetMessage(526430); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526431, 27707, 27706); //@t
					var_0_object->AddReply(529003, 30441, 30440); //@t
					return 0;
				}
				func_372(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526438); //@t
				var_0_object->ClearReplies(); //@t
				bool var_108_bool;
				func_2428(var_1_object);
				if(var_108_bool != 0)
					var_0_object->AddReply(526450, 27726, 27725); //@t
				var_0_object->AddReply(526439, -1, 27714); //@t
				return 0;
			}
			if(var_21_bool == 27726) {
				func_372(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526451); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526452, 30435, 27727); //@t
				var_0_object->AddReply(528997, 30435, 30434); //@t
				return 0;
			}
			if(var_21_bool == 30435) {
				func_372(var_22_cvector, "Oracle");
				var_0_object->SetMessage(528998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528999, 27728, 30436); //@t
				return 0;
			}
			if(var_21_bool == 27728) {
				func_372(var_22_cvector, "Oracle");
				var_0_object->SetMessage(526453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526454, 27731, 27729); //@t
				var_0_object->AddReply(526455, 27733, 27730); //@t
				return 0;
			}
			if(var_21_bool == 27733) {
				func_372(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526458); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526459, -1, 27734); //@t
				return 0;
			}
			if(var_21_bool == 27731) {
				func_372(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526456); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529001, 30439, 30438); //@t
				return 0;
			}
			if(var_21_bool == 30439) {
				func_372(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526457, -1, 27732); //@t
				return 0;
			}
			if(var_21_bool == 30441) {
				func_372(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529004); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529005, 27707, 30442); //@t
				var_0_object->AddReply(529006, 30445, 30444); //@t
				return 0;
			}
			if(var_21_bool == 30445) {
				func_372(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529007); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529008, 27707, 30446); //@t
				return 0;
			}
			if(var_21_bool == 27707) {
				func_372(var_22_cvector, "Refusal");
				var_0_object->SetMessage(526432); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526433, 27709, 27708); //@t
				return 0;
			}
			if(var_21_bool == 27709) {
				func_372(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526435, 27711, 27710); //@t
				var_0_object->AddReply(529009, 27711, 30448); //@t
				return 0;
			}
			if(var_21_bool == 27711) {
				func_372(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529010, 30450, 30449); //@t
				return 0;
			}
			if(var_21_bool == 30450) {
				func_372(var_22_cvector, "Oracle");
				var_0_object->SetMessage(529011); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526437, -1, 27712); //@t
				return 0;
			}
			var_3_string = true;
			bool var_216_bool;
			func_2360(var_216_bool);
			if(var_216_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x18b";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2273();
			if(var_22_cvector == 28709) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_2386();
			}
			if(var_22_cvector == 28711) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_2406();
			}
			if(var_22_cvector == 28669) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_2386();
			}
			if(var_22_cvector == 28696) {
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_2400();
			}
			if(var_21_bool == 28699) {
				bool var_87_bool = false;
				bool var_88_bool;
				func_2440(var_1_object);
				if(var_88_bool != 0) {
					bool var_96_bool;
					func_2452(var_1_object);
					if(var_96_bool != 0)
						var_87_bool = true;
				}
				if(var_87_bool != 0) {
					object var_102_object; object var_103_object;
					var_102_object = var_1_object;
					var_103_object = var_0_object;
					func_2380();
					func_941(var_22_cvector, "Neutral");
					var_0_object->SetMessage(527376); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527379, 28703, 28702); //@t
					return 0;
				}
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527212); //@t
				var_0_object->ClearReplies(); //@t
				bool var_129_bool;
				func_2440(var_1_object);
				if(var_129_bool != 0)
					var_0_object->AddReply(527339, 28658, 28657); //@t
				bool var_134_bool = true;
				bool var_135_bool = false;
				bool var_136_bool;
				func_2476(var_1_object);
				if(var_136_bool != 0) {
					bool var_142_bool;
					func_2440(var_1_object);
					if(var_142_bool != 0)
						var_135_bool = true;
				}
				if(var_135_bool != 1) {
					bool var_144_bool = false;
					bool var_145_bool;
					func_2464(var_1_object);
					if(var_145_bool != 0) {
						bool var_151_bool;
						func_2476(var_1_object);
						if(var_151_bool != 0)
							var_144_bool = true;
					}
					if(var_144_bool != 1)
						var_134_bool = false;
				}
				if(var_134_bool != 0)
					var_0_object->AddReply(527373, 28707, 28696); //@t
				var_0_object->AddReply(527218, -1, 28526); //@t
				return 0;
			}
			if(var_21_bool == 28707) {
				func_941(var_22_cvector, "Refusal");
				var_0_object->SetMessage(527383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527384, 28697, 28708); //@t
				return 0;
			}
			if(var_21_bool == 28697) {
				func_941(var_22_cvector, "Refusal");
				var_0_object->SetMessage(527374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527375, 28522, 28698); //@t
				return 0;
			}
			if(var_21_bool == 28522) {
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527215, 28524, 28523); //@t
				return 0;
			}
			if(var_21_bool == 28524) {
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527217, -1, 28525); //@t
				return 0;
			}
			if(var_21_bool == 28658) {
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527340); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527355, 28675, 28674); //@t
				return 0;
			}
			if(var_21_bool == 28675) {
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527341, 28660, 28659); //@t
				var_0_object->AddReply(527352, 28671, 28670); //@t
				return 0;
			}
			if(var_21_bool == 28671) {
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527354, 28662, 28672); //@t
				return 0;
			}
			if(var_21_bool == 28660) {
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527342); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527343, 28662, 28661); //@t
				return 0;
			}
			if(var_21_bool == 28662) {
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527344); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527345, 28664, 28663); //@t
				return 0;
			}
			if(var_21_bool == 28664) {
				func_941(var_22_cvector, "Refusal");
				var_0_object->SetMessage(527346); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527347, 28666, 28665); //@t
				return 0;
			}
			if(var_21_bool == 28666) {
				func_941(var_22_cvector, "Oracle");
				var_0_object->SetMessage(527348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527349, 28668, 28667); //@t
				return 0;
			}
			if(var_21_bool == 28668) {
				func_941(var_22_cvector, "Oracle");
				var_0_object->SetMessage(527350); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527351, -1, 28669); //@t
				return 0;
			}
			if(var_21_bool == 28703) {
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527213, 28693, 28521); //@t
				return 0;
			}
			if(var_21_bool == 28693) {
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527371, 28700, 28694); //@t
				return 0;
			}
			if(var_21_bool == 28700) {
				func_941(var_22_cvector, "Oracle");
				var_0_object->SetMessage(527377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527378, 28695, 28701); //@t
				return 0;
			}
			if(var_21_bool == 28695) {
				func_941(var_22_cvector, "Oracle");
				var_0_object->SetMessage(527372); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527381, 28706, 28704); //@t
				return 0;
			}
			if(var_21_bool == 28706) {
				func_941(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527382); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527385, -1, 28709); //@t
				var_0_object->AddReply(527387, -1, 28711); //@t
				return 0;
			}
			var_3_string = true;
			bool var_284_bool;
			func_2360(var_284_bool);
			if(var_284_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3c4";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2273();
			if(var_21_int == 41258) {
				func_1573(var_22_cvector, "Neutral");
				var_0_object->SetMessage(539315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542623, 45026, 45025); //@t
				var_0_object->AddReply(542622, -1, 45024); //@t
				var_0_object->AddReply(539316, -1, 41259); //@t
				return 0;
			}
			if(var_21_int == 45026) {
				func_1573(var_22_cvector, "Oracle");
				var_0_object->SetMessage(542624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542629, 45032, 45031); //@t
				var_0_object->AddReply(542625, 45028, 45027); //@t
				return 0;
			}
			if(var_21_int == 45028) {
				func_1573(var_22_cvector, "Neutral");
				var_0_object->SetMessage(542626); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542627, -1, 45029); //@t
				var_0_object->AddReply(542628, -1, 45030); //@t
				return 0;
			}
			if(var_21_int == 45032) {
				func_1573(var_22_cvector, "Oracle");
				var_0_object->SetMessage(542630); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542631, -1, 45033); //@t
				var_0_object->AddReply(542632, -1, 45034); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_2360(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x63c";
	
	}

}


maintask task_8
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1718(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1783();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1997(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1752(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1732(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_2280(var_67_object);
					var_67_object = var_66_object;
					func_2147(var_65_bool, var_66_object);
				}
			} else {
				func_1747(var_21_int);
				func_1774();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1965();
		func_1783();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		@StopGroup0();
		func_1783();
		func_2227("Neutral");
		func_1774();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1774();
		else
			func_2227("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1965();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1988(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_2598(var_39_object);
			func_2227("Neutral");
			func_1783();
			func_1774();
		}
	}

}


void func_0(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	var_43_object = var_54_object;
	func_2002(var_53_bool, var_54_object, 130.0);
	if(!var_53_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_101_int;
	func_2354(var_101_int);
	var_49_object->SetNPCName(var_101_int);
	int var_102_int;
	func_2352(var_102_int);
	var_49_object->SetNPCDescription(var_102_int);
	string var_103_string;
	func_2356(var_103_string);
	var_49_object->SetPhoto(var_103_string);
	string var_104_string;
	func_2358(var_104_string);
	var_49_object->SetPhoto2(var_104_string);
	int var_105_int;
	func_2581(var_105_int);
	var_49_object->SetPlayerName(var_105_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	bool var_114_bool; object var_115_object;
	object var_116_object;
	func_2280(var_116_object);
	var_116_object = var_115_object;
	func_2089(var_114_bool, var_115_object);
	object var_209_object; object var_210_object;
	var_43_object = var_209_object;
	var_49_object = var_210_object;
	TaskCall(1);
	func_81(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_258_bool = !var_52_bool; //@nz
		if(var_258_bool == 0) goto Label_70;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_70:
	object var_259_object;
	var_43_object = var_259_object;
	func_2071();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


void func_2313(int var_169_int)
{
	float var_171_float;
	@GetGameTime(var_171_float);
	var_169_int = 1 + (var_171_float / 24);
}


// @pe
void func_2322(bool var_268_bool, int var_269_int)
{
	int var_270_int;
	func_2313(var_270_int);
	var_268_bool = var_270_int == var_269_int;
}


void func_2581(int var_105_int)
{
	int var_107_int;
	@GetVariable("branch", var_107_int);
	if(var_107_int == 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0xa24";
	}
	if(var_107_int == 1) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
}


void func_2071(void)
{
	bool var_261_bool;
	@CameraSwitchToNormal(true);
	bool var_263_bool;
	func_2360(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		@HasAnimationTrack(var_261_bool, "head");
		if(var_261_bool == 0) goto Label_2088;
		@UnlookAsync("head");
	}
Label_2088:
	
}


void func_2328(string var_46_string, int var_47_int)
{
	string var_49_string = "idle";
	if(var_47_int != 0)
		var_49_string += var_47_int;
	var_49_string = var_46_string;
}


// @pe
void func_284(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_295_object, object var_296_object)
{
	var_0_object = var_296_object;
	var_1_object = var_295_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_302_bool;
		func_2416(var_1_object);
		if(var_302_bool != 0) {
			func_372(var_296_object, "Neutral");
			var_0_object->SetMessage(526430); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526431, 27707, 27706); //@t
			var_0_object->AddReply(529003, 30441, 30440); //@t
		} else {
					func_372(var_296_object, "Neutral");
					var_0_object->SetMessage(526438); //@t
					var_0_object->ClearReplies(); //@t
					bool var_335_bool;
					func_2428(var_1_object);
					if(var_335_bool != 0)
						var_0_object->AddReply(526450, 27726, 27725); //@t
					var_0_object->AddReply(526439, -1, 27714); //@t
		}
	}
	for(;;) {
		bool var_325_bool;
		func_2360(var_325_bool);
		if(var_325_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2227(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_371;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_371:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x120";


void func_2335(int var_40_int)
{
	int var_43_int; bool var_44_bool;
	var_43_int = 0;
	
	for(;;) {
		string var_46_string; int var_47_int;
		var_43_int = var_47_int;
		func_2328(var_46_string, var_47_int);
		@HasAnimation(var_44_bool, "all", var_46_string);
		if(!var_44_bool) //@nz
			break;
		var_43_int += 1;
	}
	var_43_int = var_40_int;
}


// @pe
void func_1573(object var_2_object, string var_486_string)
{
	bool var_487_bool;
	func_2360(var_487_bool);
	if(!var_487_bool) //@nz
		return 0;
	if(var_486_string == var_2_object)
		return 0;
	string var_490_string; bool var_491_bool;
	var_486_string = var_490_string;
	if(var_486_string == "")
		var_491_bool = false;
	else
		var_491_bool = true;
	func_2243(var_490_string, var_491_bool);
	var_2_object = var_486_string;
	
}


// @pe
void func_2598(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(0);
		func_0(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_267_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_268_bool;
	func_2322(var_268_bool, 8);
	if(var_268_bool != 0) {
		int var_271_int; object var_272_object;
		var_39_object = var_272_object;
		TaskCall(2);
		func_203(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 0;
	}
	bool var_349_bool;
	func_2322(var_349_bool, 11);
	if(var_349_bool != 0) {
		int var_351_int; object var_352_object;
		var_39_object = var_352_object;
		TaskCall(4);
		func_726(var_353_object, var_351_int, var_352_object);
		TaskReturn();
		return 0;
	}
	bool var_453_bool;
	func_2322(var_453_bool, 12);
	if(var_453_bool != 0) {
		int var_455_int; object var_456_object;
		var_39_object = var_456_object;
		TaskCall(6);
		func_1429(var_457_object, var_455_int, var_456_object);
		TaskReturn();
		return 0;
	}
}


// @pe
void func_807(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_375_object, object var_376_object)
{
	var_0_object = var_376_object;
	var_1_object = var_375_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_382_bool = false;
		bool var_383_bool;
		func_2440(var_1_object);
		if(var_383_bool != 0) {
			bool var_389_bool;
			func_2452(var_1_object);
			if(var_389_bool != 0)
				var_382_bool = true;
		}
		if(var_382_bool != 0) {
			object var_395_object; object var_396_object;
			var_395_object = var_1_object;
			var_396_object = var_0_object;
			func_2380();
			func_941(var_376_object, "Neutral");
			var_0_object->SetMessage(527376); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(527379, 28703, 28702); //@t
		} else {
					func_941(var_376_object, "Neutral");
					var_0_object->SetMessage(527212); //@t
					var_0_object->ClearReplies(); //@t
					bool var_421_bool;
					func_2440(var_1_object);
					if(var_421_bool != 0)
						var_0_object->AddReply(527339, 28658, 28657); //@t
					bool var_426_bool = true;
					bool var_427_bool = false;
					bool var_428_bool;
					func_2476(var_1_object);
					if(var_428_bool != 0) {
						bool var_434_bool;
						func_2440(var_1_object);
						if(var_434_bool != 0)
							var_427_bool = true;
					}
					if(var_427_bool != 1) {
						bool var_436_bool = false;
						bool var_437_bool;
						func_2464(var_1_object);
						if(var_437_bool != 0) {
							bool var_443_bool;
							func_2476(var_1_object);
							if(var_443_bool != 0)
								var_436_bool = true;
						}
						if(var_436_bool != 1)
							var_426_bool = false;
					}
					if(var_426_bool != 0)
						var_0_object->AddReply(527373, 28707, 28696); //@t
					var_0_object->AddReply(527218, -1, 28526); //@t
		}
	}
	for(;;) {
		bool var_411_bool;
		func_2360(var_411_bool);
		if(var_411_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2227(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_940;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_940:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x32b";


void func_2089(bool var_114_bool, object var_115_object)
{
	int var_121_int; int var_122_int;
	@GetVariable("voice_common", var_121_int);
	if(var_121_int != 0) {
		bool var_125_bool; object var_126_object;
		var_115_object = var_126_object;
		func_2147(var_125_bool, var_126_object);
		if(!var_125_bool) { //@nz
			bool var_156_bool; object var_157_object;
			var_115_object = var_157_object;
			func_2184(var_156_bool, var_157_object);
			if(!var_156_bool) { //@nz
				var_114_bool = false;
				return 4;
			}
		}
		@irand(var_122_int, 2);
		if(var_122_int != 0)
			@SetVariable("voice_common", ((var_121_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_201_bool; object var_202_object;
		var_115_object = var_202_object;
		func_2184(var_201_bool, var_202_object);
		if(!var_201_bool) { //@nz
			bool var_204_bool; object var_205_object;
			var_115_object = var_205_object;
			func_2147(var_204_bool, var_205_object);
			if(!var_204_bool) { //@nz
				var_114_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2145;
	
Label_2145:
	var_114_bool = true;
	
}


void func_2352(int var_102_int)
{
	var_102_int = 515553;
}


void func_2354(int var_101_int)
{
	var_101_int = 502878;
}


void func_2356(string var_103_string)
{
	var_103_string = "ui/NPC_Starshina.png";
}


void func_2358(string var_104_string)
{
	var_104_string = "ui/NPC_Starshina_b.png";
}


void func_2360(bool var_96_bool)
{
	var_96_bool = true;
}


// @pe
void func_2362(void)
{
	@SetVariable("k8q01", 5);
	func_2527();
}


// @pe
void func_2371(void)
{
	@SetVariable("k8q01", 7);
	func_2514();
}


// @pe
void func_2380(void)
{
	@SetVariable("ook11Starshina1", 1);
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_209_object, object var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_210_object, "Neutral");
		var_0_object->SetMessage(525528); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525529, -1, 26885); //@t
		var_0_object->AddReply(529271, -1, 30724); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_240_bool;
	func_2360(var_240_bool);
	if(var_240_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2227(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


// @pe
void func_2386(void)
{
	@SetVariable("k11q01", 6);
	func_2501();
	bool var_54_bool;
	func_2301(var_54_bool, "quest_k11_01", "place_burah");
}


// @pe
void func_2400(void)
{
	@SetVariable("ook11Starshina2", 1);
}


void func_2147(bool var_125_bool, object var_126_object)
{
	string var_132_string; bool var_134_bool; int var_135_int; string var_136_string;
	var_132_string = "c";
	int var_133_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_126_object->HasProperty((var_132_string + (var_133_int + 1)), var_134_bool);
			if(!var_134_bool) { //@nz
			} else {
				var_133_int += 1;
			}
		}
		if(!var_133_int) { //@nz
			var_125_bool = false;
			return 10;
		}
		var_135_int = 0;
		if(var_133_int > 1)
			@irand(var_135_int, var_133_int);
		var_126_object->GetProperty((var_132_string + (var_135_int + 1)), var_136_string);
		bool var_148_bool; string var_149_string;
		var_136_string = var_149_string;
		func_2258(var_148_bool, var_149_string);
		var_148_bool = var_125_bool;
		return 10;

	}
}


// @pe
void func_2406(void)
{
	func_2488();
	bool var_72_bool;
	func_2301(var_72_bool, "quest_k11_01", "fail");
}


void func_1894(void)
{
	bool var_34_bool; int var_35_int; int var_36_int; bool var_37_bool;
	@WaitForAnimEnd();
	bool var_38_bool;
	func_1997(var_38_bool);
	if(!var_38_bool) //@nz
		return 12;
	int var_40_int;
	func_2335(var_40_int);
	int var_32_int;
	var_40_int = var_32_int;
	int var_33_int = 0;
	
	for(;;) {
		bool var_53_bool = false;
		if(var_33_int < 5) {
			bool var_56_bool;
			func_1997(var_56_bool);
			if(var_56_bool != 0)
				var_53_bool = true;
		}
		if(var_53_bool != 0) {
			if(!var_32_int) { //@nz
				@Sleep(3, var_34_bool);
				if(!var_34_bool) { //@nz
				} else {
			} else {
			@irand(var_35_int, var_32_int);
			@irand(var_36_int, 5);
			if(var_36_int != 0)
				var_35_int = 0;
			string var_67_string; int var_68_int;
			var_35_int = var_68_int;
			func_2328(var_67_string, var_68_int);
			@PlayAnimation("all", var_67_string);
			@WaitForAnimEnd(var_37_bool);
			var_69_bool = !var_37_bool; //@nz
			if(var_69_bool == 0) goto Label_1949;
			goto Label_1960;
			}
				Label_1949:
					bool var_60_bool;
					func_1963(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_1955;
			}
		}
	Label_1960:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1955:
		@ResetAAS();
		var_33_int += 1;
	}
	
}


// @pe
void func_2416(bool var_302_bool)
{
	int var_304_int;
	func_2296(var_304_int, "k8q01");
	if(var_304_int == 4)
		var_302_bool = true;
	var_302_bool = false;
}


// @pe
void func_372(object var_2_object, string var_310_string)
{
	bool var_311_bool;
	func_2360(var_311_bool);
	if(!var_311_bool) //@nz
		return 0;
	if(var_310_string == var_2_object)
		return 0;
	string var_314_string; bool var_315_bool;
	var_310_string = var_314_string;
	if(var_310_string == "")
		var_315_bool = false;
	else
		var_315_bool = true;
	func_2243(var_314_string, var_315_bool);
	var_2_object = var_310_string;
	
}


// @pe
void func_2428(bool var_335_bool)
{
	int var_337_int;
	func_2296(var_337_int, "k8q01");
	if(var_337_int == 6)
		var_335_bool = true;
	var_335_bool = false;
}


void func_2184(bool var_156_bool, object var_157_object)
{
	bool var_165_bool; int var_166_int; string var_167_string;
	int var_169_int;
	func_2313(var_169_int);
	string var_163_string = ("d" + var_169_int) + "m";
	int var_164_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_157_object->HasProperty((var_163_string + (var_164_int + 1)), var_165_bool);
			if(!var_165_bool) { //@nz
			} else {
				var_164_int += 1;
			}
		}
		if(!var_164_int) { //@nz
			var_156_bool = false;
			return 10;
		}
		var_166_int = 0;
		if(var_164_int > 1)
			@irand(var_166_int, var_164_int);
		var_157_object->GetProperty((var_163_string + (var_166_int + 1)), var_167_string);
		bool var_188_bool; string var_189_string;
		var_167_string = var_189_string;
		func_2258(var_188_bool, var_189_string);
		var_188_bool = var_156_bool;
		return 10;

	}
}


// @pe
void func_2440(bool var_383_bool)
{
	int var_385_int;
	func_2296(var_385_int, "k11q01");
	if(var_385_int == 5)
		var_383_bool = true;
	var_383_bool = false;
}


// @pe
void func_139(object var_2_object, string var_216_string)
{
	bool var_217_bool;
	func_2360(var_217_bool);
	if(!var_217_bool) //@nz
		return 0;
	if(var_216_string == var_2_object)
		return 0;
	string var_220_string; bool var_221_bool;
	var_216_string = var_220_string;
	if(var_216_string == "")
		var_221_bool = false;
	else
		var_221_bool = true;
	func_2243(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	
}


// @pe
void func_2452(bool var_389_bool)
{
	int var_391_int;
	func_2296(var_391_int, "ook11Starshina1");
	if(var_391_int == 0) {
		var_389_bool = true;
		return 0;
	}
	var_389_bool = false;
}


void func_1429(object var_0_object, int var_455_int, object var_456_object)
{
	var_0_object = var_456_object;
	bool var_466_bool; object var_467_object;
	var_456_object = var_467_object;
	func_2002(var_466_bool, var_467_object, 130.0);
	if(!var_466_bool) { //@nz
		var_455_int = -2;
		return 8;
	}
	object var_462_object;
	@CreateDialog(var_462_object);
	int var_470_int;
	func_2354(var_470_int);
	var_462_object->SetNPCName(var_470_int);
	int var_471_int;
	func_2352(var_471_int);
	var_462_object->SetNPCDescription(var_471_int);
	string var_472_string;
	func_2356(var_472_string);
	var_462_object->SetPhoto(var_472_string);
	string var_473_string;
	func_2358(var_473_string);
	var_462_object->SetPhoto2(var_473_string);
	int var_474_int;
	func_2581(var_474_int);
	var_462_object->SetPlayerName(var_474_int);
	bool var_463_bool;
	@IsOverrideActive(var_463_bool);
	if(var_463_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	@DoDialog(var_462_object);
	bool var_476_bool; object var_477_object;
	object var_478_object;
	func_2280(var_478_object);
	var_478_object = var_477_object;
	func_2089(var_476_bool, var_477_object);
	object var_479_object; object var_480_object;
	var_456_object = var_479_object;
	var_462_object = var_480_object;
	TaskCall(7);
	func_1510(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object);
	TaskReturn();
	bool var_465_bool;
	var_462_object->IsDialogEnd(var_465_bool);
	
	for(;;) {
		var_512_bool = !var_465_bool; //@nz
		if(var_512_bool == 0) goto Label_1499;
		@sync();
		var_462_object->IsDialogEnd(var_465_bool);
	}
	
Label_1499:
	object var_513_object;
	var_456_object = var_513_object;
	func_2071();
	@StopDialog(var_462_object);
	var_462_object->GetReturnValue(-1);
	int var_464_int = var_455_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2464(bool var_437_bool)
{
	int var_439_int;
	func_2296(var_439_int, "k11q01");
	if(var_439_int == 6)
		var_437_bool = true;
	var_437_bool = false;
}


void func_1963(bool var_60_bool)
{
	var_60_bool = true;
}


// @pe
void func_2476(bool var_428_bool)
{
	int var_430_int;
	func_2296(var_430_int, "ook11Starshina2");
	if(var_430_int == 0) {
		var_428_bool = true;
		return 0;
	}
	var_428_bool = false;
}


// @pe
void func_941(object var_2_object, string var_399_string)
{
	bool var_400_bool;
	func_2360(var_400_bool);
	if(!var_400_bool) //@nz
		return 0;
	if(var_399_string == var_2_object)
		return 0;
	string var_403_string; bool var_404_bool;
	var_399_string = var_403_string;
	if(var_399_string == "")
		var_404_bool = false;
	else
		var_404_bool = true;
	func_2243(var_403_string, var_404_bool);
	var_2_object = var_399_string;
	
}


void func_1965(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1970(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_2227(string var_242_string)
{
	bool var_246_bool; float var_247_float; float var_248_float;
	@lshHasAnimation(var_246_bool, var_242_string);
	if(var_246_bool != 0) {
		@lshGetAnimTimes(var_242_string, var_247_float, var_248_float);
		@lshPlayAnimation(var_247_float, var_248_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_242_string);
	}
	
}


void func_1718(object var_0_object)
{
	bool var_22_bool;
	func_1997(var_22_bool);
	if(!var_22_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1894();
	}
}
EMIT "Return(); Pop(0)";


void func_2488(void)
{
	object var_65_object;
	@CreateDiaryEntry(var_65_object, 788, 1, 542507);
	bool var_69_bool; object var_70_object;
	var_65_object = var_70_object;
	func_2553(var_69_bool, var_70_object, 480);
}
EMIT "Stack[-1] = 0";


void func_1978(bool var_29_bool, cvector var_30_cvector)
{
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector = var_30_cvector - var_34_cvector;
	var_37_float = GetByIndex(var_35_cvector, 0);
	var_38_float = GetByIndex(var_35_cvector, 2);
	bool var_36_bool;
	@Rotate(var_37_float, var_38_float, var_36_bool);
	var_36_bool = var_29_bool;
}


void func_2243(string var_220_string, bool var_221_bool)
{
	bool var_227_bool; float var_228_float; float var_229_float;
	@lshHasAnimation(var_227_bool, var_220_string);
	if(var_227_bool != 0) {
		@lshGetAnimTimes(var_220_string, var_228_float, var_229_float);
		@lshPlayAnimation(var_228_float, var_229_float, var_221_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_220_string);
	}
	
}


void func_1988(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1978(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1732(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1988(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


void func_2501(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 489, 1, 528056);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_2553(var_36_bool, var_37_object, 480);
}
EMIT "Stack[-1] = 0";


void func_203(object var_0_object, int var_271_int, object var_272_object)
{
	var_0_object = var_272_object;
	bool var_282_bool; object var_283_object;
	var_272_object = var_283_object;
	func_2002(var_282_bool, var_283_object, 130.0);
	if(!var_282_bool) { //@nz
		var_271_int = -2;
		return 8;
	}
	object var_278_object;
	@CreateDialog(var_278_object);
	int var_286_int;
	func_2354(var_286_int);
	var_278_object->SetNPCName(var_286_int);
	int var_287_int;
	func_2352(var_287_int);
	var_278_object->SetNPCDescription(var_287_int);
	string var_288_string;
	func_2356(var_288_string);
	var_278_object->SetPhoto(var_288_string);
	string var_289_string;
	func_2358(var_289_string);
	var_278_object->SetPhoto2(var_289_string);
	int var_290_int;
	func_2581(var_290_int);
	var_278_object->SetPlayerName(var_290_int);
	bool var_279_bool;
	@IsOverrideActive(var_279_bool);
	if(var_279_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	@DoDialog(var_278_object);
	bool var_292_bool; object var_293_object;
	object var_294_object;
	func_2280(var_294_object);
	var_294_object = var_293_object;
	func_2089(var_292_bool, var_293_object);
	object var_295_object; object var_296_object;
	var_272_object = var_295_object;
	var_278_object = var_296_object;
	TaskCall(3);
	func_284(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object);
	TaskReturn();
	bool var_281_bool;
	var_278_object->IsDialogEnd(var_281_bool);
	
	for(;;) {
		var_347_bool = !var_281_bool; //@nz
		if(var_347_bool == 0) goto Label_273;
		@sync();
		var_278_object->IsDialogEnd(var_281_bool);
	}
	
Label_273:
	object var_348_object;
	var_272_object = var_348_object;
	func_2071();
	@StopDialog(var_278_object);
	var_278_object->GetReturnValue(-1);
	int var_280_int = var_271_int;
}
EMIT "Stack[-4] = 0";


void func_1997(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_2002(bool var_53_bool, object var_54_object, float var_55_float)
{
	cvector var_66_cvector; bool var_73_bool;
	var_54_object->GetPosition(var_66_cvector);
	float var_65_float;
	var_54_object->GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_74_float + var_65_float);
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	@GetEyesHeight(var_65_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_75_float + var_65_float);
	cvector var_68_cvector = var_66_cvector - var_67_cvector;
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_78_float = sqrt(var_68_cvector | var_68_cvector);
	var_68_cvector /= var_78_float;
	cvector var_69_cvector = -var_68_cvector;
	cvector var_80_cvector;
	func_2286(var_80_cvector, (var_69_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_70_cvector = ((var_68_cvector * var_55_float) + (var_80_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0)
		var_53_bool = false;
	@StopWorld();
	@CameraTransit((var_67_cvector + var_70_cvector), var_69_cvector, true);
	var_94_float = GetByIndex(var_70_cvector, 0);
	var_95_float = GetByIndex(var_70_cvector, 2);
	@Rotate(var_94_float, var_95_float);
	bool var_96_bool;
	func_2360(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		@HasAnimationTrack(var_73_bool, "head");
		if(var_73_bool == 0) goto Label_2065;
		@LookAsyncCamera("head");
	}
Label_2065:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_53_bool = true;
	
}


void func_1747(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_2258(bool var_148_bool, string var_149_string)
{
	bool var_151_bool;
	bool var_152_bool;
	func_2360(var_152_bool);
	if(var_152_bool != 0) {
		@lshHasSpeech(var_151_bool, var_149_string);
		if(var_151_bool != 0) {
			@lshPlaySpeech(var_149_string);
			var_148_bool = true;
		}
	}
	var_148_bool = false;
}


void func_2514(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 445, 1, 526470);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_2553(var_65_bool, var_66_object, 438);
}
EMIT "Stack[-1] = 0";


void func_726(object var_0_object, int var_351_int, object var_352_object)
{
	var_0_object = var_352_object;
	bool var_362_bool; object var_363_object;
	var_352_object = var_363_object;
	func_2002(var_362_bool, var_363_object, 130.0);
	if(!var_362_bool) { //@nz
		var_351_int = -2;
		return 8;
	}
	object var_358_object;
	@CreateDialog(var_358_object);
	int var_366_int;
	func_2354(var_366_int);
	var_358_object->SetNPCName(var_366_int);
	int var_367_int;
	func_2352(var_367_int);
	var_358_object->SetNPCDescription(var_367_int);
	string var_368_string;
	func_2356(var_368_string);
	var_358_object->SetPhoto(var_368_string);
	string var_369_string;
	func_2358(var_369_string);
	var_358_object->SetPhoto2(var_369_string);
	int var_370_int;
	func_2581(var_370_int);
	var_358_object->SetPlayerName(var_370_int);
	bool var_359_bool;
	@IsOverrideActive(var_359_bool);
	if(var_359_bool != 0) {
		var_351_int = -2;
		return 8;
	}
	@DoDialog(var_358_object);
	bool var_372_bool; object var_373_object;
	object var_374_object;
	func_2280(var_374_object);
	var_374_object = var_373_object;
	func_2089(var_372_bool, var_373_object);
	object var_375_object; object var_376_object;
	var_352_object = var_375_object;
	var_358_object = var_376_object;
	TaskCall(5);
	func_807(var_377_object, var_378_object, var_379_string, var_380_bool, var_375_object, var_376_object);
	TaskReturn();
	bool var_361_bool;
	var_358_object->IsDialogEnd(var_361_bool);
	
	for(;;) {
		var_451_bool = !var_361_bool; //@nz
		if(var_451_bool == 0) goto Label_796;
		@sync();
		var_358_object->IsDialogEnd(var_361_bool);
	}
	
Label_796:
	object var_452_object;
	var_352_object = var_452_object;
	func_2071();
	@StopDialog(var_358_object);
	var_358_object->GetReturnValue(-1);
	int var_360_int = var_351_int;
}
EMIT "Stack[-4] = 0";


void func_1752(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1970(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_2527(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 443, 1, 526468);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_2553(var_36_bool, var_37_object, 438);
}
EMIT "Stack[-1] = 0";


void func_2273(void)
{
	bool var_24_bool;
	func_2360(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1510(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_479_object, object var_480_object)
{
	var_0_object = var_480_object;
	var_1_object = var_479_object;
	var_3_string = false;
	if(1 != 0) {
		func_1573(var_480_object, "Neutral");
		var_0_object->SetMessage(539315); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(542623, 45026, 45025); //@t
		var_0_object->AddReply(542622, -1, 45024); //@t
		var_0_object->AddReply(539316, -1, 41259); //@t
		goto Label_1543;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5ea";
	}
Label_1543:
	bool var_504_bool;
	func_2360(var_504_bool);
	if(var_504_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2227(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1572;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1572:
		return 0;

	}
	
}


void func_2280(object var_116_object)
{
	object var_118_object;
	@self(var_118_object);
	var_118_object = var_116_object;
}
EMIT "Stack[-1] = 0";


void func_2540(object var_45_object)
{
	object var_47_object;
	@GetDiaryRoot(var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_45_object = false;
	}
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_1774(void)
{
	float var_517_float;
	@rand(var_517_float, 8, 16);
	@SetTimer(10, var_517_float);
}


void func_2286(cvector var_80_cvector, cvector var_81_cvector)
{
	float var_84_float = sqrt(var_81_cvector | var_81_cvector);
	if(var_84_float < 0.000001)
		var_80_cvector = [0.0, 0.0, 0.0];
	var_80_cvector = var_81_cvector / var_84_float;
}


void func_1783(void)
{
	@KillTimer(10);
}


void func_2296(int var_304_int, string var_305_string)
{
	int var_307_int;
	@GetVariable(var_305_string, var_307_int);
	var_307_int = var_304_int;
}


void func_2553(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_2540(var_45_object);
	object var_42_object;
	var_45_object = var_42_object;
	object var_43_object;
	var_42_object->Find(var_38_int, var_43_object);
	if(!var_43_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_38_int);
		var_36_bool = false;
	}
	var_43_object->AddChild(var_37_object);
	@SendWorldWndMessage(7);
	int var_44_int;
	var_37_object->GetCategory(var_44_int);
	@SetDiarySection(var_44_int);
	var_36_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2301(bool var_54_bool, string var_55_string, string var_56_string)
{
	object var_58_object;
	@FindActor(var_58_object, var_55_string);
	if(var_58_object == null)
		var_54_bool = false;
	@Trigger(var_58_object, var_56_string);
	var_54_bool = true;
}
EMIT "Stack[-1] = 0";


