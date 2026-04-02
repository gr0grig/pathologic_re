// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_3386();
			if(var_27_cvector == 35743) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_3559();
			}
			if(var_27_cvector == 38363) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_3559();
			}
			if(var_26_bool == 35739) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534152); //@t
				var_0_object->ClearReplies(); //@t
				bool var_85_bool;
				func_3694(var_1_object);
				if(var_85_bool != 0)
					var_0_object->AddReply(534153, 38340, 35740); //@t
				var_0_object->AddReply(534154, -1, 35741); //@t
				var_0_object->AddReply(536532, -1, 38339); //@t
				return 0;
			}
			if(var_26_bool == 38340) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(536533); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536534, 38342, 38341); //@t
				var_0_object->AddReply(536539, 38347, 38346); //@t
				return 0;
			}
			if(var_26_bool == 38347) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(536540); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536541, 38351, 38348); //@t
				var_0_object->AddReply(536542, -1, 38349); //@t
				return 0;
			}
			if(var_26_bool == 38342) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(536535); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536536, 38344, 38343); //@t
				var_0_object->AddReply(536543, 38351, 38350); //@t
				return 0;
			}
			if(var_26_bool == 38344) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(536537); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536538, 38351, 38345); //@t
				return 0;
			}
			if(var_26_bool == 38351) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(536544); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536545, 38359, 38352); //@t
				var_0_object->AddReply(536546, 38358, 38355); //@t
				return 0;
			}
			if(var_26_bool == 38358) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(536548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536550, 35742, 38360); //@t
				return 0;
			}
			if(var_26_bool == 38359) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(536549); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536551, 35742, 38361); //@t
				return 0;
			}
			if(var_26_bool == 35742) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534155); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534156, -1, 35743); //@t
				var_0_object->AddReply(536552, -1, 38363); //@t
				return 0;
			}
			var_3_string = true;
			bool var_173_bool;
			func_3525(var_173_bool);
			if(var_173_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_3386();
			if(var_26_bool == 37192) {
				bool var_32_bool = false;
				bool var_33_bool;
				func_3706(var_1_object);
				if(var_33_bool != 0) {
					bool var_41_bool;
					func_3648(var_41_bool, var_1_object);
					if(!var_41_bool) //@nz
						var_32_bool = true;
				}
				if(var_32_bool != 0) {
					object var_53_object; object var_54_object;
					var_53_object = var_1_object;
					var_54_object = var_0_object;
					func_3574();
					func_615(var_27_cvector, "Neutral");
					var_0_object->SetMessage(535510); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(535511, 37194, 37193); //@t
					return 0;
				}
				bool var_73_bool;
				func_3648(var_73_bool, var_1_object);
				if(var_73_bool != 0) {
					func_615(var_27_cvector, "Neutral");
					var_0_object->SetMessage(535528); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(535529, -1, 37212); //@t
					var_0_object->AddReply(535530, -1, 37213); //@t
					return 0;
				}
				func_615(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535531); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535539, -1, 37222); //@t
				return 0;
			}
			if(var_26_bool == 37194) {
				func_615(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535513, 37196, 37195); //@t
				var_0_object->AddReply(535525, 37208, 37207); //@t
				return 0;
			}
			if(var_26_bool == 37208) {
				func_615(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535526); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535527, 37196, 37209); //@t
				var_0_object->AddReply(539998, 41968, 41967); //@t
				return 0;
			}
			if(var_26_bool == 41968) {
				func_615(var_27_cvector, "Neutral");
				var_0_object->SetMessage(539999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540000, 37196, 41969); //@t
				var_0_object->AddReply(540001, 37196, 41970); //@t
				return 0;
			}
			if(var_26_bool == 37196) {
				func_615(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535515, 37198, 37197); //@t
				var_0_object->AddReply(535524, -1, 37206); //@t
				return 0;
			}
			if(var_26_bool == 37198) {
				func_615(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535517, 37200, 37199); //@t
				var_0_object->AddReply(535523, -1, 37205); //@t
				return 0;
			}
			if(var_26_bool == 37200) {
				func_615(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535519, 37202, 37201); //@t
				return 0;
			}
			if(var_26_bool == 37202) {
				func_615(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535520); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535521, -1, 37203); //@t
				var_0_object->AddReply(535522, -1, 37204); //@t
				return 0;
			}
			var_3_string = true;
			bool var_155_bool;
			func_3525(var_155_bool);
			if(var_155_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x27e";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_3386();
			if(var_27_cvector == 15110) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_3533();
			}
			if(var_27_cvector == 15137) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_3586();
			}
			if(var_27_cvector == 15149) {
				object var_44_object = var_1_object;
				func_3592(var_0_object);
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_3527();
				object var_72_object = var_1_object;
				func_3631(var_0_object);
			}
			if(var_27_cvector == 15150) {
				object var_85_object = var_1_object;
				func_3592(var_0_object);
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_3527();
				object var_89_object = var_1_object;
				func_3631(var_0_object);
			}
			if(var_27_cvector == 15155) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_3642();
			}
			if(var_27_cvector == 35071) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_3539();
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_3553();
			}
			if(var_26_bool == 15109) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_3580();
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513882); //@t
				var_0_object->ClearReplies(); //@t
				bool var_155_bool = false;
				bool var_156_bool;
				func_3658(var_1_object);
				if(var_156_bool != 0) {
					bool var_164_bool;
					func_3670(var_1_object);
					if(var_164_bool != 0)
						var_155_bool = true;
				}
				if(var_155_bool != 0)
					var_0_object->AddReply(513883, 15111, 15110); //@t
				bool var_173_bool = false;
				bool var_174_bool;
				func_3718(var_1_object);
				if(var_174_bool != 0) {
					bool var_180_bool;
					func_3730(var_1_object);
					if(var_180_bool != 0)
						var_173_bool = true;
				}
				if(var_173_bool != 0)
					var_0_object->AddReply(513906, 15138, 15137); //@t
				bool var_189_bool;
				func_3814(var_1_object);
				if(var_189_bool != 0)
					var_0_object->AddReply(513924, 15156, 15155); //@t
				bool var_198_bool;
				func_3682(var_1_object);
				if(var_198_bool != 0)
					var_0_object->AddReply(533537, 35070, 35069); //@t
				var_0_object->AddReply(513947, -1, 15182); //@t
				return 0;
			}
			if(var_26_bool == 35070) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(533538); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536553, 38366, 38365); //@t
				var_0_object->AddReply(536557, -1, 38369); //@t
				return 0;
			}
			if(var_26_bool == 38366) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(536554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536555, 38368, 38367); //@t
				var_0_object->AddReply(536558, 38368, 38370); //@t
				return 0;
			}
			if(var_26_bool == 38368) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(536556); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536559, 38372, 38371); //@t
				return 0;
			}
			if(var_26_bool == 38372) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(536560); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533539, -1, 35071); //@t
				return 0;
			}
			if(var_26_bool == 15156) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513925); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513926, 15158, 15157); //@t
				var_0_object->AddReply(513946, 15158, 15180); //@t
				return 0;
			}
			if(var_26_bool == 15158) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513928, 15160, 15159); //@t
				var_0_object->AddReply(513945, 15160, 15178); //@t
				return 0;
			}
			if(var_26_bool == 15160) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513929); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513930, 15162, 15161); //@t
				var_0_object->AddReply(513944, 15162, 15176); //@t
				return 0;
			}
			if(var_26_bool == 15162) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513932, 15164, 15163); //@t
				var_0_object->AddReply(513941, 15173, 15172); //@t
				return 0;
			}
			if(var_26_bool == 15173) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513942); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513943, 15166, 15174); //@t
				return 0;
			}
			if(var_26_bool == 15164) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513933); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513934, 15166, 15165); //@t
				return 0;
			}
			if(var_26_bool == 15166) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513936, 15168, 15167); //@t
				return 0;
			}
			if(var_26_bool == 15168) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513938, 15170, 15169); //@t
				return 0;
			}
			if(var_26_bool == 15170) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513940, -1, 15171); //@t
				return 0;
			}
			if(var_26_bool == 15138) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513907); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513908, 15140, 15139); //@t
				return 0;
			}
			if(var_26_bool == 15140) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513909); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513910, 15142, 15141); //@t
				return 0;
			}
			if(var_26_bool == 15142) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513911); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513912, 15144, 15143); //@t
				var_0_object->AddReply(513920, 15152, 15151); //@t
				return 0;
			}
			if(var_26_bool == 15152) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513922, 15154, 15153); //@t
				return 0;
			}
			if(var_26_bool == 15154) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513923); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514067, -1, 15304); //@t
				return 0;
			}
			if(var_26_bool == 15144) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513914, 15146, 15145); //@t
				var_0_object->AddReply(513919, -1, 15150); //@t
				return 0;
			}
			if(var_26_bool == 15146) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513916, 15148, 15147); //@t
				return 0;
			}
			if(var_26_bool == 15148) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513917); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513918, -1, 15149); //@t
				return 0;
			}
			if(var_26_bool == 15111) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513885, 15113, 15112); //@t
				var_0_object->AddReply(513905, 15113, 15135); //@t
				return 0;
			}
			if(var_26_bool == 15113) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513886); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513887, 15115, 15114); //@t
				var_0_object->AddReply(513899, 15128, 15127); //@t
				return 0;
			}
			if(var_26_bool == 15128) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513900); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513901, 15130, 15129); //@t
				var_0_object->AddReply(513904, 15115, 15133); //@t
				return 0;
			}
			if(var_26_bool == 15130) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513903, 15121, 15131); //@t
				return 0;
			}
			if(var_26_bool == 15115) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513888); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513889, 15117, 15116); //@t
				var_0_object->AddReply(513898, 15117, 15125); //@t
				return 0;
			}
			if(var_26_bool == 15117) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513891, 15119, 15118); //@t
				var_0_object->AddReply(513897, 15121, 15124); //@t
				return 0;
			}
			if(var_26_bool == 15119) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513892); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513893, 15121, 15120); //@t
				return 0;
			}
			if(var_26_bool == 15121) {
				func_1087(var_27_cvector, "Neutral");
				var_0_object->SetMessage(513894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513895, -1, 15122); //@t
				var_0_object->AddReply(513896, -1, 15123); //@t
				return 0;
			}
			var_3_string = true;
			bool var_455_bool;
			func_3525(var_455_bool);
			if(var_455_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x456";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_3386();
			if(var_27_cvector == 15501) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_3613();
			}
			if(var_27_cvector == 15528) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_3619();
			}
			if(var_27_cvector == 15539) {
				object var_44_object; object var_45_object;
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_3625();
			}
			if(var_26_bool == 15500) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514280); //@t
				var_0_object->ClearReplies(); //@t
				bool var_63_bool = false;
				bool var_64_bool;
				func_3754(var_1_object);
				if(var_64_bool != 0) {
					bool var_72_bool;
					func_3766(var_1_object);
					if(var_72_bool != 0)
						var_63_bool = true;
				}
				if(var_63_bool != 0)
					var_0_object->AddReply(514281, 15502, 15501); //@t
				bool var_81_bool = false;
				bool var_82_bool;
				func_3778(var_1_object);
				if(var_82_bool != 0) {
					bool var_88_bool;
					func_3790(var_1_object);
					if(var_88_bool != 0)
						var_81_bool = true;
				}
				if(var_81_bool != 0)
					var_0_object->AddReply(514306, 15529, 15528); //@t
				bool var_97_bool = false;
				bool var_98_bool;
				func_3742(var_1_object);
				if(var_98_bool != 0) {
					bool var_104_bool;
					func_3802(var_1_object);
					if(var_104_bool != 0)
						var_97_bool = true;
				}
				if(var_97_bool != 0)
					var_0_object->AddReply(514317, 15540, 15539); //@t
				var_0_object->AddReply(514324, -1, 15546); //@t
				return 0;
			}
			if(var_26_bool == 15540) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514319, 15542, 15541); //@t
				var_0_object->AddReply(539610, 41557, 41556); //@t
				return 0;
			}
			if(var_26_bool == 41557) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(539611); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539729, 15542, 41692); //@t
				return 0;
			}
			if(var_26_bool == 15542) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514320); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514321, 15544, 15543); //@t
				return 0;
			}
			if(var_26_bool == 15544) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514322); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514323, 41695, 15545); //@t
				var_0_object->AddReply(539730, -1, 41694); //@t
				return 0;
			}
			if(var_26_bool == 41695) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(539731); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539732, -1, 41696); //@t
				var_0_object->AddReply(539733, -1, 41697); //@t
				return 0;
			}
			if(var_26_bool == 15529) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514307); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514308, 15531, 15530); //@t
				return 0;
			}
			if(var_26_bool == 15531) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514310, 15533, 15532); //@t
				return 0;
			}
			if(var_26_bool == 15533) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514312, 15535, 15534); //@t
				var_0_object->AddReply(539728, -1, 41691); //@t
				return 0;
			}
			if(var_26_bool == 15535) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514313); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514314, 15537, 15536); //@t
				return 0;
			}
			if(var_26_bool == 15537) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514316, -1, 15538); //@t
				var_0_object->AddReply(539727, -1, 41690); //@t
				return 0;
			}
			if(var_26_bool == 15502) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514282); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514283, 15504, 15503); //@t
				var_0_object->AddReply(539903, 41864, 41863); //@t
				return 0;
			}
			if(var_26_bool == 41864) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(539904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539905, 15504, 41865); //@t
				return 0;
			}
			if(var_26_bool == 15504) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514285, 15506, 15505); //@t
				var_0_object->AddReply(514290, 15511, 15510); //@t
				return 0;
			}
			if(var_26_bool == 15511) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514292, 15513, 15512); //@t
				var_0_object->AddReply(514299, 15520, 15519); //@t
				return 0;
			}
			if(var_26_bool == 15520) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514301, 15513, 15521); //@t
				var_0_object->AddReply(514302, 15524, 15523); //@t
				return 0;
			}
			if(var_26_bool == 15524) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514304, 15513, 15525); //@t
				var_0_object->AddReply(514305, -1, 15527); //@t
				return 0;
			}
			if(var_26_bool == 15513) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514294, 15515, 15514); //@t
				return 0;
			}
			if(var_26_bool == 15515) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514296, 15517, 15516); //@t
				return 0;
			}
			if(var_26_bool == 15517) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514298, -1, 15518); //@t
				return 0;
			}
			if(var_26_bool == 15506) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514287, 15508, 15507); //@t
				return 0;
			}
			if(var_26_bool == 15508) {
				func_2065(var_27_cvector, "Neutral");
				var_0_object->SetMessage(514288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514289, -1, 15509); //@t
				var_0_object->AddReply(539734, -1, 41698); //@t
				return 0;
			}
			var_3_string = true;
			bool var_296_bool;
			func_3525(var_296_bool);
			if(var_296_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x828";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_3386();
			if(var_26_int == 42551) {
				func_2777(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540543, -1, 42552); //@t
				var_0_object->AddReply(540796, -1, 42845); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_3525(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf0";
	
	}

}


maintask task_11
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_2845(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_2916();
			bool var_30_bool = false;
			bool var_31_bool;
			func_3130(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_2885(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_2865(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_3393(var_72_object);
					var_72_object = var_71_object;
					func_3278(var_70_bool, var_71_object);
				}
			} else {
				func_2880(var_26_int);
				func_2907();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_3098();
		func_2916();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_2916();
		func_3358("Neutral");
		func_2907();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_2907();
		else
			func_3358("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_3098();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_3121(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_3921(var_44_object);
			func_3358("Neutral");
			func_2916();
			func_2907();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_30_bool;
	func_3130(var_30_bool);
	if(!var_30_bool) goto Label_0; //@nz
}


// @pe
void func_3586(void)
{
	@SetVariable("ood9Block1", 1);
}


void func_3592(object var_44_object)
{
	@Trace("Rifle is given");
	object var_47_object;
	@CreateInvItem(var_47_object);
	var_47_object->SetItemName("Rifle");
	var_47_object->SetProperty("durability", 100);
	object var_52_object; object var_53_object;
	var_44_object = var_52_object;
	var_47_object = var_53_object;
	func_3426(var_52_object, var_53_object, 1);
}
EMIT "Stack[-1] = 0";


void func_3850(void)
{
	object var_104_object;
	@CreateDiaryEntry(var_104_object, 657, 2, 533575);
	bool var_108_bool; object var_109_object;
	var_104_object = var_109_object;
	func_3876(var_108_bool, var_109_object, 655);
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_316_int, object var_317_object)
{
	var_0_object = var_317_object;
	bool var_327_bool; object var_328_object;
	object var_329_object;
	func_3393(var_329_object);
	var_329_object = var_328_object;
	func_3220(var_327_bool, var_328_object);
	bool var_330_bool; object var_331_object;
	var_317_object = var_331_object;
	func_3135(var_330_bool, var_331_object, 70.0);
	if(!var_330_bool) { //@nz
		var_316_int = -2;
		return 8;
	}
	object var_323_object;
	@CreateDialog(var_323_object);
	int var_334_int;
	func_3519(var_334_int);
	var_323_object->SetNPCName(var_334_int);
	int var_335_int;
	func_3517(var_335_int);
	var_323_object->SetNPCDescription(var_335_int);
	string var_336_string;
	func_3521(var_336_string);
	var_323_object->SetPhoto(var_336_string);
	string var_337_string;
	func_3523(var_337_string);
	var_323_object->SetPhoto2(var_337_string);
	int var_338_int;
	func_3904(var_338_int);
	var_323_object->SetPlayerName(var_338_int);
	bool var_324_bool;
	@IsOverrideActive(var_324_bool);
	if(var_324_bool != 0) {
		var_316_int = -2;
		return 8;
	}
	@DoDialog(var_323_object);
	object var_340_object; object var_341_object;
	var_317_object = var_340_object;
	var_323_object = var_341_object;
	TaskCall(2);
	func_94(var_342_object, var_343_object, var_344_string, var_345_bool, var_340_object, var_341_object);
	TaskReturn();
	bool var_326_bool;
	var_323_object->IsDialogEnd(var_326_bool);
	
	for(;;) {
		var_379_bool = !var_326_bool; //@nz
		if(var_379_bool == 0) goto Label_83;
		@sync();
		var_323_object->IsDialogEnd(var_326_bool);
	}
	
Label_83:
	object var_380_object;
	var_317_object = var_380_object;
	func_3203();
	@StopDialog(var_323_object);
	var_323_object->GetReturnValue(-1);
	int var_325_int = var_316_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2065(object var_2_object, string var_414_string)
{
	bool var_415_bool;
	func_3525(var_415_bool);
	if(!var_415_bool) //@nz
		return 0;
	if(var_414_string == var_2_object)
		return 0;
	string var_418_string; bool var_419_bool;
	var_414_string = var_418_string;
	if(var_414_string == "")
		var_419_bool = false;
	else
		var_419_bool = true;
	func_3365(var_418_string, var_419_bool);
	var_2_object = var_414_string;
	
}


void func_3863(object var_117_object)
{
	object var_119_object;
	@GetDiaryRoot(var_119_object);
	if(!var_119_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_117_object = false;
	}
	var_119_object = var_117_object;
}
EMIT "Stack[-1] = 0";


void func_3096(bool var_78_bool)
{
	var_78_bool = true;
}


void func_3098(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_3613(void)
{
	@SetVariable("ood11Block1", 1);
}


void func_2845(object var_0_object)
{
	bool var_26_bool;
	func_3130(var_26_bool);
	if(!var_26_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2973();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_3027();
	}
}
EMIT "Return(); Pop(0)";


void func_3103(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_3358(string var_33_string)
{
	float var_36_float; float var_37_float;
	@lshGetAnimTimes(var_33_string, var_36_float, var_37_float);
	@lshPlayAnimation(var_36_float, var_37_float, false);
}


// @pe
void func_3619(void)
{
	@SetVariable("ood11Block2", 1);
}


void func_3876(bool var_108_bool, object var_109_object, int var_110_int)
{
	object var_117_object;
	func_3863(var_117_object);
	object var_114_object;
	var_117_object = var_114_object;
	object var_115_object;
	var_114_object->Find(var_110_int, var_115_object);
	if(!var_115_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_110_int);
		var_108_bool = false;
	}
	var_115_object->AddChild(var_109_object);
	@SendWorldWndMessage(7);
	int var_116_int;
	var_109_object->GetCategory(var_116_int);
	@SetDiarySection(var_116_int);
	var_108_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_3365(string var_229_string, bool var_230_bool)
{
	float var_235_float; float var_236_float;
	@lshGetAnimTimes(var_229_string, var_235_float, var_236_float);
	@lshPlayAnimation(var_235_float, var_236_float, var_230_bool);
}


void func_3111(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


// @pe
void func_3625(void)
{
	@SetVariable("ood11Block3", 1);
}


void func_3371(bool var_98_bool, string var_99_string)
{
	bool var_101_bool;
	bool var_102_bool;
	func_3525(var_102_bool);
	if(var_102_bool != 0) {
		@lshHasSpeech(var_101_bool, var_99_string);
		if(var_101_bool != 0) {
			@lshPlaySpeech(var_99_string);
			var_98_bool = true;
		}
	}
	var_98_bool = false;
}


// @pe
void func_3631(object var_72_object)
{
	@Trace("rifle ammo10 is given");
	object var_75_object;
	var_72_object = var_75_object;
	func_3445(var_75_object, "rifle_ammo", 10);
}


void func_3121(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_3111(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_2865(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_3121(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


void func_3130(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


// @pe
void func_3642(void)
{
	@SetVariable("ood9Block2", 1);
}


void func_3386(void)
{
	bool var_29_bool;
	func_3525(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1087(object var_2_object, string var_225_string)
{
	bool var_226_bool;
	func_3525(var_226_bool);
	if(!var_226_bool) //@nz
		return 0;
	if(var_225_string == var_2_object)
		return 0;
	string var_229_string; bool var_230_bool;
	var_225_string = var_229_string;
	if(var_225_string == "")
		var_230_bool = false;
	else
		var_230_bool = true;
	func_3365(var_229_string, var_230_bool);
	var_2_object = var_225_string;
	
}


// @pe
void func_3648(bool var_524_bool, object var_525_object)
{
	object var_527_object;
	var_525_object = var_527_object;
	func_3826(var_527_object);
	bool var_526_bool;
	if(var_526_bool != 0) {
		var_524_bool = true;
		return 0;
	}
	var_524_bool = false;
}


void func_3135(bool var_154_bool, object var_155_object, float var_156_float)
{
	cvector var_167_cvector; bool var_174_bool;
	var_155_object->GetPosition(var_167_cvector);
	float var_166_float;
	var_155_object->GetEyesHeight(var_166_float);
	var_175_float = GetByIndex(var_167_cvector, 1);
	SetByIndex(var_167_cvector, 1) = (var_175_float + var_166_float);
	cvector var_168_cvector;
	@GetPosition(var_168_cvector);
	@GetEyesHeight(var_166_float);
	var_176_float = GetByIndex(var_168_cvector, 1);
	SetByIndex(var_168_cvector, 1) = (var_176_float + var_166_float);
	cvector var_169_cvector = var_167_cvector - var_168_cvector;
	var_177_float = GetByIndex(var_169_cvector, 1);
	SetByIndex(var_169_cvector, 1) = (float)0;
	var_179_float = sqrt(var_169_cvector | var_169_cvector);
	var_169_cvector /= var_179_float;
	cvector var_170_cvector = -var_169_cvector;
	cvector var_181_cvector;
	func_3399(var_181_cvector, (var_170_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_171_cvector = ((var_169_cvector * var_156_float) + (var_181_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_173_bool;
	@IsOverrideActive(var_173_bool);
	if(var_173_bool != 0)
		var_154_bool = false;
	@StopWorld();
	@CameraTransit((var_168_cvector + var_171_cvector), var_170_cvector);
	var_194_float = GetByIndex(var_171_cvector, 0);
	var_195_float = GetByIndex(var_171_cvector, 2);
	@Rotate(var_194_float, var_195_float);
	bool var_196_bool;
	func_3525(var_196_bool);
	if(var_196_bool != 0) {
	} else {
		@HasAnimationTrack(var_174_bool, "head");
		if(var_174_bool == 0) goto Label_3197;
		@LookAsyncCamera("head");
	}
Label_3197:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_154_bool = true;
	
}


void func_2880(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_3904(int var_205_int)
{
	int var_207_int;
	@GetVariable("branch", var_207_int);
	if(var_207_int == 0) {
		var_205_int = 1;
		return 2;
	EMIT "GOTO 0xf4f";
	}
	if(var_207_int == 1) {
		var_205_int = 2;
		return 2;
	}
	var_205_int = 3;
}


void func_3393(object var_66_object)
{
	object var_68_object;
	@self(var_68_object);
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


void func_2885(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_3103(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_3399(cvector var_181_cvector, cvector var_182_cvector)
{
	float var_185_float = sqrt(var_182_cvector | var_182_cvector);
	if(var_185_float < 0.000001)
		var_181_cvector = [0.0, 0.0, 0.0];
	var_181_cvector = var_182_cvector / var_185_float;
}


// @pe
void func_3658(bool var_239_bool)
{
	int var_241_int;
	func_3409(var_241_int, "d8q01");
	if(var_241_int == 1000)
		var_239_bool = true;
	var_239_bool = false;
}


void func_2638(object var_0_object, int var_577_int, object var_578_object)
{
	var_0_object = var_578_object;
	bool var_588_bool; object var_589_object;
	object var_590_object;
	func_3393(var_590_object);
	var_590_object = var_589_object;
	func_3220(var_588_bool, var_589_object);
	bool var_591_bool; object var_592_object;
	var_578_object = var_592_object;
	func_3135(var_591_bool, var_592_object, 70.0);
	if(!var_591_bool) { //@nz
		var_577_int = -2;
		return 8;
	}
	object var_584_object;
	@CreateDialog(var_584_object);
	int var_595_int;
	func_3519(var_595_int);
	var_584_object->SetNPCName(var_595_int);
	int var_596_int;
	func_3517(var_596_int);
	var_584_object->SetNPCDescription(var_596_int);
	string var_597_string;
	func_3521(var_597_string);
	var_584_object->SetPhoto(var_597_string);
	string var_598_string;
	func_3523(var_598_string);
	var_584_object->SetPhoto2(var_598_string);
	int var_599_int;
	func_3904(var_599_int);
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
	TaskCall(10);
	func_2719(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object);
	TaskReturn();
	bool var_587_bool;
	var_584_object->IsDialogEnd(var_587_bool);
	
	for(;;) {
		var_631_bool = !var_587_bool; //@nz
		if(var_631_bool == 0) goto Label_2708;
		@sync();
		var_584_object->IsDialogEnd(var_587_bool);
	}
	
Label_2708:
	object var_632_object;
	var_578_object = var_632_object;
	func_3203();
	@StopDialog(var_584_object);
	var_584_object->GetReturnValue(-1);
	int var_586_int = var_577_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3921(object var_44_object)
{
	bool var_45_bool;
	func_3487(var_45_bool, 9);
	if(var_45_bool != 0) {
		int var_53_int; object var_54_object;
		var_44_object = var_54_object;
		TaskCall(5);
		func_890(var_55_object, var_53_int, var_54_object);
		TaskReturn();
		return 0;
	}
	bool var_314_bool;
	func_3487(var_314_bool, 10);
	if(var_314_bool != 0) {
		int var_316_int; object var_317_object;
		var_44_object = var_317_object;
		TaskCall(1);
		func_13(var_318_object, var_316_int, var_317_object);
		TaskReturn();
		return 0;
	}
	bool var_381_bool;
	func_3487(var_381_bool, 11);
	if(var_381_bool != 0) {
		int var_383_int; object var_384_object;
		var_44_object = var_384_object;
		TaskCall(7);
		func_1874(var_385_object, var_383_int, var_384_object);
		TaskReturn();
		return 0;
	}
	bool var_484_bool;
	func_3487(var_484_bool, 12);
	if(var_484_bool != 0) {
		int var_486_int; object var_487_object;
		var_44_object = var_487_object;
		TaskCall(3);
		func_421(var_488_object, var_486_int, var_487_object);
		TaskReturn();
		return 0;
	}
	int var_577_int; object var_578_object;
	var_44_object = var_578_object;
	TaskCall(9);
	func_2638(var_579_object, var_577_int, var_578_object);
	TaskReturn();
}


void func_3409(int var_241_int, string var_242_string)
{
	int var_244_int;
	@GetVariable(var_242_string, var_244_int);
	var_244_int = var_241_int;
}


void func_1874(object var_0_object, int var_383_int, object var_384_object)
{
	var_0_object = var_384_object;
	bool var_394_bool; object var_395_object;
	object var_396_object;
	func_3393(var_396_object);
	var_396_object = var_395_object;
	func_3220(var_394_bool, var_395_object);
	bool var_397_bool; object var_398_object;
	var_384_object = var_398_object;
	func_3135(var_397_bool, var_398_object, 70.0);
	if(!var_397_bool) { //@nz
		var_383_int = -2;
		return 8;
	}
	object var_390_object;
	@CreateDialog(var_390_object);
	int var_401_int;
	func_3519(var_401_int);
	var_390_object->SetNPCName(var_401_int);
	int var_402_int;
	func_3517(var_402_int);
	var_390_object->SetNPCDescription(var_402_int);
	string var_403_string;
	func_3521(var_403_string);
	var_390_object->SetPhoto(var_403_string);
	string var_404_string;
	func_3523(var_404_string);
	var_390_object->SetPhoto2(var_404_string);
	int var_405_int;
	func_3904(var_405_int);
	var_390_object->SetPlayerName(var_405_int);
	bool var_391_bool;
	@IsOverrideActive(var_391_bool);
	if(var_391_bool != 0) {
		var_383_int = -2;
		return 8;
	}
	@DoDialog(var_390_object);
	object var_407_object; object var_408_object;
	var_384_object = var_407_object;
	var_390_object = var_408_object;
	TaskCall(8);
	func_1955(var_409_object, var_410_object, var_411_string, var_412_bool, var_407_object, var_408_object);
	TaskReturn();
	bool var_393_bool;
	var_390_object->IsDialogEnd(var_393_bool);
	
	for(;;) {
		var_482_bool = !var_393_bool; //@nz
		if(var_482_bool == 0) goto Label_1944;
		@sync();
		var_390_object->IsDialogEnd(var_393_bool);
	}
	
Label_1944:
	object var_483_object;
	var_384_object = var_483_object;
	func_3203();
	@StopDialog(var_390_object);
	var_390_object->GetReturnValue(-1);
	int var_392_int = var_383_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3670(bool var_247_bool)
{
	int var_249_int;
	func_3409(var_249_int, "ood9Block3");
	if(var_249_int == 0) {
		var_247_bool = true;
		return 0;
	}
	var_247_bool = false;
}


void func_3414(int var_63_int, int var_64_int)
{
	object var_66_object;
	@CreateIntVector(var_66_object);
	var_66_object->add(var_63_int);
	var_66_object->add(var_64_int);
	@SendWorldWndMessage(3, var_66_object);
}
EMIT "Stack[-1] = 0";


void func_2907(void)
{
	float var_40_float;
	@rand(var_40_float, 8, 16);
	@SetTimer(10, var_40_float);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_340_object, object var_341_object)
{
	var_0_object = var_341_object;
	var_3_string = false;
	if(1 != 0) {
		func_162(var_341_object, "Neutral");
		var_0_object->SetMessage(534152); //@t
		var_0_object->ClearReplies(); //@t
		bool var_356_bool;
		func_3694(var_340_object);
		if(var_356_bool != 0)
			var_0_object->AddReply(534153, 38340, 35740); //@t
		var_0_object->AddReply(534154, -1, 35741); //@t
		var_0_object->AddReply(536532, -1, 38339); //@t
		goto Label_132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_132:
	bool var_371_bool;
	func_3525(var_371_bool);
	if(var_371_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3358(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_161;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_161:
		return 0;

	}
	
}


// @pe
void func_3682(bool var_281_bool)
{
	int var_283_int;
	func_3409(var_283_int, "d9q02");
	if(var_283_int == 1)
		var_281_bool = true;
	var_281_bool = false;
}


void func_3426(object var_52_object, object var_53_object, int var_54_int)
{
	int var_58_int;
	var_53_object->GetItemID(var_58_int);
	int var_59_int;
	@GetInvItemProperty(var_59_int, var_58_int, "Category");
	bool var_60_bool;
	var_52_object->AddItem(var_60_bool, var_53_object, var_59_int, var_54_int);
	if(!var_60_bool) { //@nz
		var_52_object->DropItems(var_53_object, var_54_int);
	} else {
		int var_63_int; int var_64_int;
		var_58_int = var_63_int;
		var_54_int = var_64_int;
		func_3414(var_63_int, var_64_int);
	}
	
}


void func_2916(void)
{
	@KillTimer(10);
}


// @pe
void func_615(object var_2_object, string var_540_string)
{
	bool var_541_bool;
	func_3525(var_541_bool);
	if(!var_541_bool) //@nz
		return 0;
	if(var_540_string == var_2_object)
		return 0;
	string var_544_string; bool var_545_bool;
	var_540_string = var_544_string;
	if(var_540_string == "")
		var_545_bool = false;
	else
		var_545_bool = true;
	func_3365(var_544_string, var_545_bool);
	var_2_object = var_540_string;
	
}


// @pe
void func_3694(bool var_356_bool)
{
	int var_358_int;
	func_3409(var_358_int, "d10q03");
	if(var_358_int == 3)
		var_356_bool = true;
	var_356_bool = false;
}


void func_3445(object var_75_object, string var_76_string, int var_77_int)
{
	object var_79_object;
	@CreateInvItem(var_79_object);
	var_79_object->SetItemName(var_76_string);
	object var_80_object; object var_81_object; int var_82_int;
	var_75_object = var_80_object;
	var_79_object = var_81_object;
	var_77_int = var_82_int;
	func_3426(var_80_object, var_81_object, var_82_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3706(bool var_518_bool)
{
	int var_520_int;
	func_3409(var_520_int, "ood12Block1");
	if(var_520_int == 0) {
		var_518_bool = true;
		return 0;
	}
	var_518_bool = false;
}


void func_890(object var_0_object, int var_53_int, object var_54_object)
{
	var_0_object = var_54_object;
	bool var_64_bool; object var_65_object;
	object var_66_object;
	func_3393(var_66_object);
	var_66_object = var_65_object;
	func_3220(var_64_bool, var_65_object);
	bool var_154_bool; object var_155_object;
	var_54_object = var_155_object;
	func_3135(var_154_bool, var_155_object, 70.0);
	if(!var_154_bool) { //@nz
		var_53_int = -2;
		return 8;
	}
	object var_60_object;
	@CreateDialog(var_60_object);
	int var_201_int;
	func_3519(var_201_int);
	var_60_object->SetNPCName(var_201_int);
	int var_202_int;
	func_3517(var_202_int);
	var_60_object->SetNPCDescription(var_202_int);
	string var_203_string;
	func_3521(var_203_string);
	var_60_object->SetPhoto(var_203_string);
	string var_204_string;
	func_3523(var_204_string);
	var_60_object->SetPhoto2(var_204_string);
	int var_205_int;
	func_3904(var_205_int);
	var_60_object->SetPlayerName(var_205_int);
	bool var_61_bool;
	@IsOverrideActive(var_61_bool);
	if(var_61_bool != 0) {
		var_53_int = -2;
		return 8;
	}
	@DoDialog(var_60_object);
	object var_214_object; object var_215_object;
	var_54_object = var_214_object;
	var_60_object = var_215_object;
	TaskCall(6);
	func_971(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object);
	TaskReturn();
	bool var_63_bool;
	var_60_object->IsDialogEnd(var_63_bool);
	
	for(;;) {
		var_306_bool = !var_63_bool; //@nz
		if(var_306_bool == 0) goto Label_960;
		@sync();
		var_60_object->IsDialogEnd(var_63_bool);
	}
	
Label_960:
	object var_307_object;
	var_54_object = var_307_object;
	func_3203();
	@StopDialog(var_60_object);
	var_60_object->GetReturnValue(-1);
	int var_62_int = var_53_int;
}
EMIT "Stack[-4] = 0";


void func_3458(bool var_126_bool, string var_127_string, string var_128_string)
{
	object var_130_object;
	@FindActor(var_130_object, var_127_string);
	if(var_130_object == null)
		var_126_bool = false;
	@Trigger(var_130_object, var_128_string);
	var_126_bool = true;
}
EMIT "Stack[-1] = 0";


void func_3203(void)
{
	bool var_309_bool;
	@CameraSwitchToNormal();
	bool var_310_bool;
	func_3525(var_310_bool);
	if(var_310_bool != 0) {
	} else {
		@HasAnimationTrack(var_309_bool, "head");
		if(var_309_bool == 0) goto Label_3219;
		@UnlookAsync("head");
	}
Label_3219:
	
}


// @pe
void func_3718(bool var_257_bool)
{
	int var_259_int;
	func_3409(var_259_int, "d9q01");
	if(var_259_int == 2)
		var_257_bool = true;
	var_257_bool = false;
}


void func_3470(int var_47_int)
{
	float var_49_float;
	@GetGameTime(var_49_float);
	var_47_int = 1 + (var_49_float / 24);
}


// @pe
void func_3730(bool var_263_bool)
{
	int var_265_int;
	func_3409(var_265_int, "ood9Block1");
	if(var_265_int == 0) {
		var_263_bool = true;
		return 0;
	}
	var_263_bool = false;
}


void func_3220(bool var_64_bool, object var_65_object)
{
	int var_71_int; int var_72_int;
	@GetVariable("voice_common", var_71_int);
	if(var_71_int != 0) {
		bool var_75_bool; object var_76_object;
		var_65_object = var_76_object;
		func_3278(var_75_bool, var_76_object);
		if(!var_75_bool) { //@nz
			bool var_106_bool; object var_107_object;
			var_65_object = var_107_object;
			func_3315(var_106_bool, var_107_object);
			if(!var_106_bool) { //@nz
				var_64_bool = false;
				return 4;
			}
		}
		@irand(var_72_int, 2);
		if(var_72_int != 0)
			@SetVariable("voice_common", ((var_71_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_146_bool; object var_147_object;
		var_65_object = var_147_object;
		func_3315(var_146_bool, var_147_object);
		if(!var_146_bool) { //@nz
			bool var_149_bool; object var_150_object;
			var_65_object = var_150_object;
			func_3278(var_149_bool, var_150_object);
			if(!var_149_bool) { //@nz
				var_64_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3276;
	
Label_3276:
	var_64_bool = true;
	
}


void func_3479(int var_528_int)
{
	float var_530_float;
	@GetGameTime(var_530_float);
	int var_531_int;
	var_530_float = var_531_int;
	var_528_int = var_531_int % 24;
}


// @pe
void func_3742(bool var_456_bool)
{
	int var_458_int;
	func_3409(var_458_int, "d11q02");
	if(var_458_int == 1)
		var_456_bool = true;
	var_456_bool = false;
}


// @pe
void func_2719(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_601_object, object var_602_object)
{
	var_0_object = var_602_object;
	var_1_object = var_601_object;
	var_3_string = false;
	if(1 != 0) {
		func_2777(var_602_object, "Neutral");
		var_0_object->SetMessage(540542); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540543, -1, 42552); //@t
		var_0_object->AddReply(540796, -1, 42845); //@t
		goto Label_2747;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xaa3";
	}
Label_2747:
	bool var_623_bool;
	func_3525(var_623_bool);
	if(var_623_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3358(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2776;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2776:
		return 0;

	}
	
}


// @pe
void func_3487(bool var_45_bool, int var_46_int)
{
	int var_47_int;
	func_3470(var_47_int);
	var_45_bool = var_47_int == var_46_int;
}


// @pe
void func_162(object var_2_object, string var_347_string)
{
	bool var_348_bool;
	func_3525(var_348_bool);
	if(!var_348_bool) //@nz
		return 0;
	if(var_347_string == var_2_object)
		return 0;
	string var_351_string; bool var_352_bool;
	var_347_string = var_351_string;
	if(var_347_string == "")
		var_352_bool = false;
	else
		var_352_bool = true;
	func_3365(var_351_string, var_352_bool);
	var_2_object = var_347_string;
	
}


// @pe
void func_1955(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_407_object, object var_408_object)
{
	var_0_object = var_408_object;
	var_1_object = var_407_object;
	var_3_string = false;
	if(1 != 0) {
		func_2065(var_408_object, "Neutral");
		var_0_object->SetMessage(514280); //@t
		var_0_object->ClearReplies(); //@t
		bool var_423_bool = false;
		bool var_424_bool;
		func_3754(var_1_object);
		if(var_424_bool != 0) {
			bool var_430_bool;
			func_3766(var_1_object);
			if(var_430_bool != 0)
				var_423_bool = true;
		}
		if(var_423_bool != 0)
			var_0_object->AddReply(514281, 15502, 15501); //@t
		bool var_439_bool = false;
		bool var_440_bool;
		func_3778(var_1_object);
		if(var_440_bool != 0) {
			bool var_446_bool;
			func_3790(var_1_object);
			if(var_446_bool != 0)
				var_439_bool = true;
		}
		if(var_439_bool != 0)
			var_0_object->AddReply(514306, 15529, 15528); //@t
		bool var_455_bool = false;
		bool var_456_bool;
		func_3742(var_1_object);
		if(var_456_bool != 0) {
			bool var_462_bool;
			func_3802(var_1_object);
			if(var_462_bool != 0)
				var_455_bool = true;
		}
		if(var_455_bool != 0)
			var_0_object->AddReply(514317, 15540, 15539); //@t
		var_0_object->AddReply(514324, -1, 15546); //@t
		goto Label_2035;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7a7";
	}
Label_2035:
	bool var_474_bool;
	func_3525(var_474_bool);
	if(var_474_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3358(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2064;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2064:
		return 0;

	}
	
}


void func_3493(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


void func_421(object var_0_object, int var_486_int, object var_487_object)
{
	var_0_object = var_487_object;
	bool var_497_bool; object var_498_object;
	object var_499_object;
	func_3393(var_499_object);
	var_499_object = var_498_object;
	func_3220(var_497_bool, var_498_object);
	bool var_500_bool; object var_501_object;
	var_487_object = var_501_object;
	func_3135(var_500_bool, var_501_object, 70.0);
	if(!var_500_bool) { //@nz
		var_486_int = -2;
		return 8;
	}
	object var_493_object;
	@CreateDialog(var_493_object);
	int var_504_int;
	func_3519(var_504_int);
	var_493_object->SetNPCName(var_504_int);
	int var_505_int;
	func_3517(var_505_int);
	var_493_object->SetNPCDescription(var_505_int);
	string var_506_string;
	func_3521(var_506_string);
	var_493_object->SetPhoto(var_506_string);
	string var_507_string;
	func_3523(var_507_string);
	var_493_object->SetPhoto2(var_507_string);
	int var_508_int;
	func_3904(var_508_int);
	var_493_object->SetPlayerName(var_508_int);
	bool var_494_bool;
	@IsOverrideActive(var_494_bool);
	if(var_494_bool != 0) {
		var_486_int = -2;
		return 8;
	}
	@DoDialog(var_493_object);
	object var_510_object; object var_511_object;
	var_487_object = var_510_object;
	var_493_object = var_511_object;
	TaskCall(4);
	func_502(var_512_object, var_513_object, var_514_string, var_515_bool, var_510_object, var_511_object);
	TaskReturn();
	bool var_496_bool;
	var_493_object->IsDialogEnd(var_496_bool);
	
	for(;;) {
		var_575_bool = !var_496_bool; //@nz
		if(var_575_bool == 0) goto Label_491;
		@sync();
		var_493_object->IsDialogEnd(var_496_bool);
	}
	
Label_491:
	object var_576_object;
	var_487_object = var_576_object;
	func_3203();
	@StopDialog(var_493_object);
	var_493_object->GetReturnValue(-1);
	int var_495_int = var_486_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3754(bool var_424_bool)
{
	int var_426_int;
	func_3409(var_426_int, "d11q01");
	if(var_426_int == 2)
		var_424_bool = true;
	var_424_bool = false;
}


void func_3500(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_3493(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


// @pe
void func_3766(bool var_430_bool)
{
	int var_432_int;
	func_3409(var_432_int, "ood11Block1");
	if(var_432_int == 0) {
		var_430_bool = true;
		return 0;
	}
	var_430_bool = false;
}


void func_3517(int var_202_int)
{
	var_202_int = 515532;
}


void func_3519(int var_201_int)
{
	var_201_int = 514840;
}


void func_3521(string var_203_string)
{
	var_203_string = "ui/NPC_Block.png";
}


// @pe
void func_3778(bool var_440_bool)
{
	int var_442_int;
	func_3409(var_442_int, "d11q01");
	if(var_442_int >= 3)
		var_440_bool = true;
	var_440_bool = false;
}


void func_3523(string var_204_string)
{
	var_204_string = "ui/NPC_Block_b.png";
}


void func_3525(bool var_102_bool)
{
	var_102_bool = true;
}


// @pe
void func_3527(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_971(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_214_object, object var_215_object)
{
	var_0_object = var_215_object;
	var_1_object = var_214_object;
	var_3_string = false;
	if(1 != 0) {
		object var_221_object; object var_222_object;
		var_221_object = var_1_object;
		var_222_object = var_0_object;
		func_3580();
		func_1087(var_215_object, "Neutral");
		var_0_object->SetMessage(513882); //@t
		var_0_object->ClearReplies(); //@t
		bool var_238_bool = false;
		bool var_239_bool;
		func_3658(var_1_object);
		if(var_239_bool != 0) {
			bool var_247_bool;
			func_3670(var_1_object);
			if(var_247_bool != 0)
				var_238_bool = true;
		}
		if(var_238_bool != 0)
			var_0_object->AddReply(513883, 15111, 15110); //@t
		bool var_256_bool = false;
		bool var_257_bool;
		func_3718(var_1_object);
		if(var_257_bool != 0) {
			bool var_263_bool;
			func_3730(var_1_object);
			if(var_263_bool != 0)
				var_256_bool = true;
		}
		if(var_256_bool != 0)
			var_0_object->AddReply(513906, 15138, 15137); //@t
		bool var_272_bool;
		func_3814(var_1_object);
		if(var_272_bool != 0)
			var_0_object->AddReply(513924, 15156, 15155); //@t
		bool var_281_bool;
		func_3682(var_1_object);
		if(var_281_bool != 0)
			var_0_object->AddReply(533537, 35070, 35069); //@t
		var_0_object->AddReply(513947, -1, 15182); //@t
		goto Label_1057;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3cf";
	}
Label_1057:
	bool var_293_bool;
	func_3525(var_293_bool);
	if(var_293_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3358(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1086;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1086:
		return 0;

	}
	
}


// @pe
void func_3533(void)
{
	@SetVariable("ood9Block3", 1);
}


// @pe
void func_3790(bool var_446_bool)
{
	int var_448_int;
	func_3409(var_448_int, "ood11Block2");
	if(var_448_int == 0) {
		var_446_bool = true;
		return 0;
	}
	var_446_bool = false;
}


void func_3278(bool var_75_bool, object var_76_object)
{
	string var_82_string; bool var_84_bool; int var_85_int; string var_86_string;
	var_82_string = "c";
	int var_83_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_76_object->HasProperty((var_82_string + (var_83_int + 1)), var_84_bool);
			if(!var_84_bool) { //@nz
			} else {
				var_83_int += 1;
			}
		}
		if(!var_83_int) { //@nz
			var_75_bool = false;
			return 10;
		}
		var_85_int = 0;
		if(var_83_int > 1)
			@irand(var_85_int, var_83_int);
		var_76_object->GetProperty((var_82_string + (var_85_int + 1)), var_86_string);
		bool var_98_bool; string var_99_string;
		var_86_string = var_99_string;
		func_3371(var_98_bool, var_99_string);
		var_98_bool = var_75_bool;
		return 10;

	}
}


// @pe
void func_3539(void)
{
	@SetVariable("d9q02", 2);
	func_3850();
	bool var_126_bool;
	func_3458(var_126_bool, "quest_d9_02", "init_soldiers");
}


void func_3027(void)
{
	bool var_52_bool; int var_53_int; int var_54_int; bool var_55_bool;
	@WaitForAnimEnd();
	bool var_56_bool;
	func_3130(var_56_bool);
	if(!var_56_bool) //@nz
		return 12;
	int var_58_int;
	func_3500(var_58_int);
	int var_50_int;
	var_58_int = var_50_int;
	int var_51_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_51_int < 5) {
			bool var_74_bool;
			func_3130(var_74_bool);
			if(var_74_bool != 0)
				var_71_bool = true;
		}
		if(var_71_bool != 0) {
			if(!var_50_int) { //@nz
				@Sleep(3, var_52_bool);
				if(!var_52_bool) { //@nz
				} else {
			} else {
			@irand(var_53_int, var_50_int);
			@irand(var_54_int, 5);
			if(var_54_int != 0)
				var_53_int = 0;
			string var_85_string; int var_86_int;
			var_53_int = var_86_int;
			func_3493(var_85_string, var_86_int);
			@PlayAnimation("all", var_85_string);
			@WaitForAnimEnd(var_55_bool);
			var_87_bool = !var_55_bool; //@nz
			if(var_87_bool == 0) goto Label_3082;
			goto Label_3093;
			}
				Label_3082:
					bool var_78_bool;
					func_3096(var_78_bool);
					var_79_bool = !var_78_bool; //@nz
					if(var_79_bool == 0) goto Label_3088;
			}
		}
	Label_3093:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_3088:
		@ResetAAS();
		var_51_int += 1;
	}
	
}


// @pe
void func_2777(object var_2_object, string var_608_string)
{
	bool var_609_bool;
	func_3525(var_609_bool);
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
	func_3365(var_612_string, var_613_bool);
	var_2_object = var_608_string;
	
}


// @pe
void func_3802(bool var_462_bool)
{
	int var_464_int;
	func_3409(var_464_int, "ood11Block3");
	if(var_464_int == 0) {
		var_462_bool = true;
		return 0;
	}
	var_462_bool = false;
}


// @pe
void func_3553(void)
{
	@SetVariable("d9LaraIsSaved", 1);
}


// @pe
void func_3814(bool var_272_bool)
{
	int var_274_int;
	func_3409(var_274_int, "ood9Block2");
	if(var_274_int == 0) {
		var_272_bool = true;
		return 0;
	}
	var_272_bool = false;
}


// @pe
void func_3559(void)
{
	func_3837();
	bool var_57_bool;
	func_3458(var_57_bool, "quest_d10_03", "place_sanitars");
	bool var_63_bool;
	func_3458(var_63_bool, "quest_d10_03", "completed");
}


// @pe
void func_3826(bool var_526_bool)
{
	int var_528_int;
	func_3479(var_528_int);
	if(var_528_int >= 19)
		var_526_bool = true;
	var_526_bool = false;
}


void func_3315(bool var_106_bool, object var_107_object)
{
	bool var_115_bool; int var_116_int; string var_117_string;
	int var_119_int;
	func_3470(var_119_int);
	string var_113_string = ("d" + var_119_int) + "m";
	int var_114_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_107_object->HasProperty((var_113_string + (var_114_int + 1)), var_115_bool);
			if(!var_115_bool) { //@nz
			} else {
				var_114_int += 1;
			}
		}
		if(!var_114_int) { //@nz
			var_106_bool = false;
			return 10;
		}
		var_116_int = 0;
		if(var_114_int > 1)
			@irand(var_116_int, var_114_int);
		var_107_object->GetProperty((var_113_string + (var_116_int + 1)), var_117_string);
		bool var_133_bool; string var_134_string;
		var_117_string = var_134_string;
		func_3371(var_133_bool, var_134_string);
		var_133_bool = var_106_bool;
		return 10;

	}
}


// @pe
void func_502(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_510_object, object var_511_object)
{
	var_0_object = var_511_object;
	var_1_object = var_510_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_517_bool = false;
		bool var_518_bool;
		func_3706(var_1_object);
		if(var_518_bool != 0) {
			bool var_524_bool;
			func_3648(var_524_bool, var_1_object);
			if(!var_524_bool) //@nz
				var_517_bool = true;
		}
		if(var_517_bool != 0) {
			object var_536_object; object var_537_object;
			var_536_object = var_1_object;
			var_537_object = var_0_object;
			func_3574();
			func_615(var_511_object, "Neutral");
			var_0_object->SetMessage(535510); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(535511, 37194, 37193); //@t
		} else {
					bool var_560_bool;
					func_3648(var_560_bool, var_1_object);
					if(var_560_bool == 0) goto Label_568;
					func_615(var_511_object, "Neutral");
					var_0_object->SetMessage(535528); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(535529, -1, 37212); //@t
					var_0_object->AddReply(535530, -1, 37213); //@t
		}
	}
Label_585:
	for(;;) {
		bool var_552_bool;
		func_3525(var_552_bool);
		if(var_552_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3358(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_614;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_614:
			return 0;

		}

	}
	
Label_568:
	func_615(var_511_object, "Neutral");
	var_0_object->SetMessage(535531); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(535539, -1, 37222); //@t
	goto Label_585;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1fa";


// @pe
void func_3574(void)
{
	@SetVariable("ood12Block1", 1);
}


// @pe
void func_3580(void)
{
	@SetVariable("d9TalkToPolkovodec", 1);
}


void func_3837(void)
{
	object var_35_object;
	@CreateDiaryEntry(var_35_object, 676, 2, 534161);
	bool var_39_bool; object var_40_object;
	var_35_object = var_40_object;
	func_3876(var_39_bool, var_40_object, 672);
}
EMIT "Stack[-1] = 0";


