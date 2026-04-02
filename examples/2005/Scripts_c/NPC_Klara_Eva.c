// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2881();
			if(var_31_bool == 26833) {
				func_152(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525477); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529299, 30754, 30753); //@t
				var_0_object->AddReply(525478, -1, 26834); //@t
				return 0;
			}
			if(var_31_bool == 30754) {
				func_152(var_32_cvector, "Neutral");
				var_0_object->SetMessage(529300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529301, -1, 30755); //@t
				var_0_object->AddReply(529302, -1, 30756); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_3004(var_66_bool);
			if(var_66_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2881();
			if(var_32_cvector == 26913) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3006();
			}
			if(var_32_cvector == 41094) {
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_3006();
			}
			if(var_32_cvector == 41086) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_3006();
			}
			if(var_32_cvector == 41082) {
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_3006();
			}
			if(var_32_cvector == 42902) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_3006();
			}
			if(var_32_cvector == 26925) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_3029();
			}
			if(var_32_cvector == 26929) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_3035();
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_3085();
				object var_118_object = var_1_object;
				func_3075(var_0_object);
			}
			if(var_32_cvector == 41060) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_3035();
			}
			if(var_32_cvector == 41059) {
				object var_145_object = var_1_object;
				func_3075(var_0_object);
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_3085();
			}
			if(var_31_bool == 26904) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525548); //@t
				var_0_object->ClearReplies(); //@t
				bool var_164_bool;
				func_3097(var_1_object);
				if(var_164_bool != 0)
					var_0_object->AddReply(525549, 42898, 26905); //@t
				bool var_175_bool = false;
				bool var_176_bool;
				func_3109(var_1_object);
				if(var_176_bool != 0) {
					bool var_182_bool;
					func_3121(var_1_object);
					if(var_182_bool != 0)
						var_175_bool = true;
				}
				if(var_175_bool != 0)
					var_0_object->AddReply(525578, 41036, 26925); //@t
				var_0_object->AddReply(539127, -1, 41057); //@t
				var_0_object->AddReply(525558, -1, 26914); //@t
				return 0;
			}
			if(var_31_bool == 41036) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539108); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539110, 41039, 41038); //@t
				var_0_object->AddReply(539112, 41041, 41040); //@t
				return 0;
			}
			if(var_31_bool == 41041) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539113); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525580, 41046, 26927); //@t
				var_0_object->AddReply(539114, 26926, 41042); //@t
				return 0;
			}
			if(var_31_bool == 41046) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539117); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539118, 41048, 41047); //@t
				var_0_object->AddReply(539120, 41052, 41049); //@t
				return 0;
			}
			if(var_31_bool == 41052) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539123); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539124, 26926, 41053); //@t
				return 0;
			}
			if(var_31_bool == 41048) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539119); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539121, 41055, 41050); //@t
				var_0_object->AddReply(539122, -1, 41051); //@t
				return 0;
			}
			if(var_31_bool == 41055) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539125); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539126, -1, 41056); //@t
				return 0;
			}
			if(var_31_bool == 41039) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539111); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539109, 26926, 41037); //@t
				var_0_object->AddReply(539115, 41048, 41044); //@t
				return 0;
			}
			if(var_31_bool == 26926) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539116, 26928, 41045); //@t
				var_0_object->AddReply(539128, -1, 41059); //@t
				return 0;
			}
			if(var_31_bool == 26928) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525581); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525582, -1, 26929); //@t
				var_0_object->AddReply(539129, -1, 41060); //@t
				return 0;
			}
			if(var_31_bool == 42898) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540840); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540841, 41064, 42899); //@t
				var_0_object->AddReply(540842, 42901, 42900); //@t
				return 0;
			}
			if(var_31_bool == 42901) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540844, -1, 42902); //@t
				return 0;
			}
			if(var_31_bool == 41064) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539133); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539134, 41061, 41065); //@t
				var_0_object->AddReply(539142, 41061, 41073); //@t
				return 0;
			}
			if(var_31_bool == 41061) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539130); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539132, 41071, 41063); //@t
				var_0_object->AddReply(539131, 41067, 41062); //@t
				return 0;
			}
			if(var_31_bool == 41067) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539136); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539137, 41069, 41068); //@t
				var_0_object->AddReply(539158, 41069, 41096); //@t
				return 0;
			}
			if(var_31_bool == 41071) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539140); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539141, 41069, 41072); //@t
				var_0_object->AddReply(539143, 41076, 41075); //@t
				return 0;
			}
			if(var_31_bool == 41076) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539144); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539145, 41069, 41077); //@t
				var_0_object->AddReply(539146, 41079, 41078); //@t
				return 0;
			}
			if(var_31_bool == 41079) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539147); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539148, 41069, 41081); //@t
				var_0_object->AddReply(539149, -1, 41082); //@t
				return 0;
			}
			if(var_31_bool == 41069) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539138); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539150, 41085, 41084); //@t
				var_0_object->AddReply(539152, -1, 41086); //@t
				return 0;
			}
			if(var_31_bool == 41085) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539151); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539139, 26906, 41070); //@t
				var_0_object->AddReply(539153, 26906, 41087); //@t
				return 0;
			}
			if(var_31_bool == 26906) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525550); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525551, 26908, 26907); //@t
				var_0_object->AddReply(539154, 26908, 41089); //@t
				return 0;
			}
			if(var_31_bool == 26908) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525552); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525553, 41092, 26909); //@t
				var_0_object->AddReply(539155, 41092, 41091); //@t
				return 0;
			}
			if(var_31_bool == 41092) {
				func_407(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539156); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525557, -1, 26913); //@t
				var_0_object->AddReply(539157, -1, 41094); //@t
				return 0;
			}
			var_3_string = true;
			bool var_408_bool;
			func_3004(var_408_bool);
			if(var_408_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1ae";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2881();
			if(var_32_cvector == 27323) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3040();
			}
			if(var_32_cvector == 27327) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_3059();
			}
			if(var_32_cvector == 27353) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_3046();
			}
			if(var_32_cvector == 27362) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_3052();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_3091();
			}
			if(var_31_bool == 27322) {
				func_1255(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526037); //@t
				var_0_object->ClearReplies(); //@t
				bool var_103_bool = false;
				bool var_104_bool;
				func_3133(var_1_object);
				if(var_104_bool != 0) {
					bool var_112_bool;
					func_3145(var_1_object);
					if(var_112_bool != 0)
						var_103_bool = true;
				}
				if(var_103_bool != 0)
					var_0_object->AddReply(526038, 30287, 27323); //@t
				bool var_121_bool = false;
				bool var_122_bool;
				func_3157(var_1_object);
				if(var_122_bool != 0) {
					bool var_128_bool;
					func_3169(var_1_object);
					if(var_128_bool != 0)
						var_121_bool = true;
				}
				if(var_121_bool != 0)
					var_0_object->AddReply(526068, 27354, 27353); //@t
				var_0_object->AddReply(526043, -1, 27328); //@t
				var_0_object->AddReply(528864, -1, 30286); //@t
				return 0;
			}
			if(var_31_bool == 27354) {
				func_1255(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526069); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526070, 27356, 27355); //@t
				return 0;
			}
			if(var_31_bool == 27356) {
				func_1255(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526071); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526072, 27359, 27357); //@t
				var_0_object->AddReply(526073, 27359, 27358); //@t
				return 0;
			}
			if(var_31_bool == 27359) {
				func_1255(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526075, 27361, 27360); //@t
				return 0;
			}
			if(var_31_bool == 27361) {
				func_1255(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526076); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526077, -1, 27362); //@t
				return 0;
			}
			if(var_31_bool == 30287) {
				func_1255(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528865); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528866, 27324, 30288); //@t
				var_0_object->AddReply(528867, 27324, 30289); //@t
				return 0;
			}
			if(var_31_bool == 27324) {
				func_1255(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526039); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526040, 27326, 27325); //@t
				return 0;
			}
			if(var_31_bool == 27326) {
				func_1255(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526041); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528868, 30292, 30291); //@t
				return 0;
			}
			if(var_31_bool == 30292) {
				func_1255(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528869); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526042, -1, 27327); //@t
				return 0;
			}
			var_3_string = true;
			bool var_205_bool;
			func_3004(var_205_bool);
			if(var_205_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4fe";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2881();
			if(var_32_cvector == 28493) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3064();
			}
			if(var_32_cvector == 28602) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_3070();
			}
			if(var_32_cvector == 28603) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_3070();
			}
			if(var_31_bool == 28492) {
				func_1701(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527184); //@t
				var_0_object->ClearReplies(); //@t
				bool var_87_bool = false;
				bool var_88_bool;
				func_3181(var_1_object);
				if(var_88_bool != 0) {
					bool var_96_bool;
					func_3193(var_1_object);
					if(var_96_bool != 0)
						var_87_bool = true;
				}
				if(var_87_bool != 0)
					var_0_object->AddReply(527185, 28494, 28493); //@t
				var_0_object->AddReply(527188, -1, 28496); //@t
				return 0;
			}
			if(var_31_bool == 28494) {
				func_1701(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527187, 28597, 28495); //@t
				return 0;
			}
			if(var_31_bool == 28597) {
				func_1701(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527285, 28600, 28598); //@t
				var_0_object->AddReply(527286, 28600, 28599); //@t
				return 0;
			}
			if(var_31_bool == 28600) {
				func_1701(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527287); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527288, -1, 28602); //@t
				var_0_object->AddReply(527289, -1, 28603); //@t
				return 0;
			}
			var_3_string = true;
			bool var_135_bool;
			func_3004(var_135_bool);
			if(var_135_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6bc";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2881();
			if(var_31_bool == 36906) {
				func_2011(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_31_bool == 36953) {
				func_2011(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_31_bool == 36957) {
				func_2011(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_79_bool;
			func_3004(var_79_bool);
			if(var_79_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7f2";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2881();
			if(var_31_int == 42548) {
				func_2265(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_3004(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8f0";
	
	}

}


maintask task_13
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2333(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2404();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2625(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_2373(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_2353(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2888(var_77_object);
					var_77_object = var_76_object;
					func_2773(var_75_bool, var_76_object);
				}
			} else {
				func_2368(var_31_int);
				func_2395();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2586();
		func_2404();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
		{
		@StopGroup0();
		func_2404();
		func_2853("Neutral");
		func_2395();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2395();
		else
			func_2853("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2586();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2616(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_3332(var_49_object);
			func_2853("Neutral");
			func_2404();
			func_2395();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_35_bool;
	func_2625(var_35_bool);
	if(!var_35_bool) goto Label_0; //@nz
}


// @pe
void func_3075(object var_118_object)
{
	@Trace("money1000 is given");
	object var_121_object;
	var_118_object = var_121_object;
	func_2921(var_121_object, 1000);
}


void func_3332(object var_49_object)
{
	int var_51_int;
	@GetVariable("mt_eva", var_51_int);
	if(!var_51_int) { //@nz
		int var_54_int; object var_55_object;
		var_49_object = var_55_object;
		TaskCall(1);
		func_13(var_56_object, var_54_int, var_55_object);
		TaskReturn();
		@SetVariable("mt_eva", 1);
	}
	bool var_269_bool;
	func_2966(var_269_bool, 3);
	if(var_269_bool != 0) {
		int var_272_int; object var_273_object;
		var_49_object = var_273_object;
		TaskCall(3);
		func_239(var_274_object, var_272_int, var_273_object);
		TaskReturn();
		return 2;
	}
	bool var_355_bool;
	func_2966(var_355_bool, 6);
	if(var_355_bool != 0) {
		int var_357_int; object var_358_object;
		var_49_object = var_358_object;
		TaskCall(5);
		func_1078(var_359_object, var_357_int, var_358_object);
		TaskReturn();
		return 2;
	}
	bool var_445_bool;
	func_2966(var_445_bool, 11);
	if(var_445_bool != 0) {
		int var_447_int; object var_448_object;
		var_49_object = var_448_object;
		TaskCall(7);
		func_1548(var_449_object, var_447_int, var_448_object);
		TaskReturn();
		return 2;
	}
	bool var_516_bool;
	func_2966(var_516_bool, 12);
	if(var_516_bool != 0) {
		int var_518_int; object var_519_object;
		var_49_object = var_519_object;
		TaskCall(9);
		func_1867(var_520_object, var_518_int, var_519_object);
		TaskReturn();
		return 2;
	}
	int var_577_int; object var_578_object;
	var_49_object = var_578_object;
	TaskCall(11);
	func_2126(var_579_object, var_577_int, var_578_object);
	TaskReturn();
}


void func_1548(object var_0_object, int var_447_int, object var_448_object)
{
	var_0_object = var_448_object;
	bool var_458_bool; object var_459_object;
	object var_460_object;
	func_2888(var_460_object);
	var_460_object = var_459_object;
	func_2715(var_458_bool, var_459_object);
	bool var_461_bool; object var_462_object;
	var_448_object = var_462_object;
	func_2630(var_461_bool, var_462_object, 70.0);
	if(!var_461_bool) { //@nz
		var_447_int = -2;
		return 8;
	}
	object var_454_object;
	@CreateDialog(var_454_object);
	int var_465_int;
	func_2998(var_465_int);
	var_454_object->SetNPCName(var_465_int);
	int var_466_int;
	func_2996(var_466_int);
	var_454_object->SetNPCDescription(var_466_int);
	string var_467_string;
	func_3000(var_467_string);
	var_454_object->SetPhoto(var_467_string);
	string var_468_string;
	func_3002(var_468_string);
	var_454_object->SetPhoto2(var_468_string);
	int var_469_int;
	func_3315(var_469_int);
	var_454_object->SetPlayerName(var_469_int);
	bool var_455_bool;
	@IsOverrideActive(var_455_bool);
	if(var_455_bool != 0) {
		var_447_int = -2;
		return 8;
	}
	@DoDialog(var_454_object);
	object var_471_object; object var_472_object;
	var_448_object = var_471_object;
	var_454_object = var_472_object;
	TaskCall(8);
	func_1629(var_473_object, var_474_object, var_475_string, var_476_bool, var_471_object, var_472_object);
	TaskReturn();
	bool var_457_bool;
	var_454_object->IsDialogEnd(var_457_bool);
	
	for(;;) {
		var_514_bool = !var_457_bool; //@nz
		if(var_514_bool == 0) goto Label_1618;
		@sync();
		var_454_object->IsDialogEnd(var_457_bool);
	}
	
Label_1618:
	object var_515_object;
	var_448_object = var_515_object;
	func_2698();
	@StopDialog(var_454_object);
	var_454_object->GetReturnValue(-1);
	int var_456_int = var_447_int;
}
EMIT "Stack[-4] = 0";


void func_13(object var_0_object, int var_54_int, object var_55_object)
{
	var_0_object = var_55_object;
	bool var_65_bool; object var_66_object;
	object var_67_object;
	func_2888(var_67_object);
	var_67_object = var_66_object;
	func_2715(var_65_bool, var_66_object);
	bool var_160_bool; object var_161_object;
	var_55_object = var_161_object;
	func_2630(var_160_bool, var_161_object, 70.0);
	if(!var_160_bool) { //@nz
		var_54_int = -2;
		return 8;
	}
	object var_61_object;
	@CreateDialog(var_61_object);
	int var_207_int;
	func_2998(var_207_int);
	var_61_object->SetNPCName(var_207_int);
	int var_208_int;
	func_2996(var_208_int);
	var_61_object->SetNPCDescription(var_208_int);
	string var_209_string;
	func_3000(var_209_string);
	var_61_object->SetPhoto(var_209_string);
	string var_210_string;
	func_3002(var_210_string);
	var_61_object->SetPhoto2(var_210_string);
	int var_211_int;
	func_3315(var_211_int);
	var_61_object->SetPlayerName(var_211_int);
	bool var_62_bool;
	@IsOverrideActive(var_62_bool);
	if(var_62_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	@DoDialog(var_61_object);
	object var_220_object; object var_221_object;
	var_55_object = var_220_object;
	var_61_object = var_221_object;
	TaskCall(2);
	func_94(var_222_object, var_223_object, var_224_string, var_225_bool, var_220_object, var_221_object);
	TaskReturn();
	bool var_64_bool;
	var_61_object->IsDialogEnd(var_64_bool);
	
	for(;;) {
		var_259_bool = !var_64_bool; //@nz
		if(var_259_bool == 0) goto Label_83;
		@sync();
		var_61_object->IsDialogEnd(var_64_bool);
	}
	
Label_83:
	object var_260_object;
	var_55_object = var_260_object;
	func_2698();
	@StopDialog(var_61_object);
	var_61_object->GetReturnValue(-1);
	int var_63_int = var_54_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3085(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_3091(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_2584(bool var_83_bool)
{
	var_83_bool = true;
}


// @pe
void func_3097(bool var_312_bool)
{
	int var_314_int;
	func_2904(var_314_int, "k3q02");
	if(var_314_int == 2)
		var_312_bool = true;
	var_312_bool = false;
}


void func_2586(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2333(object var_0_object)
{
	bool var_31_bool;
	func_2625(var_31_bool);
	if(!var_31_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2461();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2515();
	}
}
EMIT "Return(); Pop(0)";


void func_2591(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


// @pe
void func_3109(bool var_324_bool)
{
	int var_326_int;
	func_2904(var_326_int, "k3q03");
	if(var_326_int == 1)
		var_324_bool = true;
	var_324_bool = false;
}


void func_2853(string var_38_string)
{
	float var_41_float; float var_42_float;
	@lshGetAnimTimes(var_38_string, var_41_float, var_42_float);
	@lshPlayAnimation(var_41_float, var_42_float, false);
}


void func_2599(object var_125_object, string var_126_string, int var_127_int)
{
	int var_129_int;
	var_125_object->GetProperty(var_126_string, var_129_int);
	var_125_object->SetProperty(var_126_string, (var_129_int + var_127_int));
}


void func_2860(string var_231_string, bool var_232_bool)
{
	float var_237_float; float var_238_float;
	@lshGetAnimTimes(var_231_string, var_237_float, var_238_float);
	@lshPlayAnimation(var_237_float, var_238_float, var_232_bool);
}


void func_2606(bool var_39_bool, cvector var_40_cvector)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector = var_40_cvector - var_44_cvector;
	var_47_float = GetByIndex(var_45_cvector, 0);
	var_48_float = GetByIndex(var_45_cvector, 2);
	bool var_46_bool;
	@Rotate(var_47_float, var_48_float, var_46_bool);
	var_46_bool = var_39_bool;
}


// @pe
void func_3121(bool var_330_bool)
{
	int var_332_int;
	func_2904(var_332_int, "ook3Eva1");
	if(var_332_int == 0) {
		var_330_bool = true;
		return 0;
	}
	var_330_bool = false;
}


void func_2353(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2616(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


void func_2866(bool var_99_bool, string var_100_string)
{
	bool var_102_bool;
	bool var_103_bool;
	func_3004(var_103_bool);
	if(var_103_bool != 0) {
		@lshHasSpeech(var_102_bool, var_100_string);
		if(var_102_bool != 0) {
			@lshPlaySpeech(var_100_string);
			var_99_bool = true;
		}
	}
	var_99_bool = false;
}


void func_1078(object var_0_object, int var_357_int, object var_358_object)
{
	var_0_object = var_358_object;
	bool var_368_bool; object var_369_object;
	object var_370_object;
	func_2888(var_370_object);
	var_370_object = var_369_object;
	func_2715(var_368_bool, var_369_object);
	bool var_371_bool; object var_372_object;
	var_358_object = var_372_object;
	func_2630(var_371_bool, var_372_object, 70.0);
	if(!var_371_bool) { //@nz
		var_357_int = -2;
		return 8;
	}
	object var_364_object;
	@CreateDialog(var_364_object);
	int var_375_int;
	func_2998(var_375_int);
	var_364_object->SetNPCName(var_375_int);
	int var_376_int;
	func_2996(var_376_int);
	var_364_object->SetNPCDescription(var_376_int);
	string var_377_string;
	func_3000(var_377_string);
	var_364_object->SetPhoto(var_377_string);
	string var_378_string;
	func_3002(var_378_string);
	var_364_object->SetPhoto2(var_378_string);
	int var_379_int;
	func_3315(var_379_int);
	var_364_object->SetPlayerName(var_379_int);
	bool var_365_bool;
	@IsOverrideActive(var_365_bool);
	if(var_365_bool != 0) {
		var_357_int = -2;
		return 8;
	}
	@DoDialog(var_364_object);
	object var_381_object; object var_382_object;
	var_358_object = var_381_object;
	var_364_object = var_382_object;
	TaskCall(6);
	func_1159(var_383_object, var_384_object, var_385_string, var_386_bool, var_381_object, var_382_object);
	TaskReturn();
	bool var_367_bool;
	var_364_object->IsDialogEnd(var_367_bool);
	
	for(;;) {
		var_443_bool = !var_367_bool; //@nz
		if(var_443_bool == 0) goto Label_1148;
		@sync();
		var_364_object->IsDialogEnd(var_367_bool);
	}
	
Label_1148:
	object var_444_object;
	var_358_object = var_444_object;
	func_2698();
	@StopDialog(var_364_object);
	var_364_object->GetReturnValue(-1);
	int var_366_int = var_357_int;
}
EMIT "Stack[-4] = 0";


void func_2616(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2606(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


// @pe
void func_3133(bool var_398_bool)
{
	int var_400_int;
	func_2904(var_400_int, "k6q01");
	if(var_400_int == 1)
		var_398_bool = true;
	var_398_bool = false;
}


// @pe
void func_320(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_296_object, object var_297_object)
{
	var_0_object = var_297_object;
	var_1_object = var_296_object;
	var_3_string = false;
	if(1 != 0) {
		func_407(var_297_object, "Neutral");
		var_0_object->SetMessage(525548); //@t
		var_0_object->ClearReplies(); //@t
		bool var_312_bool;
		func_3097(var_1_object);
		if(var_312_bool != 0)
			var_0_object->AddReply(525549, 42898, 26905); //@t
		bool var_323_bool = false;
		bool var_324_bool;
		func_3109(var_1_object);
		if(var_324_bool != 0) {
			bool var_330_bool;
			func_3121(var_1_object);
			if(var_330_bool != 0)
				var_323_bool = true;
		}
		if(var_323_bool != 0)
			var_0_object->AddReply(525578, 41036, 26925); //@t
		var_0_object->AddReply(539127, -1, 41057); //@t
		var_0_object->AddReply(525558, -1, 26914); //@t
		goto Label_377;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x144";
	}
Label_377:
	bool var_345_bool;
	func_3004(var_345_bool);
	if(var_345_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2853(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_406;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_406:
		return 0;

	}
	
}


void func_2625(bool var_31_bool)
{
	bool var_33_bool;
	@IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
}


void func_2881(void)
{
	bool var_34_bool;
	func_3004(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_2368(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_2373(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2591(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


void func_2630(bool var_160_bool, object var_161_object, float var_162_float)
{
	cvector var_173_cvector; bool var_180_bool;
	var_161_object->GetPosition(var_173_cvector);
	float var_172_float;
	var_161_object->GetEyesHeight(var_172_float);
	var_181_float = GetByIndex(var_173_cvector, 1);
	SetByIndex(var_173_cvector, 1) = (var_181_float + var_172_float);
	cvector var_174_cvector;
	@GetPosition(var_174_cvector);
	@GetEyesHeight(var_172_float);
	var_182_float = GetByIndex(var_174_cvector, 1);
	SetByIndex(var_174_cvector, 1) = (var_182_float + var_172_float);
	cvector var_175_cvector = var_173_cvector - var_174_cvector;
	var_183_float = GetByIndex(var_175_cvector, 1);
	SetByIndex(var_175_cvector, 1) = (float)0;
	var_185_float = sqrt(var_175_cvector | var_175_cvector);
	var_175_cvector /= var_185_float;
	cvector var_176_cvector = -var_175_cvector;
	cvector var_187_cvector;
	func_2894(var_187_cvector, (var_176_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_177_cvector = ((var_175_cvector * var_162_float) + (var_187_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_179_bool;
	@IsOverrideActive(var_179_bool);
	if(var_179_bool != 0)
		var_160_bool = false;
	@StopWorld();
	@CameraTransit((var_174_cvector + var_177_cvector), var_176_cvector);
	var_200_float = GetByIndex(var_177_cvector, 0);
	var_201_float = GetByIndex(var_177_cvector, 2);
	@Rotate(var_200_float, var_201_float);
	bool var_202_bool;
	func_3004(var_202_bool);
	if(var_202_bool != 0) {
	} else {
		@HasAnimationTrack(var_180_bool, "head");
		if(var_180_bool == 0) goto Label_2692;
		@LookAsyncCamera("head");
	}
Label_2692:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_160_bool = true;
	
}


void func_2888(object var_67_object)
{
	object var_69_object;
	@self(var_69_object);
	var_69_object = var_67_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3145(bool var_404_bool)
{
	int var_406_int;
	func_2904(var_406_int, "ook6Eva1");
	if(var_406_int == 0) {
		var_404_bool = true;
		return 0;
	}
	var_404_bool = false;
}


void func_1867(object var_0_object, int var_518_int, object var_519_object)
{
	var_0_object = var_519_object;
	bool var_529_bool; object var_530_object;
	object var_531_object;
	func_2888(var_531_object);
	var_531_object = var_530_object;
	func_2715(var_529_bool, var_530_object);
	bool var_532_bool; object var_533_object;
	var_519_object = var_533_object;
	func_2630(var_532_bool, var_533_object, 70.0);
	if(!var_532_bool) { //@nz
		var_518_int = -2;
		return 8;
	}
	object var_525_object;
	@CreateDialog(var_525_object);
	int var_536_int;
	func_2998(var_536_int);
	var_525_object->SetNPCName(var_536_int);
	int var_537_int;
	func_2996(var_537_int);
	var_525_object->SetNPCDescription(var_537_int);
	string var_538_string;
	func_3000(var_538_string);
	var_525_object->SetPhoto(var_538_string);
	string var_539_string;
	func_3002(var_539_string);
	var_525_object->SetPhoto2(var_539_string);
	int var_540_int;
	func_3315(var_540_int);
	var_525_object->SetPlayerName(var_540_int);
	bool var_526_bool;
	@IsOverrideActive(var_526_bool);
	if(var_526_bool != 0) {
		var_518_int = -2;
		return 8;
	}
	@DoDialog(var_525_object);
	object var_542_object; object var_543_object;
	var_519_object = var_542_object;
	var_525_object = var_543_object;
	TaskCall(10);
	func_1948(var_544_object, var_545_object, var_546_string, var_547_bool, var_542_object, var_543_object);
	TaskReturn();
	bool var_528_bool;
	var_525_object->IsDialogEnd(var_528_bool);
	
	for(;;) {
		var_575_bool = !var_528_bool; //@nz
		if(var_575_bool == 0) goto Label_1937;
		@sync();
		var_525_object->IsDialogEnd(var_528_bool);
	}
	
Label_1937:
	object var_576_object;
	var_519_object = var_576_object;
	func_2698();
	@StopDialog(var_525_object);
	var_525_object->GetReturnValue(-1);
	int var_527_int = var_518_int;
}
EMIT "Stack[-4] = 0";


void func_2126(object var_0_object, int var_577_int, object var_578_object)
{
	var_0_object = var_578_object;
	bool var_588_bool; object var_589_object;
	object var_590_object;
	func_2888(var_590_object);
	var_590_object = var_589_object;
	func_2715(var_588_bool, var_589_object);
	bool var_591_bool; object var_592_object;
	var_578_object = var_592_object;
	func_2630(var_591_bool, var_592_object, 70.0);
	if(!var_591_bool) { //@nz
		var_577_int = -2;
		return 8;
	}
	object var_584_object;
	@CreateDialog(var_584_object);
	int var_595_int;
	func_2998(var_595_int);
	var_584_object->SetNPCName(var_595_int);
	int var_596_int;
	func_2996(var_596_int);
	var_584_object->SetNPCDescription(var_596_int);
	string var_597_string;
	func_3000(var_597_string);
	var_584_object->SetPhoto(var_597_string);
	string var_598_string;
	func_3002(var_598_string);
	var_584_object->SetPhoto2(var_598_string);
	int var_599_int;
	func_3315(var_599_int);
	var_584_object->SetPlayerName(var_599_int);
	bool var_585_bool;
	@IsOverrideActive(var_585_bool);
	if(var_585_bool != 0) {
		var_577_int = -2;
		return 8;
	}
	@DoDialog(var_584_object);
	object var_601_object; object var_602_object;
	var_578_object = var_601_object;
	var_584_object = var_602_object;
	TaskCall(12);
	func_2207(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object);
	TaskReturn();
	bool var_587_bool;
	var_584_object->IsDialogEnd(var_587_bool);
	
	for(;;) {
		var_631_bool = !var_587_bool; //@nz
		if(var_631_bool == 0) goto Label_2196;
		@sync();
		var_584_object->IsDialogEnd(var_587_bool);
	}
	
Label_2196:
	object var_632_object;
	var_578_object = var_632_object;
	func_2698();
	@StopDialog(var_584_object);
	var_584_object->GetReturnValue(-1);
	int var_586_int = var_577_int;
}
EMIT "Stack[-4] = 0";


void func_2894(cvector var_187_cvector, cvector var_188_cvector)
{
	float var_191_float = sqrt(var_188_cvector | var_188_cvector);
	if(var_191_float < 0.000001)
		var_187_cvector = [0.0, 0.0, 0.0];
	var_187_cvector = var_188_cvector / var_191_float;
}


// @pe
void func_3157(bool var_414_bool)
{
	int var_416_int;
	func_2904(var_416_int, "k6q01");
	if(var_416_int == 2)
		var_414_bool = true;
	var_414_bool = false;
}


void func_2904(int var_314_int, string var_315_string)
{
	int var_317_int;
	@GetVariable(var_315_string, var_317_int);
	var_317_int = var_314_int;
}


void func_2395(void)
{
	float var_45_float;
	@rand(var_45_float, 8, 16);
	@SetTimer(10, var_45_float);
}


// @pe
void func_1629(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_471_object, object var_472_object)
{
	var_0_object = var_472_object;
	var_1_object = var_471_object;
	var_3_string = false;
	if(1 != 0) {
		func_1701(var_472_object, "Neutral");
		var_0_object->SetMessage(527184); //@t
		var_0_object->ClearReplies(); //@t
		bool var_487_bool = false;
		bool var_488_bool;
		func_3181(var_1_object);
		if(var_488_bool != 0) {
			bool var_494_bool;
			func_3193(var_1_object);
			if(var_494_bool != 0)
				var_487_bool = true;
		}
		if(var_487_bool != 0)
			var_0_object->AddReply(527185, 28494, 28493); //@t
		var_0_object->AddReply(527188, -1, 28496); //@t
		goto Label_1671;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x661";
	}
Label_1671:
	bool var_506_bool;
	func_3004(var_506_bool);
	if(var_506_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2853(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1700;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1700:
		return 0;

	}
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_220_object, object var_221_object)
{
	var_0_object = var_221_object;
	var_1_object = var_220_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_221_object, "Neutral");
		var_0_object->SetMessage(525477); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529299, 30754, 30753); //@t
		var_0_object->AddReply(525478, -1, 26834); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_246_bool;
	func_3004(var_246_bool);
	if(var_246_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2853(var_2_object);
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


void func_2909(int var_134_int, int var_135_int)
{
	object var_137_object;
	@CreateIntVector(var_137_object);
	var_137_object->add(var_134_int);
	var_137_object->add(var_135_int);
	@SendWorldWndMessage(3, var_137_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3169(bool var_420_bool)
{
	int var_422_int;
	func_2904(var_422_int, "ook6Eva2");
	if(var_422_int == 0) {
		var_420_bool = true;
		return 0;
	}
	var_420_bool = false;
}


void func_2404(void)
{
	@KillTimer(10);
}


void func_2921(object var_121_object, int var_122_int)
{
	int var_124_int;
	object var_125_object;
	var_121_object = var_125_object;
	int var_127_int;
	func_2599(var_125_object, "money", var_127_int);
	if(var_127_int > 0) {
		@GetInvItemByName(var_124_int, "Money");
		int var_134_int; int var_135_int;
		var_124_int = var_134_int;
		var_122_int = var_135_int;
		func_2909(var_134_int, var_135_int);
	}
}


// @pe
void func_3181(bool var_488_bool)
{
	int var_490_int;
	func_2904(var_490_int, "k11q01");
	if(var_490_int == 1)
		var_488_bool = true;
	var_488_bool = false;
}


// @pe
void func_3193(bool var_494_bool)
{
	int var_496_int;
	func_2904(var_496_int, "ook11Eva1");
	if(var_496_int == 0) {
		var_494_bool = true;
		return 0;
	}
	var_494_bool = false;
}


void func_2940(bool var_78_bool, string var_79_string, string var_80_string)
{
	object var_82_object;
	@FindActor(var_82_object, var_79_string);
	if(var_82_object == null)
		var_78_bool = false;
	@Trigger(var_82_object, var_80_string);
	var_78_bool = true;
}
EMIT "Stack[-1] = 0";


void func_3205(void)
{
	object var_46_object;
	@CreateDiaryEntry(var_46_object, 482, 1, 528049);
	bool var_50_bool; object var_51_object;
	var_46_object = var_51_object;
	func_3270(var_50_bool, var_51_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1159(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_381_object, object var_382_object)
{
	var_0_object = var_382_object;
	var_1_object = var_381_object;
	var_3_string = false;
	if(1 != 0) {
		func_1255(var_382_object, "Neutral");
		var_0_object->SetMessage(526037); //@t
		var_0_object->ClearReplies(); //@t
		bool var_397_bool = false;
		bool var_398_bool;
		func_3133(var_1_object);
		if(var_398_bool != 0) {
			bool var_404_bool;
			func_3145(var_1_object);
			if(var_404_bool != 0)
				var_397_bool = true;
		}
		if(var_397_bool != 0)
			var_0_object->AddReply(526038, 30287, 27323); //@t
		bool var_413_bool = false;
		bool var_414_bool;
		func_3157(var_1_object);
		if(var_414_bool != 0) {
			bool var_420_bool;
			func_3169(var_1_object);
			if(var_420_bool != 0)
				var_413_bool = true;
		}
		if(var_413_bool != 0)
			var_0_object->AddReply(526068, 27354, 27353); //@t
		var_0_object->AddReply(526043, -1, 27328); //@t
		var_0_object->AddReply(528864, -1, 30286); //@t
		goto Label_1225;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x48b";
	}
Label_1225:
	bool var_435_bool;
	func_3004(var_435_bool);
	if(var_435_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2853(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1254;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1254:
		return 0;

	}
	
}


void func_2952(float var_54_float)
{
	float var_56_float;
	@GetGameTime(var_56_float);
	var_56_float = var_54_float;
}


void func_2698(void)
{
	bool var_262_bool;
	@CameraSwitchToNormal();
	bool var_263_bool;
	func_3004(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		@HasAnimationTrack(var_262_bool, "head");
		if(var_262_bool == 0) goto Label_2714;
		@UnlookAsync("head");
	}
Label_2714:
	
}


void func_2957(int var_120_int)
{
	float var_122_float;
	@GetGameTime(var_122_float);
	var_120_int = 1 + (var_122_float / 24);
}


void func_3218(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 347, 2, 525569);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_3270(var_62_bool, var_63_object, 344);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2966(bool var_269_bool, int var_270_int)
{
	int var_271_int;
	func_2957(var_271_int);
	var_269_bool = var_271_int == var_270_int;
}


// @pe
void func_407(object var_2_object, string var_303_string)
{
	bool var_304_bool;
	func_3004(var_304_bool);
	if(!var_304_bool) //@nz
		return 0;
	if(var_303_string == var_2_object)
		return 0;
	string var_307_string; bool var_308_bool;
	var_303_string = var_307_string;
	if(var_303_string == "")
		var_308_bool = false;
	else
		var_308_bool = true;
	func_2860(var_307_string, var_308_bool);
	var_2_object = var_303_string;
	
}


// @pe
void func_152(object var_2_object, string var_227_string)
{
	bool var_228_bool;
	func_3004(var_228_bool);
	if(!var_228_bool) //@nz
		return 0;
	if(var_227_string == var_2_object)
		return 0;
	string var_231_string; bool var_232_bool;
	var_227_string = var_231_string;
	if(var_227_string == "")
		var_232_bool = false;
	else
		var_232_bool = true;
	func_2860(var_231_string, var_232_bool);
	var_2_object = var_227_string;
	
}


void func_2715(bool var_65_bool, object var_66_object)
{
	int var_72_int; int var_73_int;
	@GetVariable("voice_common", var_72_int);
	if(var_72_int != 0) {
		bool var_76_bool; object var_77_object;
		var_66_object = var_77_object;
		func_2773(var_76_bool, var_77_object);
		if(!var_76_bool) { //@nz
			bool var_107_bool; object var_108_object;
			var_66_object = var_108_object;
			func_2810(var_107_bool, var_108_object);
			if(!var_107_bool) { //@nz
				var_65_bool = false;
				return 4;
			}
		}
		@irand(var_73_int, 2);
		if(var_73_int != 0)
			@SetVariable("voice_common", ((var_72_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_152_bool; object var_153_object;
		var_66_object = var_153_object;
		func_2810(var_152_bool, var_153_object);
		if(!var_152_bool) { //@nz
			bool var_155_bool; object var_156_object;
			var_66_object = var_156_object;
			func_2773(var_155_bool, var_156_object);
			if(!var_155_bool) { //@nz
				var_65_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2771;
	
Label_2771:
	var_65_bool = true;
	
}


// @pe
void func_1948(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_542_object, object var_543_object)
{
	var_0_object = var_543_object;
	var_1_object = var_542_object;
	var_3_string = false;
	if(1 != 0) {
		func_2011(var_543_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_1981;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7a0";
	}
Label_1981:
	bool var_567_bool;
	func_3004(var_567_bool);
	if(var_567_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2853(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2010;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2010:
		return 0;

	}
	
}


void func_2972(string var_69_string, int var_70_int)
{
	string var_72_string = "idle";
	if(var_70_int != 0)
		var_72_string += var_70_int;
	var_72_string = var_69_string;
}


// @pe
void func_2207(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_601_object, object var_602_object)
{
	var_0_object = var_602_object;
	var_1_object = var_601_object;
	var_3_string = false;
	if(1 != 0) {
		func_2265(var_602_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_2235;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8a3";
	}
Label_2235:
	bool var_623_bool;
	func_3004(var_623_bool);
	if(var_623_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2853(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2264;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2264:
		return 0;

	}
	
}


void func_3231(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 352, 2, 525618);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_3270(var_111_bool, var_112_object, 350);
}
EMIT "Stack[-1] = 0";


void func_2979(int var_63_int)
{
	int var_66_int; bool var_67_bool;
	var_66_int = 0;
	
	for(;;) {
		string var_69_string; int var_70_int;
		var_66_int = var_70_int;
		func_2972(var_69_string, var_70_int);
		@HasAnimation(var_67_bool, "all", var_69_string);
		if(!var_67_bool) //@nz
			break;
		var_66_int += 1;
	}
	var_66_int = var_63_int;
}


// @pe
void func_1701(object var_2_object, string var_478_string)
{
	bool var_479_bool;
	func_3004(var_479_bool);
	if(!var_479_bool) //@nz
		return 0;
	if(var_478_string == var_2_object)
		return 0;
	string var_482_string; bool var_483_bool;
	var_478_string = var_482_string;
	if(var_478_string == "")
		var_483_bool = false;
	else
		var_483_bool = true;
	func_2860(var_482_string, var_483_bool);
	var_2_object = var_478_string;
	
}


void func_3244(void)
{
	object var_46_object;
	@CreateDiaryEntry(var_46_object, 410, 1, 526111);
	bool var_50_bool; object var_51_object;
	var_46_object = var_51_object;
	func_3270(var_50_bool, var_51_object, 408);
}
EMIT "Stack[-1] = 0";


void func_2996(int var_208_int)
{
	var_208_int = 515533;
}


void func_2998(int var_207_int)
{
	var_207_int = 502858;
}


void func_3000(string var_209_string)
{
	var_209_string = "ui/NPC_Eva.png";
}


void func_3257(object var_59_object)
{
	object var_61_object;
	@GetDiaryRoot(var_61_object);
	if(!var_61_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_59_object = false;
	}
	var_61_object = var_59_object;
}
EMIT "Stack[-1] = 0";


void func_3002(string var_210_string)
{
	var_210_string = "ui/NPC_Eva_b.png";
}


void func_3004(bool var_103_bool)
{
	var_103_bool = true;
}


void func_3006(void)
{
	@SetVariable("k3q02", 3);
	object var_43_object;
	func_3298(var_43_object);
	object var_40_object;
	var_43_object = var_40_object;
	float var_54_float;
	func_2952(var_54_float);
	var_40_object->AddMark("k3q02EvaGotoKaterina", "pt_map_katerina", 0, 525574, var_54_float);
	func_3218();
}
EMIT "Stack[-1] = 0";


void func_3270(bool var_50_bool, object var_51_object, int var_52_int)
{
	object var_59_object;
	func_3257(var_59_object);
	object var_56_object;
	var_59_object = var_56_object;
	object var_57_object;
	var_56_object->Find(var_52_int, var_57_object);
	if(!var_57_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_52_int);
		var_50_bool = false;
	}
	var_57_object->AddChild(var_51_object);
	@SendWorldWndMessage(7);
	int var_58_int;
	var_51_object->GetCategory(var_58_int);
	@SetDiarySection(var_58_int);
	var_50_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2515(void)
{
	bool var_57_bool; int var_58_int; int var_59_int; bool var_60_bool;
	@WaitForAnimEnd();
	bool var_61_bool;
	func_2625(var_61_bool);
	if(!var_61_bool) //@nz
		return 12;
	int var_63_int;
	func_2979(var_63_int);
	int var_55_int;
	var_63_int = var_55_int;
	int var_56_int = 0;
	
	for(;;) {
		bool var_76_bool = false;
		if(var_56_int < 5) {
			bool var_79_bool;
			func_2625(var_79_bool);
			if(var_79_bool != 0)
				var_76_bool = true;
		}
		if(var_76_bool != 0) {
			if(!var_55_int) { //@nz
				@Sleep(3, var_57_bool);
				if(!var_57_bool) { //@nz
				} else {
			} else {
			@irand(var_58_int, var_55_int);
			@irand(var_59_int, 5);
			if(var_59_int != 0)
				var_58_int = 0;
			string var_90_string; int var_91_int;
			var_58_int = var_91_int;
			func_2972(var_90_string, var_91_int);
			@PlayAnimation("all", var_90_string);
			@WaitForAnimEnd(var_60_bool);
			var_92_bool = !var_60_bool; //@nz
			if(var_92_bool == 0) goto Label_2570;
			goto Label_2581;
			}
				Label_2570:
					bool var_83_bool;
					func_2584(var_83_bool);
					var_84_bool = !var_83_bool; //@nz
					if(var_84_bool == 0) goto Label_2576;
			}
		}
	Label_2581:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2576:
		@ResetAAS();
		var_56_int += 1;
	}
	
}


void func_2773(bool var_76_bool, object var_77_object)
{
	string var_83_string; bool var_85_bool; int var_86_int; string var_87_string;
	var_83_string = "c";
	int var_84_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_77_object->HasProperty((var_83_string + (var_84_int + 1)), var_85_bool);
			if(!var_85_bool) { //@nz
			} else {
				var_84_int += 1;
			}
		}
		if(!var_84_int) { //@nz
			var_76_bool = false;
			return 10;
		}
		var_86_int = 0;
		if(var_84_int > 1)
			@irand(var_86_int, var_84_int);
		var_77_object->GetProperty((var_83_string + (var_86_int + 1)), var_87_string);
		bool var_99_bool; string var_100_string;
		var_87_string = var_100_string;
		func_2866(var_99_bool, var_100_string);
		var_99_bool = var_76_bool;
		return 10;

	}
}


// @pe
void func_3029(void)
{
	@SetVariable("ook3Eva1", 1);
}


// @pe
void func_2265(object var_2_object, string var_608_string)
{
	bool var_609_bool;
	func_3004(var_609_bool);
	if(!var_609_bool) //@nz
		return 0;
	if(var_608_string == var_2_object)
		return 0;
	string var_612_string; bool var_613_bool;
	var_608_string = var_612_string;
	if(var_608_string == "")
		var_613_bool = false;
	else
		var_613_bool = true;
	func_2860(var_612_string, var_613_bool);
	var_2_object = var_608_string;
	
}


// @pe
void func_3035(void)
{
	func_3231();
}


// @pe
void func_2011(object var_2_object, string var_549_string)
{
	bool var_550_bool;
	func_3004(var_550_bool);
	if(!var_550_bool) //@nz
		return 0;
	if(var_549_string == var_2_object)
		return 0;
	string var_553_string; bool var_554_bool;
	var_549_string = var_553_string;
	if(var_549_string == "")
		var_554_bool = false;
	else
		var_554_bool = true;
	func_2860(var_553_string, var_554_bool);
	var_2_object = var_549_string;
	
}


// @pe
void func_3040(void)
{
	@SetVariable("ook6Eva1", 1);
}


void func_3298(object var_43_object)
{
	object var_46_object; object var_47_object;
	@GetMainOutdoorScene(var_46_object);
	if(var_46_object == null) {
		@Trace("Can't find main outdoor scene");
		var_47_object = null;
		var_47_object = var_43_object;
	}
	var_46_object->GetMap(var_47_object);
	var_47_object = var_43_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3046(void)
{
	@SetVariable("ook6Eva2", 1);
}


// @pe
void func_1255(object var_2_object, string var_388_string)
{
	bool var_389_bool;
	func_3004(var_389_bool);
	if(!var_389_bool) //@nz
		return 0;
	if(var_388_string == var_2_object)
		return 0;
	string var_392_string; bool var_393_bool;
	var_388_string = var_392_string;
	if(var_388_string == "")
		var_393_bool = false;
	else
		var_393_bool = true;
	func_2860(var_392_string, var_393_bool);
	var_2_object = var_388_string;
	
}


// @pe
void func_3052(void)
{
	bool var_78_bool;
	func_2940(var_78_bool, "quest_k6_01", "unlock_eva");
}


void func_239(object var_0_object, int var_272_int, object var_273_object)
{
	var_0_object = var_273_object;
	bool var_283_bool; object var_284_object;
	object var_285_object;
	func_2888(var_285_object);
	var_285_object = var_284_object;
	func_2715(var_283_bool, var_284_object);
	bool var_286_bool; object var_287_object;
	var_273_object = var_287_object;
	func_2630(var_286_bool, var_287_object, 70.0);
	if(!var_286_bool) { //@nz
		var_272_int = -2;
		return 8;
	}
	object var_279_object;
	@CreateDialog(var_279_object);
	int var_290_int;
	func_2998(var_290_int);
	var_279_object->SetNPCName(var_290_int);
	int var_291_int;
	func_2996(var_291_int);
	var_279_object->SetNPCDescription(var_291_int);
	string var_292_string;
	func_3000(var_292_string);
	var_279_object->SetPhoto(var_292_string);
	string var_293_string;
	func_3002(var_293_string);
	var_279_object->SetPhoto2(var_293_string);
	int var_294_int;
	func_3315(var_294_int);
	var_279_object->SetPlayerName(var_294_int);
	bool var_280_bool;
	@IsOverrideActive(var_280_bool);
	if(var_280_bool != 0) {
		var_272_int = -2;
		return 8;
	}
	@DoDialog(var_279_object);
	object var_296_object; object var_297_object;
	var_273_object = var_296_object;
	var_279_object = var_297_object;
	TaskCall(4);
	func_320(var_298_object, var_299_object, var_300_string, var_301_bool, var_296_object, var_297_object);
	TaskReturn();
	bool var_282_bool;
	var_279_object->IsDialogEnd(var_282_bool);
	
	for(;;) {
		var_353_bool = !var_282_bool; //@nz
		if(var_353_bool == 0) goto Label_309;
		@sync();
		var_279_object->IsDialogEnd(var_282_bool);
	}
	
Label_309:
	object var_354_object;
	var_273_object = var_354_object;
	func_2698();
	@StopDialog(var_279_object);
	var_279_object->GetReturnValue(-1);
	int var_281_int = var_272_int;
}
EMIT "Stack[-4] = 0";


void func_3315(int var_211_int)
{
	int var_213_int;
	@GetVariable("branch", var_213_int);
	if(var_213_int == 0) {
		var_211_int = 1;
		return 2;
	EMIT "GOTO 0xd02";
	}
	if(var_213_int == 1) {
		var_211_int = 2;
		return 2;
	}
	var_211_int = 3;
}


// @pe
void func_3059(void)
{
	func_3244();
}


// @pe
void func_3064(void)
{
	@SetVariable("ook11Eva1", 1);
}


void func_2810(bool var_107_bool, object var_108_object)
{
	bool var_116_bool; int var_117_int; string var_118_string;
	int var_120_int;
	func_2957(var_120_int);
	string var_114_string = ("d" + var_120_int) + "m";
	int var_115_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_108_object->HasProperty((var_114_string + (var_115_int + 1)), var_116_bool);
			if(!var_116_bool) { //@nz
			} else {
				var_115_int += 1;
			}
		}
		if(!var_115_int) { //@nz
			var_107_bool = false;
			return 10;
		}
		var_117_int = 0;
		if(var_115_int > 1)
			@irand(var_117_int, var_115_int);
		var_108_object->GetProperty((var_114_string + (var_117_int + 1)), var_118_string);
		bool var_139_bool; string var_140_string;
		var_118_string = var_140_string;
		func_2866(var_139_bool, var_140_string);
		var_139_bool = var_107_bool;
		return 10;

	}
}


// @pe
void func_3070(void)
{
	func_3205();
}


