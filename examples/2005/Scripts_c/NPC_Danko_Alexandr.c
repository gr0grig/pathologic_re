// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_57_cvector == 33071) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_8484();
				object var_105_object = var_1_object;
				func_8190(var_0_object);
			}
			if(var_57_cvector == 34431) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_8484();
				object var_135_object = var_1_object;
				func_8190(var_0_object);
			}
			if(var_57_cvector == 33073) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_8008();
			}
			if(var_57_cvector == 34410) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_8041();
			}
			if(var_56_bool == 33068) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(531684); //@t
				var_0_object->ClearReplies(); //@t
				bool var_164_bool;
				func_8944(var_1_object);
				if(var_164_bool != 0)
					var_0_object->AddReply(531685, 34364, 33069); //@t
				bool var_175_bool = false;
				bool var_176_bool;
				func_8651(var_1_object);
				if(!var_176_bool) { //@nz
					bool var_183_bool;
					func_8663(var_1_object);
					if(var_183_bool != 0)
						var_175_bool = true;
				}
				if(var_175_bool != 0)
					var_0_object->AddReply(531689, 34386, 33073); //@t
				bool var_192_bool = true;
				bool var_193_bool = false;
				bool var_194_bool;
				func_8675(var_1_object);
				if(var_194_bool != 0) {
					bool var_200_bool;
					func_8944(var_1_object);
					if(var_200_bool != 0)
						var_193_bool = true;
				}
				if(var_193_bool != 1) {
					bool var_202_bool = false;
					bool var_203_bool;
					func_8639(var_1_object);
					if(var_203_bool != 0) {
						bool var_209_bool;
						func_8675(var_1_object);
						if(var_209_bool != 0)
							var_202_bool = true;
					}
					if(var_202_bool != 1)
						var_192_bool = false;
				}
				if(var_192_bool != 0)
					var_0_object->AddReply(532923, 34411, 34410); //@t
				var_0_object->AddReply(531688, -1, 33072); //@t
				var_0_object->AddReply(532874, -1, 34363); //@t
				return 0;
			}
			if(var_56_bool == 34411) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532925, 34415, 34412); //@t
				return 0;
			}
			if(var_56_bool == 34415) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532928); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532929, 34417, 34416); //@t
				var_0_object->AddReply(533147, 34665, 34664); //@t
				return 0;
			}
			if(var_56_bool == 34665) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(533148); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533149, 34668, 34666); //@t
				var_0_object->AddReply(533150, 34999, 34667); //@t
				return 0;
			}
			if(var_56_bool == 34668) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(533151); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533152, 34999, 34669); //@t
				var_0_object->AddReply(533153, 34999, 34670); //@t
				return 0;
			}
			if(var_56_bool == 34417) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533475, 34999, 34998); //@t
				var_0_object->AddReply(532931, 34419, 34418); //@t
				return 0;
			}
			if(var_56_bool == 34419) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532932); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532933, -1, 34420); //@t
				var_0_object->AddReply(533146, -1, 34663); //@t
				return 0;
			}
			if(var_56_bool == 34999) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(533476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533478, 35005, 35004); //@t
				var_0_object->AddReply(533477, -1, 35000); //@t
				return 0;
			}
			if(var_56_bool == 35005) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(533479); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533480, 35007, 35006); //@t
				return 0;
			}
			if(var_56_bool == 35007) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(533481); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533482, -1, 35008); //@t
				var_0_object->AddReply(533483, -1, 35009); //@t
				return 0;
			}
			if(var_56_bool == 34386) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532903, 33074, 34387); //@t
				var_0_object->AddReply(532904, 34389, 34388); //@t
				return 0;
			}
			if(var_56_bool == 34389) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532906, -1, 34390); //@t
				var_0_object->AddReply(532907, 34392, 34391); //@t
				return 0;
			}
			if(var_56_bool == 33074) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(531690); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531691, 34392, 33075); //@t
				return 0;
			}
			if(var_56_bool == 34392) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532909, 34395, 34394); //@t
				var_0_object->AddReply(532911, 34397, 34396); //@t
				return 0;
			}
			if(var_56_bool == 34397) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532912); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532913, 34399, 34398); //@t
				return 0;
			}
			if(var_56_bool == 34399) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532914); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532915, 34395, 34400); //@t
				var_0_object->AddReply(532916, -1, 34402); //@t
				return 0;
			}
			if(var_56_bool == 34395) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532910); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532917, -1, 34403); //@t
				var_0_object->AddReply(532918, -1, 34404); //@t
				return 0;
			}
			if(var_56_bool == 34364) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532875); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532876, 34366, 34365); //@t
				var_0_object->AddReply(532919, 34406, 34405); //@t
				return 0;
			}
			if(var_56_bool == 34406) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532920); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532921, 34366, 34407); //@t
				var_0_object->AddReply(532922, -1, 34409); //@t
				return 0;
			}
			if(var_56_bool == 34366) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532878, 34368, 34367); //@t
				var_0_object->AddReply(532934, 34424, 34421); //@t
				return 0;
			}
			if(var_56_bool == 34424) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532936); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532937, 34426, 34425); //@t
				return 0;
			}
			if(var_56_bool == 34426) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532938); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532939, 34368, 34427); //@t
				return 0;
			}
			if(var_56_bool == 34368) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532879); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532880, 34370, 34369); //@t
				var_0_object->AddReply(532935, 34370, 34422); //@t
				return 0;
			}
			if(var_56_bool == 34370) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532882, 34373, 34371); //@t
				var_0_object->AddReply(532883, 33070, 34372); //@t
				return 0;
			}
			if(var_56_bool == 34373) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532885, 33070, 34374); //@t
				var_0_object->AddReply(532886, 34377, 34375); //@t
				return 0;
			}
			if(var_56_bool == 34377) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532887); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532888, 34380, 34378); //@t
				var_0_object->AddReply(532889, -1, 34379); //@t
				return 0;
			}
			if(var_56_bool == 34380) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532891, 33070, 34381); //@t
				var_0_object->AddReply(532892, -1, 34382); //@t
				return 0;
			}
			if(var_56_bool == 33070) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(531686); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532940, 34430, 34429); //@t
				var_0_object->AddReply(532942, -1, 34431); //@t
				return 0;
			}
			if(var_56_bool == 34430) {
				func_219(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531687, -1, 33071); //@t
				var_0_object->AddReply(532943, -1, 34432); //@t
				return 0;
			}
			var_3_string = true;
			bool var_482_bool;
			func_7978(var_482_bool);
			if(var_482_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf2";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_56_bool == 34230) {
				func_1138(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532760, -1, 34231); //@t
				var_0_object->AddReply(533664, -1, 35196); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_7978(var_81_bool);
			if(var_81_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x489";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_56_bool == 36971) {
				func_1346(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_56_bool == 36973) {
				func_1346(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_56_bool == 36975) {
				func_1346(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_104_bool;
			func_7978(var_104_bool);
			if(var_104_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x559";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_56_bool == 336) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_8565();
				func_1600(var_57_cvector, "Neutral");
				var_0_object->SetMessage(500287); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532871, 34360, 34359); //@t
				return 0;
			}
			if(var_56_bool == 34360) {
				func_1600(var_57_cvector, "Neutral");
				var_0_object->SetMessage(532872); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500288, 340, 337); //@t
				var_0_object->AddReply(500290, 340, 339); //@t
				var_0_object->AddReply(500289, -1, 338); //@t
				return 0;
			}
			if(var_56_bool == 340) {
				func_1600(var_57_cvector, "Neutral");
				var_0_object->SetMessage(500291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500292, -1, 341); //@t
				var_0_object->AddReply(500293, -1, 342); //@t
				return 0;
			}
			var_3_string = true;
			bool var_105_bool;
			func_7978(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x657";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_57_cvector == 13846) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_8571();
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_8206();
			}
			if(var_57_cvector == 13851) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_8571();
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_8206();
			}
			if(var_57_cvector == 13891) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_8571();
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_8206();
			}
			if(var_57_cvector == 13904) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_8571();
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_8206();
			}
			if(var_57_cvector == 13905) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_8571();
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_8206();
			}
			if(var_57_cvector == 13829) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_8525();
			}
			if(var_57_cvector == 13840) {
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_8531();
			}
			if(var_57_cvector == 13195) {
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_8537();
			}
			if(var_57_cvector == 11744) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_8543();
				object var_171_object = var_1_object;
				func_7980(var_0_object);
			}
			if(var_57_cvector == 11745) {
				object var_199_object; object var_200_object;
				var_199_object = var_1_object;
				var_200_object = var_0_object;
				func_8543();
				object var_201_object = var_1_object;
				func_7980(var_0_object);
			}
			if(var_57_cvector == 11756) {
				object var_205_object; object var_206_object;
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_8543();
				object var_207_object = var_1_object;
				func_7980(var_0_object);
			}
			if(var_57_cvector == 11759) {
				object var_211_object; object var_212_object;
				var_211_object = var_1_object;
				var_212_object = var_0_object;
				func_8543();
				object var_213_object = var_1_object;
				func_7980(var_0_object);
			}
			if(var_57_cvector == 11760) {
				object var_217_object; object var_218_object;
				var_217_object = var_1_object;
				var_218_object = var_0_object;
				func_8543();
				object var_219_object = var_1_object;
				func_7980(var_0_object);
			}
			if(var_56_bool == 13830) {
				bool var_223_bool = false;
				bool var_224_bool;
				func_9016(var_1_object);
				if(var_224_bool != 0) {
					bool var_232_bool;
					func_9028(var_1_object);
					if(var_232_bool != 0)
						var_223_bool = true;
				}
				if(var_223_bool != 0) {
					object var_238_object; object var_239_object;
					var_238_object = var_1_object;
					var_239_object = var_0_object;
					func_8519();
					func_1965(var_57_cvector, "Neutral");
					var_0_object->SetMessage(512650); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(510633, 13839, 11732); //@t
					var_0_object->AddReply(510665, 11772, 11771); //@t
					return 0;
				}
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511979); //@t
				var_0_object->ClearReplies(); //@t
				bool var_263_bool = false;
				bool var_264_bool = false;
				bool var_265_bool;
				func_9040(var_1_object);
				if(var_265_bool != 0) {
					bool var_271_bool;
					func_8956(var_1_object);
					if(var_271_bool != 0)
						var_264_bool = true;
				}
				if(var_264_bool != 0) {
					bool var_277_bool;
					func_9112(var_1_object);
					if(!var_277_bool) //@nz
						var_263_bool = true;
				}
				if(var_263_bool != 0)
					var_0_object->AddReply(512649, 13832, 13829); //@t
				bool var_287_bool = false;
				bool var_288_bool = false;
				bool var_289_bool;
				func_9052(var_1_object);
				if(var_289_bool != 0) {
					bool var_295_bool;
					func_8956(var_1_object);
					if(var_295_bool != 0)
						var_288_bool = true;
				}
				if(var_288_bool != 0) {
					bool var_297_bool;
					func_9124(var_1_object);
					if(!var_297_bool) //@nz
						var_287_bool = true;
				}
				if(var_287_bool != 0)
					var_0_object->AddReply(512660, 13832, 13840); //@t
				bool var_307_bool = false;
				bool var_308_bool;
				func_9064(var_1_object);
				if(var_308_bool != 0) {
					bool var_314_bool;
					func_9076(var_1_object);
					if(var_314_bool != 0)
						var_307_bool = true;
				}
				if(var_307_bool != 0)
					var_0_object->AddReply(511980, 13196, 13195); //@t
				var_0_object->AddReply(513018, -1, 14224); //@t
				return 0;
			}
			if(var_56_bool == 13196) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511982, 13198, 13197); //@t
				var_0_object->AddReply(512658, 11733, 13838); //@t
				return 0;
			}
			if(var_56_bool == 11733) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510634); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510635, 11735, 11734); //@t
				var_0_object->AddReply(510660, 11766, 11763); //@t
				var_0_object->AddReply(510661, 11766, 11765); //@t
				return 0;
			}
			if(var_56_bool == 11766) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510663, 11735, 11767); //@t
				var_0_object->AddReply(510664, 11735, 11769); //@t
				return 0;
			}
			if(var_56_bool == 11735) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510637, 11737, 11736); //@t
				var_0_object->AddReply(510647, 11749, 11748); //@t
				return 0;
			}
			if(var_56_bool == 11749) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510649, 11737, 11750); //@t
				var_0_object->AddReply(510650, 11753, 11752); //@t
				return 0;
			}
			if(var_56_bool == 11753) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510651); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510652, 11755, 11754); //@t
				var_0_object->AddReply(510659, 11755, 11761); //@t
				return 0;
			}
			if(var_56_bool == 11755) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510653); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510654, -1, 11756); //@t
				var_0_object->AddReply(510655, 11758, 11757); //@t
				return 0;
			}
			if(var_56_bool == 11758) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510657, -1, 11759); //@t
				var_0_object->AddReply(510658, -1, 11760); //@t
				return 0;
			}
			if(var_56_bool == 11737) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510642, 11743, 11742); //@t
				var_0_object->AddReply(510639, 11739, 11738); //@t
				var_0_object->AddReply(510646, 11739, 11746); //@t
				return 0;
			}
			if(var_56_bool == 11739) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510640); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510641, 11755, 11740); //@t
				return 0;
			}
			if(var_56_bool == 11743) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510643); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510644, -1, 11744); //@t
				var_0_object->AddReply(510645, -1, 11745); //@t
				return 0;
			}
			if(var_56_bool == 13198) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511984, 13200, 13199); //@t
				return 0;
			}
			if(var_56_bool == 13200) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511986, 11735, 13201); //@t
				return 0;
			}
			if(var_56_bool == 13832) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512653, 13834, 13833); //@t
				return 0;
			}
			if(var_56_bool == 13834) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512655, -1, 13835); //@t
				return 0;
			}
			if(var_56_bool == 11772) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510666); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510668, 11776, 11775); //@t
				return 0;
			}
			if(var_56_bool == 11776) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510669); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510670, 13839, 11777); //@t
				return 0;
			}
			if(var_56_bool == 13839) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512659); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512648, 13831, 13828); //@t
				return 0;
			}
			if(var_56_bool == 13831) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512651); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512656, 13837, 13836); //@t
				var_0_object->AddReply(512695, 13887, 13886); //@t
				var_0_object->AddReply(512701, 13897, 13892); //@t
				return 0;
			}
			if(var_56_bool == 13897) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512706); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512707, 13899, 13898); //@t
				return 0;
			}
			if(var_56_bool == 13899) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512708); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512709, 13901, 13900); //@t
				var_0_object->AddReply(512715, 13901, 13906); //@t
				return 0;
			}
			if(var_56_bool == 13901) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512710); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512711, 13903, 13902); //@t
				var_0_object->AddReply(512714, -1, 13905); //@t
				return 0;
			}
			if(var_56_bool == 13903) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512712); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512713, -1, 13904); //@t
				return 0;
			}
			if(var_56_bool == 13887) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512700, -1, 13891); //@t
				return 0;
			}
			if(var_56_bool == 13837) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512657); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512661, 13843, 13842); //@t
				var_0_object->AddReply(512667, 13843, 13849); //@t
				return 0;
			}
			if(var_56_bool == 13843) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512663, 13845, 13844); //@t
				return 0;
			}
			if(var_56_bool == 13845) {
				func_1965(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512664); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512665, -1, 13846); //@t
				var_0_object->AddReply(512668, -1, 13851); //@t
				return 0;
			}
			var_3_string = true;
			bool var_569_bool;
			func_7978(var_569_bool);
			if(var_569_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7c4";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_57_cvector == 7775) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_8047();
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_8092();
				object var_125_object = var_1_object;
				func_8174(var_0_object);
			}
			if(var_57_cvector == 7779) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_8047();
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_8092();
				object var_157_object = var_1_object;
				func_8174(var_0_object);
			}
			if(var_57_cvector == 7780) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_8047();
			}
			if(var_57_cvector == 7783) {
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_8047();
			}
			if(var_57_cvector == 7790) {
				object var_169_object; object var_170_object;
				var_169_object = var_1_object;
				var_170_object = var_0_object;
				func_8122();
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_8002();
				object var_189_object = var_1_object;
				func_8071(var_0_object);
			}
			if(var_57_cvector == 7791) {
				object var_215_object; object var_216_object;
				var_215_object = var_1_object;
				var_216_object = var_0_object;
				func_8122();
				object var_217_object; object var_218_object;
				var_217_object = var_1_object;
				var_218_object = var_0_object;
				func_8002();
				object var_219_object = var_1_object;
				func_8071(var_0_object);
			}
			if(var_57_cvector == 7436) {
				object var_223_object; object var_224_object;
				var_223_object = var_1_object;
				var_224_object = var_0_object;
				func_8122();
			}
			if(var_57_cvector == 7284) {
				object var_227_object = var_1_object;
				func_8291(var_0_object);
			}
			if(var_57_cvector == 7795) {
				object var_235_object; object var_236_object;
				var_235_object = var_1_object;
				var_236_object = var_0_object;
				func_8059();
				object var_239_object; object var_240_object;
				var_239_object = var_1_object;
				var_240_object = var_0_object;
				func_8132();
				object var_264_object = var_1_object;
				func_8275(var_0_object);
			}
			if(var_57_cvector == 7798) {
				object var_273_object; object var_274_object;
				var_273_object = var_1_object;
				var_274_object = var_0_object;
				func_8059();
				object var_275_object; object var_276_object;
				var_275_object = var_1_object;
				var_276_object = var_0_object;
				func_8132();
				object var_277_object = var_1_object;
				func_8275(var_0_object);
			}
			if(var_57_cvector == 7799) {
				object var_281_object; object var_282_object;
				var_281_object = var_1_object;
				var_282_object = var_0_object;
				func_8059();
				object var_283_object; object var_284_object;
				var_283_object = var_1_object;
				var_284_object = var_0_object;
				func_8132();
				object var_285_object = var_1_object;
				func_8275(var_0_object);
			}
			if(var_57_cvector == 7801) {
				object var_289_object; object var_290_object;
				var_289_object = var_1_object;
				var_290_object = var_0_object;
				func_8092();
				object var_291_object = var_1_object;
				func_8174(var_0_object);
			}
			if(var_57_cvector == 7410) {
				object var_295_object; object var_296_object;
				var_295_object = var_1_object;
				var_296_object = var_0_object;
				func_8065();
			}
			if(var_57_cvector == 7411) {
				object var_301_object; object var_302_object;
				var_301_object = var_1_object;
				var_302_object = var_0_object;
				func_8065();
			}
			if(var_57_cvector == 7414) {
				object var_305_object; object var_306_object;
				var_305_object = var_1_object;
				var_306_object = var_0_object;
				func_8065();
			}
			if(var_57_cvector == 7416) {
				object var_309_object; object var_310_object;
				var_309_object = var_1_object;
				var_310_object = var_0_object;
				func_8065();
			}
			if(var_57_cvector == 7794) {
				object var_313_object; object var_314_object;
				var_313_object = var_1_object;
				var_314_object = var_0_object;
				func_8633();
			}
			if(var_56_bool == 7279) {
				bool var_319_bool;
				func_8687(var_1_object);
				if(var_319_bool != 0) {
					object var_327_object; object var_328_object;
					var_327_object = var_1_object;
					var_328_object = var_0_object;
					func_8608();
					func_3154(var_57_cvector, "Neutral");
					var_0_object->SetMessage(506610); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(506611, 7748, 7280); //@t
					var_0_object->AddReply(507066, 7748, 7784); //@t
					return 0;
				}
				bool var_350_bool = false;
				bool var_351_bool = false;
				bool var_352_bool;
				func_8699(var_1_object);
				if(var_352_bool != 0) {
					bool var_358_bool;
					func_8759(var_1_object);
					if(var_358_bool != 0)
						var_351_bool = true;
				}
				if(var_351_bool != 0) {
					bool var_360_bool;
					func_8764(var_1_object);
					if(var_360_bool != 0)
						var_350_bool = true;
				}
				if(var_350_bool != 0) {
					object var_366_object; object var_367_object;
					var_366_object = var_1_object;
					var_367_object = var_0_object;
					func_8053();
					func_3154(var_57_cvector, "Neutral");
					var_0_object->SetMessage(506731); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(506732, 7420, 7419); //@t
					var_0_object->AddReply(506742, 7420, 7430); //@t
					var_0_object->AddReply(506743, 7433, 7432); //@t
					return 0;
				}
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506614); //@t
				var_0_object->ClearReplies(); //@t
				bool var_383_bool = false;
				bool var_384_bool;
				func_8711(var_1_object);
				if(var_384_bool != 0) {
					bool var_390_bool;
					func_8747(var_1_object);
					if(var_390_bool != 0)
						var_383_bool = true;
				}
				if(var_383_bool != 0)
					var_0_object->AddReply(506615, 7282, 7284); //@t
				bool var_399_bool;
				func_8735(var_1_object);
				if(var_399_bool != 0)
					var_0_object->AddReply(506618, 7800, 7287); //@t
				bool var_408_bool;
				func_8723(var_1_object);
				if(var_408_bool != 0)
					var_0_object->AddReply(506730, 7405, 7417); //@t
				bool var_417_bool = false;
				bool var_418_bool = false;
				bool var_419_bool;
				func_9136(var_1_object);
				if(var_419_bool != 0) {
					bool var_425_bool;
					func_9148(var_1_object);
					if(var_425_bool != 0)
						var_418_bool = true;
				}
				if(var_418_bool != 0) {
					bool var_431_bool;
					func_9160(var_1_object);
					if(var_431_bool != 0)
						var_417_bool = true;
				}
				if(var_417_bool != 0)
					var_0_object->AddReply(507071, 7802, 7794); //@t
				var_0_object->AddReply(507532, -1, 8314); //@t
				return 0;
			}
			if(var_56_bool == 7802) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507080, 7805, 7803); //@t
				var_0_object->AddReply(507081, -1, 7804); //@t
				return 0;
			}
			if(var_56_bool == 7805) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507082); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507083, -1, 7806); //@t
				return 0;
			}
			if(var_56_bool == 7405) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506718); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506719, 7407, 7406); //@t
				var_0_object->AddReply(506729, -1, 7416); //@t
				return 0;
			}
			if(var_56_bool == 7407) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506720); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506721, 7409, 7408); //@t
				var_0_object->AddReply(506725, 7413, 7412); //@t
				return 0;
			}
			if(var_56_bool == 7413) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506726); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506727, -1, 7414); //@t
				return 0;
			}
			if(var_56_bool == 7409) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506722); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506723, -1, 7410); //@t
				var_0_object->AddReply(506724, -1, 7411); //@t
				return 0;
			}
			if(var_56_bool == 7800) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507078, -1, 7801); //@t
				return 0;
			}
			if(var_56_bool == 7282) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506613); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507072, -1, 7795); //@t
				var_0_object->AddReply(507073, 7797, 7796); //@t
				return 0;
			}
			if(var_56_bool == 7797) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507075, -1, 7798); //@t
				var_0_object->AddReply(507076, -1, 7799); //@t
				return 0;
			}
			if(var_56_bool == 7433) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506744); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506745, 7420, 7434); //@t
				var_0_object->AddReply(506746, -1, 7436); //@t
				return 0;
			}
			if(var_56_bool == 7420) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506733); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506734, 7422, 7421); //@t
				var_0_object->AddReply(506741, 7422, 7428); //@t
				return 0;
			}
			if(var_56_bool == 7422) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506735); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506737, 7425, 7424); //@t
				var_0_object->AddReply(506736, 7789, 7423); //@t
				return 0;
			}
			if(var_56_bool == 7425) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506738); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506739, 7789, 7426); //@t
				var_0_object->AddReply(506740, 7789, 7427); //@t
				return 0;
			}
			if(var_56_bool == 7789) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507068); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507069, -1, 7790); //@t
				var_0_object->AddReply(507070, -1, 7791); //@t
				return 0;
			}
			if(var_56_bool == 7748) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507035, 7750, 7749); //@t
				var_0_object->AddReply(507051, 7766, 7765); //@t
				return 0;
			}
			if(var_56_bool == 7766) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507052); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507053, 7750, 7767); //@t
				return 0;
			}
			if(var_56_bool == 7750) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507036); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507037, 7752, 7751); //@t
				return 0;
			}
			if(var_56_bool == 7752) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507038); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507039, 7754, 7753); //@t
				var_0_object->AddReply(507048, 7763, 7762); //@t
				return 0;
			}
			if(var_56_bool == 7763) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507049); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507054, 7759, 7770); //@t
				return 0;
			}
			if(var_56_bool == 7754) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507040); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507043, 7759, 7757); //@t
				var_0_object->AddReply(507041, 7756, 7755); //@t
				return 0;
			}
			if(var_56_bool == 7756) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507042); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507044, 7759, 7758); //@t
				return 0;
			}
			if(var_56_bool == 7759) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507046, 7761, 7760); //@t
				var_0_object->AddReply(507067, 7761, 7787); //@t
				var_0_object->AddReply(507055, 7773, 7772); //@t
				return 0;
			}
			if(var_56_bool == 7773) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507056); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507057, 7761, 7774); //@t
				return 0;
			}
			if(var_56_bool == 7761) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507058, -1, 7775); //@t
				var_0_object->AddReply(507059, 7778, 7777); //@t
				return 0;
			}
			if(var_56_bool == 7778) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507060); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507061, -1, 7779); //@t
				var_0_object->AddReply(507062, -1, 7780); //@t
				var_0_object->AddReply(507063, 7782, 7781); //@t
				return 0;
			}
			if(var_56_bool == 7782) {
				func_3154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507064); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507065, -1, 7783); //@t
				return 0;
			}
			var_3_string = true;
			bool var_687_bool;
			func_7978(var_687_bool);
			if(var_687_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc69";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_57_cvector == 9978) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_8036();
			}
			if(var_57_cvector == 9979) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_8036();
			}
			if(var_57_cvector == 9975) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_8036();
			}
			if(var_57_cvector == 9692) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_8234();
			}
			if(var_57_cvector == 9724) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_8234();
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_8252();
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_8240();
				object var_137_object = var_1_object;
				func_8212(var_0_object);
			}
			if(var_57_cvector == 9711) {
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_8228();
			}
			if(var_57_cvector == 9712) {
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_8240();
			}
			if(var_57_cvector == 13193) {
				object var_175_object; object var_176_object;
				var_175_object = var_1_object;
				var_176_object = var_0_object;
				func_8478();
			}
			if(var_56_bool == 9964) {
				bool var_181_bool = false;
				bool var_182_bool;
				func_8824(var_1_object);
				if(var_182_bool != 0) {
					bool var_190_bool;
					func_8812(var_1_object);
					if(var_190_bool != 0)
						var_181_bool = true;
				}
				if(var_181_bool != 0) {
					object var_196_object; object var_197_object;
					var_196_object = var_1_object;
					var_197_object = var_0_object;
					func_8246();
					func_4364(var_57_cvector, "Neutral");
					var_0_object->SetMessage(509086); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(509087, 9969, 9965); //@t
					var_0_object->AddReply(509088, 9967, 9966); //@t
					return 0;
				}
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508854); //@t
				var_0_object->ClearReplies(); //@t
				bool var_221_bool = false;
				bool var_222_bool;
				func_8788(var_1_object);
				if(var_222_bool != 0) {
					bool var_228_bool;
					func_8836(var_1_object);
					if(var_228_bool != 0)
						var_221_bool = true;
				}
				if(var_221_bool != 0)
					var_0_object->AddReply(508840, 9693, 9692); //@t
				bool var_237_bool;
				func_8776(var_1_object);
				if(var_237_bool != 0)
					var_0_object->AddReply(508855, 9687, 9711); //@t
				bool var_246_bool;
				func_8800(var_1_object);
				if(var_246_bool != 0)
					var_0_object->AddReply(508856, 9691, 9712); //@t
				bool var_255_bool;
				func_8932(var_1_object);
				if(var_255_bool != 0)
					var_0_object->AddReply(511978, 13175, 13193); //@t
				var_0_object->AddReply(511133, -1, 12322); //@t
				var_0_object->AddReply(534068, -1, 35658); //@t
				return 0;
			}
			if(var_56_bool == 13175) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511964); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511965, 35751, 13176); //@t
				var_0_object->AddReply(511977, 13177, 13191); //@t
				var_0_object->AddReply(511976, 13177, 13189); //@t
				return 0;
			}
			if(var_56_bool == 35751) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(534171); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534172, 13177, 35752); //@t
				var_0_object->AddReply(534173, 13177, 35753); //@t
				return 0;
			}
			if(var_56_bool == 13177) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511966); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511967, 13179, 13178); //@t
				var_0_object->AddReply(511975, 13179, 13187); //@t
				return 0;
			}
			if(var_56_bool == 13179) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511968); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511969, 13181, 13180); //@t
				var_0_object->AddReply(511974, 13181, 13185); //@t
				return 0;
			}
			if(var_56_bool == 13181) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511971, -1, 13182); //@t
				var_0_object->AddReply(511972, -1, 13183); //@t
				var_0_object->AddReply(511973, -1, 13184); //@t
				return 0;
			}
			if(var_56_bool == 9691) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508839); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508857, 9714, 9713); //@t
				return 0;
			}
			if(var_56_bool == 9714) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508858); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508859, -1, 9715); //@t
				return 0;
			}
			if(var_56_bool == 9687) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508836, 9689, 9688); //@t
				var_0_object->AddReply(508852, 9689, 9706); //@t
				var_0_object->AddReply(508853, 9689, 9708); //@t
				return 0;
			}
			if(var_56_bool == 9689) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508837); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508849, 9703, 9702); //@t
				return 0;
			}
			if(var_56_bool == 9703) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508850); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508851, -1, 9704); //@t
				return 0;
			}
			if(var_56_bool == 9693) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508842, 9695, 9694); //@t
				var_0_object->AddReply(508846, 9699, 9698); //@t
				var_0_object->AddReply(508861, 9719, 9718); //@t
				return 0;
			}
			if(var_56_bool == 9719) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508862); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508863, 9716, 9720); //@t
				var_0_object->AddReply(508867, 9695, 9725); //@t
				return 0;
			}
			if(var_56_bool == 9699) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508847); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508848, 9695, 9700); //@t
				return 0;
			}
			if(var_56_bool == 9695) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508844, 9716, 9696); //@t
				var_0_object->AddReply(508845, 9716, 9697); //@t
				return 0;
			}
			if(var_56_bool == 9716) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508860); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508864, 9723, 9722); //@t
				var_0_object->AddReply(534069, 9723, 35659); //@t
				return 0;
			}
			if(var_56_bool == 9723) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508865); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508866, -1, 9724); //@t
				return 0;
			}
			if(var_56_bool == 9967) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(509089); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509090, 9969, 9968); //@t
				return 0;
			}
			if(var_56_bool == 9969) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(509091); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509092, 9971, 9970); //@t
				var_0_object->AddReply(534066, 9974, 35654); //@t
				return 0;
			}
			if(var_56_bool == 9971) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(509093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509094, 9974, 9973); //@t
				var_0_object->AddReply(534067, 9977, 35656); //@t
				return 0;
			}
			if(var_56_bool == 9974) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(509095); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509097, 9977, 9976); //@t
				var_0_object->AddReply(509096, -1, 9975); //@t
				return 0;
			}
			if(var_56_bool == 9977) {
				func_4364(var_57_cvector, "Neutral");
				var_0_object->SetMessage(509098); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509099, -1, 9978); //@t
				var_0_object->AddReply(509100, -1, 9979); //@t
				return 0;
			}
			var_3_string = true;
			bool var_471_bool;
			func_7978(var_471_bool);
			if(var_471_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1123";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_57_cvector == 12370) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_8297();
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_8303();
				object var_123_object = var_1_object;
				func_8441(var_0_object);
				object var_147_object = var_1_object;
				func_8329(var_0_object);
			}
			if(var_57_cvector == 12371) {
				object var_175_object; object var_176_object;
				var_175_object = var_1_object;
				var_176_object = var_0_object;
				func_8297();
			}
			if(var_57_cvector == 12695) {
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_object;
				func_8303();
				object var_181_object = var_1_object;
				func_8441(var_0_object);
				object var_183_object; object var_184_object;
				var_183_object = var_1_object;
				var_184_object = var_0_object;
				func_8002();
				object var_187_object = var_1_object;
				func_8329(var_0_object);
			}
			if(var_57_cvector == 12376) {
				object var_191_object; object var_192_object;
				var_191_object = var_1_object;
				var_192_object = var_0_object;
				func_8345();
				object var_195_object; object var_196_object;
				var_195_object = var_1_object;
				var_196_object = var_0_object;
				func_8351();
				object var_215_object = var_1_object;
				func_8020(var_0_object);
			}
			if(var_57_cvector == 12377) {
				object var_224_object; object var_225_object;
				var_224_object = var_1_object;
				var_225_object = var_0_object;
				func_8345();
				object var_226_object; object var_227_object;
				var_226_object = var_1_object;
				var_227_object = var_0_object;
				func_8351();
				object var_228_object = var_1_object;
				func_8425(var_0_object);
			}
			if(var_57_cvector == 12702) {
				object var_237_object; object var_238_object;
				var_237_object = var_1_object;
				var_238_object = var_0_object;
				func_8452();
				object var_241_object = var_1_object;
				func_8164(var_0_object);
				object var_259_object; object var_260_object;
				var_259_object = var_1_object;
				var_260_object = var_0_object;
				func_7996();
				object var_263_object; object var_264_object;
				var_263_object = var_1_object;
				var_264_object = var_0_object;
				func_8374();
			}
			if(var_56_bool == 12359) {
				bool var_296_bool;
				func_8848(var_1_object);
				if(var_296_bool != 0) {
					object var_304_object; object var_305_object;
					var_304_object = var_1_object;
					var_305_object = var_0_object;
					func_8014();
					func_5275(var_57_cvector, "Neutral");
					var_0_object->SetMessage(511175); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511176, 12361, 12360); //@t
					var_0_object->AddReply(511178, 12366, 12362); //@t
					return 0;
				}
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511164); //@t
				var_0_object->ClearReplies(); //@t
				bool var_329_bool;
				func_8860(var_1_object);
				if(var_329_bool != 0)
					var_0_object->AddReply(511489, 12692, 12691); //@t
				bool var_338_bool = false;
				bool var_339_bool;
				func_8872(var_1_object);
				if(var_339_bool != 0) {
					bool var_345_bool;
					func_8884(var_1_object);
					if(var_345_bool != 0)
						var_338_bool = true;
				}
				if(var_338_bool != 0)
					var_0_object->AddReply(511187, 12373, 12372); //@t
				bool var_354_bool = false;
				bool var_355_bool;
				func_8896(var_1_object);
				if(var_355_bool != 0) {
					bool var_361_bool;
					func_8908(var_1_object);
					if(var_361_bool != 0)
						var_354_bool = true;
				}
				if(var_354_bool != 0)
					var_0_object->AddReply(511495, 12697, 12696); //@t
				var_0_object->AddReply(511174, -1, 12358); //@t
				return 0;
			}
			if(var_56_bool == 12697) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511496); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511497, 12699, 12698); //@t
				return 0;
			}
			if(var_56_bool == 12699) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511499, 12701, 12700); //@t
				return 0;
			}
			if(var_56_bool == 12701) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511500); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511501, -1, 12702); //@t
				bool var_394_bool;
				func_8908(var_1_object);
				if(var_394_bool != 0)
					var_0_object->AddReply(511502, -1, 12703); //@t
				return 0;
			}
			if(var_56_bool == 12373) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511189, 12375, 12374); //@t
				return 0;
			}
			if(var_56_bool == 12375) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511191, -1, 12376); //@t
				var_0_object->AddReply(511192, -1, 12377); //@t
				return 0;
			}
			if(var_56_bool == 12692) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511491, 12694, 12693); //@t
				return 0;
			}
			if(var_56_bool == 12694) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511493, -1, 12695); //@t
				return 0;
			}
			if(var_56_bool == 12361) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511177); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511180, 12363, 12364); //@t
				var_0_object->AddReply(511193, 12379, 12378); //@t
				return 0;
			}
			if(var_56_bool == 12379) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511194); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511195, 12363, 12380); //@t
				var_0_object->AddReply(511198, 12385, 12384); //@t
				return 0;
			}
			if(var_56_bool == 12385) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511200, 12366, 12386); //@t
				var_0_object->AddReply(511201, 12363, 12388); //@t
				return 0;
			}
			if(var_56_bool == 12363) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511181, 12366, 12365); //@t
				var_0_object->AddReply(511196, 12383, 12382); //@t
				return 0;
			}
			if(var_56_bool == 12383) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511197); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538806, 40725, 40724); //@t
				return 0;
			}
			if(var_56_bool == 40725) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(538807); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511486, 12366, 12688); //@t
				return 0;
			}
			if(var_56_bool == 12366) {
				func_5275(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511182); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511185, -1, 12370); //@t
				var_0_object->AddReply(511186, -1, 12371); //@t
				return 0;
			}
			var_3_string = true;
			bool var_494_bool;
			func_7978(var_494_bool);
			if(var_494_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x14b2";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_57_cvector == 12808) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_8458();
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_8206();
			}
			if(var_57_cvector == 12802) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_8458();
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_8206();
			}
			if(var_57_cvector == 12820) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_8507();
			}
			if(var_57_cvector == 12819) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_8507();
			}
			if(var_57_cvector == 12821) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_8507();
			}
			if(var_57_cvector == 12832) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_8513();
			}
			if(var_57_cvector == 12833) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_8513();
			}
			if(var_56_bool == 12786) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511591); //@t
				var_0_object->ClearReplies(); //@t
				bool var_131_bool;
				func_8920(var_1_object);
				if(var_131_bool != 0)
					var_0_object->AddReply(511592, 12788, 12787); //@t
				bool var_142_bool = false;
				bool var_143_bool;
				func_8968(var_1_object);
				if(var_143_bool != 0) {
					bool var_149_bool;
					func_8992(var_1_object);
					if(var_149_bool != 0)
						var_142_bool = true;
				}
				if(var_142_bool != 0)
					var_0_object->AddReply(511611, 12810, 12809); //@t
				bool var_158_bool = false;
				bool var_159_bool;
				func_8980(var_1_object);
				if(var_159_bool != 0) {
					bool var_165_bool;
					func_9004(var_1_object);
					if(var_165_bool != 0)
						var_158_bool = true;
				}
				if(var_158_bool != 0)
					var_0_object->AddReply(511624, 12823, 12822); //@t
				var_0_object->AddReply(511635, -1, 12834); //@t
				return 0;
			}
			if(var_56_bool == 12823) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511625); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511626, 12825, 12824); //@t
				var_0_object->AddReply(511628, 12827, 12826); //@t
				return 0;
			}
			if(var_56_bool == 12827) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511629); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511631, 12830, 12829); //@t
				return 0;
			}
			if(var_56_bool == 12825) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511627); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511630, 12830, 12828); //@t
				return 0;
			}
			if(var_56_bool == 12830) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511633, -1, 12832); //@t
				var_0_object->AddReply(511634, -1, 12833); //@t
				return 0;
			}
			if(var_56_bool == 12810) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511612); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511613, 12812, 12811); //@t
				var_0_object->AddReply(511623, -1, 12821); //@t
				return 0;
			}
			if(var_56_bool == 12812) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511614); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515657, 16695, 16694); //@t
				var_0_object->AddReply(515659, 16695, 16696); //@t
				return 0;
			}
			if(var_56_bool == 16695) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(515658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511615, 12814, 12813); //@t
				var_0_object->AddReply(515660, 12816, 16698); //@t
				return 0;
			}
			if(var_56_bool == 12814) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511616); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511617, 12816, 12815); //@t
				var_0_object->AddReply(515661, 16701, 16700); //@t
				return 0;
			}
			if(var_56_bool == 16701) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(515662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511621, -1, 12819); //@t
				return 0;
			}
			if(var_56_bool == 12816) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511618); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511619, 12818, 12817); //@t
				return 0;
			}
			if(var_56_bool == 12818) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511620); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511622, -1, 12820); //@t
				return 0;
			}
			if(var_56_bool == 12788) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511593); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511594, 12790, 12789); //@t
				var_0_object->AddReply(511599, 12795, 12794); //@t
				return 0;
			}
			if(var_56_bool == 12795) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511600); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511601, 12790, 12796); //@t
				return 0;
			}
			if(var_56_bool == 12790) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511595); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511596, 12792, 12791); //@t
				var_0_object->AddReply(511602, 12799, 12798); //@t
				return 0;
			}
			if(var_56_bool == 12799) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511603); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511604, 12792, 12800); //@t
				var_0_object->AddReply(515656, 12805, 16692); //@t
				return 0;
			}
			if(var_56_bool == 12792) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511597); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511598, 12803, 12793); //@t
				var_0_object->AddReply(511605, -1, 12802); //@t
				return 0;
			}
			if(var_56_bool == 12803) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511607, 12805, 12804); //@t
				return 0;
			}
			if(var_56_bool == 12805) {
				func_5999(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511610, -1, 12808); //@t
				return 0;
			}
			var_3_string = true;
			bool var_333_bool;
			func_7978(var_333_bool);
			if(var_333_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1786";
	
	}

}


task task_19
{
}


task task_20
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, int var_50_int, int var_51_int, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_57_cvector == 14572) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_8559();
			}
			if(var_57_cvector == 14578) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_8614();
			}
			if(var_57_cvector == 14583) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_8614();
			}
			if(var_57_cvector == 36864) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_8614();
			}
			if(var_56_bool == 13358) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512203); //@t
				var_0_object->ClearReplies(); //@t
				bool var_132_bool = false;
				bool var_133_bool;
				func_9088(var_1_object);
				if(var_133_bool != 0) {
					bool var_141_bool;
					func_9100(var_1_object);
					if(var_141_bool != 0)
						var_132_bool = true;
				}
				if(var_132_bool != 0)
					var_0_object->AddReply(513340, 14573, 14572); //@t
				var_0_object->AddReply(512204, -1, 13359); //@t
				return 0;
			}
			if(var_56_bool == 14573) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(513341); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513342, 14575, 14574); //@t
				var_0_object->AddReply(535178, 36846, 36845); //@t
				return 0;
			}
			if(var_56_bool == 36846) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535180, 36848, 36847); //@t
				var_0_object->AddReply(535182, 36850, 36849); //@t
				return 0;
			}
			if(var_56_bool == 36850) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535184, 36848, 36851); //@t
				return 0;
			}
			if(var_56_bool == 36848) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535181); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535186, 36855, 36854); //@t
				var_0_object->AddReply(535185, -1, 36853); //@t
				return 0;
			}
			if(var_56_bool == 36855) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535187); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535188, 14575, 36856); //@t
				return 0;
			}
			if(var_56_bool == 14575) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(513343); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513344, 14577, 14576); //@t
				var_0_object->AddReply(535189, 36860, 36858); //@t
				return 0;
			}
			if(var_56_bool == 36860) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535191, 14580, 36861); //@t
				var_0_object->AddReply(535192, -1, 36862); //@t
				return 0;
			}
			if(var_56_bool == 14577) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(513345); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513346, -1, 14578); //@t
				var_0_object->AddReply(513347, 14580, 14579); //@t
				return 0;
			}
			if(var_56_bool == 14580) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(513348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513349, 14582, 14581); //@t
				var_0_object->AddReply(535193, -1, 36864); //@t
				return 0;
			}
			if(var_56_bool == 14582) {
				func_6699(var_57_cvector, "Neutral");
				var_0_object->SetMessage(513350); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513351, -1, 14583); //@t
				return 0;
			}
			var_3_string = true;
			bool var_244_bool;
			func_7978(var_244_bool);
			if(var_244_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a42";
	
	}

}


task task_21
{
}


task task_22
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, int var_55_int, int var_56_int, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_7782();
			if(var_56_int == 42551) {
				func_7163(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540543, -1, 42552); //@t
				var_0_object->AddReply(540796, -1, 42845); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_7978(var_81_bool);
			if(var_81_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1c12";
	
	}

}


maintask task_23
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
	{
		var_56_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_7234(var_55_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, int var_56_int)
	{
		if(var_56_int == 10) {
			func_7305();
			bool var_60_bool = false;
			bool var_61_bool;
			func_7526(var_61_bool);
			if(var_61_bool != 0) {
				bool var_64_bool;
				func_7274(var_64_bool);
				if(var_64_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool != 0) {
				bool var_81_bool;
				func_7254(var_81_bool);
				if(var_81_bool != 0) {
					bool var_100_bool; object var_101_object;
					object var_102_object;
					func_7789(var_102_object);
					var_102_object = var_101_object;
					func_7674(var_100_bool, var_101_object);
				}
			} else {
				func_7269(var_56_int);
				func_7296();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
	{
		func_7487();
		func_7305();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
		{
		@StopGroup0();
		func_7305();
		func_7754("Neutral");
		func_7296();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, bool var_56_bool)
	{
		if(var_56_bool != 0)
			func_7296();
		else
			func_7754("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, object var_56_object)
	{
		bool var_58_bool;
		@IsOverrideActive(var_58_bool);
		if(!var_58_bool) { //@nz
			disable OnUse;
			func_7487();
			bool var_60_bool; object var_61_object;
			var_56_object = var_61_object;
			func_7517(var_60_bool, var_61_object);
			enable OnUse;
			object var_74_object;
			var_56_object = var_74_object;
			func_9460(var_74_object);
			func_7754("Neutral");
			func_7305();
			func_7296();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_61_bool;
	func_7526(var_61_bool);
	if(!var_61_bool) goto Label_0; //@nz
}


void func_9222(void)
{
	object var_257_object;
	@CreateDiaryEntry(var_257_object, 55, 1, 512137);
	bool var_261_bool; object var_262_object;
	var_257_object = var_262_object;
	func_9365(var_261_bool, var_262_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1542(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_243_object, object var_244_object)
{
	var_0_object = var_244_object;
	var_3_string = false;
	if(1 != 0) {
		object var_250_object; object var_251_object;
		var_250_object = var_243_object;
		var_251_object = var_0_object;
		func_8565();
		func_1600(var_244_object, "Neutral");
		var_0_object->SetMessage(500287); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(532871, 34360, 34359); //@t
		goto Label_1570;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x60a";
	}
Label_1570:
	bool var_270_bool;
	func_7978(var_270_bool);
	if(var_270_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1599;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1599:
		return 0;

	}
	
}


// @pe
void func_8711(bool var_569_bool)
{
	int var_571_int;
	func_7805(var_571_int, "ood2Alexandr3");
	if(var_571_int == 0) {
		var_569_bool = true;
		return 0;
	}
	var_569_bool = false;
}


void func_13(object var_0_object, int var_363_int, object var_364_object)
{
	var_0_object = var_364_object;
	bool var_374_bool; object var_375_object;
	object var_376_object;
	func_7789(var_376_object);
	var_376_object = var_375_object;
	func_7616(var_374_bool, var_375_object);
	bool var_377_bool; object var_378_object;
	var_364_object = var_378_object;
	func_7531(var_377_bool, var_378_object, 70.0);
	if(!var_377_bool) { //@nz
		var_363_int = -2;
		return 8;
	}
	object var_370_object;
	@CreateDialog(var_370_object);
	int var_381_int;
	func_7972(var_381_int);
	var_370_object->SetNPCName(var_381_int);
	int var_382_int;
	func_7970(var_382_int);
	var_370_object->SetNPCDescription(var_382_int);
	string var_383_string;
	func_7974(var_383_string);
	var_370_object->SetPhoto(var_383_string);
	string var_384_string;
	func_7976(var_384_string);
	var_370_object->SetPhoto2(var_384_string);
	int var_385_int;
	func_9443(var_385_int);
	var_370_object->SetPlayerName(var_385_int);
	bool var_371_bool;
	@IsOverrideActive(var_371_bool);
	if(var_371_bool != 0) {
		var_363_int = -2;
		return 8;
	}
	@DoDialog(var_370_object);
	object var_387_object; object var_388_object;
	var_364_object = var_387_object;
	var_370_object = var_388_object;
	TaskCall(2);
	func_94(var_389_object, var_390_object, var_391_string, var_392_bool, var_387_object, var_388_object);
	TaskReturn();
	bool var_373_bool;
	var_370_object->IsDialogEnd(var_373_bool);
	
	for(;;) {
		var_467_bool = !var_373_bool; //@nz
		if(var_467_bool == 0) goto Label_83;
		@sync();
		var_370_object->IsDialogEnd(var_373_bool);
	}
	
Label_83:
	object var_468_object;
	var_364_object = var_468_object;
	func_7599();
	@StopDialog(var_370_object);
	var_370_object->GetReturnValue(-1);
	int var_372_int = var_363_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8206(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_8723(bool var_593_bool)
{
	int var_595_int;
	func_7805(var_595_int, "ood2Alexandr5");
	if(var_595_int == 0) {
		var_593_bool = true;
		return 0;
	}
	var_593_bool = false;
}


// @pe
void func_8212(object var_138_object)
{
	object var_142_object;
	func_9393(var_142_object);
	object var_139_object;
	var_142_object = var_139_object;
	func_9410(var_139_object, "pt_map_ospina", (float)2);
	object var_162_object;
	func_9393(var_162_object);
	var_138_object->ShowMap(var_162_object);
}


void func_9235(void)
{
	object var_172_object;
	@CreateDiaryEntry(var_172_object, 56, 1, 512138);
	bool var_176_bool; object var_177_object;
	var_172_object = var_177_object;
	func_9365(var_176_bool, var_177_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5144(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_787_object, object var_788_object)
{
	var_0_object = var_788_object;
	var_1_object = var_787_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_794_bool;
		func_8848(var_1_object);
		if(var_794_bool != 0) {
			object var_800_object; object var_801_object;
			var_800_object = var_1_object;
			var_801_object = var_0_object;
			func_8014();
			func_5275(var_788_object, "Neutral");
			var_0_object->SetMessage(511175); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511176, 12361, 12360); //@t
			var_0_object->AddReply(511178, 12366, 12362); //@t
		} else {
					func_5275(var_788_object, "Neutral");
					var_0_object->SetMessage(511164); //@t
					var_0_object->ClearReplies(); //@t
					bool var_829_bool;
					func_8860(var_1_object);
					if(var_829_bool != 0)
						var_0_object->AddReply(511489, 12692, 12691); //@t
					bool var_838_bool = false;
					bool var_839_bool;
					func_8872(var_1_object);
					if(var_839_bool != 0) {
						bool var_845_bool;
						func_8884(var_1_object);
						if(var_845_bool != 0)
							var_838_bool = true;
					}
					if(var_838_bool != 0)
						var_0_object->AddReply(511187, 12373, 12372); //@t
					bool var_854_bool = false;
					bool var_855_bool;
					func_8896(var_1_object);
					if(var_855_bool != 0) {
						bool var_861_bool;
						func_8908(var_1_object);
						if(var_861_bool != 0)
							var_854_bool = true;
					}
					if(var_854_bool != 0)
						var_0_object->AddReply(511495, 12697, 12696); //@t
					var_0_object->AddReply(511174, -1, 12358); //@t
		}
	}
	for(;;) {
		bool var_819_bool;
		func_7978(var_819_bool);
		if(var_819_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7754(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_5274;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5274:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x141c";


void func_7711(bool var_130_bool, object var_131_object)
{
	bool var_139_bool; int var_140_int; string var_141_string;
	int var_143_int;
	func_7912(var_143_int);
	string var_137_string = ("d" + var_143_int) + "m";
	int var_138_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_131_object->HasProperty((var_137_string + (var_138_int + 1)), var_139_bool);
			if(!var_139_bool) { //@nz
			} else {
				var_138_int += 1;
			}
		}
		if(!var_138_int) { //@nz
			var_130_bool = false;
			return 10;
		}
		var_140_int = 0;
		if(var_138_int > 1)
			@irand(var_140_int, var_138_int);
		var_131_object->GetProperty((var_137_string + (var_140_int + 1)), var_141_string);
		bool var_162_bool; string var_163_string;
		var_141_string = var_163_string;
		func_7767(var_162_bool, var_163_string);
		var_162_bool = var_130_bool;
		return 10;

	}
}


void func_9248(void)
{
	object var_65_object;
	@CreateDiaryEntry(var_65_object, 73, 1, 512155);
	bool var_69_bool; object var_70_object;
	var_65_object = var_70_object;
	func_9365(var_69_bool, var_70_object, 25);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8735(bool var_584_bool)
{
	int var_586_int;
	func_7805(var_586_int, "d2q01");
	if(var_586_int == 0) {
		var_584_bool = true;
		return 0;
	}
	var_584_bool = false;
}


// @pe
void func_8228(void)
{
	@SetVariable("ood3Alexandr1", 1);
}


void func_4137(object var_0_object, int var_637_int, object var_638_object)
{
	var_0_object = var_638_object;
	bool var_648_bool; object var_649_object;
	object var_650_object;
	func_7789(var_650_object);
	var_650_object = var_649_object;
	func_7616(var_648_bool, var_649_object);
	bool var_651_bool; object var_652_object;
	var_638_object = var_652_object;
	func_7531(var_651_bool, var_652_object, 70.0);
	if(!var_651_bool) { //@nz
		var_637_int = -2;
		return 8;
	}
	object var_644_object;
	@CreateDialog(var_644_object);
	int var_655_int;
	func_7972(var_655_int);
	var_644_object->SetNPCName(var_655_int);
	int var_656_int;
	func_7970(var_656_int);
	var_644_object->SetNPCDescription(var_656_int);
	string var_657_string;
	func_7974(var_657_string);
	var_644_object->SetPhoto(var_657_string);
	string var_658_string;
	func_7976(var_658_string);
	var_644_object->SetPhoto2(var_658_string);
	int var_659_int;
	func_9443(var_659_int);
	var_644_object->SetPlayerName(var_659_int);
	bool var_645_bool;
	@IsOverrideActive(var_645_bool);
	if(var_645_bool != 0) {
		var_637_int = -2;
		return 8;
	}
	@DoDialog(var_644_object);
	object var_661_object; object var_662_object;
	var_638_object = var_661_object;
	var_644_object = var_662_object;
	TaskCall(14);
	func_4218(var_663_object, var_664_object, var_665_string, var_666_bool, var_661_object, var_662_object);
	TaskReturn();
	bool var_647_bool;
	var_644_object->IsDialogEnd(var_647_bool);
	
	for(;;) {
		var_759_bool = !var_647_bool; //@nz
		if(var_759_bool == 0) goto Label_4207;
		@sync();
		var_644_object->IsDialogEnd(var_647_bool);
	}
	
Label_4207:
	object var_760_object;
	var_638_object = var_760_object;
	func_7599();
	@StopDialog(var_644_object);
	var_644_object->GetReturnValue(-1);
	int var_646_int = var_637_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8234(void)
{
	@SetVariable("ood3Alexandr2", 1);
}


// @pe
void func_8747(bool var_575_bool)
{
	int var_577_int;
	func_7805(var_577_int, "d2q01");
	if(var_577_int == 5)
		var_575_bool = true;
	var_575_bool = false;
}


// @pe
void func_6699(object var_2_object, string var_1144_string)
{
	bool var_1145_bool;
	func_7978(var_1145_bool);
	if(!var_1145_bool) //@nz
		return 0;
	if(var_1144_string == var_2_object)
		return 0;
	string var_1148_string; bool var_1149_bool;
	var_1144_string = var_1148_string;
	if(var_1144_string == "")
		var_1149_bool = false;
	else
		var_1149_bool = true;
	func_7761(var_1148_string, var_1149_bool);
	var_2_object = var_1144_string;
	
}


void func_9261(void)
{
	object var_126_object;
	@CreateDiaryEntry(var_126_object, 69, 1, 512151);
	bool var_130_bool; object var_131_object;
	var_126_object = var_131_object;
	func_9365(var_130_bool, var_131_object, 25);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8240(void)
{
	@SetVariable("ood3Alexandr3", 1);
}


// @pe
void func_8246(void)
{
	@SetVariable("ood3Alexandr4", 1);
}


// @pe
void func_8759(bool var_543_bool)
{
	var_543_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_1080(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_328_object, object var_329_object)
{
	var_0_object = var_329_object;
	var_1_object = var_328_object;
	var_3_string = false;
	if(1 != 0) {
		func_1138(var_329_object, "Neutral");
		var_0_object->SetMessage(532759); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(532760, -1, 34231); //@t
		var_0_object->AddReply(533664, -1, 35196); //@t
		goto Label_1108;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43c";
	}
Label_1108:
	bool var_350_bool;
	func_7978(var_350_bool);
	if(var_350_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1137;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1137:
		return 0;

	}
	
}


void func_9274(void)
{
	object var_85_object;
	@CreateDiaryEntry(var_85_object, 22, 2, 503362);
	bool var_89_bool; object var_90_object;
	var_85_object = var_90_object;
	func_9365(var_89_bool, var_90_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8764(bool var_545_bool)
{
	int var_547_int;
	func_7805(var_547_int, "d2q01BigVladVisit");
	if(var_547_int == 1)
		var_545_bool = true;
	var_545_bool = false;
}


void func_8252(void)
{
	@SetVariable("d3q01", 2);
	object var_111_object;
	func_9393(var_111_object);
	object var_108_object;
	var_111_object = var_108_object;
	float var_122_float;
	func_7907(var_122_float);
	var_108_object->AddMark("d3q01AlexandrGotoOspina", "pt_map_ospina", 1, 511148, var_122_float);
	func_9261();
}
EMIT "Stack[-1] = 0";


// @pe
void func_1600(object var_2_object, string var_254_string)
{
	bool var_255_bool;
	func_7978(var_255_bool);
	if(!var_255_bool) //@nz
		return 0;
	if(var_254_string == var_2_object)
		return 0;
	string var_258_string; bool var_259_bool;
	var_254_string = var_258_string;
	if(var_254_string == "")
		var_259_bool = false;
	else
		var_259_bool = true;
	func_7761(var_258_string, var_259_bool);
	var_2_object = var_254_string;
	
}


void func_7234(object var_0_object)
{
	bool var_57_bool;
	func_7526(var_57_bool);
	if(!var_57_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_7362();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_7416();
	}
}
EMIT "Return(); Pop(0)";


void func_9287(void)
{
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 96, 2, 512178);
	bool var_112_bool; object var_113_object;
	var_108_object = var_113_object;
	func_9365(var_112_bool, var_113_object, 22);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8776(bool var_726_bool)
{
	int var_728_int;
	func_7805(var_728_int, "ood3Alexandr1");
	if(var_728_int == 0) {
		var_726_bool = true;
		return 0;
	}
	var_726_bool = false;
}


void func_7754(string var_64_string)
{
	float var_67_float; float var_68_float;
	@lshGetAnimTimes(var_64_string, var_67_float, var_68_float);
	@lshPlayAnimation(var_67_float, var_68_float, false);
}


void func_7761(string var_258_string, bool var_259_bool)
{
	float var_264_float; float var_265_float;
	@lshGetAnimTimes(var_258_string, var_264_float, var_265_float);
	@lshPlayAnimation(var_264_float, var_265_float, var_259_bool);
}


// @pe
void func_3154(object var_2_object, string var_512_string)
{
	bool var_513_bool;
	func_7978(var_513_bool);
	if(!var_513_bool) //@nz
		return 0;
	if(var_512_string == var_2_object)
		return 0;
	string var_516_string; bool var_517_bool;
	var_512_string = var_516_string;
	if(var_512_string == "")
		var_517_bool = false;
	else
		var_517_bool = true;
	func_7761(var_516_string, var_517_bool);
	var_2_object = var_512_string;
	
}


// @pe
void func_8275(object var_265_object)
{
	object var_269_object;
	func_9393(var_269_object);
	object var_266_object;
	var_269_object = var_266_object;
	func_9410(var_266_object, "pt_map_bigvlad", (float)2);
	object var_270_object;
	func_9393(var_270_object);
	var_265_object->ShowMap(var_270_object);
}


// @pe
void func_8788(bool var_711_bool)
{
	int var_713_int;
	func_7805(var_713_int, "ood3Alexandr2");
	if(var_713_int == 0) {
		var_711_bool = true;
		return 0;
	}
	var_711_bool = false;
}


void func_9300(void)
{
	object var_208_object;
	@CreateDiaryEntry(var_208_object, 98, 2, 512180);
	bool var_212_bool; object var_213_object;
	var_208_object = var_213_object;
	func_9365(var_212_bool, var_213_object, 22);
}
EMIT "Stack[-1] = 0";


void func_7254(bool var_81_bool)
{
	object var_83_object;
	@FindActor(var_83_object, "player");
	if(!var_83_object) //@nz
		var_81_bool = false;
	bool var_86_bool; object var_87_object;
	var_83_object = var_87_object;
	func_7517(var_86_bool, var_87_object);
	var_86_bool = var_81_bool;
}
EMIT "Stack[-1] = 0";


void func_7767(bool var_122_bool, string var_123_string)
{
	bool var_125_bool;
	bool var_126_bool;
	func_7978(var_126_bool);
	if(var_126_bool != 0) {
		@lshHasSpeech(var_125_bool, var_123_string);
		if(var_125_bool != 0) {
			@lshPlaySpeech(var_123_string);
			var_122_bool = true;
		}
	}
	var_122_bool = false;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_387_object, object var_388_object)
{
	var_0_object = var_388_object;
	var_1_object = var_387_object;
	var_3_string = false;
	if(1 != 0) {
		func_219(var_388_object, "Neutral");
		var_0_object->SetMessage(531684); //@t
		var_0_object->ClearReplies(); //@t
		bool var_403_bool;
		func_8944(var_1_object);
		if(var_403_bool != 0)
			var_0_object->AddReply(531685, 34364, 33069); //@t
		bool var_414_bool = false;
		bool var_415_bool;
		func_8651(var_1_object);
		if(!var_415_bool) { //@nz
			bool var_422_bool;
			func_8663(var_1_object);
			if(var_422_bool != 0)
				var_414_bool = true;
		}
		if(var_414_bool != 0)
			var_0_object->AddReply(531689, 34386, 33073); //@t
		bool var_431_bool = true;
		bool var_432_bool = false;
		bool var_433_bool;
		func_8675(var_1_object);
		if(var_433_bool != 0) {
			bool var_439_bool;
			func_8944(var_1_object);
			if(var_439_bool != 0)
				var_432_bool = true;
		}
		if(var_432_bool != 1) {
			bool var_441_bool = false;
			bool var_442_bool;
			func_8639(var_1_object);
			if(var_442_bool != 0) {
				bool var_448_bool;
				func_8675(var_1_object);
				if(var_448_bool != 0)
					var_441_bool = true;
			}
			if(var_441_bool != 1)
				var_431_bool = false;
		}
		if(var_431_bool != 0)
			var_0_object->AddReply(532923, 34411, 34410); //@t
		var_0_object->AddReply(531688, -1, 33072); //@t
		var_0_object->AddReply(532874, -1, 34363); //@t
		goto Label_189;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_189:
	bool var_459_bool;
	func_7978(var_459_bool);
	if(var_459_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_218;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_218:
		return 0;

	}
	
}


// @pe
void func_8800(bool var_735_bool)
{
	int var_737_int;
	func_7805(var_737_int, "ood3Alexandr3");
	if(var_737_int == 0) {
		var_735_bool = true;
		return 0;
	}
	var_735_bool = false;
}


void func_9313(void)
{
	object var_281_object;
	@CreateDiaryEntry(var_281_object, 100, 2, 512182);
	bool var_285_bool; object var_286_object;
	var_281_object = var_286_object;
	func_9365(var_285_bool, var_286_object, 22);
}
EMIT "Stack[-1] = 0";


void func_8291(object var_227_object)
{
	int var_230_int;
	var_227_object->RemoveItemByType(var_230_int, "d2q01_key", 1);
}


void func_7269(object var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0);
	var_134_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_133_float, var_134_float);
}


void func_7782(void)
{
	bool var_59_bool;
	func_7978(var_59_bool);
	if(var_59_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_8297(void)
{
	@SetVariable("ood4Alexandr1", 1);
}


void func_7274(bool var_64_bool)
{
	object var_67_object;
	@FindActor(var_67_object, "player");
	if(!var_67_object) { //@nz
		var_64_bool = false;
		return 4;
	}
	float var_71_float; object var_72_object;
	func_7492(var_71_float, var_72_object);
	if(var_71_float > 90000.0) {
		var_64_bool = false;
		return 4;
	}
	bool var_68_bool;
	@CanSee(var_68_bool, var_72_object);
	var_68_bool = var_64_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_8812(bool var_675_bool)
{
	int var_677_int;
	func_7805(var_677_int, "ood3Alexandr4");
	if(var_677_int == 0) {
		var_675_bool = true;
		return 0;
	}
	var_675_bool = false;
}


void func_7789(object var_90_object)
{
	object var_92_object;
	@self(var_92_object);
	var_92_object = var_90_object;
}
EMIT "Stack[-1] = 0";


void func_9326(void)
{
	object var_91_object;
	@CreateDiaryEntry(var_91_object, 114, 1, 513737);
	bool var_95_bool; object var_96_object;
	var_91_object = var_96_object;
	func_9365(var_95_bool, var_96_object, 111);
}
EMIT "Stack[-1] = 0";


void func_8303(void)
{
	object var_70_object;
	func_9393(var_70_object);
	object var_69_object;
	var_70_object = var_69_object;
	float var_81_float;
	func_7907(var_81_float);
	var_69_object->AddMark("d4q03AlexandrGotoGrif", "pt_map_grif", 0, 511487, var_81_float);
	func_9274();
	func_9287();
	object var_115_object;
	func_7821(var_115_object, "quest_d4_03");
}
EMIT "Stack[-1] = 0";


// @pe
void func_1138(object var_2_object, string var_335_string)
{
	bool var_336_bool;
	func_7978(var_336_bool);
	if(!var_336_bool) //@nz
		return 0;
	if(var_335_string == var_2_object)
		return 0;
	string var_339_string; bool var_340_bool;
	var_335_string = var_339_string;
	if(var_335_string == "")
		var_340_bool = false;
	else
		var_340_bool = true;
	func_7761(var_339_string, var_340_bool);
	var_2_object = var_335_string;
	
}


void func_7795(cvector var_210_cvector, cvector var_211_cvector)
{
	float var_214_float = sqrt(var_211_cvector | var_211_cvector);
	if(var_214_float < 0.000001)
		var_210_cvector = [0.0, 0.0, 0.0];
	var_210_cvector = var_211_cvector / var_214_float;
}


// @pe
void func_8824(bool var_669_bool)
{
	int var_671_int;
	func_7805(var_671_int, "d3q01");
	if(var_671_int == 8)
		var_669_bool = true;
	var_669_bool = false;
}


// @pe
void func_4218(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_661_object, object var_662_object)
{
	var_0_object = var_662_object;
	var_1_object = var_661_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_668_bool = false;
		bool var_669_bool;
		func_8824(var_1_object);
		if(var_669_bool != 0) {
			bool var_675_bool;
			func_8812(var_1_object);
			if(var_675_bool != 0)
				var_668_bool = true;
		}
		if(var_668_bool != 0) {
			object var_681_object; object var_682_object;
			var_681_object = var_1_object;
			var_682_object = var_0_object;
			func_8246();
			func_4364(var_662_object, "Neutral");
			var_0_object->SetMessage(509086); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(509087, 9969, 9965); //@t
			var_0_object->AddReply(509088, 9967, 9966); //@t
		} else {
					func_4364(var_662_object, "Neutral");
					var_0_object->SetMessage(508854); //@t
					var_0_object->ClearReplies(); //@t
					bool var_710_bool = false;
					bool var_711_bool;
					func_8788(var_1_object);
					if(var_711_bool != 0) {
						bool var_717_bool;
						func_8836(var_1_object);
						if(var_717_bool != 0)
							var_710_bool = true;
					}
					if(var_710_bool != 0)
						var_0_object->AddReply(508840, 9693, 9692); //@t
					bool var_726_bool;
					func_8776(var_1_object);
					if(var_726_bool != 0)
						var_0_object->AddReply(508855, 9687, 9711); //@t
					bool var_735_bool;
					func_8800(var_1_object);
					if(var_735_bool != 0)
						var_0_object->AddReply(508856, 9691, 9712); //@t
					bool var_744_bool;
					func_8932(var_1_object);
					if(var_744_bool != 0)
						var_0_object->AddReply(511978, 13175, 13193); //@t
					var_0_object->AddReply(511133, -1, 12322); //@t
					var_0_object->AddReply(534068, -1, 35658); //@t
		}
	}
	for(;;) {
		bool var_700_bool;
		func_7978(var_700_bool);
		if(var_700_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7754(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4363;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4363:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x107e";


void func_9339(void)
{
	object var_87_object;
	@CreateDiaryEntry(var_87_object, 172, 2, 515424);
	bool var_91_bool; object var_92_object;
	var_87_object = var_92_object;
	func_9365(var_91_bool, var_92_object, 170);
}
EMIT "Stack[-1] = 0";


void func_7805(int var_405_int, string var_406_string)
{
	int var_408_int;
	@GetVariable(var_406_string, var_408_int);
	var_408_int = var_405_int;
}


void func_7296(void)
{
	float var_71_float;
	@rand(var_71_float, 8, 16);
	@SetTimer(10, var_71_float);
}


void func_7810(object var_117_object, string var_118_string)
{
	object var_121_object;
	@GetMainOutdoorScene(var_121_object);
	object var_122_object;
	@AddBlankActor(var_122_object, var_121_object, var_118_string, (var_118_string + ".bin"));
	var_122_object = var_117_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_8836(bool var_717_bool)
{
	int var_719_int;
	func_7805(var_719_int, "d3q01");
	if(var_719_int == 1)
		var_717_bool = true;
	var_717_bool = false;
}


void func_9352(object var_100_object)
{
	object var_102_object;
	@GetDiaryRoot(var_102_object);
	if(!var_102_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_100_object = false;
	}
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_8329(object var_148_object)
{
	object var_152_object;
	func_9393(var_152_object);
	object var_149_object;
	var_152_object = var_149_object;
	func_9410(var_149_object, "pt_map_grif", (float)2);
	object var_172_object;
	func_9393(var_172_object);
	var_148_object->ShowMap(var_172_object);
}


void func_7305(void)
{
	@KillTimer(10);
}


void func_7821(object var_115_object, string var_116_string)
{
	object var_119_object;
	@GetMainOutdoorScene(var_119_object);
	object var_120_object;
	@AddBlankActorFromXml(var_120_object, var_119_object, var_116_string, (var_116_string + ".xml"));
	var_120_object = var_115_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_8848(bool var_794_bool)
{
	int var_796_int;
	func_7805(var_796_int, "ood4Alexandr1");
	if(var_796_int == 0) {
		var_794_bool = true;
		return 0;
	}
	var_794_bool = false;
}


void func_9365(bool var_91_bool, object var_92_object, int var_93_int)
{
	object var_100_object;
	func_9352(var_100_object);
	object var_97_object;
	var_100_object = var_97_object;
	object var_98_object;
	var_97_object->Find(var_93_int, var_98_object);
	if(!var_98_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_93_int);
		var_91_bool = false;
	}
	var_98_object->AddChild(var_92_object);
	@SendWorldWndMessage(7);
	int var_99_int;
	var_92_object->GetCategory(var_99_int);
	@SetDiarySection(var_99_int);
	var_91_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_7832(int var_142_int, int var_143_int)
{
	object var_145_object;
	@CreateIntVector(var_145_object);
	var_145_object->add(var_142_int);
	var_145_object->add(var_143_int);
	@SendWorldWndMessage(3, var_145_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8345(void)
{
	@SetVariable("ood4Alexandr2", 1);
}


// @pe
void func_5275(object var_2_object, string var_804_string)
{
	bool var_805_bool;
	func_7978(var_805_bool);
	if(!var_805_bool) //@nz
		return 0;
	if(var_804_string == var_2_object)
		return 0;
	string var_808_string; bool var_809_bool;
	var_804_string = var_808_string;
	if(var_804_string == "")
		var_809_bool = false;
	else
		var_809_bool = true;
	func_7761(var_808_string, var_809_bool);
	var_2_object = var_804_string;
	
}


// @pe
void func_8860(bool var_829_bool)
{
	int var_831_int;
	func_7805(var_831_int, "d4q03");
	if(var_831_int == 0) {
		var_829_bool = true;
		return 0;
	}
	var_829_bool = false;
}


void func_8351(void)
{
	@SetVariable("d4q03", 3);
	object var_201_object;
	func_9393(var_201_object);
	object var_198_object;
	var_201_object = var_198_object;
	float var_206_float;
	func_7907(var_206_float);
	var_198_object->AddMark("d4q03AlexandrAboutVolnica", "pt_d4q03_volnica", 0, 511494, var_206_float);
	func_9300();
}
EMIT "Stack[-1] = 0";


void func_7844(object var_244_object, int var_245_int)
{
	int var_247_int;
	object var_248_object;
	var_244_object = var_248_object;
	int var_250_int;
	func_7500(var_248_object, "money", var_250_int);
	if(var_250_int > 0) {
		@GetInvItemByName(var_247_int, "Money");
		int var_257_int; int var_258_int;
		var_247_int = var_257_int;
		var_245_int = var_258_int;
		func_7832(var_257_int, var_258_int);
	}
}


// @pe
void func_8872(bool var_839_bool)
{
	int var_841_int;
	func_7805(var_841_int, "ood4Alexandr2");
	if(var_841_int == 0) {
		var_839_bool = true;
		return 0;
	}
	var_839_bool = false;
}


void func_9393(object var_72_object)
{
	object var_75_object; object var_76_object;
	@GetMainOutdoorScene(var_75_object);
	if(var_75_object == null) {
		@Trace("Can't find main outdoor scene");
		var_76_object = null;
		var_76_object = var_72_object;
	}
	var_75_object->GetMap(var_76_object);
	var_76_object = var_72_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1202(object var_0_object, int var_1184_int, object var_1185_object)
{
	var_0_object = var_1185_object;
	bool var_1195_bool; object var_1196_object;
	object var_1197_object;
	func_7789(var_1197_object);
	var_1197_object = var_1196_object;
	func_7616(var_1195_bool, var_1196_object);
	bool var_1198_bool; object var_1199_object;
	var_1185_object = var_1199_object;
	func_7531(var_1198_bool, var_1199_object, 70.0);
	if(!var_1198_bool) { //@nz
		var_1184_int = -2;
		return 8;
	}
	object var_1191_object;
	@CreateDialog(var_1191_object);
	int var_1202_int;
	func_7972(var_1202_int);
	var_1191_object->SetNPCName(var_1202_int);
	int var_1203_int;
	func_7970(var_1203_int);
	var_1191_object->SetNPCDescription(var_1203_int);
	string var_1204_string;
	func_7974(var_1204_string);
	var_1191_object->SetPhoto(var_1204_string);
	string var_1205_string;
	func_7976(var_1205_string);
	var_1191_object->SetPhoto2(var_1205_string);
	int var_1206_int;
	func_9443(var_1206_int);
	var_1191_object->SetPlayerName(var_1206_int);
	bool var_1192_bool;
	@IsOverrideActive(var_1192_bool);
	if(var_1192_bool != 0) {
		var_1184_int = -2;
		return 8;
	}
	@DoDialog(var_1191_object);
	object var_1208_object; object var_1209_object;
	var_1185_object = var_1208_object;
	var_1191_object = var_1209_object;
	TaskCall(6);
	func_1283(var_1210_object, var_1211_object, var_1212_string, var_1213_bool, var_1208_object, var_1209_object);
	TaskReturn();
	bool var_1194_bool;
	var_1191_object->IsDialogEnd(var_1194_bool);
	
	for(;;) {
		var_1241_bool = !var_1194_bool; //@nz
		if(var_1241_bool == 0) goto Label_1272;
		@sync();
		var_1191_object->IsDialogEnd(var_1194_bool);
	}
	
Label_1272:
	object var_1242_object;
	var_1185_object = var_1242_object;
	func_7599();
	@StopDialog(var_1191_object);
	var_1191_object->GetReturnValue(-1);
	int var_1193_int = var_1184_int;
}
EMIT "Stack[-4] = 0";


void func_1715(object var_0_object, int var_973_int, object var_974_object)
{
	var_0_object = var_974_object;
	bool var_984_bool; object var_985_object;
	object var_986_object;
	func_7789(var_986_object);
	var_986_object = var_985_object;
	func_7616(var_984_bool, var_985_object);
	bool var_987_bool; object var_988_object;
	var_974_object = var_988_object;
	func_7531(var_987_bool, var_988_object, 70.0);
	if(!var_987_bool) { //@nz
		var_973_int = -2;
		return 8;
	}
	object var_980_object;
	@CreateDialog(var_980_object);
	int var_991_int;
	func_7972(var_991_int);
	var_980_object->SetNPCName(var_991_int);
	int var_992_int;
	func_7970(var_992_int);
	var_980_object->SetNPCDescription(var_992_int);
	string var_993_string;
	func_7974(var_993_string);
	var_980_object->SetPhoto(var_993_string);
	string var_994_string;
	func_7976(var_994_string);
	var_980_object->SetPhoto2(var_994_string);
	int var_995_int;
	func_9443(var_995_int);
	var_980_object->SetPlayerName(var_995_int);
	bool var_981_bool;
	@IsOverrideActive(var_981_bool);
	if(var_981_bool != 0) {
		var_973_int = -2;
		return 8;
	}
	@DoDialog(var_980_object);
	object var_997_object; object var_998_object;
	var_974_object = var_997_object;
	var_980_object = var_998_object;
	TaskCall(10);
	func_1796(var_999_object, var_1000_object, var_1001_string, var_1002_bool, var_997_object, var_998_object);
	TaskReturn();
	bool var_983_bool;
	var_980_object->IsDialogEnd(var_983_bool);
	
	for(;;) {
		var_1109_bool = !var_983_bool; //@nz
		if(var_1109_bool == 0) goto Label_1785;
		@sync();
		var_980_object->IsDialogEnd(var_983_bool);
	}
	
Label_1785:
	object var_1110_object;
	var_974_object = var_1110_object;
	func_7599();
	@StopDialog(var_980_object);
	var_980_object->GetReturnValue(-1);
	int var_982_int = var_973_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8884(bool var_845_bool)
{
	int var_847_int;
	func_7805(var_847_int, "d4q03");
	if(var_847_int == 2)
		var_845_bool = true;
	var_845_bool = false;
}


void func_8374(void)
{
	object var_269_object;
	func_9393(var_269_object);
	object var_267_object;
	var_269_object = var_267_object;
	object var_268_object;
	var_267_object->FindMark(var_268_object, "d4q03AlexandrAboutVolnica");
	if(var_268_object != 0)
		var_268_object->Remove();
	var_267_object->FindMark(var_268_object, "d4q03AlexandrGotoGrif");
	if(var_268_object != 0)
		var_268_object->Remove();
	var_267_object->FindMark(var_268_object, "d4q03AlexandrGotoGrifSelf");
	if(var_268_object != 0)
		var_268_object->Remove();
	var_267_object->FindMark(var_268_object, "d4q03GrifGotoAlexandr");
	if(var_268_object != 0)
		var_268_object->Remove();
	var_267_object->FindMark(var_268_object, "d4q03GrifGotoAlexandrSelf");
	if(var_268_object != 0)
		var_268_object->Remove();
	func_9313();
	bool var_288_bool;
	func_7895(var_288_bool, "quest_d4_03", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_7863(object var_131_object, object var_132_object, int var_133_int)
{
	int var_137_int;
	var_132_object->GetItemID(var_137_int);
	int var_138_int;
	@GetInvItemProperty(var_138_int, var_137_int, "Category");
	bool var_139_bool;
	var_131_object->AddItem(var_139_bool, var_132_object, var_138_int, var_133_int);
	if(!var_139_bool) { //@nz
		var_131_object->DropItems(var_132_object, var_133_int);
	} else {
		int var_142_int; int var_143_int;
		var_137_int = var_142_int;
		var_133_int = var_143_int;
		func_7832(var_142_int, var_143_int);
	}
	
}


void func_5817(object var_0_object, int var_877_int, object var_878_object)
{
	var_0_object = var_878_object;
	bool var_888_bool; object var_889_object;
	object var_890_object;
	func_7789(var_890_object);
	var_890_object = var_889_object;
	func_7616(var_888_bool, var_889_object);
	bool var_891_bool; object var_892_object;
	var_878_object = var_892_object;
	func_7531(var_891_bool, var_892_object, 70.0);
	if(!var_891_bool) { //@nz
		var_877_int = -2;
		return 8;
	}
	object var_884_object;
	@CreateDialog(var_884_object);
	int var_895_int;
	func_7972(var_895_int);
	var_884_object->SetNPCName(var_895_int);
	int var_896_int;
	func_7970(var_896_int);
	var_884_object->SetNPCDescription(var_896_int);
	string var_897_string;
	func_7974(var_897_string);
	var_884_object->SetPhoto(var_897_string);
	string var_898_string;
	func_7976(var_898_string);
	var_884_object->SetPhoto2(var_898_string);
	int var_899_int;
	func_9443(var_899_int);
	var_884_object->SetPlayerName(var_899_int);
	bool var_885_bool;
	@IsOverrideActive(var_885_bool);
	if(var_885_bool != 0) {
		var_877_int = -2;
		return 8;
	}
	@DoDialog(var_884_object);
	object var_901_object; object var_902_object;
	var_878_object = var_901_object;
	var_884_object = var_902_object;
	TaskCall(18);
	func_5898(var_903_object, var_904_object, var_905_string, var_906_bool, var_901_object, var_902_object);
	TaskReturn();
	bool var_887_bool;
	var_884_object->IsDialogEnd(var_887_bool);
	
	for(;;) {
		var_969_bool = !var_887_bool; //@nz
		if(var_969_bool == 0) goto Label_5887;
		@sync();
		var_884_object->IsDialogEnd(var_887_bool);
	}
	
Label_5887:
	object var_970_object;
	var_878_object = var_970_object;
	func_7599();
	@StopDialog(var_884_object);
	var_884_object->GetReturnValue(-1);
	int var_886_int = var_877_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8896(bool var_855_bool)
{
	int var_857_int;
	func_7805(var_857_int, "d4q03_alldead");
	if(var_857_int == 1)
		var_855_bool = true;
	var_855_bool = false;
}


void func_9410(object var_149_object, string var_150_string, float var_151_float)
{
	object var_159_object;
	@GetMainOutdoorScene(var_159_object);
	if(var_159_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_157_cvector;
	cvector var_158_cvector;
	bool var_160_bool;
	var_159_object->GetLocator(var_150_string, var_160_bool, var_157_cvector, var_158_cvector);
	if(!var_160_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_150_string) + " doesnt exist");
	var_159_object->GetMap(var_149_object);
	if(var_149_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_170_float = GetByIndex(var_157_cvector, 0);
	var_171_float = GetByIndex(var_157_cvector, 2);
	var_149_object->SetMapParams(var_170_float, var_171_float, var_151_float);
}
EMIT "Stack[-2] = 0";


void func_7882(object var_126_object, string var_127_string, int var_128_int)
{
	object var_130_object;
	@CreateInvItem(var_130_object);
	var_130_object->SetItemName(var_127_string);
	object var_131_object; object var_132_object; int var_133_int;
	var_126_object = var_131_object;
	var_130_object = var_132_object;
	var_128_int = var_133_int;
	func_7863(var_131_object, var_132_object, var_133_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8908(bool var_861_bool)
{
	int var_863_int;
	func_7805(var_863_int, "ood4Alexandr3");
	if(var_863_int == 0) {
		var_861_bool = true;
		return 0;
	}
	var_861_bool = false;
}


void func_7895(bool var_288_bool, string var_289_string, string var_290_string)
{
	object var_292_object;
	@FindActor(var_292_object, var_289_string);
	if(var_292_object == null)
		var_288_bool = false;
	@Trigger(var_292_object, var_290_string);
	var_288_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_8920(bool var_917_bool)
{
	int var_919_int;
	func_7805(var_919_int, "d5q01");
	if(var_919_int == 2)
		var_917_bool = true;
	var_917_bool = false;
}


// @pe
void func_219(object var_2_object, string var_394_string)
{
	bool var_395_bool;
	func_7978(var_395_bool);
	if(!var_395_bool) //@nz
		return 0;
	if(var_394_string == var_2_object)
		return 0;
	string var_398_string; bool var_399_bool;
	var_394_string = var_398_string;
	if(var_394_string == "")
		var_399_bool = false;
	else
		var_399_bool = true;
	func_7761(var_398_string, var_399_bool);
	var_2_object = var_394_string;
	
}


void func_9443(int var_234_int)
{
	int var_236_int;
	@GetVariable("branch", var_236_int);
	if(var_236_int == 0) {
		var_234_int = 1;
		return 2;
	EMIT "GOTO 0x24f2";
	}
	if(var_236_int == 1) {
		var_234_int = 2;
		return 2;
	}
	var_234_int = 3;
}


// @pe
void func_8932(bool var_744_bool)
{
	int var_746_int;
	func_7805(var_746_int, "ood3Alexandr5");
	if(var_746_int == 0) {
		var_744_bool = true;
		return 0;
	}
	var_744_bool = false;
}


void func_7907(float var_83_float)
{
	float var_85_float;
	@GetGameTime(var_85_float);
	var_85_float = var_83_float;
}


void func_7912(int var_143_int)
{
	float var_145_float;
	@GetGameTime(var_145_float);
	var_143_int = 1 + (var_145_float / 24);
}


// @pe
void func_8425(object var_229_object)
{
	object var_233_object;
	func_9393(var_233_object);
	object var_230_object;
	var_233_object = var_230_object;
	func_9410(var_230_object, "pt_map_warehouse_gangster", (float)2);
	object var_234_object;
	func_9393(var_234_object);
	var_229_object->ShowMap(var_234_object);
}


// @pe
void func_8944(bool var_403_bool)
{
	int var_405_int;
	func_7805(var_405_int, "d1q01");
	if(var_405_int == 3)
		var_403_bool = true;
	var_403_bool = false;
}


// @pe
void func_7921(bool var_360_bool, int var_361_int)
{
	int var_362_int;
	func_7912(var_362_int);
	var_360_bool = var_362_int == var_361_int;
}


// @pe
void func_9460(object var_74_object)
{
	var_75_bool = GlobalVars[1];
	if(!var_75_bool) { //@nz
		int var_77_int; object var_78_object;
		var_74_object = var_78_object;
		TaskCall(7);
		func_1461(var_79_object, var_77_int, var_78_object);
		TaskReturn();
		var_291_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_292_bool;
	func_7927(var_292_bool, 2);
	if(var_292_bool != 0) {
		int var_307_int; object var_308_object;
		var_74_object = var_308_object;
		TaskCall(3);
		func_1006(var_309_object, var_307_int, var_308_object);
		TaskReturn();
		return 0;
	}
	bool var_360_bool;
	func_7921(var_360_bool, 1);
	if(var_360_bool != 0) {
		int var_363_int; object var_364_object;
		var_74_object = var_364_object;
		TaskCall(1);
		func_13(var_365_object, var_363_int, var_364_object);
		TaskReturn();
		return 0;
	}
	bool var_469_bool;
	func_7921(var_469_bool, 2);
	if(var_469_bool != 0) {
		int var_471_int; object var_472_object;
		var_74_object = var_472_object;
		TaskCall(11);
		func_2870(var_473_object, var_471_int, var_472_object);
		TaskReturn();
		return 0;
	}
	bool var_635_bool;
	func_7921(var_635_bool, 3);
	if(var_635_bool != 0) {
		int var_637_int; object var_638_object;
		var_74_object = var_638_object;
		TaskCall(13);
		func_4137(var_639_object, var_637_int, var_638_object);
		TaskReturn();
		return 0;
	}
	bool var_761_bool;
	func_7921(var_761_bool, 4);
	if(var_761_bool != 0) {
		int var_763_int; object var_764_object;
		var_74_object = var_764_object;
		TaskCall(15);
		func_5063(var_765_object, var_763_int, var_764_object);
		TaskReturn();
		return 0;
	}
	bool var_875_bool;
	func_7921(var_875_bool, 5);
	if(var_875_bool != 0) {
		int var_877_int; object var_878_object;
		var_74_object = var_878_object;
		TaskCall(17);
		func_5817(var_879_object, var_877_int, var_878_object);
		TaskReturn();
		return 0;
	}
	bool var_971_bool;
	func_7921(var_971_bool, 6);
	if(var_971_bool != 0) {
		int var_973_int; object var_974_object;
		var_74_object = var_974_object;
		TaskCall(9);
		func_1715(var_975_object, var_973_int, var_974_object);
		TaskReturn();
		return 0;
	}
	bool var_1111_bool;
	func_7921(var_1111_bool, 7);
	if(var_1111_bool != 0) {
		int var_1113_int; object var_1114_object;
		var_74_object = var_1114_object;
		TaskCall(19);
		func_6546(var_1115_object, var_1113_int, var_1114_object);
		TaskReturn();
		return 0;
	}
	bool var_1182_bool;
	func_7921(var_1182_bool, 12);
	if(var_1182_bool != 0) {
		int var_1184_int; object var_1185_object;
		var_74_object = var_1185_object;
		TaskCall(5);
		func_1202(var_1186_object, var_1184_int, var_1185_object);
		TaskReturn();
		return 0;
	}
	int var_1243_int; object var_1244_object;
	var_74_object = var_1244_object;
	TaskCall(21);
	func_7024(var_1245_object, var_1243_int, var_1244_object);
	TaskReturn();
}


void func_7927(bool var_292_bool, int var_293_int)
{
	float var_297_float;
	@GetGameTime(var_297_float);
	if((1 + (var_297_float / 24)) != var_293_int)
		var_292_bool = false;
	int var_304_int;
	var_297_float = var_304_int;
	int var_299_int = var_304_int % 24;
	var_292_bool = var_299_int < 7;
}


void func_7416(void)
{
	bool var_83_bool; int var_84_int; int var_85_int; bool var_86_bool;
	@WaitForAnimEnd();
	bool var_87_bool;
	func_7526(var_87_bool);
	if(!var_87_bool) //@nz
		return 12;
	int var_89_int;
	func_7953(var_89_int);
	int var_81_int;
	var_89_int = var_81_int;
	int var_82_int = 0;
	
	for(;;) {
		bool var_102_bool = false;
		if(var_82_int < 5) {
			bool var_105_bool;
			func_7526(var_105_bool);
			if(var_105_bool != 0)
				var_102_bool = true;
		}
		if(var_102_bool != 0) {
			if(!var_81_int) { //@nz
				@Sleep(3, var_83_bool);
				if(!var_83_bool) { //@nz
				} else {
			} else {
			@irand(var_84_int, var_81_int);
			@irand(var_85_int, 5);
			if(var_85_int != 0)
				var_84_int = 0;
			string var_116_string; int var_117_int;
			var_84_int = var_117_int;
			func_7946(var_116_string, var_117_int);
			@PlayAnimation("all", var_116_string);
			@WaitForAnimEnd(var_86_bool);
			var_118_bool = !var_86_bool; //@nz
			if(var_118_bool == 0) goto Label_7471;
			goto Label_7482;
			}
				Label_7471:
					bool var_109_bool;
					func_7485(var_109_bool);
					var_110_bool = !var_109_bool; //@nz
					if(var_110_bool == 0) goto Label_7477;
			}
		}
	Label_7482:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_7477:
		@ResetAAS();
		var_82_int += 1;
	}
	
}


// @pe
void func_8441(object var_123_object)
{
	@Trace("revolver ammo6 is given");
	object var_126_object;
	var_123_object = var_126_object;
	func_7882(var_126_object, "revolver_ammo", 6);
}


// @pe
void func_8699(bool var_537_bool)
{
	int var_539_int;
	func_7805(var_539_int, "ood2Alexandr2");
	if(var_539_int == 0) {
		var_537_bool = true;
		return 0;
	}
	var_537_bool = false;
}


// @pe
void func_8956(bool var_1054_bool)
{
	int var_1056_int;
	func_7805(var_1056_int, "d6q02");
	if(var_1056_int == 1)
		var_1054_bool = true;
	var_1054_bool = false;
}


// @pe
void func_1283(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1208_object, object var_1209_object)
{
	var_0_object = var_1209_object;
	var_1_object = var_1208_object;
	var_3_string = false;
	if(1 != 0) {
		func_1346(var_1209_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_1316;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x507";
	}
Label_1316:
	bool var_1233_bool;
	func_7978(var_1233_bool);
	if(var_1233_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1345;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1345:
		return 0;

	}
	
}


// @pe
void func_1796(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_997_object, object var_998_object)
{
	var_0_object = var_998_object;
	var_1_object = var_997_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1004_bool = false;
		bool var_1005_bool;
		func_9016(var_1_object);
		if(var_1005_bool != 0) {
			bool var_1011_bool;
			func_9028(var_1_object);
			if(var_1011_bool != 0)
				var_1004_bool = true;
		}
		if(var_1004_bool != 0) {
			object var_1017_object; object var_1018_object;
			var_1017_object = var_1_object;
			var_1018_object = var_0_object;
			func_8519();
			func_1965(var_998_object, "Neutral");
			var_0_object->SetMessage(512650); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(510633, 13839, 11732); //@t
			var_0_object->AddReply(510665, 11772, 11771); //@t
		} else {
					func_1965(var_998_object, "Neutral");
					var_0_object->SetMessage(511979); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1046_bool = false;
					bool var_1047_bool = false;
					bool var_1048_bool;
					func_9040(var_1_object);
					if(var_1048_bool != 0) {
						bool var_1054_bool;
						func_8956(var_1_object);
						if(var_1054_bool != 0)
							var_1047_bool = true;
					}
					if(var_1047_bool != 0) {
						bool var_1060_bool;
						func_9112(var_1_object);
						if(!var_1060_bool) //@nz
							var_1046_bool = true;
					}
					if(var_1046_bool != 0)
						var_0_object->AddReply(512649, 13832, 13829); //@t
					bool var_1070_bool = false;
					bool var_1071_bool = false;
					bool var_1072_bool;
					func_9052(var_1_object);
					if(var_1072_bool != 0) {
						bool var_1078_bool;
						func_8956(var_1_object);
						if(var_1078_bool != 0)
							var_1071_bool = true;
					}
					if(var_1071_bool != 0) {
						bool var_1080_bool;
						func_9124(var_1_object);
						if(!var_1080_bool) //@nz
							var_1070_bool = true;
					}
					if(var_1070_bool != 0)
						var_0_object->AddReply(512660, 13832, 13840); //@t
					bool var_1090_bool = false;
					bool var_1091_bool;
					func_9064(var_1_object);
					if(var_1091_bool != 0) {
						bool var_1097_bool;
						func_9076(var_1_object);
						if(var_1097_bool != 0)
							var_1090_bool = true;
					}
					if(var_1090_bool != 0)
						var_0_object->AddReply(511980, 13196, 13195); //@t
					var_0_object->AddReply(513018, -1, 14224); //@t
		}
	}
	for(;;) {
		bool var_1036_bool;
		func_7978(var_1036_bool);
		if(var_1036_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7754(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1964;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1964:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x708";


// @pe
void func_8452(void)
{
	@SetVariable("ood4Alexandr3", 1);
}


// @pe
void func_8968(bool var_927_bool)
{
	int var_929_int;
	func_7805(var_929_int, "ood5Alexandr1");
	if(var_929_int == 0) {
		var_927_bool = true;
		return 0;
	}
	var_927_bool = false;
}


// @pe
void func_5898(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_901_object, object var_902_object)
{
	var_0_object = var_902_object;
	var_1_object = var_901_object;
	var_3_string = false;
	if(1 != 0) {
		func_5999(var_902_object, "Neutral");
		var_0_object->SetMessage(511591); //@t
		var_0_object->ClearReplies(); //@t
		bool var_917_bool;
		func_8920(var_1_object);
		if(var_917_bool != 0)
			var_0_object->AddReply(511592, 12788, 12787); //@t
		bool var_926_bool = false;
		bool var_927_bool;
		func_8968(var_1_object);
		if(var_927_bool != 0) {
			bool var_933_bool;
			func_8992(var_1_object);
			if(var_933_bool != 0)
				var_926_bool = true;
		}
		if(var_926_bool != 0)
			var_0_object->AddReply(511611, 12810, 12809); //@t
		bool var_942_bool = false;
		bool var_943_bool;
		func_8980(var_1_object);
		if(var_943_bool != 0) {
			bool var_949_bool;
			func_9004(var_1_object);
			if(var_949_bool != 0)
				var_942_bool = true;
		}
		if(var_942_bool != 0)
			var_0_object->AddReply(511624, 12823, 12822); //@t
		var_0_object->AddReply(511635, -1, 12834); //@t
		goto Label_5969;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x170e";
	}
Label_5969:
	bool var_961_bool;
	func_7978(var_961_bool);
	if(var_961_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5998;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5998:
		return 0;

	}
	
}


void func_8458(void)
{
	@SetVariable("d5q01", 3);
	object var_68_object;
	func_9393(var_68_object);
	object var_65_object;
	var_68_object = var_65_object;
	float var_79_float;
	func_7907(var_79_float);
	var_65_object->AddMark("d5q01AlexandrGotoKaterina", "pt_map_katerina", 1, 511958, var_79_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4364(object var_2_object, string var_685_string)
{
	bool var_686_bool;
	func_7978(var_686_bool);
	if(!var_686_bool) //@nz
		return 0;
	if(var_685_string == var_2_object)
		return 0;
	string var_689_string; bool var_690_bool;
	var_685_string = var_689_string;
	if(var_685_string == "")
		var_690_bool = false;
	else
		var_690_bool = true;
	func_7761(var_689_string, var_690_bool);
	var_2_object = var_685_string;
	
}


void func_7946(string var_95_string, int var_96_int)
{
	string var_98_string = "idle";
	if(var_96_int != 0)
		var_98_string += var_96_int;
	var_98_string = var_95_string;
}


void func_7953(int var_89_int)
{
	int var_92_int; bool var_93_bool;
	var_92_int = 0;
	
	for(;;) {
		string var_95_string; int var_96_int;
		var_92_int = var_96_int;
		func_7946(var_95_string, var_96_int);
		@HasAnimation(var_93_bool, "all", var_95_string);
		if(!var_93_bool) //@nz
			break;
		var_92_int += 1;
	}
	var_92_int = var_89_int;
}


// @pe
void func_8980(bool var_943_bool)
{
	int var_945_int;
	func_7805(var_945_int, "ood5Alexandr2");
	if(var_945_int == 0) {
		var_943_bool = true;
		return 0;
	}
	var_943_bool = false;
}


// @pe
void func_8478(void)
{
	@SetVariable("ood3Alexandr5", 1);
}


// @pe
void func_8992(bool var_933_bool)
{
	int var_935_int;
	func_7805(var_935_int, "d5q03");
	if(var_935_int == 1)
		var_933_bool = true;
	var_933_bool = false;
}


void func_7970(int var_231_int)
{
	var_231_int = 515528;
}


void func_7972(int var_230_int)
{
	var_230_int = 502854;
}


void func_8484(void)
{
	@SetVariable("d1q01", 4);
	object var_68_object;
	func_9393(var_68_object);
	object var_65_object;
	var_68_object = var_65_object;
	float var_79_float;
	func_7907(var_79_float);
	var_65_object->AddMark("d1q01AlexandrGotoJulia", "pt_map_julia", 1, 508636, var_79_float);
	func_9183();
}
EMIT "Stack[-1] = 0";


void func_7974(string var_232_string)
{
	var_232_string = "ui/NPC_Alexandr.png";
}


void func_7976(string var_233_string)
{
	var_233_string = "ui/NPC_Alexandr_b.png";
}


void func_7978(bool var_126_bool)
{
	var_126_bool = true;
}


// @pe
void func_7980(object var_172_object)
{
	object var_176_object;
	func_9393(var_176_object);
	object var_173_object;
	var_176_object = var_173_object;
	func_9410(var_173_object, "pt_map_katerina", (float)2);
	object var_196_object;
	func_9393(var_196_object);
	var_172_object->ShowMap(var_196_object);
}


// @pe
void func_9004(bool var_949_bool)
{
	int var_951_int;
	func_7805(var_951_int, "d5q03");
	if(var_951_int == 2)
		var_949_bool = true;
	var_949_bool = false;
}


void func_2870(object var_0_object, int var_471_int, object var_472_object)
{
	var_0_object = var_472_object;
	bool var_482_bool; object var_483_object;
	object var_484_object;
	func_7789(var_484_object);
	var_484_object = var_483_object;
	func_7616(var_482_bool, var_483_object);
	bool var_485_bool; object var_486_object;
	var_472_object = var_486_object;
	func_7531(var_485_bool, var_486_object, 70.0);
	if(!var_485_bool) { //@nz
		var_471_int = -2;
		return 8;
	}
	object var_478_object;
	@CreateDialog(var_478_object);
	int var_489_int;
	func_7972(var_489_int);
	var_478_object->SetNPCName(var_489_int);
	int var_490_int;
	func_7970(var_490_int);
	var_478_object->SetNPCDescription(var_490_int);
	string var_491_string;
	func_7974(var_491_string);
	var_478_object->SetPhoto(var_491_string);
	string var_492_string;
	func_7976(var_492_string);
	var_478_object->SetPhoto2(var_492_string);
	int var_493_int;
	func_9443(var_493_int);
	var_478_object->SetPlayerName(var_493_int);
	bool var_479_bool;
	@IsOverrideActive(var_479_bool);
	if(var_479_bool != 0) {
		var_471_int = -2;
		return 8;
	}
	@DoDialog(var_478_object);
	object var_495_object; object var_496_object;
	var_472_object = var_495_object;
	var_478_object = var_496_object;
	TaskCall(12);
	func_2951(var_497_object, var_498_object, var_499_string, var_500_bool, var_495_object, var_496_object);
	TaskReturn();
	bool var_481_bool;
	var_478_object->IsDialogEnd(var_481_bool);
	
	for(;;) {
		var_633_bool = !var_481_bool; //@nz
		if(var_633_bool == 0) goto Label_2940;
		@sync();
		var_478_object->IsDialogEnd(var_481_bool);
	}
	
Label_2940:
	object var_634_object;
	var_472_object = var_634_object;
	func_7599();
	@StopDialog(var_478_object);
	var_478_object->GetReturnValue(-1);
	int var_480_int = var_471_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9016(bool var_1005_bool)
{
	int var_1007_int;
	func_7805(var_1007_int, "d6q01");
	if(var_1007_int == 1)
		var_1005_bool = true;
	var_1005_bool = false;
}


// @pe
void func_8507(void)
{
	@SetVariable("ood5Alexandr1", 1);
}


// @pe
void func_7996(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_7485(bool var_109_bool)
{
	var_109_bool = true;
}


void func_7487(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_8513(void)
{
	@SetVariable("ood5Alexandr2", 1);
}


// @pe
void func_1346(object var_2_object, string var_1215_string)
{
	bool var_1216_bool;
	func_7978(var_1216_bool);
	if(!var_1216_bool) //@nz
		return 0;
	if(var_1215_string == var_2_object)
		return 0;
	string var_1219_string; bool var_1220_bool;
	var_1215_string = var_1219_string;
	if(var_1215_string == "")
		var_1220_bool = false;
	else
		var_1220_bool = true;
	func_7761(var_1219_string, var_1220_bool);
	var_2_object = var_1215_string;
	
}


// @pe
void func_8002(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_9028(bool var_1011_bool)
{
	int var_1013_int;
	func_7805(var_1013_int, "ood6Alexandr1");
	if(var_1013_int == 0) {
		var_1011_bool = true;
		return 0;
	}
	var_1011_bool = false;
}


void func_7492(float var_71_float, object var_72_object)
{
	cvector var_76_cvector;
	@GetPosition(var_76_cvector);
	cvector var_77_cvector;
	var_72_object->GetPosition(var_77_cvector);
	var_71_float = (var_77_cvector - var_76_cvector) | (var_77_cvector - var_76_cvector);
}


// @pe
void func_8519(void)
{
	@SetVariable("ood6Alexandr1", 1);
}


// @pe
void func_8008(void)
{
	@SetVariable("ood1Alexandr1", 1);
}


void func_7500(object var_248_object, string var_249_string, int var_250_int)
{
	int var_252_int;
	var_248_object->GetProperty(var_249_string, var_252_int);
	var_248_object->SetProperty(var_249_string, (var_252_int + var_250_int));
}


// @pe
void func_8525(void)
{
	@SetVariable("ood6Alexandr2", 1);
}


// @pe
void func_8014(void)
{
	@SetVariable("d4AlexandrVisit", 1);
}


// @pe
void func_9040(bool var_1048_bool)
{
	int var_1050_int;
	func_7805(var_1050_int, "ood6Alexandr2");
	if(var_1050_int == 0) {
		var_1048_bool = true;
		return 0;
	}
	var_1048_bool = false;
}


// @pe
void func_8531(void)
{
	@SetVariable("ood6Alexandr3", 1);
}


// @pe
void func_8020(object var_216_object)
{
	object var_220_object;
	func_9393(var_220_object);
	object var_217_object;
	var_220_object = var_217_object;
	func_9410(var_217_object, "pt_d4q03_volnica", (float)2);
	object var_221_object;
	func_9393(var_221_object);
	var_216_object->ShowMap(var_221_object);
}


void func_7507(bool var_64_bool, cvector var_65_cvector)
{
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	cvector var_70_cvector = var_65_cvector - var_69_cvector;
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_70_cvector, 2);
	bool var_71_bool;
	@Rotate(var_72_float, var_73_float, var_71_bool);
	var_71_bool = var_64_bool;
}


// @pe
void func_8537(void)
{
	@SetVariable("ood6Alexandr4", 1);
}


// @pe
void func_9052(bool var_1072_bool)
{
	int var_1074_int;
	func_7805(var_1074_int, "ood6Alexandr3");
	if(var_1074_int == 0) {
		var_1072_bool = true;
		return 0;
	}
	var_1072_bool = false;
}


void func_7517(bool var_60_bool, object var_61_object)
{
	cvector var_63_cvector;
	var_61_object->GetPosition(var_63_cvector);
	bool var_64_bool; cvector var_65_cvector;
	var_63_cvector = var_65_cvector;
	func_7507(var_64_bool, var_65_cvector);
	var_64_bool = var_60_bool;
}


void func_8543(void)
{
	object var_165_object;
	func_9393(var_165_object);
	object var_164_object;
	var_165_object = var_164_object;
	float var_170_float;
	func_7907(var_170_float);
	var_164_object->AddMark("d6q01AlexandrGotoKaterina", "pt_map_katerina", 1, 515397, var_170_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8036(void)
{
	func_9248();
}


void func_7526(bool var_57_bool)
{
	bool var_59_bool;
	@IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
}


// @pe
void func_9064(bool var_1091_bool)
{
	int var_1093_int;
	func_7805(var_1093_int, "d6q01KnowKillerIsKlara");
	if(var_1093_int == 1)
		var_1091_bool = true;
	var_1091_bool = false;
}


// @pe
void func_8041(void)
{
	@SetVariable("ood1Alexandr2", 1);
}


void func_7531(bool var_183_bool, object var_184_object, float var_185_float)
{
	cvector var_196_cvector; bool var_203_bool;
	var_184_object->GetPosition(var_196_cvector);
	float var_195_float;
	var_184_object->GetEyesHeight(var_195_float);
	var_204_float = GetByIndex(var_196_cvector, 1);
	SetByIndex(var_196_cvector, 1) = (var_204_float + var_195_float);
	cvector var_197_cvector;
	@GetPosition(var_197_cvector);
	@GetEyesHeight(var_195_float);
	var_205_float = GetByIndex(var_197_cvector, 1);
	SetByIndex(var_197_cvector, 1) = (var_205_float + var_195_float);
	cvector var_198_cvector = var_196_cvector - var_197_cvector;
	var_206_float = GetByIndex(var_198_cvector, 1);
	SetByIndex(var_198_cvector, 1) = (float)0;
	var_208_float = sqrt(var_198_cvector | var_198_cvector);
	var_198_cvector /= var_208_float;
	cvector var_199_cvector = -var_198_cvector;
	cvector var_210_cvector;
	func_7795(var_210_cvector, (var_199_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_200_cvector = ((var_198_cvector * var_185_float) + (var_210_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_202_bool;
	@IsOverrideActive(var_202_bool);
	if(var_202_bool != 0)
		var_183_bool = false;
	@StopWorld();
	@CameraTransit((var_197_cvector + var_200_cvector), var_199_cvector);
	var_223_float = GetByIndex(var_200_cvector, 0);
	var_224_float = GetByIndex(var_200_cvector, 2);
	@Rotate(var_223_float, var_224_float);
	bool var_225_bool;
	func_7978(var_225_bool);
	if(var_225_bool != 0) {
	} else {
		@HasAnimationTrack(var_203_bool, "head");
		if(var_203_bool == 0) goto Label_7593;
		@LookAsyncCamera("head");
	}
Label_7593:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_183_bool = true;
	
}


// @pe
void func_8047(void)
{
	@SetVariable("ood2Alexandr1", 1);
}


// @pe
void func_5999(object var_2_object, string var_908_string)
{
	bool var_909_bool;
	func_7978(var_909_bool);
	if(!var_909_bool) //@nz
		return 0;
	if(var_908_string == var_2_object)
		return 0;
	string var_912_string; bool var_913_bool;
	var_908_string = var_912_string;
	if(var_908_string == "")
		var_913_bool = false;
	else
		var_913_bool = true;
	func_7761(var_912_string, var_913_bool);
	var_2_object = var_908_string;
	
}


// @pe
void func_8559(void)
{
	@SetVariable("ood7Alexandr1", 1);
}


void func_7024(object var_0_object, int var_1243_int, object var_1244_object)
{
	var_0_object = var_1244_object;
	bool var_1254_bool; object var_1255_object;
	object var_1256_object;
	func_7789(var_1256_object);
	var_1256_object = var_1255_object;
	func_7616(var_1254_bool, var_1255_object);
	bool var_1257_bool; object var_1258_object;
	var_1244_object = var_1258_object;
	func_7531(var_1257_bool, var_1258_object, 70.0);
	if(!var_1257_bool) { //@nz
		var_1243_int = -2;
		return 8;
	}
	object var_1250_object;
	@CreateDialog(var_1250_object);
	int var_1261_int;
	func_7972(var_1261_int);
	var_1250_object->SetNPCName(var_1261_int);
	int var_1262_int;
	func_7970(var_1262_int);
	var_1250_object->SetNPCDescription(var_1262_int);
	string var_1263_string;
	func_7974(var_1263_string);
	var_1250_object->SetPhoto(var_1263_string);
	string var_1264_string;
	func_7976(var_1264_string);
	var_1250_object->SetPhoto2(var_1264_string);
	int var_1265_int;
	func_9443(var_1265_int);
	var_1250_object->SetPlayerName(var_1265_int);
	bool var_1251_bool;
	@IsOverrideActive(var_1251_bool);
	if(var_1251_bool != 0) {
		var_1243_int = -2;
		return 8;
	}
	@DoDialog(var_1250_object);
	object var_1267_object; object var_1268_object;
	var_1244_object = var_1267_object;
	var_1250_object = var_1268_object;
	TaskCall(22);
	func_7105(var_1269_object, var_1270_object, var_1271_string, var_1272_bool, var_1267_object, var_1268_object);
	TaskReturn();
	bool var_1253_bool;
	var_1250_object->IsDialogEnd(var_1253_bool);
	
	for(;;) {
		var_1297_bool = !var_1253_bool; //@nz
		if(var_1297_bool == 0) goto Label_7094;
		@sync();
		var_1250_object->IsDialogEnd(var_1253_bool);
	}
	
Label_7094:
	object var_1298_object;
	var_1244_object = var_1298_object;
	func_7599();
	@StopDialog(var_1250_object);
	var_1250_object->GetReturnValue(-1);
	int var_1252_int = var_1243_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9076(bool var_1097_bool)
{
	int var_1099_int;
	func_7805(var_1099_int, "ood6Alexandr4");
	if(var_1099_int == 0) {
		var_1097_bool = true;
		return 0;
	}
	var_1097_bool = false;
}


// @pe
void func_8565(void)
{
	@SetVariable("KnowAlexandr", 1);
}


// @pe
void func_8053(void)
{
	@SetVariable("ood2Alexandr2", 1);
}


// @pe
void func_8059(void)
{
	@SetVariable("ood2Alexandr3", 1);
}


void func_8571(void)
{
	object var_66_object;
	func_9393(var_66_object);
	object var_65_object;
	var_66_object = var_65_object;
	float var_77_float;
	func_7907(var_77_float);
	var_65_object->AddMark("d6q01AlexandrGotoJulia", "pt_map_julia", 1, 515387, var_77_float);
	float var_84_float;
	func_7907(var_84_float);
	var_65_object->AddMark("d6q01AlexandrGotoLara", "pt_map_lara", 1, 515386, var_84_float);
	float var_89_float;
	func_7907(var_89_float);
	var_65_object->AddMark("d6q01AlexangrGotoJulLaraSelf", "pt_map_alexandr", 1, 515388, var_89_float);
	func_9326();
}
EMIT "Stack[-1] = 0";


// @pe
void func_9088(bool var_1154_bool)
{
	int var_1156_int;
	func_7805(var_1156_int, "d7q02");
	if(var_1156_int == 1)
		var_1154_bool = true;
	var_1154_bool = false;
}


// @pe
void func_8065(void)
{
	@SetVariable("ood2Alexandr5", 1);
}


// @pe
void func_2951(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_495_object, object var_496_object)
{
	var_0_object = var_496_object;
	var_1_object = var_495_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_502_bool;
		func_8687(var_1_object);
		if(var_502_bool != 0) {
			object var_508_object; object var_509_object;
			var_508_object = var_1_object;
			var_509_object = var_0_object;
			func_8608();
			func_3154(var_496_object, "Neutral");
			var_0_object->SetMessage(506610); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(506611, 7748, 7280); //@t
			var_0_object->AddReply(507066, 7748, 7784); //@t
		} else {
					bool var_535_bool = false;
					bool var_536_bool = false;
					bool var_537_bool;
					func_8699(var_1_object);
					if(var_537_bool != 0) {
						bool var_543_bool;
						func_8759(var_1_object);
						if(var_543_bool != 0)
							var_536_bool = true;
					}
					if(var_536_bool != 0) {
						bool var_545_bool;
						func_8764(var_1_object);
						if(var_545_bool != 0)
							var_535_bool = true;
					}
					if(var_535_bool == 0) goto Label_3040;
					object var_551_object; object var_552_object;
					var_551_object = var_1_object;
					var_552_object = var_0_object;
					func_8053();
					func_3154(var_496_object, "Neutral");
					var_0_object->SetMessage(506731); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(506732, 7420, 7419); //@t
					var_0_object->AddReply(506742, 7420, 7430); //@t
					var_0_object->AddReply(506743, 7433, 7432); //@t
		}
	}
Label_3124:
	for(;;) {
		bool var_527_bool;
		func_7978(var_527_bool);
		if(var_527_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7754(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3153;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3153:
			return 0;

		}

	}
	
Label_3040:
	func_3154(var_496_object, "Neutral");
	var_0_object->SetMessage(506614); //@t
	var_0_object->ClearReplies(); //@t
	bool var_568_bool = false;
	bool var_569_bool;
	func_8711(var_1_object);
	if(var_569_bool != 0) {
		bool var_575_bool;
		func_8747(var_1_object);
		if(var_575_bool != 0)
			var_568_bool = true;
	}
	if(var_568_bool != 0)
		var_0_object->AddReply(506615, 7282, 7284); //@t
	bool var_584_bool;
	func_8735(var_1_object);
	if(var_584_bool != 0)
		var_0_object->AddReply(506618, 7800, 7287); //@t
	bool var_593_bool;
	func_8723(var_1_object);
	if(var_593_bool != 0)
		var_0_object->AddReply(506730, 7405, 7417); //@t
	bool var_602_bool = false;
	bool var_603_bool = false;
	bool var_604_bool;
	func_9136(var_1_object);
	if(var_604_bool != 0) {
		bool var_610_bool;
		func_9148(var_1_object);
		if(var_610_bool != 0)
			var_603_bool = true;
	}
	if(var_603_bool != 0) {
		bool var_616_bool;
		func_9160(var_1_object);
		if(var_616_bool != 0)
			var_602_bool = true;
	}
	if(var_602_bool != 0)
		var_0_object->AddReply(507071, 7802, 7794); //@t
	var_0_object->AddReply(507532, -1, 8314); //@t
	goto Label_3124;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xb8b";


void func_8071(object var_189_object)
{
	@Trace("Revolver is given");
	object var_192_object;
	@CreateInvItem(var_192_object);
	var_192_object->SetItemName("Revolver");
	var_192_object->SetProperty("durability", 30);
	object var_197_object; object var_198_object;
	var_189_object = var_197_object;
	var_192_object = var_198_object;
	func_7863(var_197_object, var_198_object, 1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9100(bool var_1160_bool)
{
	int var_1162_int;
	func_7805(var_1162_int, "ood7Alexandr1");
	if(var_1162_int == 0) {
		var_1160_bool = true;
		return 0;
	}
	var_1160_bool = false;
}


void func_6546(object var_0_object, int var_1113_int, object var_1114_object)
{
	var_0_object = var_1114_object;
	bool var_1124_bool; object var_1125_object;
	object var_1126_object;
	func_7789(var_1126_object);
	var_1126_object = var_1125_object;
	func_7616(var_1124_bool, var_1125_object);
	bool var_1127_bool; object var_1128_object;
	var_1114_object = var_1128_object;
	func_7531(var_1127_bool, var_1128_object, 70.0);
	if(!var_1127_bool) { //@nz
		var_1113_int = -2;
		return 8;
	}
	object var_1120_object;
	@CreateDialog(var_1120_object);
	int var_1131_int;
	func_7972(var_1131_int);
	var_1120_object->SetNPCName(var_1131_int);
	int var_1132_int;
	func_7970(var_1132_int);
	var_1120_object->SetNPCDescription(var_1132_int);
	string var_1133_string;
	func_7974(var_1133_string);
	var_1120_object->SetPhoto(var_1133_string);
	string var_1134_string;
	func_7976(var_1134_string);
	var_1120_object->SetPhoto2(var_1134_string);
	int var_1135_int;
	func_9443(var_1135_int);
	var_1120_object->SetPlayerName(var_1135_int);
	bool var_1121_bool;
	@IsOverrideActive(var_1121_bool);
	if(var_1121_bool != 0) {
		var_1113_int = -2;
		return 8;
	}
	@DoDialog(var_1120_object);
	object var_1137_object; object var_1138_object;
	var_1114_object = var_1137_object;
	var_1120_object = var_1138_object;
	TaskCall(20);
	func_6627(var_1139_object, var_1140_object, var_1141_string, var_1142_bool, var_1137_object, var_1138_object);
	TaskReturn();
	bool var_1123_bool;
	var_1120_object->IsDialogEnd(var_1123_bool);
	
	for(;;) {
		var_1180_bool = !var_1123_bool; //@nz
		if(var_1180_bool == 0) goto Label_6616;
		@sync();
		var_1120_object->IsDialogEnd(var_1123_bool);
	}
	
Label_6616:
	object var_1181_object;
	var_1114_object = var_1181_object;
	func_7599();
	@StopDialog(var_1120_object);
	var_1120_object->GetReturnValue(-1);
	int var_1122_int = var_1113_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9112(bool var_1060_bool)
{
	int var_1062_int;
	func_7805(var_1062_int, "microscope_d6q01_lara_blood");
	if(var_1062_int != 0) {
		var_1060_bool = true;
		return 0;
	}
	var_1060_bool = false;
}


void func_8092(void)
{
	@SetVariable("d2q01", 1);
	object var_72_object;
	func_9393(var_72_object);
	object var_69_object;
	var_72_object = var_69_object;
	float var_83_float;
	func_7907(var_83_float);
	var_69_object->AddMark("d2q01AlexandrGotoAnna", "pt_map_anna", 1, 511387, var_83_float);
	func_9196();
	func_9209();
	object var_117_object;
	func_7810(var_117_object, "quest_d2_02");
}
EMIT "Stack[-1] = 0";


// @pe
void func_8608(void)
{
	@SetVariable("d2TalkToAlexandr", 1);
}


// @pe
void func_9124(bool var_1080_bool)
{
	int var_1082_int;
	func_7805(var_1082_int, "microscope_d6q01_julia_blood");
	if(var_1082_int != 0) {
		var_1080_bool = true;
		return 0;
	}
	var_1080_bool = false;
}


void func_8614(void)
{
	object var_72_object;
	func_9393(var_72_object);
	object var_71_object;
	var_72_object = var_71_object;
	float var_83_float;
	func_7907(var_83_float);
	var_71_object->AddMark("d7q02AlexandrGotoPetr", "pt_map_petr", 0, 515429, var_83_float);
	func_9339();
}
EMIT "Stack[-1] = 0";


// @pe
void func_1965(object var_2_object, string var_1021_string)
{
	bool var_1022_bool;
	func_7978(var_1022_bool);
	if(!var_1022_bool) //@nz
		return 0;
	if(var_1021_string == var_2_object)
		return 0;
	string var_1025_string; bool var_1026_bool;
	var_1021_string = var_1025_string;
	if(var_1021_string == "")
		var_1026_bool = false;
	else
		var_1026_bool = true;
	func_7761(var_1025_string, var_1026_bool);
	var_2_object = var_1021_string;
	
}


void func_7599(void)
{
	bool var_286_bool;
	@CameraSwitchToNormal();
	bool var_287_bool;
	func_7978(var_287_bool);
	if(var_287_bool != 0) {
	} else {
		@HasAnimationTrack(var_286_bool, "head");
		if(var_286_bool == 0) goto Label_7615;
		@UnlookAsync("head");
	}
Label_7615:
	
}


// @pe
void func_9136(bool var_604_bool)
{
	int var_606_int;
	func_7805(var_606_int, "d2q01");
	if(var_606_int >= 5)
		var_604_bool = true;
	var_604_bool = false;
}


void func_1461(object var_0_object, int var_77_int, object var_78_object)
{
	var_0_object = var_78_object;
	bool var_88_bool; object var_89_object;
	object var_90_object;
	func_7789(var_90_object);
	var_90_object = var_89_object;
	func_7616(var_88_bool, var_89_object);
	bool var_183_bool; object var_184_object;
	var_78_object = var_184_object;
	func_7531(var_183_bool, var_184_object, 70.0);
	if(!var_183_bool) { //@nz
		var_77_int = -2;
		return 8;
	}
	object var_84_object;
	@CreateDialog(var_84_object);
	int var_230_int;
	func_7972(var_230_int);
	var_84_object->SetNPCName(var_230_int);
	int var_231_int;
	func_7970(var_231_int);
	var_84_object->SetNPCDescription(var_231_int);
	string var_232_string;
	func_7974(var_232_string);
	var_84_object->SetPhoto(var_232_string);
	string var_233_string;
	func_7976(var_233_string);
	var_84_object->SetPhoto2(var_233_string);
	int var_234_int;
	func_9443(var_234_int);
	var_84_object->SetPlayerName(var_234_int);
	bool var_85_bool;
	@IsOverrideActive(var_85_bool);
	if(var_85_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	@DoDialog(var_84_object);
	object var_243_object; object var_244_object;
	var_78_object = var_243_object;
	var_84_object = var_244_object;
	TaskCall(8);
	func_1542(var_245_object, var_246_object, var_247_string, var_248_bool, var_243_object, var_244_object);
	TaskReturn();
	bool var_87_bool;
	var_84_object->IsDialogEnd(var_87_bool);
	
	for(;;) {
		var_283_bool = !var_87_bool; //@nz
		if(var_283_bool == 0) goto Label_1531;
		@sync();
		var_84_object->IsDialogEnd(var_87_bool);
	}
	
Label_1531:
	object var_284_object;
	var_78_object = var_284_object;
	func_7599();
	@StopDialog(var_84_object);
	var_84_object->GetReturnValue(-1);
	int var_86_int = var_77_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8633(void)
{
	@SetVariable("ood2Alexandr7", 1);
}


// @pe
void func_8122(void)
{
	func_9235();
	bool var_179_bool;
	func_7895(var_179_bool, "quest_d2_01", "completed");
}


// @pe
void func_9148(bool var_610_bool)
{
	int var_612_int;
	func_7805(var_612_int, "ood2Alexandr7");
	if(var_612_int == 0) {
		var_610_bool = true;
		return 0;
	}
	var_610_bool = false;
}


// @pe
void func_8639(bool var_442_bool)
{
	int var_444_int;
	func_7805(var_444_int, "d1q01");
	if(var_444_int == 4)
		var_442_bool = true;
	var_442_bool = false;
}


void func_7616(bool var_88_bool, object var_89_object)
{
	int var_95_int; int var_96_int;
	@GetVariable("voice_common", var_95_int);
	if(var_95_int != 0) {
		bool var_99_bool; object var_100_object;
		var_89_object = var_100_object;
		func_7674(var_99_bool, var_100_object);
		if(!var_99_bool) { //@nz
			bool var_130_bool; object var_131_object;
			var_89_object = var_131_object;
			func_7711(var_130_bool, var_131_object);
			if(!var_130_bool) { //@nz
				var_88_bool = false;
				return 4;
			}
		}
		@irand(var_96_int, 2);
		if(var_96_int != 0)
			@SetVariable("voice_common", ((var_95_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_175_bool; object var_176_object;
		var_89_object = var_176_object;
		func_7711(var_175_bool, var_176_object);
		if(!var_175_bool) { //@nz
			bool var_178_bool; object var_179_object;
			var_89_object = var_179_object;
			func_7674(var_178_bool, var_179_object);
			if(!var_178_bool) { //@nz
				var_88_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_7672;
	
Label_7672:
	var_88_bool = true;
	
}


// @pe
void func_7105(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1267_object, object var_1268_object)
{
	var_0_object = var_1268_object;
	var_1_object = var_1267_object;
	var_3_string = false;
	if(1 != 0) {
		func_7163(var_1268_object, "Neutral");
		var_0_object->SetMessage(540542); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540543, -1, 42552); //@t
		var_0_object->AddReply(540796, -1, 42845); //@t
		goto Label_7133;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1bc5";
	}
Label_7133:
	bool var_1289_bool;
	func_7978(var_1289_bool);
	if(var_1289_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_7162;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_7162:
		return 0;

	}
	
}


void func_8132(void)
{
	@SetVariable("d2q01", 6);
	object var_245_object;
	func_9393(var_245_object);
	object var_242_object;
	var_245_object = var_242_object;
	float var_250_float;
	func_7907(var_250_float);
	var_242_object->AddMark("d2q01AlexandrGotoBigVlad", "pt_map_bigvlad", 1, 511390, var_250_float);
	float var_255_float;
	func_7907(var_255_float);
	var_242_object->AddMark("d2q01AlexandrGotoGeorg", "pt_map_georg", 1, 511391, var_255_float);
	func_9222();
}
EMIT "Stack[-1] = 0";


void func_5063(object var_0_object, int var_763_int, object var_764_object)
{
	var_0_object = var_764_object;
	bool var_774_bool; object var_775_object;
	object var_776_object;
	func_7789(var_776_object);
	var_776_object = var_775_object;
	func_7616(var_774_bool, var_775_object);
	bool var_777_bool; object var_778_object;
	var_764_object = var_778_object;
	func_7531(var_777_bool, var_778_object, 70.0);
	if(!var_777_bool) { //@nz
		var_763_int = -2;
		return 8;
	}
	object var_770_object;
	@CreateDialog(var_770_object);
	int var_781_int;
	func_7972(var_781_int);
	var_770_object->SetNPCName(var_781_int);
	int var_782_int;
	func_7970(var_782_int);
	var_770_object->SetNPCDescription(var_782_int);
	string var_783_string;
	func_7974(var_783_string);
	var_770_object->SetPhoto(var_783_string);
	string var_784_string;
	func_7976(var_784_string);
	var_770_object->SetPhoto2(var_784_string);
	int var_785_int;
	func_9443(var_785_int);
	var_770_object->SetPlayerName(var_785_int);
	bool var_771_bool;
	@IsOverrideActive(var_771_bool);
	if(var_771_bool != 0) {
		var_763_int = -2;
		return 8;
	}
	@DoDialog(var_770_object);
	object var_787_object; object var_788_object;
	var_764_object = var_787_object;
	var_770_object = var_788_object;
	TaskCall(16);
	func_5144(var_789_object, var_790_object, var_791_string, var_792_bool, var_787_object, var_788_object);
	TaskReturn();
	bool var_773_bool;
	var_770_object->IsDialogEnd(var_773_bool);
	
	for(;;) {
		var_873_bool = !var_773_bool; //@nz
		if(var_873_bool == 0) goto Label_5133;
		@sync();
		var_770_object->IsDialogEnd(var_773_bool);
	}
	
Label_5133:
	object var_874_object;
	var_764_object = var_874_object;
	func_7599();
	@StopDialog(var_770_object);
	var_770_object->GetReturnValue(-1);
	int var_772_int = var_763_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9160(bool var_616_bool)
{
	bool var_618_bool = false;
	int var_619_int;
	func_7805(var_619_int, "d2q01");
	if(var_619_int < 5) {
		int var_623_int;
		func_7805(var_623_int, "d2q01");
		if(var_623_int >= 1)
			var_618_bool = true;
	}
	if(var_618_bool != 0) {
		var_616_bool = true;
		return 0;
	}
	var_616_bool = false;
}


// @pe
void func_8651(bool var_415_bool)
{
	int var_417_int;
	func_7805(var_417_int, "cutscene_burn_d1");
	if(var_417_int != 0) {
		var_415_bool = true;
		return 0;
	}
	var_415_bool = false;
}


// @pe
void func_8663(bool var_422_bool)
{
	int var_424_int;
	func_7805(var_424_int, "ood1Alexandr1");
	if(var_424_int == 0) {
		var_422_bool = true;
		return 0;
	}
	var_422_bool = false;
}


void func_9183(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 34, 1, 512116);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_9365(var_87_bool, var_88_object, 2);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8675(bool var_433_bool)
{
	int var_435_int;
	func_7805(var_435_int, "ood1Alexandr2");
	if(var_435_int == 0) {
		var_433_bool = true;
		return 0;
	}
	var_433_bool = false;
}


// @pe
void func_8164(object var_241_object)
{
	@Trace("money 5000 is given");
	object var_244_object;
	var_241_object = var_244_object;
	func_7844(var_244_object, 5000);
}


// @pe
void func_6627(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1137_object, object var_1138_object)
{
	var_0_object = var_1138_object;
	var_1_object = var_1137_object;
	var_3_string = false;
	if(1 != 0) {
		func_6699(var_1138_object, "Neutral");
		var_0_object->SetMessage(512203); //@t
		var_0_object->ClearReplies(); //@t
		bool var_1153_bool = false;
		bool var_1154_bool;
		func_9088(var_1_object);
		if(var_1154_bool != 0) {
			bool var_1160_bool;
			func_9100(var_1_object);
			if(var_1160_bool != 0)
				var_1153_bool = true;
		}
		if(var_1153_bool != 0)
			var_0_object->AddReply(513340, 14573, 14572); //@t
		var_0_object->AddReply(512204, -1, 13359); //@t
		goto Label_6669;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19e7";
	}
Label_6669:
	bool var_1172_bool;
	func_7978(var_1172_bool);
	if(var_1172_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_6698;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6698:
		return 0;

	}
	
}


void func_9196(void)
{
	object var_87_object;
	@CreateDiaryEntry(var_87_object, 10, 1, 503081);
	bool var_91_bool; object var_92_object;
	var_87_object = var_92_object;
	func_9365(var_91_bool, var_92_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8174(object var_126_object)
{
	object var_130_object;
	func_9393(var_130_object);
	object var_127_object;
	var_130_object = var_127_object;
	func_9410(var_127_object, "pt_map_anna", (float)2);
	object var_150_object;
	func_9393(var_150_object);
	var_126_object->ShowMap(var_150_object);
}


// @pe
void func_8687(bool var_502_bool)
{
	int var_504_int;
	func_7805(var_504_int, "ood2Alexandr1");
	if(var_504_int == 0) {
		var_502_bool = true;
		return 0;
	}
	var_502_bool = false;
}


void func_1006(object var_0_object, int var_307_int, object var_308_object)
{
	var_0_object = var_308_object;
	bool var_318_bool; object var_319_object;
	var_308_object = var_319_object;
	func_7531(var_318_bool, var_319_object, 70.0);
	if(!var_318_bool) { //@nz
		var_307_int = -2;
		return 8;
	}
	object var_314_object;
	@CreateDialog(var_314_object);
	int var_322_int;
	func_7972(var_322_int);
	var_314_object->SetNPCName(var_322_int);
	int var_323_int;
	func_7970(var_323_int);
	var_314_object->SetNPCDescription(var_323_int);
	string var_324_string;
	func_7974(var_324_string);
	var_314_object->SetPhoto(var_324_string);
	string var_325_string;
	func_7976(var_325_string);
	var_314_object->SetPhoto2(var_325_string);
	int var_326_int;
	func_9443(var_326_int);
	var_314_object->SetPlayerName(var_326_int);
	bool var_315_bool;
	@IsOverrideActive(var_315_bool);
	if(var_315_bool != 0) {
		var_307_int = -2;
		return 8;
	}
	@DoDialog(var_314_object);
	object var_328_object; object var_329_object;
	var_308_object = var_328_object;
	var_314_object = var_329_object;
	TaskCall(4);
	func_1080(var_330_object, var_331_object, var_332_string, var_333_bool, var_328_object, var_329_object);
	TaskReturn();
	bool var_317_bool;
	var_314_object->IsDialogEnd(var_317_bool);
	
	for(;;) {
		var_358_bool = !var_317_bool; //@nz
		if(var_358_bool == 0) goto Label_1069;
		@sync();
		var_314_object->IsDialogEnd(var_317_bool);
	}
	
Label_1069:
	object var_359_object;
	var_308_object = var_359_object;
	func_7599();
	@StopDialog(var_314_object);
	var_314_object->GetReturnValue(-1);
	int var_316_int = var_307_int;
}
EMIT "Stack[-4] = 0";


void func_9209(void)
{
	object var_110_object;
	@CreateDiaryEntry(var_110_object, 50, 1, 512132);
	bool var_114_bool; object var_115_object;
	var_110_object = var_115_object;
	func_9365(var_114_bool, var_115_object, 10);
}
EMIT "Stack[-1] = 0";


void func_7674(bool var_99_bool, object var_100_object)
{
	string var_106_string; bool var_108_bool; int var_109_int; string var_110_string;
	var_106_string = "c";
	int var_107_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_100_object->HasProperty((var_106_string + (var_107_int + 1)), var_108_bool);
			if(!var_108_bool) { //@nz
			} else {
				var_107_int += 1;
			}
		}
		if(!var_107_int) { //@nz
			var_99_bool = false;
			return 10;
		}
		var_109_int = 0;
		if(var_107_int > 1)
			@irand(var_109_int, var_107_int);
		var_100_object->GetProperty((var_106_string + (var_109_int + 1)), var_110_string);
		bool var_122_bool; string var_123_string;
		var_110_string = var_123_string;
		func_7767(var_122_bool, var_123_string);
		var_122_bool = var_99_bool;
		return 10;

	}
}


// @pe
void func_7163(object var_2_object, string var_1274_string)
{
	bool var_1275_bool;
	func_7978(var_1275_bool);
	if(!var_1275_bool) //@nz
		return 0;
	if(var_1274_string == var_2_object)
		return 0;
	string var_1278_string; bool var_1279_bool;
	var_1274_string = var_1278_string;
	if(var_1274_string == "")
		var_1279_bool = false;
	else
		var_1279_bool = true;
	func_7761(var_1278_string, var_1279_bool);
	var_2_object = var_1274_string;
	
}


// @pe
void func_8190(object var_106_object)
{
	object var_110_object;
	func_9393(var_110_object);
	object var_107_object;
	var_110_object = var_107_object;
	func_9410(var_107_object, "pt_map_julia", (float)2);
	object var_130_object;
	func_9393(var_130_object);
	var_106_object->ShowMap(var_130_object);
}


