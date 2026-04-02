// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2175();
			if(var_21_bool == 26884) {
				func_152(var_22_cvector, "Neutral");
				var_0_object->SetMessage(525528); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525529, -1, 26885); //@t
				var_0_object->AddReply(529271, -1, 30724); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_2262(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2175();
			if(var_22_cvector == 27712) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_2264();
			}
			if(var_22_cvector == 27732) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_2273();
			}
			if(var_22_cvector == 27734) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_2273();
			}
			if(var_21_bool == 27705) {
				bool var_74_bool;
				func_2308(var_1_object);
				if(var_74_bool != 0) {
					func_385(var_22_cvector, "Neutral");
					var_0_object->SetMessage(526430); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526431, 27707, 27706); //@t
					var_0_object->AddReply(529003, 30441, 30440); //@t
					return 0;
				}
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526438); //@t
				var_0_object->ClearReplies(); //@t
				bool var_103_bool;
				func_2320(var_1_object);
				if(var_103_bool != 0)
					var_0_object->AddReply(526450, 27726, 27725); //@t
				var_0_object->AddReply(526439, -1, 27714); //@t
				return 0;
			}
			if(var_21_bool == 27726) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526451); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526452, 30435, 27727); //@t
				var_0_object->AddReply(528997, -1, 30434); //@t
				return 0;
			}
			if(var_21_bool == 30435) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528999, 27728, 30436); //@t
				return 0;
			}
			if(var_21_bool == 27728) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526454, 27731, 27729); //@t
				var_0_object->AddReply(526455, 27733, 27730); //@t
				return 0;
			}
			if(var_21_bool == 27733) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526458); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526459, -1, 27734); //@t
				return 0;
			}
			if(var_21_bool == 27731) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526456); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529001, 30439, 30438); //@t
				return 0;
			}
			if(var_21_bool == 30439) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526457, -1, 27732); //@t
				return 0;
			}
			if(var_21_bool == 30441) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529004); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529005, 27707, 30442); //@t
				var_0_object->AddReply(529006, 30445, 30444); //@t
				return 0;
			}
			if(var_21_bool == 30445) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529007); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529008, 27707, 30446); //@t
				return 0;
			}
			if(var_21_bool == 27707) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526432); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526433, 27709, 27708); //@t
				return 0;
			}
			if(var_21_bool == 27709) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526435, 27711, 27710); //@t
				var_0_object->AddReply(529009, 27711, 30448); //@t
				return 0;
			}
			if(var_21_bool == 27711) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529010, 30450, 30449); //@t
				return 0;
			}
			if(var_21_bool == 30450) {
				func_385(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529011); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526437, -1, 27712); //@t
				return 0;
			}
			var_3_string = true;
			bool var_211_bool;
			func_2262(var_211_bool);
			if(var_211_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x198";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2175();
			if(var_22_cvector == 28709) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_2288();
			}
			if(var_22_cvector == 28669) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_2288();
			}
			if(var_22_cvector == 28696) {
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_2302();
			}
			if(var_21_bool == 28699) {
				bool var_72_bool = false;
				bool var_73_bool;
				func_2332(var_1_object);
				if(var_73_bool != 0) {
					bool var_81_bool;
					func_2344(var_1_object);
					if(var_81_bool != 0)
						var_72_bool = true;
				}
				if(var_72_bool != 0) {
					object var_87_object; object var_88_object;
					var_87_object = var_1_object;
					var_88_object = var_0_object;
					func_2282();
					func_954(var_22_cvector, "Neutral");
					var_0_object->SetMessage(527376); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527379, 28703, 28702); //@t
					return 0;
				}
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527212); //@t
				var_0_object->ClearReplies(); //@t
				bool var_109_bool;
				func_2332(var_1_object);
				if(var_109_bool != 0)
					var_0_object->AddReply(527339, 28658, 28657); //@t
				bool var_114_bool = true;
				bool var_115_bool = false;
				bool var_116_bool;
				func_2368(var_1_object);
				if(var_116_bool != 0) {
					bool var_122_bool;
					func_2332(var_1_object);
					if(var_122_bool != 0)
						var_115_bool = true;
				}
				if(var_115_bool != 1) {
					bool var_124_bool = false;
					bool var_125_bool;
					func_2356(var_1_object);
					if(var_125_bool != 0) {
						bool var_131_bool;
						func_2368(var_1_object);
						if(var_131_bool != 0)
							var_124_bool = true;
					}
					if(var_124_bool != 1)
						var_114_bool = false;
				}
				if(var_114_bool != 0)
					var_0_object->AddReply(527373, 28707, 28696); //@t
				var_0_object->AddReply(527218, -1, 28526); //@t
				return 0;
			}
			if(var_21_bool == 28707) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527384, 28697, 28708); //@t
				return 0;
			}
			if(var_21_bool == 28697) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527375, 28522, 28698); //@t
				return 0;
			}
			if(var_21_bool == 28522) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527215, 28524, 28523); //@t
				return 0;
			}
			if(var_21_bool == 28524) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527217, -1, 28525); //@t
				return 0;
			}
			if(var_21_bool == 28658) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527340); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527355, 28675, 28674); //@t
				return 0;
			}
			if(var_21_bool == 28675) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527341, 28660, 28659); //@t
				var_0_object->AddReply(527352, 28671, 28670); //@t
				return 0;
			}
			if(var_21_bool == 28671) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527354, 28662, 28672); //@t
				return 0;
			}
			if(var_21_bool == 28660) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527342); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527343, 28662, 28661); //@t
				return 0;
			}
			if(var_21_bool == 28662) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527344); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527345, 28664, 28663); //@t
				return 0;
			}
			if(var_21_bool == 28664) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527346); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527347, 28666, 28665); //@t
				return 0;
			}
			if(var_21_bool == 28666) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527349, 28668, 28667); //@t
				return 0;
			}
			if(var_21_bool == 28668) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527350); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527351, -1, 28669); //@t
				return 0;
			}
			if(var_21_bool == 28703) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527213, 28693, 28521); //@t
				return 0;
			}
			if(var_21_bool == 28693) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527371, 28700, 28694); //@t
				return 0;
			}
			if(var_21_bool == 28700) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527378, 28695, 28701); //@t
				return 0;
			}
			if(var_21_bool == 28695) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527372); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527381, 28706, 28704); //@t
				return 0;
			}
			if(var_21_bool == 28706) {
				func_954(var_22_cvector, "Neutral");
				var_0_object->SetMessage(527382); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527385, -1, 28709); //@t
				var_0_object->AddReply(527387, -1, 28711); //@t
				return 0;
			}
			var_3_string = true;
			bool var_264_bool;
			func_2262(var_264_bool);
			if(var_264_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3d1";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2175();
			if(var_21_int == 41258) {
				func_1568(var_22_cvector, "Neutral");
				var_0_object->SetMessage(539315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539316, -1, 41259); //@t
				return 0;
			}
			var_3_string = true;
			bool var_43_bool;
			func_2262(var_43_bool);
			if(var_43_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x637";
	
	}

}


maintask task_9
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1634(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1705();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1919(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1674(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1654(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_2182(var_67_object);
					var_67_object = var_66_object;
					func_2067(var_65_bool, var_66_object);
				}
			} else {
				func_1669(var_21_int);
				func_1696();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1887();
		func_1705();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
		{
		@StopGroup0();
		func_1705();
		func_2147("Neutral");
		func_1696();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1696();
		else
			func_2147("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1887();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1910(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_2477(var_39_object);
			func_2147("Neutral");
			func_1705();
			func_1696();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_26_bool;
	func_1919(var_26_bool);
	if(!var_26_bool) goto Label_0; //@nz
}


// @pe
void func_2308(bool var_290_bool)
{
	int var_292_int;
	func_2198(var_292_int, "k8q01");
	if(var_292_int == 4)
		var_290_bool = true;
	var_290_bool = false;
}


void func_13(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	object var_55_object;
	func_2182(var_55_object);
	var_55_object = var_54_object;
	func_2009(var_53_bool, var_54_object);
	bool var_148_bool; object var_149_object;
	var_43_object = var_149_object;
	func_1924(var_148_bool, var_149_object, 130.0);
	if(!var_148_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_195_int;
	func_2256(var_195_int);
	var_49_object->SetNPCName(var_195_int);
	int var_196_int;
	func_2254(var_196_int);
	var_49_object->SetNPCDescription(var_196_int);
	string var_197_string;
	func_2258(var_197_string);
	var_49_object->SetPhoto(var_197_string);
	string var_198_string;
	func_2260(var_198_string);
	var_49_object->SetPhoto2(var_198_string);
	int var_199_int;
	func_2460(var_199_int);
	var_49_object->SetPlayerName(var_199_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	object var_208_object; object var_209_object;
	var_43_object = var_208_object;
	var_49_object = var_209_object;
	TaskCall(2);
	func_94(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_247_bool = !var_52_bool; //@nz
		if(var_247_bool == 0) goto Label_83;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_83:
	object var_248_object;
	var_43_object = var_248_object;
	func_1992();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2320(bool var_323_bool)
{
	int var_325_int;
	func_2198(var_325_int, "k8q01");
	if(var_325_int == 6)
		var_323_bool = true;
	var_323_bool = false;
}


void func_2067(bool var_64_bool, object var_65_object)
{
	string var_71_string; bool var_73_bool; int var_74_int; string var_75_string;
	var_71_string = "c";
	int var_72_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_65_object->HasProperty((var_71_string + (var_72_int + 1)), var_73_bool);
			if(!var_73_bool) { //@nz
			} else {
				var_72_int += 1;
			}
		}
		if(!var_72_int) { //@nz
			var_64_bool = false;
			return 10;
		}
		var_74_int = 0;
		if(var_72_int > 1)
			@irand(var_74_int, var_72_int);
		var_65_object->GetProperty((var_71_string + (var_74_int + 1)), var_75_string);
		bool var_87_bool; string var_88_string;
		var_75_string = var_88_string;
		func_2160(var_87_bool, var_88_string);
		var_87_bool = var_64_bool;
		return 10;

	}
}


void func_1816(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_1919(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_2237(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_1919(var_70_bool);
			if(var_70_bool != 0)
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			if(!var_46_int) { //@nz
				@Sleep(3, var_48_bool);
				if(!var_48_bool) { //@nz
				} else {
			} else {
			@irand(var_49_int, var_46_int);
			@irand(var_50_int, 5);
			if(var_50_int != 0)
				var_49_int = 0;
			string var_81_string; int var_82_int;
			var_49_int = var_82_int;
			func_2230(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_1871;
			goto Label_1882;
			}
				Label_1871:
					bool var_74_bool;
					func_1885(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_1877;
			}
		}
	Label_1882:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1877:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


// @pe
void func_2332(bool var_371_bool)
{
	int var_373_int;
	func_2198(var_373_int, "k11q01");
	if(var_373_int == 5)
		var_371_bool = true;
	var_371_bool = false;
}


// @pe
void func_1568(object var_2_object, string var_474_string)
{
	bool var_475_bool;
	func_2262(var_475_bool);
	if(!var_475_bool) //@nz
		return 0;
	if(var_474_string == var_2_object)
		return 0;
	string var_478_string; bool var_479_bool;
	var_474_string = var_478_string;
	if(var_474_string == "")
		var_479_bool = false;
	else
		var_479_bool = true;
	func_2154(var_478_string, var_479_bool);
	var_2_object = var_474_string;
	
}


// @pe
void func_2344(bool var_377_bool)
{
	int var_379_int;
	func_2198(var_379_int, "ook11Starshina1");
	if(var_379_int == 0) {
		var_377_bool = true;
		return 0;
	}
	var_377_bool = false;
}


// @pe
void func_297(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_283_object, object var_284_object)
{
	var_0_object = var_284_object;
	var_1_object = var_283_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_290_bool;
		func_2308(var_1_object);
		if(var_290_bool != 0) {
			func_385(var_284_object, "Neutral");
			var_0_object->SetMessage(526430); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526431, 27707, 27706); //@t
			var_0_object->AddReply(529003, 30441, 30440); //@t
		} else {
					func_385(var_284_object, "Neutral");
					var_0_object->SetMessage(526438); //@t
					var_0_object->ClearReplies(); //@t
					bool var_323_bool;
					func_2320(var_1_object);
					if(var_323_bool != 0)
						var_0_object->AddReply(526450, 27726, 27725); //@t
					var_0_object->AddReply(526439, -1, 27714); //@t
		}
	}
	for(;;) {
		bool var_313_bool;
		func_2262(var_313_bool);
		if(var_313_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2147(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_384;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_384:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x12d";


// @pe
void func_820(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_363_object, object var_364_object)
{
	var_0_object = var_364_object;
	var_1_object = var_363_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_370_bool = false;
		bool var_371_bool;
		func_2332(var_1_object);
		if(var_371_bool != 0) {
			bool var_377_bool;
			func_2344(var_1_object);
			if(var_377_bool != 0)
				var_370_bool = true;
		}
		if(var_370_bool != 0) {
			object var_383_object; object var_384_object;
			var_383_object = var_1_object;
			var_384_object = var_0_object;
			func_2282();
			func_954(var_364_object, "Neutral");
			var_0_object->SetMessage(527376); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(527379, 28703, 28702); //@t
		} else {
					func_954(var_364_object, "Neutral");
					var_0_object->SetMessage(527212); //@t
					var_0_object->ClearReplies(); //@t
					bool var_409_bool;
					func_2332(var_1_object);
					if(var_409_bool != 0)
						var_0_object->AddReply(527339, 28658, 28657); //@t
					bool var_414_bool = true;
					bool var_415_bool = false;
					bool var_416_bool;
					func_2368(var_1_object);
					if(var_416_bool != 0) {
						bool var_422_bool;
						func_2332(var_1_object);
						if(var_422_bool != 0)
							var_415_bool = true;
					}
					if(var_415_bool != 1) {
						bool var_424_bool = false;
						bool var_425_bool;
						func_2356(var_1_object);
						if(var_425_bool != 0) {
							bool var_431_bool;
							func_2368(var_1_object);
							if(var_431_bool != 0)
								var_424_bool = true;
						}
						if(var_424_bool != 1)
							var_414_bool = false;
					}
					if(var_414_bool != 0)
						var_0_object->AddReply(527373, 28707, 28696); //@t
					var_0_object->AddReply(527218, -1, 28526); //@t
		}
	}
	for(;;) {
		bool var_399_bool;
		func_2262(var_399_bool);
		if(var_399_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2147(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_953;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_953:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x338";


// @pe
void func_2356(bool var_425_bool)
{
	int var_427_int;
	func_2198(var_427_int, "k11q01");
	if(var_427_int == 6)
		var_425_bool = true;
	var_425_bool = false;
}


void func_2104(bool var_95_bool, object var_96_object)
{
	bool var_104_bool; int var_105_int; string var_106_string;
	int var_108_int;
	func_2215(var_108_int);
	string var_102_string = ("d" + var_108_int) + "m";
	int var_103_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_96_object->HasProperty((var_102_string + (var_103_int + 1)), var_104_bool);
			if(!var_104_bool) { //@nz
			} else {
				var_103_int += 1;
			}
		}
		if(!var_103_int) { //@nz
			var_95_bool = false;
			return 10;
		}
		var_105_int = 0;
		if(var_103_int > 1)
			@irand(var_105_int, var_103_int);
		var_96_object->GetProperty((var_102_string + (var_105_int + 1)), var_106_string);
		bool var_127_bool; string var_128_string;
		var_106_string = var_128_string;
		func_2160(var_127_bool, var_128_string);
		var_127_bool = var_95_bool;
		return 10;

	}
}


// @pe
void func_2368(bool var_416_bool)
{
	int var_418_int;
	func_2198(var_418_int, "ook11Starshina2");
	if(var_418_int == 0) {
		var_416_bool = true;
		return 0;
	}
	var_416_bool = false;
}


void func_2380(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 489, 1, 528056);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_2432(var_36_bool, var_37_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2393(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 445, 1, 526470);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_2432(var_65_bool, var_66_object, 438);
}
EMIT "Stack[-1] = 0";


void func_1885(bool var_74_bool)
{
	var_74_bool = true;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_208_object, object var_209_object)
{
	var_0_object = var_209_object;
	var_1_object = var_208_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_209_object, "Neutral");
		var_0_object->SetMessage(525528); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525529, -1, 26885); //@t
		var_0_object->AddReply(529271, -1, 30724); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_234_bool;
	func_2262(var_234_bool);
	if(var_234_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2147(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_151:
		return 0;

	}
	
}


void func_1887(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1634(object var_0_object)
{
	bool var_22_bool;
	func_1919(var_22_bool);
	if(!var_22_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1762();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1816();
	}
}
EMIT "Return(); Pop(0)";


void func_2147(string var_29_string)
{
	float var_32_float; float var_33_float;
	@lshGetAnimTimes(var_29_string, var_32_float, var_33_float);
	@lshPlayAnimation(var_32_float, var_33_float, false);
}


void func_1892(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_2406(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 443, 1, 526468);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_2432(var_36_bool, var_37_object, 438);
}
EMIT "Stack[-1] = 0";


void func_2154(string var_219_string, bool var_220_bool)
{
	float var_225_float; float var_226_float;
	@lshGetAnimTimes(var_219_string, var_225_float, var_226_float);
	@lshPlayAnimation(var_225_float, var_226_float, var_220_bool);
}


void func_1900(bool var_29_bool, cvector var_30_cvector)
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


void func_2160(bool var_87_bool, string var_88_string)
{
	bool var_90_bool;
	bool var_91_bool;
	func_2262(var_91_bool);
	if(var_91_bool != 0) {
		@lshHasSpeech(var_90_bool, var_88_string);
		if(var_90_bool != 0) {
			@lshPlaySpeech(var_88_string);
			var_87_bool = true;
		}
	}
	var_87_bool = false;
}


void func_2419(object var_45_object)
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


void func_1910(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1900(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1654(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1910(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


void func_2175(void)
{
	bool var_24_bool;
	func_2262(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_2432(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_2419(var_45_object);
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


// @pe
void func_385(object var_2_object, string var_298_string)
{
	bool var_299_bool;
	func_2262(var_299_bool);
	if(!var_299_bool) //@nz
		return 0;
	if(var_298_string == var_2_object)
		return 0;
	string var_302_string; bool var_303_bool;
	var_298_string = var_302_string;
	if(var_298_string == "")
		var_303_bool = false;
	else
		var_303_bool = true;
	func_2154(var_302_string, var_303_bool);
	var_2_object = var_298_string;
	
}


void func_1919(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_1924(bool var_148_bool, object var_149_object, float var_150_float)
{
	cvector var_161_cvector; bool var_168_bool;
	var_149_object->GetPosition(var_161_cvector);
	float var_160_float;
	var_149_object->GetEyesHeight(var_160_float);
	var_169_float = GetByIndex(var_161_cvector, 1);
	SetByIndex(var_161_cvector, 1) = (var_169_float + var_160_float);
	cvector var_162_cvector;
	@GetPosition(var_162_cvector);
	@GetEyesHeight(var_160_float);
	var_170_float = GetByIndex(var_162_cvector, 1);
	SetByIndex(var_162_cvector, 1) = (var_170_float + var_160_float);
	cvector var_163_cvector = var_161_cvector - var_162_cvector;
	var_171_float = GetByIndex(var_163_cvector, 1);
	SetByIndex(var_163_cvector, 1) = (float)0;
	var_173_float = sqrt(var_163_cvector | var_163_cvector);
	var_163_cvector /= var_173_float;
	cvector var_164_cvector = -var_163_cvector;
	cvector var_175_cvector;
	func_2188(var_175_cvector, (var_164_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_165_cvector = ((var_163_cvector * var_150_float) + (var_175_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_167_bool;
	@IsOverrideActive(var_167_bool);
	if(var_167_bool != 0)
		var_148_bool = false;
	@StopWorld();
	@CameraTransit((var_162_cvector + var_165_cvector), var_164_cvector);
	var_188_float = GetByIndex(var_165_cvector, 0);
	var_189_float = GetByIndex(var_165_cvector, 2);
	@Rotate(var_188_float, var_189_float);
	bool var_190_bool;
	func_2262(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_168_bool, "head");
		if(var_168_bool == 0) goto Label_1986;
		@LookAsyncCamera("head");
	}
Label_1986:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_148_bool = true;
	
}


void func_1669(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_2182(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_1674(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1892(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_2188(cvector var_175_cvector, cvector var_176_cvector)
{
	float var_179_float = sqrt(var_176_cvector | var_176_cvector);
	if(var_179_float < 0.000001)
		var_175_cvector = [0.0, 0.0, 0.0];
	var_175_cvector = var_176_cvector / var_179_float;
}


void func_2198(int var_292_int, string var_293_string)
{
	int var_295_int;
	@GetVariable(var_293_string, var_295_int);
	var_295_int = var_292_int;
}


// @pe
void func_152(object var_2_object, string var_215_string)
{
	bool var_216_bool;
	func_2262(var_216_bool);
	if(!var_216_bool) //@nz
		return 0;
	if(var_215_string == var_2_object)
		return 0;
	string var_219_string; bool var_220_bool;
	var_215_string = var_219_string;
	if(var_215_string == "")
		var_220_bool = false;
	else
		var_220_bool = true;
	func_2154(var_219_string, var_220_bool);
	var_2_object = var_215_string;
	
}


void func_1434(object var_0_object, int var_443_int, object var_444_object)
{
	var_0_object = var_444_object;
	bool var_454_bool; object var_455_object;
	object var_456_object;
	func_2182(var_456_object);
	var_456_object = var_455_object;
	func_2009(var_454_bool, var_455_object);
	bool var_457_bool; object var_458_object;
	var_444_object = var_458_object;
	func_1924(var_457_bool, var_458_object, 130.0);
	if(!var_457_bool) { //@nz
		var_443_int = -2;
		return 8;
	}
	object var_450_object;
	@CreateDialog(var_450_object);
	int var_461_int;
	func_2256(var_461_int);
	var_450_object->SetNPCName(var_461_int);
	int var_462_int;
	func_2254(var_462_int);
	var_450_object->SetNPCDescription(var_462_int);
	string var_463_string;
	func_2258(var_463_string);
	var_450_object->SetPhoto(var_463_string);
	string var_464_string;
	func_2260(var_464_string);
	var_450_object->SetPhoto2(var_464_string);
	int var_465_int;
	func_2460(var_465_int);
	var_450_object->SetPlayerName(var_465_int);
	bool var_451_bool;
	@IsOverrideActive(var_451_bool);
	if(var_451_bool != 0) {
		var_443_int = -2;
		return 8;
	}
	@DoDialog(var_450_object);
	object var_467_object; object var_468_object;
	var_444_object = var_467_object;
	var_450_object = var_468_object;
	TaskCall(8);
	func_1515(var_469_object, var_470_object, var_471_string, var_472_bool, var_467_object, var_468_object);
	TaskReturn();
	bool var_453_bool;
	var_450_object->IsDialogEnd(var_453_bool);
	
	for(;;) {
		var_494_bool = !var_453_bool; //@nz
		if(var_494_bool == 0) goto Label_1504;
		@sync();
		var_450_object->IsDialogEnd(var_453_bool);
	}
	
Label_1504:
	object var_495_object;
	var_444_object = var_495_object;
	func_1992();
	@StopDialog(var_450_object);
	var_450_object->GetReturnValue(-1);
	int var_452_int = var_443_int;
}
EMIT "Stack[-4] = 0";


void func_2203(bool var_54_bool, string var_55_string, string var_56_string)
{
	object var_58_object;
	@FindActor(var_58_object, var_55_string);
	if(var_58_object == null)
		var_54_bool = false;
	@Trigger(var_58_object, var_56_string);
	var_54_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2460(int var_199_int)
{
	int var_201_int;
	@GetVariable("branch", var_201_int);
	if(var_201_int == 0) {
		var_199_int = 1;
		return 2;
	EMIT "GOTO 0x9ab";
	}
	if(var_201_int == 1) {
		var_199_int = 2;
		return 2;
	}
	var_199_int = 3;
}


void func_1696(void)
{
	float var_36_float;
	@rand(var_36_float, 8, 16);
	@SetTimer(10, var_36_float);
}


void func_2215(int var_108_int)
{
	float var_110_float;
	@GetGameTime(var_110_float);
	var_108_int = 1 + (var_110_float / 24);
}


void func_1705(void)
{
	@KillTimer(10);
}


// @pe
void func_2477(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(1);
		func_13(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_255_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_256_bool;
	func_2224(var_256_bool, 8);
	if(var_256_bool != 0) {
		int var_259_int; object var_260_object;
		var_39_object = var_260_object;
		TaskCall(3);
		func_216(var_261_object, var_259_int, var_260_object);
		TaskReturn();
		return 0;
	}
	bool var_337_bool;
	func_2224(var_337_bool, 11);
	if(var_337_bool != 0) {
		int var_339_int; object var_340_object;
		var_39_object = var_340_object;
		TaskCall(5);
		func_739(var_341_object, var_339_int, var_340_object);
		TaskReturn();
		return 0;
	}
	bool var_441_bool;
	func_2224(var_441_bool, 12);
	if(var_441_bool != 0) {
		int var_443_int; object var_444_object;
		var_39_object = var_444_object;
		TaskCall(7);
		func_1434(var_445_object, var_443_int, var_444_object);
		TaskReturn();
		return 0;
	}
}


// @pe
void func_2224(bool var_256_bool, int var_257_int)
{
	int var_258_int;
	func_2215(var_258_int);
	var_256_bool = var_258_int == var_257_int;
}


void func_2230(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


// @pe
void func_954(object var_2_object, string var_387_string)
{
	bool var_388_bool;
	func_2262(var_388_bool);
	if(!var_388_bool) //@nz
		return 0;
	if(var_387_string == var_2_object)
		return 0;
	string var_391_string; bool var_392_bool;
	var_387_string = var_391_string;
	if(var_387_string == "")
		var_392_bool = false;
	else
		var_392_bool = true;
	func_2154(var_391_string, var_392_bool);
	var_2_object = var_387_string;
	
}


void func_2237(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_2230(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


void func_1992(void)
{
	bool var_250_bool;
	@CameraSwitchToNormal();
	bool var_251_bool;
	func_2262(var_251_bool);
	if(var_251_bool != 0) {
	} else {
		@HasAnimationTrack(var_250_bool, "head");
		if(var_250_bool == 0) goto Label_2008;
		@UnlookAsync("head");
	}
Label_2008:
	
}


void func_2254(int var_196_int)
{
	var_196_int = 515553;
}


void func_2256(int var_195_int)
{
	var_195_int = 502878;
}


void func_2258(string var_197_string)
{
	var_197_string = "ui/NPC_Starshina.png";
}


void func_2260(string var_198_string)
{
	var_198_string = "ui/NPC_Starshina_b.png";
}


void func_2262(bool var_91_bool)
{
	var_91_bool = true;
}


// @pe
void func_2264(void)
{
	@SetVariable("k8q01", 5);
	func_2406();
}


void func_2009(bool var_53_bool, object var_54_object)
{
	int var_60_int; int var_61_int;
	@GetVariable("voice_common", var_60_int);
	if(var_60_int != 0) {
		bool var_64_bool; object var_65_object;
		var_54_object = var_65_object;
		func_2067(var_64_bool, var_65_object);
		if(!var_64_bool) { //@nz
			bool var_95_bool; object var_96_object;
			var_54_object = var_96_object;
			func_2104(var_95_bool, var_96_object);
			if(!var_95_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@irand(var_61_int, 2);
		if(var_61_int != 0)
			@SetVariable("voice_common", ((var_60_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_140_bool; object var_141_object;
		var_54_object = var_141_object;
		func_2104(var_140_bool, var_141_object);
		if(!var_140_bool) { //@nz
			bool var_143_bool; object var_144_object;
			var_54_object = var_144_object;
			func_2067(var_143_bool, var_144_object);
			if(!var_143_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2065;
	
Label_2065:
	var_53_bool = true;
	
}


void func_216(object var_0_object, int var_259_int, object var_260_object)
{
	var_0_object = var_260_object;
	bool var_270_bool; object var_271_object;
	object var_272_object;
	func_2182(var_272_object);
	var_272_object = var_271_object;
	func_2009(var_270_bool, var_271_object);
	bool var_273_bool; object var_274_object;
	var_260_object = var_274_object;
	func_1924(var_273_bool, var_274_object, 130.0);
	if(!var_273_bool) { //@nz
		var_259_int = -2;
		return 8;
	}
	object var_266_object;
	@CreateDialog(var_266_object);
	int var_277_int;
	func_2256(var_277_int);
	var_266_object->SetNPCName(var_277_int);
	int var_278_int;
	func_2254(var_278_int);
	var_266_object->SetNPCDescription(var_278_int);
	string var_279_string;
	func_2258(var_279_string);
	var_266_object->SetPhoto(var_279_string);
	string var_280_string;
	func_2260(var_280_string);
	var_266_object->SetPhoto2(var_280_string);
	int var_281_int;
	func_2460(var_281_int);
	var_266_object->SetPlayerName(var_281_int);
	bool var_267_bool;
	@IsOverrideActive(var_267_bool);
	if(var_267_bool != 0) {
		var_259_int = -2;
		return 8;
	}
	@DoDialog(var_266_object);
	object var_283_object; object var_284_object;
	var_260_object = var_283_object;
	var_266_object = var_284_object;
	TaskCall(4);
	func_297(var_285_object, var_286_object, var_287_string, var_288_bool, var_283_object, var_284_object);
	TaskReturn();
	bool var_269_bool;
	var_266_object->IsDialogEnd(var_269_bool);
	
	for(;;) {
		var_335_bool = !var_269_bool; //@nz
		if(var_335_bool == 0) goto Label_286;
		@sync();
		var_266_object->IsDialogEnd(var_269_bool);
	}
	
Label_286:
	object var_336_object;
	var_260_object = var_336_object;
	func_1992();
	@StopDialog(var_266_object);
	var_266_object->GetReturnValue(-1);
	int var_268_int = var_259_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2273(void)
{
	@SetVariable("k8q01", 7);
	func_2393();
}


void func_739(object var_0_object, int var_339_int, object var_340_object)
{
	var_0_object = var_340_object;
	bool var_350_bool; object var_351_object;
	object var_352_object;
	func_2182(var_352_object);
	var_352_object = var_351_object;
	func_2009(var_350_bool, var_351_object);
	bool var_353_bool; object var_354_object;
	var_340_object = var_354_object;
	func_1924(var_353_bool, var_354_object, 130.0);
	if(!var_353_bool) { //@nz
		var_339_int = -2;
		return 8;
	}
	object var_346_object;
	@CreateDialog(var_346_object);
	int var_357_int;
	func_2256(var_357_int);
	var_346_object->SetNPCName(var_357_int);
	int var_358_int;
	func_2254(var_358_int);
	var_346_object->SetNPCDescription(var_358_int);
	string var_359_string;
	func_2258(var_359_string);
	var_346_object->SetPhoto(var_359_string);
	string var_360_string;
	func_2260(var_360_string);
	var_346_object->SetPhoto2(var_360_string);
	int var_361_int;
	func_2460(var_361_int);
	var_346_object->SetPlayerName(var_361_int);
	bool var_347_bool;
	@IsOverrideActive(var_347_bool);
	if(var_347_bool != 0) {
		var_339_int = -2;
		return 8;
	}
	@DoDialog(var_346_object);
	object var_363_object; object var_364_object;
	var_340_object = var_363_object;
	var_346_object = var_364_object;
	TaskCall(6);
	func_820(var_365_object, var_366_object, var_367_string, var_368_bool, var_363_object, var_364_object);
	TaskReturn();
	bool var_349_bool;
	var_346_object->IsDialogEnd(var_349_bool);
	
	for(;;) {
		var_439_bool = !var_349_bool; //@nz
		if(var_439_bool == 0) goto Label_809;
		@sync();
		var_346_object->IsDialogEnd(var_349_bool);
	}
	
Label_809:
	object var_440_object;
	var_340_object = var_440_object;
	func_1992();
	@StopDialog(var_346_object);
	var_346_object->GetReturnValue(-1);
	int var_348_int = var_339_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2282(void)
{
	@SetVariable("ook11Starshina1", 1);
}


// @pe
void func_1515(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_467_object, object var_468_object)
{
	var_0_object = var_468_object;
	var_1_object = var_467_object;
	var_3_string = false;
	if(1 != 0) {
		func_1568(var_468_object, "Neutral");
		var_0_object->SetMessage(539315); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539316, -1, 41259); //@t
		goto Label_1538;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5ef";
	}
Label_1538:
	bool var_486_bool;
	func_2262(var_486_bool);
	if(var_486_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2147(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1567;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1567:
		return 0;

	}
	
}


// @pe
void func_2288(void)
{
	@SetVariable("k11q01", 6);
	func_2380();
	bool var_54_bool;
	func_2203(var_54_bool, "quest_k11_01", "place_burah");
}


// @pe
void func_2302(void)
{
	@SetVariable("ook11Starshina2", 1);
}


