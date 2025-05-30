GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Threat
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Isee
	Confusion
	Arrogance
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	.bin
	Door 
	 not found
	locked
	SetProperty
	HasItem
	ui/NPC_Aglaja.png
	ui/NPC_Aglaja_b.png
	boiny@door1
	b7q01
	b7q01AglajaGotoStarshina
	pt_map_starshina
	AddMark
	quest_b7_01
	completed
	b7q03
	b7q03AglajaGotoTheater
	pt_map_theater
	quest_b7_03
	place_birdmask
	oob7Aglaja1
	b8q01
	oob8Aglaja1
	quest_b8_01
	oob8Aglaja2
	oob11Aglaja1
	oob11Aglaja2
	oob9Aglaja1
	oob9Aglaja2
	map_chertez_state
	map_chertez_force
	pt_map_aglaja
	ShowMap
	b7q03SerumWorks
	b8q03
	b11q01
	b9q03BadInit
	b9q03BonefiresCount
	burah_serum
	disease
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	mt_aglaja

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xf66
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x141 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x611 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x998 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb3 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc7e Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd82 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf0e Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xfaf Vars = (int)
		EVENT_6 Op = 0xfd5 Vars = ()
		EVENT_5 Op = 0xfe4 Vars = ()
		EVENT_45 Op = 0xff1 Vars = (bool)
		EVENT_0 Op = 0xffd Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1086

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1221

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x121f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1223

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1225

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x14c9

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x119c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x10dd

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x10cb

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x13dc

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Threat"
0x5e: Call2 0x12b

0x5f: Pop(1)
0x60: Push((int) 521012)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 530692)
0x66: Push((int) 29681)
0x67: Push((int) 31984)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 528310)
0x6b: Push((int) -1)
0x6c: Push((int) 29680)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x10d

0x70: PushEmpty(bool)
0x71: Stack[-1] = (bool) 0
0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 0
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x12f0

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x12fc

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7e: Stack[-1] = (bool) 1
0x7f: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x13e8

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Stack[-1] = (bool) 1
0x86: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x87: PushEmpty(object, object)
0x88: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x89: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a: Call2 0x1274

0x8b: Pop(2)
0x8c: PushEmpty(string)
0x8d: Stack[-1] = "Neutral"
0x8e: Call2 0x12b

0x8f: Pop(1)
0x90: Push((int) 521347)
0x91: @@ SetMessage(Stack[-1])
0x92: Pop(1)
0x93: @@ ClearReplies()
0x94: Pop(0)
0x95: Push((int) 530713)
0x96: Push((int) 32015)
0x97: Push((int) 32014)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: Push((int) 530721)
0x9b: Push((int) 32015)
0x9c: Push((int) 32022)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: GOTO 0x10d

0xa0: PushEmpty(string)
0xa1: Stack[-1] = "Neutral"
0xa2: Call2 0x12b

0xa3: Pop(1)
0xa4: Push((int) 521014)
0xa5: @@ SetMessage(Stack[-1])
0xa6: Pop(1)
0xa7: @@ ClearReplies()
0xa8: Pop(0)
0xa9: PushEmpty(bool)
0xaa: Stack[-1] = (bool) 0
0xab: PushEmpty(bool, object)
0xac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad: Call2 0x13e8

0xae: Pop(1)
0xaf: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb0: PushEmpty(bool, object)
0xb1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Call2 0x13f3

0xb3: Pop(1)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Stack[-1] = (bool) 1
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: Push((int) 521043)
0xb8: Push((int) 22240)
0xb9: Push((int) 22239)
0xba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb: Pop(3)
0xbc: PushEmpty(bool)
0xbd: Stack[-1] = (bool) 1
0xbe: PushEmpty(bool)
0xbf: Stack[-1] = (bool) 0
0xc0: PushEmpty(bool)
0xc1: Stack[-1] = (bool) 0
0xc2: PushEmpty(bool, object)
0xc3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Call2 0x1308

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc7: PushEmpty(bool, object)
0xc8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Call2 0x13d2

0xca: Pop(1)
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: Stack[-1] = (bool) 1
0xcd: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x1320

0xd1: Pop(1)
0xd2: Pop(1); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: Stack[-1] = (bool) 1
0xd5: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xd6: PushEmpty(bool)
0xd7: Stack[-1] = (bool) 0
0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x1314

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x1320

0xe0: Pop(1)
0xe1: Pop(1); Push((bool) Stack[-1] == 0)
0xe2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe3: Stack[-1] = (bool) 1
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: Stack[-1] = (bool) 0
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: Push((int) 521348)
0xe8: Push((int) 22536)
0xe9: Push((int) 22535)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: PushEmpty(bool)
0xed: Stack[-1] = (bool) 0
0xee: PushEmpty(bool, object)
0xef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Call2 0x1308

0xf1: Pop(1)
0xf2: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0x13d2

0xf6: Pop(1)
0xf7: Pop(1); Push((bool) Stack[-1] == 0)
0xf8: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf9: Stack[-1] = (bool) 1
0xfa: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfb: Push((int) 521360)
0xfc: Push((int) 22548)
0xfd: Push((int) 22547)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Push((int) 521015)
0x101: Push((int) -1)
0x102: Push((int) 22228)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Push((int) 528324)
0x106: Push((int) -1)
0x107: Push((int) 29694)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: GOTO 0x10d

0x10b: Return(); Pop(0)

0x10c: GOTO 0x55

0x10d: PushEmpty(bool)
0x10e: Call2 0x1227

0x10f: Pop(0)
0x110: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x111: @ lshWaitForAnimEnd()
0x112: Pop(0)
0x113: Push( Stack[3 + Tasks[-1].StackPointer] )
0x114: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x115: GOTO 0x11b

0x116: PushEmpty(string)
0x117: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x118: Call2 0x1167

0x119: Pop(1)
0x11a: GOTO 0x111

0x11b: GOTO 0x12a

0x11c: Push("all")
0x11d: Push("idle")
0x11e: @ PlayAnimation(Stack[-2], Stack[-1])
0x11f: Pop(2)
0x120: @ WaitForAnimEnd()
0x121: Pop(0)
0x122: Push( Stack[3 + Tasks[-1].StackPointer] )
0x123: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x124: GOTO 0x12a

0x125: Push("all")
0x126: Push("idle")
0x127: @ PlayAnimation(Stack[-2], Stack[-1])
0x128: Pop(2)
0x129: GOTO 0x120

0x12a: Return(); Pop(0)

0x12b: PushEmpty()
0x12c: PushEmpty(bool)
0x12d: Call2 0x1227

0x12e: Pop(0)
0x12f: Pop(1); Push((bool) Stack[-1] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x131: Return(); Pop(0)

0x132: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x133: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x134: Return(); Pop(0)

0x135: PushEmpty(string, bool)
0x136: Stack[-2] = Stack[-3]
0x137: Push("")
0x138: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13a: Stack[-1] = (bool) 0
0x13b: GOTO 0x13d

0x13c: Stack[-1] = (bool) 1
0x13d: Call2 0x1177

0x13e: Pop(2)
0x13f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x140: Return(); Pop(0)

0x141: PushEmpty()
0x142: Push((int) 1)
0x143: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x144: PushEmpty()
0x145: Call2 0x1195

0x146: Pop(0)
0x147: Push((int) 22226)
0x148: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x14a: PushEmpty(object, object)
0x14b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14d: Call2 0x1230

0x14e: Pop(2)
0x14f: PushEmpty(object, object)
0x150: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x151: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x152: Call2 0x1229

0x153: Pop(2)
0x154: PushEmpty(object, object)
0x155: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x156: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x157: Call2 0x12be

0x158: Pop(2)
0x159: PushEmpty(object, object)
0x15a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15c: Call2 0x12e0

0x15d: Pop(2)
0x15e: Push((int) 22533)
0x15f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x161: PushEmpty(object, object)
0x162: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x163: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x164: Call2 0x1251

0x165: Pop(2)
0x166: Push((int) 22241)
0x167: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x169: PushEmpty(object, object)
0x16a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16c: Call2 0x1247

0x16d: Pop(2)
0x16e: PushEmpty(object, object)
0x16f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x170: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x171: Call2 0x12cf

0x172: Pop(2)
0x173: PushEmpty(object, object)
0x174: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x175: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x176: Call2 0x12e0

0x177: Pop(2)
0x178: Push((int) 32055)
0x179: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17b: PushEmpty(object, object)
0x17c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17e: Call2 0x1247

0x17f: Pop(2)
0x180: PushEmpty(object, object)
0x181: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x182: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x183: Call2 0x12cf

0x184: Pop(2)
0x185: PushEmpty(object, object)
0x186: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x187: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x188: Call2 0x12e0

0x189: Pop(2)
0x18a: Push((int) 22537)
0x18b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18d: PushEmpty(object, object)
0x18e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x18f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x190: Call2 0x127a

0x191: Pop(2)
0x192: Push((int) 32066)
0x193: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x195: PushEmpty(object, object)
0x196: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x197: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x198: Call2 0x127a

0x199: Pop(2)
0x19a: Push((int) 22225)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x19d: PushEmpty(bool, object)
0x19e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19f: Call2 0x13dc

0x1a0: Pop(1)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Threat"
0x1a4: Call2 0x12b

0x1a5: Pop(1)
0x1a6: Push((int) 521012)
0x1a7: @@ SetMessage(Stack[-1])
0x1a8: Pop(1)
0x1a9: @@ ClearReplies()
0x1aa: Pop(0)
0x1ab: Push((int) 530692)
0x1ac: Push((int) 29681)
0x1ad: Push((int) 31984)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Push((int) 528310)
0x1b1: Push((int) -1)
0x1b2: Push((int) 29680)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty(bool)
0x1b7: Stack[-1] = (bool) 0
0x1b8: PushEmpty(bool)
0x1b9: Stack[-1] = (bool) 0
0x1ba: PushEmpty(bool, object)
0x1bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bc: Call2 0x12f0

0x1bd: Pop(1)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call2 0x12fc

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-1] = (bool) 1
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c6: PushEmpty(bool, object)
0x1c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Call2 0x13e8

0x1c9: Pop(1)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = (bool) 1
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1cd: PushEmpty(object, object)
0x1ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d0: Call2 0x1274

0x1d1: Pop(2)
0x1d2: PushEmpty(string)
0x1d3: Stack[-1] = "Neutral"
0x1d4: Call2 0x12b

0x1d5: Pop(1)
0x1d6: Push((int) 521347)
0x1d7: @@ SetMessage(Stack[-1])
0x1d8: Pop(1)
0x1d9: @@ ClearReplies()
0x1da: Pop(0)
0x1db: Push((int) 530713)
0x1dc: Push((int) 32015)
0x1dd: Push((int) 32014)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Push((int) 530721)
0x1e1: Push((int) 32015)
0x1e2: Push((int) 32022)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: Return(); Pop(0)

0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Neutral"
0x1e8: Call2 0x12b

0x1e9: Pop(1)
0x1ea: Push((int) 521014)
0x1eb: @@ SetMessage(Stack[-1])
0x1ec: Pop(1)
0x1ed: @@ ClearReplies()
0x1ee: Pop(0)
0x1ef: PushEmpty(bool)
0x1f0: Stack[-1] = (bool) 0
0x1f1: PushEmpty(bool, object)
0x1f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Call2 0x13e8

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Call2 0x13f3

0x1f9: Pop(1)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Stack[-1] = (bool) 1
0x1fc: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fd: Push((int) 521043)
0x1fe: Push((int) 22240)
0x1ff: Push((int) 22239)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: PushEmpty(bool)
0x203: Stack[-1] = (bool) 1
0x204: PushEmpty(bool)
0x205: Stack[-1] = (bool) 0
0x206: PushEmpty(bool)
0x207: Stack[-1] = (bool) 0
0x208: PushEmpty(bool, object)
0x209: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20a: Call2 0x1308

0x20b: Pop(1)
0x20c: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20d: PushEmpty(bool, object)
0x20e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20f: Call2 0x13d2

0x210: Pop(1)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Stack[-1] = (bool) 1
0x213: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x216: Call2 0x1320

0x217: Pop(1)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: Stack[-1] = (bool) 1
0x21b: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x21c: PushEmpty(bool)
0x21d: Stack[-1] = (bool) 0
0x21e: PushEmpty(bool, object)
0x21f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x220: Call2 0x1314

0x221: Pop(1)
0x222: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x1320

0x226: Pop(1)
0x227: Pop(1); Push((bool) Stack[-1] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: Stack[-1] = (bool) 1
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-1] = (bool) 0
0x22c: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22d: Push((int) 521348)
0x22e: Push((int) 22536)
0x22f: Push((int) 22535)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: PushEmpty(bool)
0x233: Stack[-1] = (bool) 0
0x234: PushEmpty(bool, object)
0x235: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x236: Call2 0x1308

0x237: Pop(1)
0x238: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x239: PushEmpty(bool, object)
0x23a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23b: Call2 0x13d2

0x23c: Pop(1)
0x23d: Pop(1); Push((bool) Stack[-1] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: Stack[-1] = (bool) 1
0x240: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x241: Push((int) 521360)
0x242: Push((int) 22548)
0x243: Push((int) 22547)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Push((int) 521015)
0x247: Push((int) -1)
0x248: Push((int) 22228)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Push((int) 528324)
0x24c: Push((int) -1)
0x24d: Push((int) 29694)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: Return(); Pop(0)

0x251: Push((int) 22548)
0x252: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x254: PushEmpty(string)
0x255: Stack[-1] = "Threat"
0x256: Call2 0x12b

0x257: Pop(1)
0x258: Push((int) 521361)
0x259: @@ SetMessage(Stack[-1])
0x25a: Pop(1)
0x25b: @@ ClearReplies()
0x25c: Pop(0)
0x25d: Push((int) 521362)
0x25e: Push((int) 32067)
0x25f: Push((int) 22549)
0x260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(3)
0x262: Push((int) 530760)
0x263: Push((int) 32069)
0x264: Push((int) 32068)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: Return(); Pop(0)

0x268: Push((int) 32067)
0x269: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x26b: PushEmpty(string)
0x26c: Stack[-1] = "Threat"
0x26d: Call2 0x12b

0x26e: Pop(1)
0x26f: Push((int) 530759)
0x270: @@ SetMessage(Stack[-1])
0x271: Pop(1)
0x272: @@ ClearReplies()
0x273: Pop(0)
0x274: Push((int) 530762)
0x275: Push((int) 32069)
0x276: Push((int) 32070)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: Push((int) 530763)
0x27a: Push((int) 32069)
0x27b: Push((int) 32071)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Return(); Pop(0)

0x27f: Push((int) 32069)
0x280: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x282: PushEmpty(string)
0x283: Stack[-1] = "Neutral"
0x284: Call2 0x12b

0x285: Pop(1)
0x286: Push((int) 530761)
0x287: @@ SetMessage(Stack[-1])
0x288: Pop(1)
0x289: @@ ClearReplies()
0x28a: Pop(0)
0x28b: Push((int) 530764)
0x28c: Push((int) -1)
0x28d: Push((int) 32074)
0x28e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(3)
0x290: Push((int) 530765)
0x291: Push((int) -1)
0x292: Push((int) 32075)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: Return(); Pop(0)

0x296: Push((int) 22536)
0x297: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x299: PushEmpty(string)
0x29a: Stack[-1] = "Neutral"
0x29b: Call2 0x12b

0x29c: Pop(1)
0x29d: Push((int) 521349)
0x29e: @@ SetMessage(Stack[-1])
0x29f: Pop(1)
0x2a0: @@ ClearReplies()
0x2a1: Pop(0)
0x2a2: Push((int) 530749)
0x2a3: Push((int) 32057)
0x2a4: Push((int) 32056)
0x2a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(3)
0x2a7: Return(); Pop(0)

0x2a8: Push((int) 32057)
0x2a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2ab: PushEmpty(string)
0x2ac: Stack[-1] = "Isee"
0x2ad: Call2 0x12b

0x2ae: Pop(1)
0x2af: Push((int) 530750)
0x2b0: @@ SetMessage(Stack[-1])
0x2b1: Pop(1)
0x2b2: @@ ClearReplies()
0x2b3: Pop(0)
0x2b4: Push((int) 530751)
0x2b5: Push((int) 32062)
0x2b6: Push((int) 32058)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: Push((int) 530752)
0x2ba: Push((int) 32060)
0x2bb: Push((int) 32059)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Return(); Pop(0)

0x2bf: Push((int) 32062)
0x2c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c2: PushEmpty(string)
0x2c3: Stack[-1] = "Isee"
0x2c4: Call2 0x12b

0x2c5: Pop(1)
0x2c6: Push((int) 530754)
0x2c7: @@ SetMessage(Stack[-1])
0x2c8: Pop(1)
0x2c9: @@ ClearReplies()
0x2ca: Pop(0)
0x2cb: Push((int) 530755)
0x2cc: Push((int) 32060)
0x2cd: Push((int) 32063)
0x2ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cf: Pop(3)
0x2d0: Push((int) 530756)
0x2d1: Push((int) 32065)
0x2d2: Push((int) 32064)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Push((int) 32065)
0x2d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2d9: PushEmpty(string)
0x2da: Stack[-1] = "Threat"
0x2db: Call2 0x12b

0x2dc: Pop(1)
0x2dd: Push((int) 530757)
0x2de: @@ SetMessage(Stack[-1])
0x2df: Pop(1)
0x2e0: @@ ClearReplies()
0x2e1: Pop(0)
0x2e2: Push((int) 530758)
0x2e3: Push((int) -1)
0x2e4: Push((int) 32066)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Return(); Pop(0)

0x2e8: Push((int) 32060)
0x2e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2eb: PushEmpty(string)
0x2ec: Stack[-1] = "Threat"
0x2ed: Call2 0x12b

0x2ee: Pop(1)
0x2ef: Push((int) 530753)
0x2f0: @@ SetMessage(Stack[-1])
0x2f1: Pop(1)
0x2f2: @@ ClearReplies()
0x2f3: Pop(0)
0x2f4: Push((int) 521350)
0x2f5: Push((int) -1)
0x2f6: Push((int) 22537)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: Return(); Pop(0)

0x2fa: Push((int) 22240)
0x2fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Isee"
0x2ff: Call2 0x12b

0x300: Pop(1)
0x301: Push((int) 521044)
0x302: @@ SetMessage(Stack[-1])
0x303: Pop(1)
0x304: @@ ClearReplies()
0x305: Pop(0)
0x306: Push((int) 530731)
0x307: Push((int) 32036)
0x308: Push((int) 32035)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Return(); Pop(0)

0x30c: Push((int) 32036)
0x30d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x30f: PushEmpty(string)
0x310: Stack[-1] = "Isee"
0x311: Call2 0x12b

0x312: Pop(1)
0x313: Push((int) 530732)
0x314: @@ SetMessage(Stack[-1])
0x315: Pop(1)
0x316: @@ ClearReplies()
0x317: Pop(0)
0x318: Push((int) 530733)
0x319: Push((int) 32038)
0x31a: Push((int) 32037)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Push((int) 530741)
0x31e: Push((int) 32046)
0x31f: Push((int) 32045)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Return(); Pop(0)

0x323: Push((int) 32046)
0x324: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x326: PushEmpty(string)
0x327: Stack[-1] = "Neutral"
0x328: Call2 0x12b

0x329: Pop(1)
0x32a: Push((int) 530742)
0x32b: @@ SetMessage(Stack[-1])
0x32c: Pop(1)
0x32d: @@ ClearReplies()
0x32e: Pop(0)
0x32f: Push((int) 530743)
0x330: Push((int) 32048)
0x331: Push((int) 32047)
0x332: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(3)
0x334: Push((int) 530745)
0x335: Push((int) 32048)
0x336: Push((int) 32049)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Return(); Pop(0)

0x33a: Push((int) 32048)
0x33b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x33d: PushEmpty(string)
0x33e: Stack[-1] = "Neutral"
0x33f: Call2 0x12b

0x340: Pop(1)
0x341: Push((int) 530744)
0x342: @@ SetMessage(Stack[-1])
0x343: Pop(1)
0x344: @@ ClearReplies()
0x345: Pop(0)
0x346: Push((int) 530746)
0x347: Push((int) 32038)
0x348: Push((int) 32051)
0x349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(3)
0x34b: Push((int) 530747)
0x34c: Push((int) 32038)
0x34d: Push((int) 32052)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Return(); Pop(0)

0x351: Push((int) 32038)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x354: PushEmpty(string)
0x355: Stack[-1] = "Neutral"
0x356: Call2 0x12b

0x357: Pop(1)
0x358: Push((int) 530734)
0x359: @@ SetMessage(Stack[-1])
0x35a: Pop(1)
0x35b: @@ ClearReplies()
0x35c: Pop(0)
0x35d: Push((int) 530735)
0x35e: Push((int) 32041)
0x35f: Push((int) 32039)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Return(); Pop(0)

0x363: Push((int) 32041)
0x364: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x366: PushEmpty(string)
0x367: Stack[-1] = "Neutral"
0x368: Call2 0x12b

0x369: Pop(1)
0x36a: Push((int) 530737)
0x36b: @@ SetMessage(Stack[-1])
0x36c: Pop(1)
0x36d: @@ ClearReplies()
0x36e: Pop(0)
0x36f: Push((int) 530738)
0x370: Push((int) 32043)
0x371: Push((int) 32042)
0x372: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x373: Pop(3)
0x374: Return(); Pop(0)

0x375: Push((int) 32043)
0x376: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x378: PushEmpty(string)
0x379: Stack[-1] = "Isee"
0x37a: Call2 0x12b

0x37b: Pop(1)
0x37c: Push((int) 530739)
0x37d: @@ SetMessage(Stack[-1])
0x37e: Pop(1)
0x37f: @@ ClearReplies()
0x380: Pop(0)
0x381: Push((int) 530740)
0x382: Push((int) 32040)
0x383: Push((int) 32044)
0x384: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(3)
0x386: Return(); Pop(0)

0x387: Push((int) 32040)
0x388: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x38a: PushEmpty(string)
0x38b: Stack[-1] = "Isee"
0x38c: Call2 0x12b

0x38d: Pop(1)
0x38e: Push((int) 530736)
0x38f: @@ SetMessage(Stack[-1])
0x390: Pop(1)
0x391: @@ ClearReplies()
0x392: Pop(0)
0x393: Push((int) 521045)
0x394: Push((int) -1)
0x395: Push((int) 22241)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: Push((int) 530748)
0x399: Push((int) -1)
0x39a: Push((int) 32055)
0x39b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: Return(); Pop(0)

0x39e: Push((int) 32015)
0x39f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3a1: PushEmpty(string)
0x3a2: Stack[-1] = "Isee"
0x3a3: Call2 0x12b

0x3a4: Pop(1)
0x3a5: Push((int) 530714)
0x3a6: @@ SetMessage(Stack[-1])
0x3a7: Pop(1)
0x3a8: @@ ClearReplies()
0x3a9: Pop(0)
0x3aa: Push((int) 530722)
0x3ab: Push((int) 32024)
0x3ac: Push((int) 32023)
0x3ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: Push((int) 530715)
0x3b0: Push((int) 32017)
0x3b1: Push((int) 32016)
0x3b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(3)
0x3b4: Return(); Pop(0)

0x3b5: Push((int) 32024)
0x3b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b8: PushEmpty(string)
0x3b9: Stack[-1] = "Isee"
0x3ba: Call2 0x12b

0x3bb: Pop(1)
0x3bc: Push((int) 530723)
0x3bd: @@ SetMessage(Stack[-1])
0x3be: Pop(1)
0x3bf: @@ ClearReplies()
0x3c0: Pop(0)
0x3c1: Push((int) 530724)
0x3c2: Push((int) 32026)
0x3c3: Push((int) 32025)
0x3c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c5: Pop(3)
0x3c6: Return(); Pop(0)

0x3c7: Push((int) 32026)
0x3c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3ca: PushEmpty(string)
0x3cb: Stack[-1] = "Threat"
0x3cc: Call2 0x12b

0x3cd: Pop(1)
0x3ce: Push((int) 530725)
0x3cf: @@ SetMessage(Stack[-1])
0x3d0: Pop(1)
0x3d1: @@ ClearReplies()
0x3d2: Pop(0)
0x3d3: Push((int) 530726)
0x3d4: Push((int) 32029)
0x3d5: Push((int) 32027)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: Return(); Pop(0)

0x3d9: Push((int) 32029)
0x3da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3dc: PushEmpty(string)
0x3dd: Stack[-1] = "Threat"
0x3de: Call2 0x12b

0x3df: Pop(1)
0x3e0: Push((int) 530728)
0x3e1: @@ SetMessage(Stack[-1])
0x3e2: Pop(1)
0x3e3: @@ ClearReplies()
0x3e4: Pop(0)
0x3e5: Push((int) 530729)
0x3e6: Push((int) 32017)
0x3e7: Push((int) 32030)
0x3e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e9: Pop(3)
0x3ea: Push((int) 530730)
0x3eb: Push((int) -1)
0x3ec: Push((int) 32031)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Return(); Pop(0)

0x3f0: Push((int) 32017)
0x3f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3f3: PushEmpty(string)
0x3f4: Stack[-1] = "Threat"
0x3f5: Call2 0x12b

0x3f6: Pop(1)
0x3f7: Push((int) 530716)
0x3f8: @@ SetMessage(Stack[-1])
0x3f9: Pop(1)
0x3fa: @@ ClearReplies()
0x3fb: Pop(0)
0x3fc: Push((int) 530717)
0x3fd: Push((int) 32019)
0x3fe: Push((int) 32018)
0x3ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(3)
0x401: Return(); Pop(0)

0x402: Push((int) 32019)
0x403: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x405: PushEmpty(string)
0x406: Stack[-1] = "Neutral"
0x407: Call2 0x12b

0x408: Pop(1)
0x409: Push((int) 530718)
0x40a: @@ SetMessage(Stack[-1])
0x40b: Pop(1)
0x40c: @@ ClearReplies()
0x40d: Pop(0)
0x40e: Push((int) 521346)
0x40f: Push((int) -1)
0x410: Push((int) 22533)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Return(); Pop(0)

0x414: Push((int) 29681)
0x415: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x417: PushEmpty(string)
0x418: Stack[-1] = "Threat"
0x419: Call2 0x12b

0x41a: Pop(1)
0x41b: Push((int) 528311)
0x41c: @@ SetMessage(Stack[-1])
0x41d: Pop(1)
0x41e: @@ ClearReplies()
0x41f: Pop(0)
0x420: Push((int) 528312)
0x421: Push((int) 29683)
0x422: Push((int) 29682)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: Push((int) 530693)
0x426: Push((int) 29683)
0x427: Push((int) 31985)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Return(); Pop(0)

0x42b: Push((int) 29683)
0x42c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x42e: PushEmpty(string)
0x42f: Stack[-1] = "Isee"
0x430: Call2 0x12b

0x431: Pop(1)
0x432: Push((int) 528313)
0x433: @@ SetMessage(Stack[-1])
0x434: Pop(1)
0x435: @@ ClearReplies()
0x436: Pop(0)
0x437: Push((int) 528314)
0x438: Push((int) 29685)
0x439: Push((int) 29684)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Push((int) 530694)
0x43d: Push((int) 29685)
0x43e: Push((int) 31986)
0x43f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: Return(); Pop(0)

0x442: Push((int) 29685)
0x443: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x445: PushEmpty(string)
0x446: Stack[-1] = "Isee"
0x447: Call2 0x12b

0x448: Pop(1)
0x449: Push((int) 528315)
0x44a: @@ SetMessage(Stack[-1])
0x44b: Pop(1)
0x44c: @@ ClearReplies()
0x44d: Pop(0)
0x44e: Push((int) 528316)
0x44f: Push((int) 29687)
0x450: Push((int) 29686)
0x451: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: Push((int) 530695)
0x454: Push((int) 29687)
0x455: Push((int) 31988)
0x456: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x457: Pop(3)
0x458: Return(); Pop(0)

0x459: Push((int) 29687)
0x45a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x45c: PushEmpty(string)
0x45d: Stack[-1] = "Isee"
0x45e: Call2 0x12b

0x45f: Pop(1)
0x460: Push((int) 528317)
0x461: @@ SetMessage(Stack[-1])
0x462: Pop(1)
0x463: @@ ClearReplies()
0x464: Pop(0)
0x465: Push((int) 528318)
0x466: Push((int) 29689)
0x467: Push((int) 29688)
0x468: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x469: Pop(3)
0x46a: Push((int) 530696)
0x46b: Push((int) 31991)
0x46c: Push((int) 31990)
0x46d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46e: Pop(3)
0x46f: Return(); Pop(0)

0x470: Push((int) 31991)
0x471: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x473: PushEmpty(string)
0x474: Stack[-1] = "Threat"
0x475: Call2 0x12b

0x476: Pop(1)
0x477: Push((int) 530697)
0x478: @@ SetMessage(Stack[-1])
0x479: Pop(1)
0x47a: @@ ClearReplies()
0x47b: Pop(0)
0x47c: Push((int) 530698)
0x47d: Push((int) 29689)
0x47e: Push((int) 31992)
0x47f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(3)
0x481: Return(); Pop(0)

0x482: Push((int) 29689)
0x483: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x485: PushEmpty(string)
0x486: Stack[-1] = "Threat"
0x487: Call2 0x12b

0x488: Pop(1)
0x489: Push((int) 528319)
0x48a: @@ SetMessage(Stack[-1])
0x48b: Pop(1)
0x48c: @@ ClearReplies()
0x48d: Pop(0)
0x48e: Push((int) 528320)
0x48f: Push((int) 29691)
0x490: Push((int) 29690)
0x491: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x492: Pop(3)
0x493: Push((int) 530699)
0x494: Push((int) 29691)
0x495: Push((int) 31995)
0x496: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x497: Pop(3)
0x498: Return(); Pop(0)

0x499: Push((int) 29691)
0x49a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x49c: PushEmpty(string)
0x49d: Stack[-1] = "Threat"
0x49e: Call2 0x12b

0x49f: Pop(1)
0x4a0: Push((int) 528321)
0x4a1: @@ SetMessage(Stack[-1])
0x4a2: Pop(1)
0x4a3: @@ ClearReplies()
0x4a4: Pop(0)
0x4a5: Push((int) 528322)
0x4a6: Push((int) 29693)
0x4a7: Push((int) 29692)
0x4a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a9: Pop(3)
0x4aa: Push((int) 530704)
0x4ab: Push((int) 29693)
0x4ac: Push((int) 32001)
0x4ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(3)
0x4af: Return(); Pop(0)

0x4b0: Push((int) 29693)
0x4b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4b3: PushEmpty(string)
0x4b4: Stack[-1] = "Confusion"
0x4b5: Call2 0x12b

0x4b6: Pop(1)
0x4b7: Push((int) 528323)
0x4b8: @@ SetMessage(Stack[-1])
0x4b9: Pop(1)
0x4ba: @@ ClearReplies()
0x4bb: Pop(0)
0x4bc: Push((int) 530700)
0x4bd: Push((int) 31998)
0x4be: Push((int) 31997)
0x4bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c0: Pop(3)
0x4c1: Push((int) 530705)
0x4c2: Push((int) 31998)
0x4c3: Push((int) 32003)
0x4c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c5: Pop(3)
0x4c6: Return(); Pop(0)

0x4c7: Push((int) 31998)
0x4c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4ca: PushEmpty(string)
0x4cb: Stack[-1] = "Confusion"
0x4cc: Call2 0x12b

0x4cd: Pop(1)
0x4ce: Push((int) 530701)
0x4cf: @@ SetMessage(Stack[-1])
0x4d0: Pop(1)
0x4d1: @@ ClearReplies()
0x4d2: Pop(0)
0x4d3: Push((int) 530702)
0x4d4: Push((int) 32000)
0x4d5: Push((int) 31999)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Push((int) 530710)
0x4d9: Push((int) 32000)
0x4da: Push((int) 32008)
0x4db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(3)
0x4dd: Return(); Pop(0)

0x4de: Push((int) 32000)
0x4df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "Confusion"
0x4e3: Call2 0x12b

0x4e4: Pop(1)
0x4e5: Push((int) 530703)
0x4e6: @@ SetMessage(Stack[-1])
0x4e7: Pop(1)
0x4e8: @@ ClearReplies()
0x4e9: Pop(0)
0x4ea: Push((int) 530706)
0x4eb: Push((int) 32005)
0x4ec: Push((int) 32004)
0x4ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ee: Pop(3)
0x4ef: Push((int) 530711)
0x4f0: Push((int) 32005)
0x4f1: Push((int) 32010)
0x4f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f3: Pop(3)
0x4f4: Return(); Pop(0)

0x4f5: Push((int) 32005)
0x4f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f7: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x4f8: PushEmpty(string)
0x4f9: Stack[-1] = "Confusion"
0x4fa: Call2 0x12b

0x4fb: Pop(1)
0x4fc: Push((int) 530707)
0x4fd: @@ SetMessage(Stack[-1])
0x4fe: Pop(1)
0x4ff: @@ ClearReplies()
0x500: Pop(0)
0x501: Push((int) 530708)
0x502: Push((int) 32007)
0x503: Push((int) 32006)
0x504: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x505: Pop(3)
0x506: Push((int) 530712)
0x507: Push((int) 32007)
0x508: Push((int) 32011)
0x509: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50a: Pop(3)
0x50b: Return(); Pop(0)

0x50c: Push((int) 32007)
0x50d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x50f: PushEmpty(string)
0x510: Stack[-1] = "Confusion"
0x511: Call2 0x12b

0x512: Pop(1)
0x513: Push((int) 530709)
0x514: @@ SetMessage(Stack[-1])
0x515: Pop(1)
0x516: @@ ClearReplies()
0x517: Pop(0)
0x518: Push((int) 521013)
0x519: Push((int) -1)
0x51a: Push((int) 22226)
0x51b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51c: Pop(3)
0x51d: Return(); Pop(0)

0x51e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x51f: PushEmpty(bool)
0x520: Call2 0x1227

0x521: Pop(0)
0x522: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x523: @ lshStopAnimation()
0x524: Pop(0)
0x525: GOTO 0x528

0x526: @ StopAnimation()
0x527: Pop(0)
0x528: Return(); Pop(0)

0x529: GOTO 0x142

0x52a: Return(); Pop(0)

0x52b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x52c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x52d: PushEmpty(bool, object, float)
0x52e: Stack[-2] = Stack[-12]
0x52f: Stack[-1] = (float) 70.0
0x530: Call2 0x1086

0x531: Pop(2)
0x532: Pop(1); Push((bool) Stack[-1] == 0)
0x533: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x534: Stack[-10] = (int) -2
0x535: Return(); Pop(8)

0x536: @ CreateDialog(Stack[-4])
0x537: Pop(0)
0x538: PushEmpty(int)
0x539: Call2 0x1221

0x53a: Pop(0)
0x53b: @@ SetNPCName(Stack[-1])
0x53c: Pop(1)
0x53d: PushEmpty(int)
0x53e: Call2 0x121f

0x53f: Pop(0)
0x540: @@ SetNPCDescription(Stack[-1])
0x541: Pop(1)
0x542: PushEmpty(string)
0x543: Call2 0x1223

0x544: Pop(0)
0x545: @@ SetPhoto(Stack[-1])
0x546: Pop(1)
0x547: PushEmpty(string)
0x548: Call2 0x1225

0x549: Pop(0)
0x54a: @@ SetPhoto2(Stack[-1])
0x54b: Pop(1)
0x54c: PushEmpty(int)
0x54d: Call2 0x14c9

0x54e: Pop(0)
0x54f: @@ SetPlayerName(Stack[-1])
0x550: Pop(1)
0x551: Stack[-2] = (int) -1
0x552: @ IsOverrideActive(Stack[-3])
0x553: Pop(0)
0x554: Push(Stack[-3])
0x555: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x556: Stack[-10] = (int) -2
0x557: Return(); Pop(8)

0x558: @ DoDialog(Stack[-4])
0x559: Pop(0)
0x55a: PushEmpty(bool, object)
0x55b: PushEmpty(object)
0x55c: Call2 0x119c

0x55d: Stack[-2] = Stack[-1]
0x55e: Pop(1)
0x55f: Call2 0x10dd

0x560: Pop(2)
0x561: PushEmpty(object, object)
0x562: Stack[-2] = Stack[-11]
0x563: Stack[-1] = Stack[-6]
0x564: Push(-2, 4); TaskCall(3)
0x565: Call2 0x57c

0x566: Pop(-2, 4); TaskReturn
0x567: Pop(2)
0x568: @@ IsDialogEnd(Stack[-1])
0x569: Pop(0)
0x56a: Pop(0); Push((bool) Stack[-1] == 0)
0x56b: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56c: @ sync()
0x56d: Pop(0)
0x56e: @@ IsDialogEnd(Stack[-1])
0x56f: Pop(0)
0x570: GOTO 0x56a

0x571: PushEmpty(object)
0x572: Stack[-1] = Stack[-10]
0x573: Call2 0x10cb

0x574: Pop(1)
0x575: @ StopDialog(Stack[-4])
0x576: Pop(0)
0x577: @@ GetReturnValue(Stack[-2])
0x578: Pop(0)
0x579: Stack[-10] = Stack[-2]
0x57a: Return(); Pop(8)

0x57b: Stack[-4] = 0
0x57c: PushEmpty()
0x57d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x57e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x57f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x580: Push((int) 1)
0x581: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x582: PushEmpty(bool, object)
0x583: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x584: Call2 0x132c

0x585: Pop(1)
0x586: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x587: PushEmpty(object, object)
0x588: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x589: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58a: Call2 0x1290

0x58b: Pop(2)
0x58c: PushEmpty(string)
0x58d: Stack[-1] = "Threat"
0x58e: Call2 0x5fb

0x58f: Pop(1)
0x590: Push((int) 521373)
0x591: @@ SetMessage(Stack[-1])
0x592: Pop(1)
0x593: @@ ClearReplies()
0x594: Pop(0)
0x595: Push((int) 530766)
0x596: Push((int) 32077)
0x597: Push((int) 32076)
0x598: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x599: Pop(3)
0x59a: Push((int) 530781)
0x59b: Push((int) 32077)
0x59c: Push((int) 32091)
0x59d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59e: Pop(3)
0x59f: GOTO 0x5dd

0x5a0: PushEmpty(string)
0x5a1: Stack[-1] = "Neutral"
0x5a2: Call2 0x5fb

0x5a3: Pop(1)
0x5a4: Push((int) 521376)
0x5a5: @@ SetMessage(Stack[-1])
0x5a6: Pop(1)
0x5a7: @@ ClearReplies()
0x5a8: Pop(0)
0x5a9: PushEmpty(bool, object)
0x5aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ab: Call2 0x1338

0x5ac: Pop(1)
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5ae: Push((int) 521377)
0x5af: Push((int) 22556)
0x5b0: Push((int) 22555)
0x5b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b2: Pop(3)
0x5b3: PushEmpty(bool, object)
0x5b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b5: Call2 0x1344

0x5b6: Pop(1)
0x5b7: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5b8: Push((int) 521436)
0x5b9: Push((int) 22615)
0x5ba: Push((int) 22614)
0x5bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bc: Pop(3)
0x5bd: PushEmpty(bool)
0x5be: Stack[-1] = (bool) 0
0x5bf: PushEmpty(bool, object)
0x5c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5c1: Call2 0x1350

0x5c2: Pop(1)
0x5c3: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c4: PushEmpty(bool, object)
0x5c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5c6: Call2 0x1372

0x5c7: Pop(1)
0x5c8: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c9: Stack[-1] = (bool) 1
0x5ca: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cb: Push((int) 521510)
0x5cc: Push((int) 22672)
0x5cd: Push((int) 22671)
0x5ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cf: Pop(3)
0x5d0: Push((int) 521380)
0x5d1: Push((int) -1)
0x5d2: Push((int) 22558)
0x5d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d4: Pop(3)
0x5d5: Push((int) 530775)
0x5d6: Push((int) -1)
0x5d7: Push((int) 32085)
0x5d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d9: Pop(3)
0x5da: GOTO 0x5dd

0x5db: Return(); Pop(0)

0x5dc: GOTO 0x580

0x5dd: PushEmpty(bool)
0x5de: Call2 0x1227

0x5df: Pop(0)
0x5e0: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5e1: @ lshWaitForAnimEnd()
0x5e2: Pop(0)
0x5e3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e5: GOTO 0x5eb

0x5e6: PushEmpty(string)
0x5e7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5e8: Call2 0x1167

0x5e9: Pop(1)
0x5ea: GOTO 0x5e1

0x5eb: GOTO 0x5fa

0x5ec: Push("all")
0x5ed: Push("idle")
0x5ee: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ef: Pop(2)
0x5f0: @ WaitForAnimEnd()
0x5f1: Pop(0)
0x5f2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f4: GOTO 0x5fa

0x5f5: Push("all")
0x5f6: Push("idle")
0x5f7: @ PlayAnimation(Stack[-2], Stack[-1])
0x5f8: Pop(2)
0x5f9: GOTO 0x5f0

0x5fa: Return(); Pop(0)

0x5fb: PushEmpty()
0x5fc: PushEmpty(bool)
0x5fd: Call2 0x1227

0x5fe: Pop(0)
0x5ff: Pop(1); Push((bool) Stack[-1] == 0)
0x600: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x601: Return(); Pop(0)

0x602: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x603: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x604: Return(); Pop(0)

0x605: PushEmpty(string, bool)
0x606: Stack[-2] = Stack[-3]
0x607: Push("")
0x608: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x609: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x60a: Stack[-1] = (bool) 0
0x60b: GOTO 0x60d

0x60c: Stack[-1] = (bool) 1
0x60d: Call2 0x1177

0x60e: Pop(2)
0x60f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x610: Return(); Pop(0)

0x611: PushEmpty()
0x612: Push((int) 1)
0x613: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x614: PushEmpty()
0x615: Call2 0x1195

0x616: Pop(0)
0x617: Push((int) 22552)
0x618: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61a: PushEmpty(object, object)
0x61b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61d: Call2 0x1284

0x61e: Pop(2)
0x61f: Push((int) 22557)
0x620: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x621: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x622: PushEmpty(object, object)
0x623: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x624: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x625: Call2 0x1284

0x626: Pop(2)
0x627: Push((int) 22616)
0x628: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x629: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62a: PushEmpty(object, object)
0x62b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x62c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62d: Call2 0x1296

0x62e: Pop(2)
0x62f: Push((int) 22671)
0x630: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x632: PushEmpty(object, object)
0x633: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x634: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x635: Call2 0x12a0

0x636: Pop(2)
0x637: Push((int) 22551)
0x638: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x63a: PushEmpty(bool, object)
0x63b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x63c: Call2 0x132c

0x63d: Pop(1)
0x63e: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x63f: PushEmpty(object, object)
0x640: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x641: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x642: Call2 0x1290

0x643: Pop(2)
0x644: PushEmpty(string)
0x645: Stack[-1] = "Threat"
0x646: Call2 0x5fb

0x647: Pop(1)
0x648: Push((int) 521373)
0x649: @@ SetMessage(Stack[-1])
0x64a: Pop(1)
0x64b: @@ ClearReplies()
0x64c: Pop(0)
0x64d: Push((int) 530766)
0x64e: Push((int) 32077)
0x64f: Push((int) 32076)
0x650: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x651: Pop(3)
0x652: Push((int) 530781)
0x653: Push((int) 32077)
0x654: Push((int) 32091)
0x655: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x656: Pop(3)
0x657: Return(); Pop(0)

0x658: PushEmpty(string)
0x659: Stack[-1] = "Neutral"
0x65a: Call2 0x5fb

0x65b: Pop(1)
0x65c: Push((int) 521376)
0x65d: @@ SetMessage(Stack[-1])
0x65e: Pop(1)
0x65f: @@ ClearReplies()
0x660: Pop(0)
0x661: PushEmpty(bool, object)
0x662: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x663: Call2 0x1338

0x664: Pop(1)
0x665: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x666: Push((int) 521377)
0x667: Push((int) 22556)
0x668: Push((int) 22555)
0x669: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66a: Pop(3)
0x66b: PushEmpty(bool, object)
0x66c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66d: Call2 0x1344

0x66e: Pop(1)
0x66f: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x670: Push((int) 521436)
0x671: Push((int) 22615)
0x672: Push((int) 22614)
0x673: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x674: Pop(3)
0x675: PushEmpty(bool)
0x676: Stack[-1] = (bool) 0
0x677: PushEmpty(bool, object)
0x678: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x679: Call2 0x1350

0x67a: Pop(1)
0x67b: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x67c: PushEmpty(bool, object)
0x67d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x67e: Call2 0x1372

0x67f: Pop(1)
0x680: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x681: Stack[-1] = (bool) 1
0x682: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x683: Push((int) 521510)
0x684: Push((int) 22672)
0x685: Push((int) 22671)
0x686: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x687: Pop(3)
0x688: Push((int) 521380)
0x689: Push((int) -1)
0x68a: Push((int) 22558)
0x68b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68c: Pop(3)
0x68d: Push((int) 530775)
0x68e: Push((int) -1)
0x68f: Push((int) 32085)
0x690: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x691: Pop(3)
0x692: Return(); Pop(0)

0x693: Push((int) 22672)
0x694: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x695: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x696: PushEmpty(string)
0x697: Stack[-1] = "Arrogance"
0x698: Call2 0x5fb

0x699: Pop(1)
0x69a: Push((int) 521511)
0x69b: @@ SetMessage(Stack[-1])
0x69c: Pop(1)
0x69d: @@ ClearReplies()
0x69e: Pop(0)
0x69f: Push((int) 521512)
0x6a0: Push((int) 32155)
0x6a1: Push((int) 22673)
0x6a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a3: Pop(3)
0x6a4: Push((int) 530845)
0x6a5: Push((int) 32157)
0x6a6: Push((int) 32159)
0x6a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a8: Pop(3)
0x6a9: Return(); Pop(0)

0x6aa: Push((int) 32155)
0x6ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ac: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6ad: PushEmpty(string)
0x6ae: Stack[-1] = "Arrogance"
0x6af: Call2 0x5fb

0x6b0: Pop(1)
0x6b1: Push((int) 530841)
0x6b2: @@ SetMessage(Stack[-1])
0x6b3: Pop(1)
0x6b4: @@ ClearReplies()
0x6b5: Pop(0)
0x6b6: Push((int) 530842)
0x6b7: Push((int) 32157)
0x6b8: Push((int) 32156)
0x6b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ba: Pop(3)
0x6bb: Push((int) 530846)
0x6bc: Push((int) 32166)
0x6bd: Push((int) 32161)
0x6be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bf: Pop(3)
0x6c0: Return(); Pop(0)

0x6c1: Push((int) 32157)
0x6c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6c4: PushEmpty(string)
0x6c5: Stack[-1] = "Threat"
0x6c6: Call2 0x5fb

0x6c7: Pop(1)
0x6c8: Push((int) 530843)
0x6c9: @@ SetMessage(Stack[-1])
0x6ca: Pop(1)
0x6cb: @@ ClearReplies()
0x6cc: Pop(0)
0x6cd: Push((int) 530844)
0x6ce: Push((int) 32163)
0x6cf: Push((int) 32158)
0x6d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d1: Pop(3)
0x6d2: Push((int) 530847)
0x6d3: Push((int) 32166)
0x6d4: Push((int) 32162)
0x6d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d6: Pop(3)
0x6d7: Return(); Pop(0)

0x6d8: Push((int) 32163)
0x6d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6da: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6db: PushEmpty(string)
0x6dc: Stack[-1] = "Threat"
0x6dd: Call2 0x5fb

0x6de: Pop(1)
0x6df: Push((int) 530848)
0x6e0: @@ SetMessage(Stack[-1])
0x6e1: Pop(1)
0x6e2: @@ ClearReplies()
0x6e3: Pop(0)
0x6e4: Push((int) 530849)
0x6e5: Push((int) 32166)
0x6e6: Push((int) 32164)
0x6e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e8: Pop(3)
0x6e9: Push((int) 530850)
0x6ea: Push((int) 32166)
0x6eb: Push((int) 32165)
0x6ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ed: Pop(3)
0x6ee: Return(); Pop(0)

0x6ef: Push((int) 32166)
0x6f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x6f2: PushEmpty(string)
0x6f3: Stack[-1] = "Threat"
0x6f4: Call2 0x5fb

0x6f5: Pop(1)
0x6f6: Push((int) 530851)
0x6f7: @@ SetMessage(Stack[-1])
0x6f8: Pop(1)
0x6f9: @@ ClearReplies()
0x6fa: Pop(0)
0x6fb: Push((int) 530852)
0x6fc: Push((int) -1)
0x6fd: Push((int) 32170)
0x6fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ff: Pop(3)
0x700: Push((int) 530853)
0x701: Push((int) -1)
0x702: Push((int) 32171)
0x703: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x704: Pop(3)
0x705: Return(); Pop(0)

0x706: Push((int) 22615)
0x707: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x709: PushEmpty(string)
0x70a: Stack[-1] = "Arrogance"
0x70b: Call2 0x5fb

0x70c: Pop(1)
0x70d: Push((int) 521437)
0x70e: @@ SetMessage(Stack[-1])
0x70f: Pop(1)
0x710: @@ ClearReplies()
0x711: Pop(0)
0x712: Push((int) 530824)
0x713: Push((int) 32136)
0x714: Push((int) 32135)
0x715: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x716: Pop(3)
0x717: Return(); Pop(0)

0x718: Push((int) 32136)
0x719: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x71b: PushEmpty(string)
0x71c: Stack[-1] = "Arrogance"
0x71d: Call2 0x5fb

0x71e: Pop(1)
0x71f: Push((int) 530825)
0x720: @@ SetMessage(Stack[-1])
0x721: Pop(1)
0x722: @@ ClearReplies()
0x723: Pop(0)
0x724: Push((int) 530826)
0x725: Push((int) 32141)
0x726: Push((int) 32137)
0x727: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x728: Pop(3)
0x729: Return(); Pop(0)

0x72a: Push((int) 32141)
0x72b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72c: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x72d: PushEmpty(string)
0x72e: Stack[-1] = "Confusion"
0x72f: Call2 0x5fb

0x730: Pop(1)
0x731: Push((int) 530830)
0x732: @@ SetMessage(Stack[-1])
0x733: Pop(1)
0x734: @@ ClearReplies()
0x735: Pop(0)
0x736: Push((int) 530831)
0x737: Push((int) 32143)
0x738: Push((int) 32142)
0x739: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73a: Pop(3)
0x73b: Push((int) 530834)
0x73c: Push((int) 32150)
0x73d: Push((int) 32145)
0x73e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73f: Pop(3)
0x740: Return(); Pop(0)

0x741: Push((int) 32150)
0x742: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x743: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x744: PushEmpty(string)
0x745: Stack[-1] = "Neutral"
0x746: Call2 0x5fb

0x747: Pop(1)
0x748: Push((int) 530838)
0x749: @@ SetMessage(Stack[-1])
0x74a: Pop(1)
0x74b: @@ ClearReplies()
0x74c: Pop(0)
0x74d: Push((int) 530839)
0x74e: Push((int) 32143)
0x74f: Push((int) 32151)
0x750: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x751: Pop(3)
0x752: Return(); Pop(0)

0x753: Push((int) 32143)
0x754: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x755: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x756: PushEmpty(string)
0x757: Stack[-1] = "Confusion"
0x758: Call2 0x5fb

0x759: Pop(1)
0x75a: Push((int) 530832)
0x75b: @@ SetMessage(Stack[-1])
0x75c: Pop(1)
0x75d: @@ ClearReplies()
0x75e: Pop(0)
0x75f: Push((int) 530833)
0x760: Push((int) 32138)
0x761: Push((int) 32144)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: Return(); Pop(0)

0x765: Push((int) 32138)
0x766: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x768: PushEmpty(string)
0x769: Stack[-1] = "Neutral"
0x76a: Call2 0x5fb

0x76b: Pop(1)
0x76c: Push((int) 530827)
0x76d: @@ SetMessage(Stack[-1])
0x76e: Pop(1)
0x76f: @@ ClearReplies()
0x770: Pop(0)
0x771: Push((int) 530828)
0x772: Push((int) 32140)
0x773: Push((int) 32139)
0x774: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x775: Pop(3)
0x776: Push((int) 530840)
0x777: Push((int) 32140)
0x778: Push((int) 32153)
0x779: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77a: Pop(3)
0x77b: Return(); Pop(0)

0x77c: Push((int) 32140)
0x77d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x77f: PushEmpty(string)
0x780: Stack[-1] = "Neutral"
0x781: Call2 0x5fb

0x782: Pop(1)
0x783: Push((int) 530829)
0x784: @@ SetMessage(Stack[-1])
0x785: Pop(1)
0x786: @@ ClearReplies()
0x787: Pop(0)
0x788: Push((int) 521438)
0x789: Push((int) -1)
0x78a: Push((int) 22616)
0x78b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78c: Pop(3)
0x78d: Return(); Pop(0)

0x78e: Push((int) 22556)
0x78f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x791: PushEmpty(string)
0x792: Stack[-1] = "Neutral"
0x793: Call2 0x5fb

0x794: Pop(1)
0x795: Push((int) 521378)
0x796: @@ SetMessage(Stack[-1])
0x797: Pop(1)
0x798: @@ ClearReplies()
0x799: Pop(0)
0x79a: Push((int) 530790)
0x79b: Push((int) 32104)
0x79c: Push((int) 32103)
0x79d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79e: Pop(3)
0x79f: Return(); Pop(0)

0x7a0: Push((int) 32104)
0x7a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a2: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7a3: PushEmpty(string)
0x7a4: Stack[-1] = "Neutral"
0x7a5: Call2 0x5fb

0x7a6: Pop(1)
0x7a7: Push((int) 530791)
0x7a8: @@ SetMessage(Stack[-1])
0x7a9: Pop(1)
0x7aa: @@ ClearReplies()
0x7ab: Pop(0)
0x7ac: Push((int) 530792)
0x7ad: Push((int) 32106)
0x7ae: Push((int) 32105)
0x7af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b0: Pop(3)
0x7b1: Return(); Pop(0)

0x7b2: Push((int) 32106)
0x7b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b4: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7b5: PushEmpty(string)
0x7b6: Stack[-1] = "Isee"
0x7b7: Call2 0x5fb

0x7b8: Pop(1)
0x7b9: Push((int) 530793)
0x7ba: @@ SetMessage(Stack[-1])
0x7bb: Pop(1)
0x7bc: @@ ClearReplies()
0x7bd: Pop(0)
0x7be: Push((int) 530794)
0x7bf: Push((int) 32108)
0x7c0: Push((int) 32107)
0x7c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c2: Pop(3)
0x7c3: Return(); Pop(0)

0x7c4: Push((int) 32108)
0x7c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c6: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7c7: PushEmpty(string)
0x7c8: Stack[-1] = "Neutral"
0x7c9: Call2 0x5fb

0x7ca: Pop(1)
0x7cb: Push((int) 530795)
0x7cc: @@ SetMessage(Stack[-1])
0x7cd: Pop(1)
0x7ce: @@ ClearReplies()
0x7cf: Pop(0)
0x7d0: Push((int) 521379)
0x7d1: Push((int) -1)
0x7d2: Push((int) 22557)
0x7d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d4: Pop(3)
0x7d5: Return(); Pop(0)

0x7d6: Push((int) 32077)
0x7d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7d9: PushEmpty(string)
0x7da: Stack[-1] = "Threat"
0x7db: Call2 0x5fb

0x7dc: Pop(1)
0x7dd: Push((int) 530767)
0x7de: @@ SetMessage(Stack[-1])
0x7df: Pop(1)
0x7e0: @@ ClearReplies()
0x7e1: Pop(0)
0x7e2: Push((int) 530768)
0x7e3: Push((int) 32079)
0x7e4: Push((int) 32078)
0x7e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e6: Pop(3)
0x7e7: Push((int) 530787)
0x7e8: Push((int) 32100)
0x7e9: Push((int) 32099)
0x7ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7eb: Pop(3)
0x7ec: Return(); Pop(0)

0x7ed: Push((int) 32100)
0x7ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7f0: PushEmpty(string)
0x7f1: Stack[-1] = "Neutral"
0x7f2: Call2 0x5fb

0x7f3: Pop(1)
0x7f4: Push((int) 530788)
0x7f5: @@ SetMessage(Stack[-1])
0x7f6: Pop(1)
0x7f7: @@ ClearReplies()
0x7f8: Pop(0)
0x7f9: Push((int) 530789)
0x7fa: Push((int) 32079)
0x7fb: Push((int) 32101)
0x7fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fd: Pop(3)
0x7fe: Return(); Pop(0)

0x7ff: Push((int) 32079)
0x800: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x801: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x802: PushEmpty(string)
0x803: Stack[-1] = "Neutral"
0x804: Call2 0x5fb

0x805: Pop(1)
0x806: Push((int) 530769)
0x807: @@ SetMessage(Stack[-1])
0x808: Pop(1)
0x809: @@ ClearReplies()
0x80a: Pop(0)
0x80b: Push((int) 530770)
0x80c: Push((int) 32081)
0x80d: Push((int) 32080)
0x80e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80f: Pop(3)
0x810: Return(); Pop(0)

0x811: Push((int) 32081)
0x812: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x814: PushEmpty(string)
0x815: Stack[-1] = "Neutral"
0x816: Call2 0x5fb

0x817: Pop(1)
0x818: Push((int) 530771)
0x819: @@ SetMessage(Stack[-1])
0x81a: Pop(1)
0x81b: @@ ClearReplies()
0x81c: Pop(0)
0x81d: Push((int) 530772)
0x81e: Push((int) 32083)
0x81f: Push((int) 32082)
0x820: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x821: Pop(3)
0x822: Return(); Pop(0)

0x823: Push((int) 32083)
0x824: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x825: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x826: PushEmpty(string)
0x827: Stack[-1] = "Confusion"
0x828: Call2 0x5fb

0x829: Pop(1)
0x82a: Push((int) 530773)
0x82b: @@ SetMessage(Stack[-1])
0x82c: Pop(1)
0x82d: @@ ClearReplies()
0x82e: Pop(0)
0x82f: Push((int) 530774)
0x830: Push((int) 32086)
0x831: Push((int) 32084)
0x832: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x833: Pop(3)
0x834: Push((int) 530782)
0x835: Push((int) 32086)
0x836: Push((int) 32093)
0x837: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x838: Pop(3)
0x839: Return(); Pop(0)

0x83a: Push((int) 32086)
0x83b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83c: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x83d: PushEmpty(string)
0x83e: Stack[-1] = "Confusion"
0x83f: Call2 0x5fb

0x840: Pop(1)
0x841: Push((int) 530776)
0x842: @@ SetMessage(Stack[-1])
0x843: Pop(1)
0x844: @@ ClearReplies()
0x845: Pop(0)
0x846: Push((int) 530777)
0x847: Push((int) 32088)
0x848: Push((int) 32087)
0x849: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84a: Pop(3)
0x84b: Return(); Pop(0)

0x84c: Push((int) 32088)
0x84d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84e: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x84f: PushEmpty(string)
0x850: Stack[-1] = "Isee"
0x851: Call2 0x5fb

0x852: Pop(1)
0x853: Push((int) 530778)
0x854: @@ SetMessage(Stack[-1])
0x855: Pop(1)
0x856: @@ ClearReplies()
0x857: Pop(0)
0x858: Push((int) 530779)
0x859: Push((int) 32090)
0x85a: Push((int) 32089)
0x85b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85c: Pop(3)
0x85d: Return(); Pop(0)

0x85e: Push((int) 32090)
0x85f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x860: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x861: PushEmpty(string)
0x862: Stack[-1] = "Isee"
0x863: Call2 0x5fb

0x864: Pop(1)
0x865: Push((int) 530780)
0x866: @@ SetMessage(Stack[-1])
0x867: Pop(1)
0x868: @@ ClearReplies()
0x869: Pop(0)
0x86a: Push((int) 530783)
0x86b: Push((int) 32096)
0x86c: Push((int) 32095)
0x86d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86e: Pop(3)
0x86f: Return(); Pop(0)

0x870: Push((int) 32096)
0x871: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x872: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x873: PushEmpty(string)
0x874: Stack[-1] = "Isee"
0x875: Call2 0x5fb

0x876: Pop(1)
0x877: Push((int) 530784)
0x878: @@ SetMessage(Stack[-1])
0x879: Pop(1)
0x87a: @@ ClearReplies()
0x87b: Pop(0)
0x87c: Push((int) 530796)
0x87d: Push((int) 32110)
0x87e: Push((int) 32109)
0x87f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x880: Pop(3)
0x881: Push((int) 521375)
0x882: Push((int) 32113)
0x883: Push((int) 22553)
0x884: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x885: Pop(3)
0x886: Return(); Pop(0)

0x887: Push((int) 32113)
0x888: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x889: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x88a: PushEmpty(string)
0x88b: Stack[-1] = "Confusion"
0x88c: Call2 0x5fb

0x88d: Pop(1)
0x88e: Push((int) 530800)
0x88f: @@ SetMessage(Stack[-1])
0x890: Pop(1)
0x891: @@ ClearReplies()
0x892: Pop(0)
0x893: Push((int) 530801)
0x894: Push((int) -1)
0x895: Push((int) 32114)
0x896: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x897: Pop(3)
0x898: Push((int) 530802)
0x899: Push((int) -1)
0x89a: Push((int) 32115)
0x89b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89c: Pop(3)
0x89d: Return(); Pop(0)

0x89e: Push((int) 32110)
0x89f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8a1: PushEmpty(string)
0x8a2: Stack[-1] = "Threat"
0x8a3: Call2 0x5fb

0x8a4: Pop(1)
0x8a5: Push((int) 530797)
0x8a6: @@ SetMessage(Stack[-1])
0x8a7: Pop(1)
0x8a8: @@ ClearReplies()
0x8a9: Pop(0)
0x8aa: Push((int) 530798)
0x8ab: Push((int) 32112)
0x8ac: Push((int) 32111)
0x8ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ae: Pop(3)
0x8af: Return(); Pop(0)

0x8b0: Push((int) 32112)
0x8b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b2: IF (Stack[-1] == 0) GOTO 0x8c2; Pop(1)

0x8b3: PushEmpty(string)
0x8b4: Stack[-1] = "Threat"
0x8b5: Call2 0x5fb

0x8b6: Pop(1)
0x8b7: Push((int) 530799)
0x8b8: @@ SetMessage(Stack[-1])
0x8b9: Pop(1)
0x8ba: @@ ClearReplies()
0x8bb: Pop(0)
0x8bc: Push((int) 521374)
0x8bd: Push((int) -1)
0x8be: Push((int) 22552)
0x8bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c0: Pop(3)
0x8c1: Return(); Pop(0)

0x8c2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8c3: PushEmpty(bool)
0x8c4: Call2 0x1227

0x8c5: Pop(0)
0x8c6: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c7: @ lshStopAnimation()
0x8c8: Pop(0)
0x8c9: GOTO 0x8cc

0x8ca: @ StopAnimation()
0x8cb: Pop(0)
0x8cc: Return(); Pop(0)

0x8cd: GOTO 0x612

0x8ce: Return(); Pop(0)

0x8cf: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x8d0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x8d1: PushEmpty(bool, object, float)
0x8d2: Stack[-2] = Stack[-12]
0x8d3: Stack[-1] = (float) 70.0
0x8d4: Call2 0x1086

0x8d5: Pop(2)
0x8d6: Pop(1); Push((bool) Stack[-1] == 0)
0x8d7: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8d8: Stack[-10] = (int) -2
0x8d9: Return(); Pop(8)

0x8da: @ CreateDialog(Stack[-4])
0x8db: Pop(0)
0x8dc: PushEmpty(int)
0x8dd: Call2 0x1221

0x8de: Pop(0)
0x8df: @@ SetNPCName(Stack[-1])
0x8e0: Pop(1)
0x8e1: PushEmpty(int)
0x8e2: Call2 0x121f

0x8e3: Pop(0)
0x8e4: @@ SetNPCDescription(Stack[-1])
0x8e5: Pop(1)
0x8e6: PushEmpty(string)
0x8e7: Call2 0x1223

0x8e8: Pop(0)
0x8e9: @@ SetPhoto(Stack[-1])
0x8ea: Pop(1)
0x8eb: PushEmpty(string)
0x8ec: Call2 0x1225

0x8ed: Pop(0)
0x8ee: @@ SetPhoto2(Stack[-1])
0x8ef: Pop(1)
0x8f0: PushEmpty(int)
0x8f1: Call2 0x14c9

0x8f2: Pop(0)
0x8f3: @@ SetPlayerName(Stack[-1])
0x8f4: Pop(1)
0x8f5: Stack[-2] = (int) -1
0x8f6: @ IsOverrideActive(Stack[-3])
0x8f7: Pop(0)
0x8f8: Push(Stack[-3])
0x8f9: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8fa: Stack[-10] = (int) -2
0x8fb: Return(); Pop(8)

0x8fc: @ DoDialog(Stack[-4])
0x8fd: Pop(0)
0x8fe: PushEmpty(bool, object)
0x8ff: PushEmpty(object)
0x900: Call2 0x119c

0x901: Stack[-2] = Stack[-1]
0x902: Pop(1)
0x903: Call2 0x10dd

0x904: Pop(2)
0x905: PushEmpty(object, object)
0x906: Stack[-2] = Stack[-11]
0x907: Stack[-1] = Stack[-6]
0x908: Push(-2, 4); TaskCall(5)
0x909: Call2 0x920

0x90a: Pop(-2, 4); TaskReturn
0x90b: Pop(2)
0x90c: @@ IsDialogEnd(Stack[-1])
0x90d: Pop(0)
0x90e: Pop(0); Push((bool) Stack[-1] == 0)
0x90f: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x910: @ sync()
0x911: Pop(0)
0x912: @@ IsDialogEnd(Stack[-1])
0x913: Pop(0)
0x914: GOTO 0x90e

0x915: PushEmpty(object)
0x916: Stack[-1] = Stack[-10]
0x917: Call2 0x10cb

0x918: Pop(1)
0x919: @ StopDialog(Stack[-4])
0x91a: Pop(0)
0x91b: @@ GetReturnValue(Stack[-2])
0x91c: Pop(0)
0x91d: Stack[-10] = Stack[-2]
0x91e: Return(); Pop(8)

0x91f: Stack[-4] = 0
0x920: PushEmpty()
0x921: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x922: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x923: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x924: Push((int) 1)
0x925: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x926: PushEmpty(bool, object)
0x927: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x928: Call2 0x138a

0x929: Pop(1)
0x92a: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x92b: PushEmpty(object, object)
0x92c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x92e: Call2 0x12a6

0x92f: Pop(2)
0x930: PushEmpty(string)
0x931: Stack[-1] = "Neutral"
0x932: Call2 0x982

0x933: Pop(1)
0x934: Push((int) 522067)
0x935: @@ SetMessage(Stack[-1])
0x936: Pop(1)
0x937: @@ ClearReplies()
0x938: Pop(0)
0x939: Push((int) 523208)
0x93a: Push((int) 24405)
0x93b: Push((int) 24404)
0x93c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93d: Pop(3)
0x93e: Push((int) 523226)
0x93f: Push((int) 24424)
0x940: Push((int) 24423)
0x941: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(3)
0x943: Push((int) 523222)
0x944: Push((int) -1)
0x945: Push((int) 24418)
0x946: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x947: Pop(3)
0x948: GOTO 0x964

0x949: PushEmpty(string)
0x94a: Stack[-1] = "Neutral"
0x94b: Call2 0x982

0x94c: Pop(1)
0x94d: Push((int) 522071)
0x94e: @@ SetMessage(Stack[-1])
0x94f: Pop(1)
0x950: @@ ClearReplies()
0x951: Pop(0)
0x952: PushEmpty(bool, object)
0x953: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x954: Call2 0x1396

0x955: Pop(1)
0x956: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x957: Push((int) 523223)
0x958: Push((int) 24425)
0x959: Push((int) 24419)
0x95a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95b: Pop(3)
0x95c: Push((int) 522072)
0x95d: Push((int) -1)
0x95e: Push((int) 23241)
0x95f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x960: Pop(3)
0x961: GOTO 0x964

0x962: Return(); Pop(0)

0x963: GOTO 0x924

0x964: PushEmpty(bool)
0x965: Call2 0x1227

0x966: Pop(0)
0x967: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x968: @ lshWaitForAnimEnd()
0x969: Pop(0)
0x96a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x96b: IF (Stack[-1] == 0) GOTO 0x96d; Pop(1)

0x96c: GOTO 0x972

0x96d: PushEmpty(string)
0x96e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96f: Call2 0x1167

0x970: Pop(1)
0x971: GOTO 0x968

0x972: GOTO 0x981

0x973: Push("all")
0x974: Push("idle")
0x975: @ PlayAnimation(Stack[-2], Stack[-1])
0x976: Pop(2)
0x977: @ WaitForAnimEnd()
0x978: Pop(0)
0x979: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97a: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x97b: GOTO 0x981

0x97c: Push("all")
0x97d: Push("idle")
0x97e: @ PlayAnimation(Stack[-2], Stack[-1])
0x97f: Pop(2)
0x980: GOTO 0x977

0x981: Return(); Pop(0)

0x982: PushEmpty()
0x983: PushEmpty(bool)
0x984: Call2 0x1227

0x985: Pop(0)
0x986: Pop(1); Push((bool) Stack[-1] == 0)
0x987: IF (Stack[-1] == 0) GOTO 0x989; Pop(1)

0x988: Return(); Pop(0)

0x989: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98a: IF (Stack[-1] == 0) GOTO 0x98c; Pop(1)

0x98b: Return(); Pop(0)

0x98c: PushEmpty(string, bool)
0x98d: Stack[-2] = Stack[-3]
0x98e: Push("")
0x98f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x990: IF (Stack[-1] == 0) GOTO 0x993; Pop(1)

0x991: Stack[-1] = (bool) 0
0x992: GOTO 0x994

0x993: Stack[-1] = (bool) 1
0x994: Call2 0x1177

0x995: Pop(2)
0x996: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x997: Return(); Pop(0)

0x998: PushEmpty()
0x999: Push((int) 1)
0x99a: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0x99b: PushEmpty()
0x99c: Call2 0x1195

0x99d: Pop(0)
0x99e: Push((int) 24419)
0x99f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a0: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x9a1: PushEmpty(object, object)
0x9a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a4: Call2 0x12ac

0x9a5: Pop(2)
0x9a6: Push((int) 23236)
0x9a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a8: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9a9: PushEmpty(bool, object)
0x9aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ab: Call2 0x138a

0x9ac: Pop(1)
0x9ad: IF (Stack[-1] == 0) GOTO 0x9cc; Pop(1)

0x9ae: PushEmpty(object, object)
0x9af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b1: Call2 0x12a6

0x9b2: Pop(2)
0x9b3: PushEmpty(string)
0x9b4: Stack[-1] = "Neutral"
0x9b5: Call2 0x982

0x9b6: Pop(1)
0x9b7: Push((int) 522067)
0x9b8: @@ SetMessage(Stack[-1])
0x9b9: Pop(1)
0x9ba: @@ ClearReplies()
0x9bb: Pop(0)
0x9bc: Push((int) 523208)
0x9bd: Push((int) 24405)
0x9be: Push((int) 24404)
0x9bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c0: Pop(3)
0x9c1: Push((int) 523226)
0x9c2: Push((int) 24424)
0x9c3: Push((int) 24423)
0x9c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c5: Pop(3)
0x9c6: Push((int) 523222)
0x9c7: Push((int) -1)
0x9c8: Push((int) 24418)
0x9c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ca: Pop(3)
0x9cb: Return(); Pop(0)

0x9cc: PushEmpty(string)
0x9cd: Stack[-1] = "Neutral"
0x9ce: Call2 0x982

0x9cf: Pop(1)
0x9d0: Push((int) 522071)
0x9d1: @@ SetMessage(Stack[-1])
0x9d2: Pop(1)
0x9d3: @@ ClearReplies()
0x9d4: Pop(0)
0x9d5: PushEmpty(bool, object)
0x9d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d7: Call2 0x1396

0x9d8: Pop(1)
0x9d9: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9da: Push((int) 523223)
0x9db: Push((int) 24425)
0x9dc: Push((int) 24419)
0x9dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9de: Pop(3)
0x9df: Push((int) 522072)
0x9e0: Push((int) -1)
0x9e1: Push((int) 23241)
0x9e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e3: Pop(3)
0x9e4: Return(); Pop(0)

0x9e5: Push((int) 24425)
0x9e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e7: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9e8: PushEmpty(string)
0x9e9: Stack[-1] = "Confusion"
0x9ea: Call2 0x982

0x9eb: Pop(1)
0x9ec: Push((int) 523228)
0x9ed: @@ SetMessage(Stack[-1])
0x9ee: Pop(1)
0x9ef: @@ ClearReplies()
0x9f0: Pop(0)
0x9f1: Push((int) 523229)
0x9f2: Push((int) 24428)
0x9f3: Push((int) 24426)
0x9f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f5: Pop(3)
0x9f6: Return(); Pop(0)

0x9f7: Push((int) 24428)
0x9f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f9: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0x9fa: PushEmpty(string)
0x9fb: Stack[-1] = "Confusion"
0x9fc: Call2 0x982

0x9fd: Pop(1)
0x9fe: Push((int) 523231)
0x9ff: @@ SetMessage(Stack[-1])
0xa00: Pop(1)
0xa01: @@ ClearReplies()
0xa02: Pop(0)
0xa03: Push((int) 523232)
0xa04: Push((int) -1)
0xa05: Push((int) 24429)
0xa06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa07: Pop(3)
0xa08: Return(); Pop(0)

0xa09: Push((int) 24424)
0xa0a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0b: IF (Stack[-1] == 0) GOTO 0xa20; Pop(1)

0xa0c: PushEmpty(string)
0xa0d: Stack[-1] = "Arrogance"
0xa0e: Call2 0x982

0xa0f: Pop(1)
0xa10: Push((int) 523227)
0xa11: @@ SetMessage(Stack[-1])
0xa12: Pop(1)
0xa13: @@ ClearReplies()
0xa14: Pop(0)
0xa15: Push((int) 523235)
0xa16: Push((int) 24411)
0xa17: Push((int) 24433)
0xa18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa19: Pop(3)
0xa1a: Push((int) 523236)
0xa1b: Push((int) -1)
0xa1c: Push((int) 24434)
0xa1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1e: Pop(3)
0xa1f: Return(); Pop(0)

0xa20: Push((int) 24405)
0xa21: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa22: IF (Stack[-1] == 0) GOTO 0xa37; Pop(1)

0xa23: PushEmpty(string)
0xa24: Stack[-1] = "Confusion"
0xa25: Call2 0x982

0xa26: Pop(1)
0xa27: Push((int) 523209)
0xa28: @@ SetMessage(Stack[-1])
0xa29: Pop(1)
0xa2a: @@ ClearReplies()
0xa2b: Pop(0)
0xa2c: Push((int) 523210)
0xa2d: Push((int) 24409)
0xa2e: Push((int) 24406)
0xa2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa30: Pop(3)
0xa31: Push((int) 523214)
0xa32: Push((int) 24411)
0xa33: Push((int) 24410)
0xa34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa35: Pop(3)
0xa36: Return(); Pop(0)

0xa37: Push((int) 24411)
0xa38: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa39: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa3a: PushEmpty(string)
0xa3b: Stack[-1] = "Threat"
0xa3c: Call2 0x982

0xa3d: Pop(1)
0xa3e: Push((int) 523215)
0xa3f: @@ SetMessage(Stack[-1])
0xa40: Pop(1)
0xa41: @@ ClearReplies()
0xa42: Pop(0)
0xa43: Push((int) 523216)
0xa44: Push((int) 24413)
0xa45: Push((int) 24412)
0xa46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa47: Pop(3)
0xa48: Push((int) 523237)
0xa49: Push((int) 24437)
0xa4a: Push((int) 24436)
0xa4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4c: Pop(3)
0xa4d: Return(); Pop(0)

0xa4e: Push((int) 24437)
0xa4f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa50: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa51: PushEmpty(string)
0xa52: Stack[-1] = "Confusion"
0xa53: Call2 0x982

0xa54: Pop(1)
0xa55: Push((int) 523238)
0xa56: @@ SetMessage(Stack[-1])
0xa57: Pop(1)
0xa58: @@ ClearReplies()
0xa59: Pop(0)
0xa5a: Push((int) 523239)
0xa5b: Push((int) 24439)
0xa5c: Push((int) 24438)
0xa5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5e: Pop(3)
0xa5f: Return(); Pop(0)

0xa60: Push((int) 24439)
0xa61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa62: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa63: PushEmpty(string)
0xa64: Stack[-1] = "Isee"
0xa65: Call2 0x982

0xa66: Pop(1)
0xa67: Push((int) 523240)
0xa68: @@ SetMessage(Stack[-1])
0xa69: Pop(1)
0xa6a: @@ ClearReplies()
0xa6b: Pop(0)
0xa6c: Push((int) 523241)
0xa6d: Push((int) 24417)
0xa6e: Push((int) 24440)
0xa6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa70: Pop(3)
0xa71: Return(); Pop(0)

0xa72: Push((int) 24413)
0xa73: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa74: IF (Stack[-1] == 0) GOTO 0xa84; Pop(1)

0xa75: PushEmpty(string)
0xa76: Stack[-1] = "Arrogance"
0xa77: Call2 0x982

0xa78: Pop(1)
0xa79: Push((int) 523217)
0xa7a: @@ SetMessage(Stack[-1])
0xa7b: Pop(1)
0xa7c: @@ ClearReplies()
0xa7d: Pop(0)
0xa7e: Push((int) 523218)
0xa7f: Push((int) 24415)
0xa80: Push((int) 24414)
0xa81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa82: Pop(3)
0xa83: Return(); Pop(0)

0xa84: Push((int) 24415)
0xa85: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa86: IF (Stack[-1] == 0) GOTO 0xa96; Pop(1)

0xa87: PushEmpty(string)
0xa88: Stack[-1] = "Arrogance"
0xa89: Call2 0x982

0xa8a: Pop(1)
0xa8b: Push((int) 523219)
0xa8c: @@ SetMessage(Stack[-1])
0xa8d: Pop(1)
0xa8e: @@ ClearReplies()
0xa8f: Pop(0)
0xa90: Push((int) 522068)
0xa91: Push((int) 23238)
0xa92: Push((int) 23237)
0xa93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa94: Pop(3)
0xa95: Return(); Pop(0)

0xa96: Push((int) 23238)
0xa97: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa98: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xa99: PushEmpty(string)
0xa9a: Stack[-1] = "Confusion"
0xa9b: Call2 0x982

0xa9c: Pop(1)
0xa9d: Push((int) 522069)
0xa9e: @@ SetMessage(Stack[-1])
0xa9f: Pop(1)
0xaa0: @@ ClearReplies()
0xaa1: Pop(0)
0xaa2: PushEmpty(bool, object)
0xaa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa4: Call2 0x137e

0xaa5: Pop(1)
0xaa6: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xaa7: Push((int) 522073)
0xaa8: Push((int) 23243)
0xaa9: Push((int) 23242)
0xaaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaab: Pop(3)
0xaac: PushEmpty(bool, object)
0xaad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaae: Call2 0x137e

0xaaf: Pop(1)
0xab0: Pop(1); Push((bool) Stack[-1] == 0)
0xab1: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xab2: Push((int) 522070)
0xab3: Push((int) -1)
0xab4: Push((int) 23239)
0xab5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab6: Pop(3)
0xab7: Return(); Pop(0)

0xab8: Push((int) 23243)
0xab9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaba: IF (Stack[-1] == 0) GOTO 0xacf; Pop(1)

0xabb: PushEmpty(string)
0xabc: Stack[-1] = "Threat"
0xabd: Call2 0x982

0xabe: Pop(1)
0xabf: Push((int) 522074)
0xac0: @@ SetMessage(Stack[-1])
0xac1: Pop(1)
0xac2: @@ ClearReplies()
0xac3: Pop(0)
0xac4: Push((int) 522075)
0xac5: Push((int) 24408)
0xac6: Push((int) 23244)
0xac7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac8: Pop(3)
0xac9: Push((int) 523211)
0xaca: Push((int) -1)
0xacb: Push((int) 24407)
0xacc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacd: Pop(3)
0xace: Return(); Pop(0)

0xacf: Push((int) 24408)
0xad0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad1: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xad2: PushEmpty(string)
0xad3: Stack[-1] = "Confusion"
0xad4: Call2 0x982

0xad5: Pop(1)
0xad6: Push((int) 523212)
0xad7: @@ SetMessage(Stack[-1])
0xad8: Pop(1)
0xad9: @@ ClearReplies()
0xada: Pop(0)
0xadb: Push((int) 523234)
0xadc: Push((int) -1)
0xadd: Push((int) 24432)
0xade: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadf: Pop(3)
0xae0: Return(); Pop(0)

0xae1: Push((int) 24409)
0xae2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae3: IF (Stack[-1] == 0) GOTO 0xaf3; Pop(1)

0xae4: PushEmpty(string)
0xae5: Stack[-1] = "Confusion"
0xae6: Call2 0x982

0xae7: Pop(1)
0xae8: Push((int) 523213)
0xae9: @@ SetMessage(Stack[-1])
0xaea: Pop(1)
0xaeb: @@ ClearReplies()
0xaec: Pop(0)
0xaed: Push((int) 523220)
0xaee: Push((int) 24417)
0xaef: Push((int) 24416)
0xaf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf1: Pop(3)
0xaf2: Return(); Pop(0)

0xaf3: Push((int) 24417)
0xaf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf5: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xaf6: PushEmpty(string)
0xaf7: Stack[-1] = "Threat"
0xaf8: Call2 0x982

0xaf9: Pop(1)
0xafa: Push((int) 523221)
0xafb: @@ SetMessage(Stack[-1])
0xafc: Pop(1)
0xafd: @@ ClearReplies()
0xafe: Pop(0)
0xaff: Push((int) 523233)
0xb00: Push((int) 23238)
0xb01: Push((int) 24430)
0xb02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb03: Pop(3)
0xb04: Return(); Pop(0)

0xb05: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb06: PushEmpty(bool)
0xb07: Call2 0x1227

0xb08: Pop(0)
0xb09: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb0a: @ lshStopAnimation()
0xb0b: Pop(0)
0xb0c: GOTO 0xb0f

0xb0d: @ StopAnimation()
0xb0e: Pop(0)
0xb0f: Return(); Pop(0)

0xb10: GOTO 0x999

0xb11: Return(); Pop(0)

0xb12: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb13: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb14: PushEmpty(bool, object, float)
0xb15: Stack[-2] = Stack[-12]
0xb16: Stack[-1] = (float) 70.0
0xb17: Call2 0x1086

0xb18: Pop(2)
0xb19: Pop(1); Push((bool) Stack[-1] == 0)
0xb1a: IF (Stack[-1] == 0) GOTO 0xb1d; Pop(1)

0xb1b: Stack[-10] = (int) -2
0xb1c: Return(); Pop(8)

0xb1d: @ CreateDialog(Stack[-4])
0xb1e: Pop(0)
0xb1f: PushEmpty(int)
0xb20: Call2 0x1221

0xb21: Pop(0)
0xb22: @@ SetNPCName(Stack[-1])
0xb23: Pop(1)
0xb24: PushEmpty(int)
0xb25: Call2 0x121f

0xb26: Pop(0)
0xb27: @@ SetNPCDescription(Stack[-1])
0xb28: Pop(1)
0xb29: PushEmpty(string)
0xb2a: Call2 0x1223

0xb2b: Pop(0)
0xb2c: @@ SetPhoto(Stack[-1])
0xb2d: Pop(1)
0xb2e: PushEmpty(string)
0xb2f: Call2 0x1225

0xb30: Pop(0)
0xb31: @@ SetPhoto2(Stack[-1])
0xb32: Pop(1)
0xb33: PushEmpty(int)
0xb34: Call2 0x14c9

0xb35: Pop(0)
0xb36: @@ SetPlayerName(Stack[-1])
0xb37: Pop(1)
0xb38: Stack[-2] = (int) -1
0xb39: @ IsOverrideActive(Stack[-3])
0xb3a: Pop(0)
0xb3b: Push(Stack[-3])
0xb3c: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3d: Stack[-10] = (int) -2
0xb3e: Return(); Pop(8)

0xb3f: @ DoDialog(Stack[-4])
0xb40: Pop(0)
0xb41: PushEmpty(bool, object)
0xb42: PushEmpty(object)
0xb43: Call2 0x119c

0xb44: Stack[-2] = Stack[-1]
0xb45: Pop(1)
0xb46: Call2 0x10dd

0xb47: Pop(2)
0xb48: PushEmpty(object, object)
0xb49: Stack[-2] = Stack[-11]
0xb4a: Stack[-1] = Stack[-6]
0xb4b: Push(-2, 4); TaskCall(7)
0xb4c: Call2 0xb63

0xb4d: Pop(-2, 4); TaskReturn
0xb4e: Pop(2)
0xb4f: @@ IsDialogEnd(Stack[-1])
0xb50: Pop(0)
0xb51: Pop(0); Push((bool) Stack[-1] == 0)
0xb52: IF (Stack[-1] == 0) GOTO 0xb58; Pop(1)

0xb53: @ sync()
0xb54: Pop(0)
0xb55: @@ IsDialogEnd(Stack[-1])
0xb56: Pop(0)
0xb57: GOTO 0xb51

0xb58: PushEmpty(object)
0xb59: Stack[-1] = Stack[-10]
0xb5a: Call2 0x10cb

0xb5b: Pop(1)
0xb5c: @ StopDialog(Stack[-4])
0xb5d: Pop(0)
0xb5e: @@ GetReturnValue(Stack[-2])
0xb5f: Pop(0)
0xb60: Stack[-10] = Stack[-2]
0xb61: Return(); Pop(8)

0xb62: Stack[-4] = 0
0xb63: PushEmpty()
0xb64: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb65: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb66: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb67: Push((int) 1)
0xb68: IF (Stack[-1] == 0) GOTO 0xb7f; Pop(1)

0xb69: PushEmpty(string)
0xb6a: Stack[-1] = "Neutral"
0xb6b: Call2 0xb9d

0xb6c: Pop(1)
0xb6d: Push((int) 529922)
0xb6e: @@ SetMessage(Stack[-1])
0xb6f: Pop(1)
0xb70: @@ ClearReplies()
0xb71: Pop(0)
0xb72: Push((int) 529923)
0xb73: Push((int) -1)
0xb74: Push((int) 31306)
0xb75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb76: Pop(3)
0xb77: Push((int) 529924)
0xb78: Push((int) -1)
0xb79: Push((int) 31307)
0xb7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7b: Pop(3)
0xb7c: GOTO 0xb7f

0xb7d: Return(); Pop(0)

0xb7e: GOTO 0xb67

0xb7f: PushEmpty(bool)
0xb80: Call2 0x1227

0xb81: Pop(0)
0xb82: IF (Stack[-1] == 0) GOTO 0xb8e; Pop(1)

0xb83: @ lshWaitForAnimEnd()
0xb84: Pop(0)
0xb85: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb86: IF (Stack[-1] == 0) GOTO 0xb88; Pop(1)

0xb87: GOTO 0xb8d

0xb88: PushEmpty(string)
0xb89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb8a: Call2 0x1167

0xb8b: Pop(1)
0xb8c: GOTO 0xb83

0xb8d: GOTO 0xb9c

0xb8e: Push("all")
0xb8f: Push("idle")
0xb90: @ PlayAnimation(Stack[-2], Stack[-1])
0xb91: Pop(2)
0xb92: @ WaitForAnimEnd()
0xb93: Pop(0)
0xb94: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb95: IF (Stack[-1] == 0) GOTO 0xb97; Pop(1)

0xb96: GOTO 0xb9c

0xb97: Push("all")
0xb98: Push("idle")
0xb99: @ PlayAnimation(Stack[-2], Stack[-1])
0xb9a: Pop(2)
0xb9b: GOTO 0xb92

0xb9c: Return(); Pop(0)

0xb9d: PushEmpty()
0xb9e: PushEmpty(bool)
0xb9f: Call2 0x1227

0xba0: Pop(0)
0xba1: Pop(1); Push((bool) Stack[-1] == 0)
0xba2: IF (Stack[-1] == 0) GOTO 0xba4; Pop(1)

0xba3: Return(); Pop(0)

0xba4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xba5: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xba6: Return(); Pop(0)

0xba7: PushEmpty(string, bool)
0xba8: Stack[-2] = Stack[-3]
0xba9: Push("")
0xbaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbab: IF (Stack[-1] == 0) GOTO 0xbae; Pop(1)

0xbac: Stack[-1] = (bool) 0
0xbad: GOTO 0xbaf

0xbae: Stack[-1] = (bool) 1
0xbaf: Call2 0x1177

0xbb0: Pop(2)
0xbb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbb2: Return(); Pop(0)

0xbb3: PushEmpty()
0xbb4: Push((int) 1)
0xbb5: IF (Stack[-1] == 0) GOTO 0xbdc; Pop(1)

0xbb6: PushEmpty()
0xbb7: Call2 0x1195

0xbb8: Pop(0)
0xbb9: Push((int) 31305)
0xbba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbbb: IF (Stack[-1] == 0) GOTO 0xbd0; Pop(1)

0xbbc: PushEmpty(string)
0xbbd: Stack[-1] = "Neutral"
0xbbe: Call2 0xb9d

0xbbf: Pop(1)
0xbc0: Push((int) 529922)
0xbc1: @@ SetMessage(Stack[-1])
0xbc2: Pop(1)
0xbc3: @@ ClearReplies()
0xbc4: Pop(0)
0xbc5: Push((int) 529923)
0xbc6: Push((int) -1)
0xbc7: Push((int) 31306)
0xbc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc9: Pop(3)
0xbca: Push((int) 529924)
0xbcb: Push((int) -1)
0xbcc: Push((int) 31307)
0xbcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbce: Pop(3)
0xbcf: Return(); Pop(0)

0xbd0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbd1: PushEmpty(bool)
0xbd2: Call2 0x1227

0xbd3: Pop(0)
0xbd4: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd5: @ lshStopAnimation()
0xbd6: Pop(0)
0xbd7: GOTO 0xbda

0xbd8: @ StopAnimation()
0xbd9: Pop(0)
0xbda: Return(); Pop(0)

0xbdb: GOTO 0xbb4

0xbdc: Return(); Pop(0)

0xbdd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xbde: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xbdf: PushEmpty(bool, object, float)
0xbe0: Stack[-2] = Stack[-12]
0xbe1: Stack[-1] = (float) 70.0
0xbe2: Call2 0x1086

0xbe3: Pop(2)
0xbe4: Pop(1); Push((bool) Stack[-1] == 0)
0xbe5: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbe6: Stack[-10] = (int) -2
0xbe7: Return(); Pop(8)

0xbe8: @ CreateDialog(Stack[-4])
0xbe9: Pop(0)
0xbea: PushEmpty(int)
0xbeb: Call2 0x1221

0xbec: Pop(0)
0xbed: @@ SetNPCName(Stack[-1])
0xbee: Pop(1)
0xbef: PushEmpty(int)
0xbf0: Call2 0x121f

0xbf1: Pop(0)
0xbf2: @@ SetNPCDescription(Stack[-1])
0xbf3: Pop(1)
0xbf4: PushEmpty(string)
0xbf5: Call2 0x1223

0xbf6: Pop(0)
0xbf7: @@ SetPhoto(Stack[-1])
0xbf8: Pop(1)
0xbf9: PushEmpty(string)
0xbfa: Call2 0x1225

0xbfb: Pop(0)
0xbfc: @@ SetPhoto2(Stack[-1])
0xbfd: Pop(1)
0xbfe: PushEmpty(int)
0xbff: Call2 0x14c9

0xc00: Pop(0)
0xc01: @@ SetPlayerName(Stack[-1])
0xc02: Pop(1)
0xc03: Stack[-2] = (int) -1
0xc04: @ IsOverrideActive(Stack[-3])
0xc05: Pop(0)
0xc06: Push(Stack[-3])
0xc07: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc08: Stack[-10] = (int) -2
0xc09: Return(); Pop(8)

0xc0a: @ DoDialog(Stack[-4])
0xc0b: Pop(0)
0xc0c: PushEmpty(bool, object)
0xc0d: PushEmpty(object)
0xc0e: Call2 0x119c

0xc0f: Stack[-2] = Stack[-1]
0xc10: Pop(1)
0xc11: Call2 0x10dd

0xc12: Pop(2)
0xc13: PushEmpty(object, object)
0xc14: Stack[-2] = Stack[-11]
0xc15: Stack[-1] = Stack[-6]
0xc16: Push(-2, 4); TaskCall(9)
0xc17: Call2 0xc2e

0xc18: Pop(-2, 4); TaskReturn
0xc19: Pop(2)
0xc1a: @@ IsDialogEnd(Stack[-1])
0xc1b: Pop(0)
0xc1c: Pop(0); Push((bool) Stack[-1] == 0)
0xc1d: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc1e: @ sync()
0xc1f: Pop(0)
0xc20: @@ IsDialogEnd(Stack[-1])
0xc21: Pop(0)
0xc22: GOTO 0xc1c

0xc23: PushEmpty(object)
0xc24: Stack[-1] = Stack[-10]
0xc25: Call2 0x10cb

0xc26: Pop(1)
0xc27: @ StopDialog(Stack[-4])
0xc28: Pop(0)
0xc29: @@ GetReturnValue(Stack[-2])
0xc2a: Pop(0)
0xc2b: Stack[-10] = Stack[-2]
0xc2c: Return(); Pop(8)

0xc2d: Stack[-4] = 0
0xc2e: PushEmpty()
0xc2f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc30: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc31: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc32: Push((int) 1)
0xc33: IF (Stack[-1] == 0) GOTO 0xc4a; Pop(1)

0xc34: PushEmpty(string)
0xc35: Stack[-1] = "Confusion"
0xc36: Call2 0xc68

0xc37: Pop(1)
0xc38: Push((int) 529942)
0xc39: @@ SetMessage(Stack[-1])
0xc3a: Pop(1)
0xc3b: @@ ClearReplies()
0xc3c: Pop(0)
0xc3d: Push((int) 529943)
0xc3e: Push((int) -1)
0xc3f: Push((int) 31326)
0xc40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc41: Pop(3)
0xc42: Push((int) 529944)
0xc43: Push((int) -1)
0xc44: Push((int) 31327)
0xc45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc46: Pop(3)
0xc47: GOTO 0xc4a

0xc48: Return(); Pop(0)

0xc49: GOTO 0xc32

0xc4a: PushEmpty(bool)
0xc4b: Call2 0x1227

0xc4c: Pop(0)
0xc4d: IF (Stack[-1] == 0) GOTO 0xc59; Pop(1)

0xc4e: @ lshWaitForAnimEnd()
0xc4f: Pop(0)
0xc50: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc51: IF (Stack[-1] == 0) GOTO 0xc53; Pop(1)

0xc52: GOTO 0xc58

0xc53: PushEmpty(string)
0xc54: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc55: Call2 0x1167

0xc56: Pop(1)
0xc57: GOTO 0xc4e

0xc58: GOTO 0xc67

0xc59: Push("all")
0xc5a: Push("idle")
0xc5b: @ PlayAnimation(Stack[-2], Stack[-1])
0xc5c: Pop(2)
0xc5d: @ WaitForAnimEnd()
0xc5e: Pop(0)
0xc5f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc60: IF (Stack[-1] == 0) GOTO 0xc62; Pop(1)

0xc61: GOTO 0xc67

0xc62: Push("all")
0xc63: Push("idle")
0xc64: @ PlayAnimation(Stack[-2], Stack[-1])
0xc65: Pop(2)
0xc66: GOTO 0xc5d

0xc67: Return(); Pop(0)

0xc68: PushEmpty()
0xc69: PushEmpty(bool)
0xc6a: Call2 0x1227

0xc6b: Pop(0)
0xc6c: Pop(1); Push((bool) Stack[-1] == 0)
0xc6d: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xc6e: Return(); Pop(0)

0xc6f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc70: IF (Stack[-1] == 0) GOTO 0xc72; Pop(1)

0xc71: Return(); Pop(0)

0xc72: PushEmpty(string, bool)
0xc73: Stack[-2] = Stack[-3]
0xc74: Push("")
0xc75: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc76: IF (Stack[-1] == 0) GOTO 0xc79; Pop(1)

0xc77: Stack[-1] = (bool) 0
0xc78: GOTO 0xc7a

0xc79: Stack[-1] = (bool) 1
0xc7a: Call2 0x1177

0xc7b: Pop(2)
0xc7c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc7d: Return(); Pop(0)

0xc7e: PushEmpty()
0xc7f: Push((int) 1)
0xc80: IF (Stack[-1] == 0) GOTO 0xca7; Pop(1)

0xc81: PushEmpty()
0xc82: Call2 0x1195

0xc83: Pop(0)
0xc84: Push((int) 31325)
0xc85: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc86: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc87: PushEmpty(string)
0xc88: Stack[-1] = "Confusion"
0xc89: Call2 0xc68

0xc8a: Pop(1)
0xc8b: Push((int) 529942)
0xc8c: @@ SetMessage(Stack[-1])
0xc8d: Pop(1)
0xc8e: @@ ClearReplies()
0xc8f: Pop(0)
0xc90: Push((int) 529943)
0xc91: Push((int) -1)
0xc92: Push((int) 31326)
0xc93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc94: Pop(3)
0xc95: Push((int) 529944)
0xc96: Push((int) -1)
0xc97: Push((int) 31327)
0xc98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc99: Pop(3)
0xc9a: Return(); Pop(0)

0xc9b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc9c: PushEmpty(bool)
0xc9d: Call2 0x1227

0xc9e: Pop(0)
0xc9f: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xca0: @ lshStopAnimation()
0xca1: Pop(0)
0xca2: GOTO 0xca5

0xca3: @ StopAnimation()
0xca4: Pop(0)
0xca5: Return(); Pop(0)

0xca6: GOTO 0xc7f

0xca7: Return(); Pop(0)

0xca8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xca9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcaa: PushEmpty(bool, object, float)
0xcab: Stack[-2] = Stack[-12]
0xcac: Stack[-1] = (float) 70.0
0xcad: Call2 0x1086

0xcae: Pop(2)
0xcaf: Pop(1); Push((bool) Stack[-1] == 0)
0xcb0: IF (Stack[-1] == 0) GOTO 0xcb3; Pop(1)

0xcb1: Stack[-10] = (int) -2
0xcb2: Return(); Pop(8)

0xcb3: @ CreateDialog(Stack[-4])
0xcb4: Pop(0)
0xcb5: PushEmpty(int)
0xcb6: Call2 0x1221

0xcb7: Pop(0)
0xcb8: @@ SetNPCName(Stack[-1])
0xcb9: Pop(1)
0xcba: PushEmpty(int)
0xcbb: Call2 0x121f

0xcbc: Pop(0)
0xcbd: @@ SetNPCDescription(Stack[-1])
0xcbe: Pop(1)
0xcbf: PushEmpty(string)
0xcc0: Call2 0x1223

0xcc1: Pop(0)
0xcc2: @@ SetPhoto(Stack[-1])
0xcc3: Pop(1)
0xcc4: PushEmpty(string)
0xcc5: Call2 0x1225

0xcc6: Pop(0)
0xcc7: @@ SetPhoto2(Stack[-1])
0xcc8: Pop(1)
0xcc9: PushEmpty(int)
0xcca: Call2 0x14c9

0xccb: Pop(0)
0xccc: @@ SetPlayerName(Stack[-1])
0xccd: Pop(1)
0xcce: Stack[-2] = (int) -1
0xccf: @ IsOverrideActive(Stack[-3])
0xcd0: Pop(0)
0xcd1: Push(Stack[-3])
0xcd2: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xcd3: Stack[-10] = (int) -2
0xcd4: Return(); Pop(8)

0xcd5: @ DoDialog(Stack[-4])
0xcd6: Pop(0)
0xcd7: PushEmpty(bool, object)
0xcd8: PushEmpty(object)
0xcd9: Call2 0x119c

0xcda: Stack[-2] = Stack[-1]
0xcdb: Pop(1)
0xcdc: Call2 0x10dd

0xcdd: Pop(2)
0xcde: PushEmpty(object, object)
0xcdf: Stack[-2] = Stack[-11]
0xce0: Stack[-1] = Stack[-6]
0xce1: Push(-2, 4); TaskCall(11)
0xce2: Call2 0xcf9

0xce3: Pop(-2, 4); TaskReturn
0xce4: Pop(2)
0xce5: @@ IsDialogEnd(Stack[-1])
0xce6: Pop(0)
0xce7: Pop(0); Push((bool) Stack[-1] == 0)
0xce8: IF (Stack[-1] == 0) GOTO 0xcee; Pop(1)

0xce9: @ sync()
0xcea: Pop(0)
0xceb: @@ IsDialogEnd(Stack[-1])
0xcec: Pop(0)
0xced: GOTO 0xce7

0xcee: PushEmpty(object)
0xcef: Stack[-1] = Stack[-10]
0xcf0: Call2 0x10cb

0xcf1: Pop(1)
0xcf2: @ StopDialog(Stack[-4])
0xcf3: Pop(0)
0xcf4: @@ GetReturnValue(Stack[-2])
0xcf5: Pop(0)
0xcf6: Stack[-10] = Stack[-2]
0xcf7: Return(); Pop(8)

0xcf8: Stack[-4] = 0
0xcf9: PushEmpty()
0xcfa: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xcfb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xcfc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xcfd: Push((int) 1)
0xcfe: IF (Stack[-1] == 0) GOTO 0xd4e; Pop(1)

0xcff: PushEmpty(string)
0xd00: Stack[-1] = "Neutral"
0xd01: Call2 0xd6c

0xd02: Pop(1)
0xd03: Push((int) 530357)
0xd04: @@ SetMessage(Stack[-1])
0xd05: Pop(1)
0xd06: @@ ClearReplies()
0xd07: Pop(0)
0xd08: PushEmpty(bool)
0xd09: Stack[-1] = (bool) 0
0xd0a: PushEmpty(bool)
0xd0b: Stack[-1] = (bool) 0
0xd0c: PushEmpty(bool, object)
0xd0d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0e: Call2 0x13ae

0xd0f: Pop(1)
0xd10: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd11: PushEmpty(bool, object)
0xd12: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd13: Call2 0x13a2

0xd14: Pop(1)
0xd15: Pop(1); Push((bool) Stack[-1] == 0)
0xd16: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd17: Stack[-1] = (bool) 1
0xd18: IF (Stack[-1] == 0) GOTO 0xd1f; Pop(1)

0xd19: PushEmpty(bool, object)
0xd1a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd1b: Call2 0x13ba

0xd1c: Pop(1)
0xd1d: IF (Stack[-1] == 0) GOTO 0xd1f; Pop(1)

0xd1e: Stack[-1] = (bool) 1
0xd1f: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd20: Push((int) 530358)
0xd21: Push((int) 32319)
0xd22: Push((int) 31732)
0xd23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd24: Pop(3)
0xd25: PushEmpty(bool)
0xd26: Stack[-1] = (bool) 0
0xd27: PushEmpty(bool)
0xd28: Stack[-1] = (bool) 0
0xd29: PushEmpty(bool, object)
0xd2a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2b: Call2 0x13ae

0xd2c: Pop(1)
0xd2d: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd2e: PushEmpty(bool, object)
0xd2f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd30: Call2 0x13a2

0xd31: Pop(1)
0xd32: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd33: Stack[-1] = (bool) 1
0xd34: IF (Stack[-1] == 0) GOTO 0xd3b; Pop(1)

0xd35: PushEmpty(bool, object)
0xd36: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd37: Call2 0x13c6

0xd38: Pop(1)
0xd39: IF (Stack[-1] == 0) GOTO 0xd3b; Pop(1)

0xd3a: Stack[-1] = (bool) 1
0xd3b: IF (Stack[-1] == 0) GOTO 0xd41; Pop(1)

0xd3c: Push((int) 530361)
0xd3d: Push((int) 31736)
0xd3e: Push((int) 31735)
0xd3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd40: Pop(3)
0xd41: Push((int) 530916)
0xd42: Push((int) -1)
0xd43: Push((int) 32243)
0xd44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd45: Pop(3)
0xd46: Push((int) 530917)
0xd47: Push((int) -1)
0xd48: Push((int) 32244)
0xd49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4a: Pop(3)
0xd4b: GOTO 0xd4e

0xd4c: Return(); Pop(0)

0xd4d: GOTO 0xcfd

0xd4e: PushEmpty(bool)
0xd4f: Call2 0x1227

0xd50: Pop(0)
0xd51: IF (Stack[-1] == 0) GOTO 0xd5d; Pop(1)

0xd52: @ lshWaitForAnimEnd()
0xd53: Pop(0)
0xd54: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd55: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd56: GOTO 0xd5c

0xd57: PushEmpty(string)
0xd58: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd59: Call2 0x1167

0xd5a: Pop(1)
0xd5b: GOTO 0xd52

0xd5c: GOTO 0xd6b

0xd5d: Push("all")
0xd5e: Push("idle")
0xd5f: @ PlayAnimation(Stack[-2], Stack[-1])
0xd60: Pop(2)
0xd61: @ WaitForAnimEnd()
0xd62: Pop(0)
0xd63: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd64: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd65: GOTO 0xd6b

0xd66: Push("all")
0xd67: Push("idle")
0xd68: @ PlayAnimation(Stack[-2], Stack[-1])
0xd69: Pop(2)
0xd6a: GOTO 0xd61

0xd6b: Return(); Pop(0)

0xd6c: PushEmpty()
0xd6d: PushEmpty(bool)
0xd6e: Call2 0x1227

0xd6f: Pop(0)
0xd70: Pop(1); Push((bool) Stack[-1] == 0)
0xd71: IF (Stack[-1] == 0) GOTO 0xd73; Pop(1)

0xd72: Return(); Pop(0)

0xd73: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd74: IF (Stack[-1] == 0) GOTO 0xd76; Pop(1)

0xd75: Return(); Pop(0)

0xd76: PushEmpty(string, bool)
0xd77: Stack[-2] = Stack[-3]
0xd78: Push("")
0xd79: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd7a: IF (Stack[-1] == 0) GOTO 0xd7d; Pop(1)

0xd7b: Stack[-1] = (bool) 0
0xd7c: GOTO 0xd7e

0xd7d: Stack[-1] = (bool) 1
0xd7e: Call2 0x1177

0xd7f: Pop(2)
0xd80: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd81: Return(); Pop(0)

0xd82: PushEmpty()
0xd83: Push((int) 1)
0xd84: IF (Stack[-1] == 0) GOTO 0xe6c; Pop(1)

0xd85: PushEmpty()
0xd86: Call2 0x1195

0xd87: Pop(0)
0xd88: Push((int) 31732)
0xd89: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8a: IF (Stack[-1] == 0) GOTO 0xd90; Pop(1)

0xd8b: PushEmpty(object, object)
0xd8c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8e: Call2 0x12b2

0xd8f: Pop(2)
0xd90: Push((int) 31735)
0xd91: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd92: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd93: PushEmpty(object, object)
0xd94: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd95: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd96: Call2 0x12b8

0xd97: Pop(2)
0xd98: Push((int) 31731)
0xd99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9a: IF (Stack[-1] == 0) GOTO 0xde8; Pop(1)

0xd9b: PushEmpty(string)
0xd9c: Stack[-1] = "Neutral"
0xd9d: Call2 0xd6c

0xd9e: Pop(1)
0xd9f: Push((int) 530357)
0xda0: @@ SetMessage(Stack[-1])
0xda1: Pop(1)
0xda2: @@ ClearReplies()
0xda3: Pop(0)
0xda4: PushEmpty(bool)
0xda5: Stack[-1] = (bool) 0
0xda6: PushEmpty(bool)
0xda7: Stack[-1] = (bool) 0
0xda8: PushEmpty(bool, object)
0xda9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdaa: Call2 0x13ae

0xdab: Pop(1)
0xdac: IF (Stack[-1] == 0) GOTO 0xdb4; Pop(1)

0xdad: PushEmpty(bool, object)
0xdae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdaf: Call2 0x13a2

0xdb0: Pop(1)
0xdb1: Pop(1); Push((bool) Stack[-1] == 0)
0xdb2: IF (Stack[-1] == 0) GOTO 0xdb4; Pop(1)

0xdb3: Stack[-1] = (bool) 1
0xdb4: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdb5: PushEmpty(bool, object)
0xdb6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb7: Call2 0x13ba

0xdb8: Pop(1)
0xdb9: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdba: Stack[-1] = (bool) 1
0xdbb: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdbc: Push((int) 530358)
0xdbd: Push((int) 32319)
0xdbe: Push((int) 31732)
0xdbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc0: Pop(3)
0xdc1: PushEmpty(bool)
0xdc2: Stack[-1] = (bool) 0
0xdc3: PushEmpty(bool)
0xdc4: Stack[-1] = (bool) 0
0xdc5: PushEmpty(bool, object)
0xdc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdc7: Call2 0x13ae

0xdc8: Pop(1)
0xdc9: IF (Stack[-1] == 0) GOTO 0xdd0; Pop(1)

0xdca: PushEmpty(bool, object)
0xdcb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdcc: Call2 0x13a2

0xdcd: Pop(1)
0xdce: IF (Stack[-1] == 0) GOTO 0xdd0; Pop(1)

0xdcf: Stack[-1] = (bool) 1
0xdd0: IF (Stack[-1] == 0) GOTO 0xdd7; Pop(1)

0xdd1: PushEmpty(bool, object)
0xdd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd3: Call2 0x13c6

0xdd4: Pop(1)
0xdd5: IF (Stack[-1] == 0) GOTO 0xdd7; Pop(1)

0xdd6: Stack[-1] = (bool) 1
0xdd7: IF (Stack[-1] == 0) GOTO 0xddd; Pop(1)

0xdd8: Push((int) 530361)
0xdd9: Push((int) 31736)
0xdda: Push((int) 31735)
0xddb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xddc: Pop(3)
0xddd: Push((int) 530916)
0xdde: Push((int) -1)
0xddf: Push((int) 32243)
0xde0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde1: Pop(3)
0xde2: Push((int) 530917)
0xde3: Push((int) -1)
0xde4: Push((int) 32244)
0xde5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde6: Pop(3)
0xde7: Return(); Pop(0)

0xde8: Push((int) 31736)
0xde9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdea: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdeb: PushEmpty(string)
0xdec: Stack[-1] = "Confusion"
0xded: Call2 0xd6c

0xdee: Pop(1)
0xdef: Push((int) 530362)
0xdf0: @@ SetMessage(Stack[-1])
0xdf1: Pop(1)
0xdf2: @@ ClearReplies()
0xdf3: Pop(0)
0xdf4: Push((int) 530363)
0xdf5: Push((int) 32326)
0xdf6: Push((int) 31737)
0xdf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf8: Pop(3)
0xdf9: Push((int) 530998)
0xdfa: Push((int) -1)
0xdfb: Push((int) 32325)
0xdfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfd: Pop(3)
0xdfe: Return(); Pop(0)

0xdff: Push((int) 32326)
0xe00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe01: IF (Stack[-1] == 0) GOTO 0xe16; Pop(1)

0xe02: PushEmpty(string)
0xe03: Stack[-1] = "Confusion"
0xe04: Call2 0xd6c

0xe05: Pop(1)
0xe06: Push((int) 530999)
0xe07: @@ SetMessage(Stack[-1])
0xe08: Pop(1)
0xe09: @@ ClearReplies()
0xe0a: Pop(0)
0xe0b: Push((int) 531000)
0xe0c: Push((int) 32329)
0xe0d: Push((int) 32327)
0xe0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0f: Pop(3)
0xe10: Push((int) 531001)
0xe11: Push((int) -1)
0xe12: Push((int) 32328)
0xe13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe14: Pop(3)
0xe15: Return(); Pop(0)

0xe16: Push((int) 32329)
0xe17: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe18: IF (Stack[-1] == 0) GOTO 0xe2d; Pop(1)

0xe19: PushEmpty(string)
0xe1a: Stack[-1] = "Threat"
0xe1b: Call2 0xd6c

0xe1c: Pop(1)
0xe1d: Push((int) 531002)
0xe1e: @@ SetMessage(Stack[-1])
0xe1f: Pop(1)
0xe20: @@ ClearReplies()
0xe21: Pop(0)
0xe22: Push((int) 531003)
0xe23: Push((int) -1)
0xe24: Push((int) 32330)
0xe25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe26: Pop(3)
0xe27: Push((int) 531004)
0xe28: Push((int) -1)
0xe29: Push((int) 32331)
0xe2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2b: Pop(3)
0xe2c: Return(); Pop(0)

0xe2d: Push((int) 32319)
0xe2e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2f: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xe30: PushEmpty(string)
0xe31: Stack[-1] = "Neutral"
0xe32: Call2 0xd6c

0xe33: Pop(1)
0xe34: Push((int) 530994)
0xe35: @@ SetMessage(Stack[-1])
0xe36: Pop(1)
0xe37: @@ ClearReplies()
0xe38: Pop(0)
0xe39: Push((int) 530996)
0xe3a: Push((int) 31733)
0xe3b: Push((int) 32321)
0xe3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3d: Pop(3)
0xe3e: Push((int) 530997)
0xe3f: Push((int) 31733)
0xe40: Push((int) 32323)
0xe41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe42: Pop(3)
0xe43: Push((int) 530995)
0xe44: Push((int) -1)
0xe45: Push((int) 32320)
0xe46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe47: Pop(3)
0xe48: Return(); Pop(0)

0xe49: Push((int) 31733)
0xe4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4b: IF (Stack[-1] == 0) GOTO 0xe60; Pop(1)

0xe4c: PushEmpty(string)
0xe4d: Stack[-1] = "Confusion"
0xe4e: Call2 0xd6c

0xe4f: Pop(1)
0xe50: Push((int) 530359)
0xe51: @@ SetMessage(Stack[-1])
0xe52: Pop(1)
0xe53: @@ ClearReplies()
0xe54: Pop(0)
0xe55: Push((int) 530360)
0xe56: Push((int) -1)
0xe57: Push((int) 31734)
0xe58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe59: Pop(3)
0xe5a: Push((int) 530993)
0xe5b: Push((int) -1)
0xe5c: Push((int) 32318)
0xe5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5e: Pop(3)
0xe5f: Return(); Pop(0)

0xe60: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe61: PushEmpty(bool)
0xe62: Call2 0x1227

0xe63: Pop(0)
0xe64: IF (Stack[-1] == 0) GOTO 0xe68; Pop(1)

0xe65: @ lshStopAnimation()
0xe66: Pop(0)
0xe67: GOTO 0xe6a

0xe68: @ StopAnimation()
0xe69: Pop(0)
0xe6a: Return(); Pop(0)

0xe6b: GOTO 0xd83

0xe6c: Return(); Pop(0)

0xe6d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe6e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe6f: PushEmpty(bool, object, float)
0xe70: Stack[-2] = Stack[-12]
0xe71: Stack[-1] = (float) 70.0
0xe72: Call2 0x1086

0xe73: Pop(2)
0xe74: Pop(1); Push((bool) Stack[-1] == 0)
0xe75: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xe76: Stack[-10] = (int) -2
0xe77: Return(); Pop(8)

0xe78: @ CreateDialog(Stack[-4])
0xe79: Pop(0)
0xe7a: PushEmpty(int)
0xe7b: Call2 0x1221

0xe7c: Pop(0)
0xe7d: @@ SetNPCName(Stack[-1])
0xe7e: Pop(1)
0xe7f: PushEmpty(int)
0xe80: Call2 0x121f

0xe81: Pop(0)
0xe82: @@ SetNPCDescription(Stack[-1])
0xe83: Pop(1)
0xe84: PushEmpty(string)
0xe85: Call2 0x1223

0xe86: Pop(0)
0xe87: @@ SetPhoto(Stack[-1])
0xe88: Pop(1)
0xe89: PushEmpty(string)
0xe8a: Call2 0x1225

0xe8b: Pop(0)
0xe8c: @@ SetPhoto2(Stack[-1])
0xe8d: Pop(1)
0xe8e: PushEmpty(int)
0xe8f: Call2 0x14c9

0xe90: Pop(0)
0xe91: @@ SetPlayerName(Stack[-1])
0xe92: Pop(1)
0xe93: Stack[-2] = (int) -1
0xe94: @ IsOverrideActive(Stack[-3])
0xe95: Pop(0)
0xe96: Push(Stack[-3])
0xe97: IF (Stack[-1] == 0) GOTO 0xe9a; Pop(1)

0xe98: Stack[-10] = (int) -2
0xe99: Return(); Pop(8)

0xe9a: @ DoDialog(Stack[-4])
0xe9b: Pop(0)
0xe9c: PushEmpty(bool, object)
0xe9d: PushEmpty(object)
0xe9e: Call2 0x119c

0xe9f: Stack[-2] = Stack[-1]
0xea0: Pop(1)
0xea1: Call2 0x10dd

0xea2: Pop(2)
0xea3: PushEmpty(object, object)
0xea4: Stack[-2] = Stack[-11]
0xea5: Stack[-1] = Stack[-6]
0xea6: Push(-2, 4); TaskCall(13)
0xea7: Call2 0xebe

0xea8: Pop(-2, 4); TaskReturn
0xea9: Pop(2)
0xeaa: @@ IsDialogEnd(Stack[-1])
0xeab: Pop(0)
0xeac: Pop(0); Push((bool) Stack[-1] == 0)
0xead: IF (Stack[-1] == 0) GOTO 0xeb3; Pop(1)

0xeae: @ sync()
0xeaf: Pop(0)
0xeb0: @@ IsDialogEnd(Stack[-1])
0xeb1: Pop(0)
0xeb2: GOTO 0xeac

0xeb3: PushEmpty(object)
0xeb4: Stack[-1] = Stack[-10]
0xeb5: Call2 0x10cb

0xeb6: Pop(1)
0xeb7: @ StopDialog(Stack[-4])
0xeb8: Pop(0)
0xeb9: @@ GetReturnValue(Stack[-2])
0xeba: Pop(0)
0xebb: Stack[-10] = Stack[-2]
0xebc: Return(); Pop(8)

0xebd: Stack[-4] = 0
0xebe: PushEmpty()
0xebf: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xec0: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xec1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xec2: Push((int) 1)
0xec3: IF (Stack[-1] == 0) GOTO 0xeda; Pop(1)

0xec4: PushEmpty(string)
0xec5: Stack[-1] = "Threat"
0xec6: Call2 0xef8

0xec7: Pop(1)
0xec8: Push((int) 530682)
0xec9: @@ SetMessage(Stack[-1])
0xeca: Pop(1)
0xecb: @@ ClearReplies()
0xecc: Pop(0)
0xecd: Push((int) 530683)
0xece: Push((int) 31974)
0xecf: Push((int) 31973)
0xed0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed1: Pop(3)
0xed2: Push((int) 530688)
0xed3: Push((int) 31974)
0xed4: Push((int) 31978)
0xed5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed6: Pop(3)
0xed7: GOTO 0xeda

0xed8: Return(); Pop(0)

0xed9: GOTO 0xec2

0xeda: PushEmpty(bool)
0xedb: Call2 0x1227

0xedc: Pop(0)
0xedd: IF (Stack[-1] == 0) GOTO 0xee9; Pop(1)

0xede: @ lshWaitForAnimEnd()
0xedf: Pop(0)
0xee0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xee1: IF (Stack[-1] == 0) GOTO 0xee3; Pop(1)

0xee2: GOTO 0xee8

0xee3: PushEmpty(string)
0xee4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xee5: Call2 0x1167

0xee6: Pop(1)
0xee7: GOTO 0xede

0xee8: GOTO 0xef7

0xee9: Push("all")
0xeea: Push("idle")
0xeeb: @ PlayAnimation(Stack[-2], Stack[-1])
0xeec: Pop(2)
0xeed: @ WaitForAnimEnd()
0xeee: Pop(0)
0xeef: Push( Stack[3 + Tasks[-1].StackPointer] )
0xef0: IF (Stack[-1] == 0) GOTO 0xef2; Pop(1)

0xef1: GOTO 0xef7

0xef2: Push("all")
0xef3: Push("idle")
0xef4: @ PlayAnimation(Stack[-2], Stack[-1])
0xef5: Pop(2)
0xef6: GOTO 0xeed

0xef7: Return(); Pop(0)

0xef8: PushEmpty()
0xef9: PushEmpty(bool)
0xefa: Call2 0x1227

0xefb: Pop(0)
0xefc: Pop(1); Push((bool) Stack[-1] == 0)
0xefd: IF (Stack[-1] == 0) GOTO 0xeff; Pop(1)

0xefe: Return(); Pop(0)

0xeff: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf00: IF (Stack[-1] == 0) GOTO 0xf02; Pop(1)

0xf01: Return(); Pop(0)

0xf02: PushEmpty(string, bool)
0xf03: Stack[-2] = Stack[-3]
0xf04: Push("")
0xf05: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf06: IF (Stack[-1] == 0) GOTO 0xf09; Pop(1)

0xf07: Stack[-1] = (bool) 0
0xf08: GOTO 0xf0a

0xf09: Stack[-1] = (bool) 1
0xf0a: Call2 0x1177

0xf0b: Pop(2)
0xf0c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf0d: Return(); Pop(0)

0xf0e: PushEmpty()
0xf0f: Push((int) 1)
0xf10: IF (Stack[-1] == 0) GOTO 0xf65; Pop(1)

0xf11: PushEmpty()
0xf12: Call2 0x1195

0xf13: Pop(0)
0xf14: Push((int) 31972)
0xf15: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf16: IF (Stack[-1] == 0) GOTO 0xf2b; Pop(1)

0xf17: PushEmpty(string)
0xf18: Stack[-1] = "Threat"
0xf19: Call2 0xef8

0xf1a: Pop(1)
0xf1b: Push((int) 530682)
0xf1c: @@ SetMessage(Stack[-1])
0xf1d: Pop(1)
0xf1e: @@ ClearReplies()
0xf1f: Pop(0)
0xf20: Push((int) 530683)
0xf21: Push((int) 31974)
0xf22: Push((int) 31973)
0xf23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf24: Pop(3)
0xf25: Push((int) 530688)
0xf26: Push((int) 31974)
0xf27: Push((int) 31978)
0xf28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf29: Pop(3)
0xf2a: Return(); Pop(0)

0xf2b: Push((int) 31974)
0xf2c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2d: IF (Stack[-1] == 0) GOTO 0xf42; Pop(1)

0xf2e: PushEmpty(string)
0xf2f: Stack[-1] = "Threat"
0xf30: Call2 0xef8

0xf31: Pop(1)
0xf32: Push((int) 530684)
0xf33: @@ SetMessage(Stack[-1])
0xf34: Pop(1)
0xf35: @@ ClearReplies()
0xf36: Pop(0)
0xf37: Push((int) 530685)
0xf38: Push((int) 31976)
0xf39: Push((int) 31975)
0xf3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3b: Pop(3)
0xf3c: Push((int) 530689)
0xf3d: Push((int) 31976)
0xf3e: Push((int) 31979)
0xf3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf40: Pop(3)
0xf41: Return(); Pop(0)

0xf42: Push((int) 31976)
0xf43: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf44: IF (Stack[-1] == 0) GOTO 0xf59; Pop(1)

0xf45: PushEmpty(string)
0xf46: Stack[-1] = "Threat"
0xf47: Call2 0xef8

0xf48: Pop(1)
0xf49: Push((int) 530686)
0xf4a: @@ SetMessage(Stack[-1])
0xf4b: Pop(1)
0xf4c: @@ ClearReplies()
0xf4d: Pop(0)
0xf4e: Push((int) 530687)
0xf4f: Push((int) -1)
0xf50: Push((int) 31977)
0xf51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf52: Pop(3)
0xf53: Push((int) 530690)
0xf54: Push((int) -1)
0xf55: Push((int) 31980)
0xf56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf57: Pop(3)
0xf58: Return(); Pop(0)

0xf59: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf5a: PushEmpty(bool)
0xf5b: Call2 0x1227

0xf5c: Pop(0)
0xf5d: IF (Stack[-1] == 0) GOTO 0xf61; Pop(1)

0xf5e: @ lshStopAnimation()
0xf5f: Pop(0)
0xf60: GOTO 0xf63

0xf61: @ StopAnimation()
0xf62: Pop(0)
0xf63: Return(); Pop(0)

0xf64: GOTO 0xf0f

0xf65: Return(); Pop(0)

0xf66: PushEmpty()
0xf67: Call2 0xf6a

0xf68: Pop(0)
0xf69: Return(); Pop(0)

0xf6a: PushEmpty(bool)
0xf6b: Call2 0x1081

0xf6c: Pop(0)
0xf6d: Pop(1); Push((bool) Stack[-1] == 0)
0xf6e: IF (Stack[-1] == 0) GOTO 0xf71; Pop(1)

0xf6f: @ Hold()
0xf70: Pop(0)
0xf71: @ GetDirection(Stack[-0])
0xf72: Pop(0)
0xf73: PushEmpty()
0xf74: Call2 0x101a

0xf75: Pop(0)
0xf76: GOTO 0xf73

0xf77: Return(); Pop(0)

0xf78: PushEmpty(object, object)
0xf79: Push("player")
0xf7a: @ FindActor(Stack[-2], Stack[-1])
0xf7b: Pop(1)
0xf7c: Pop(0); Push((bool) Stack[-1] == 0)
0xf7d: IF (Stack[-1] == 0) GOTO 0xf80; Pop(1)

0xf7e: Stack[-3] = (bool) 0
0xf7f: Return(); Pop(2)

0xf80: PushEmpty(bool, object)
0xf81: Stack[-1] = Stack[-3]
0xf82: Call2 0x1078

0xf83: Stack[-5] = Stack[-2]
0xf84: Pop(2)
0xf85: Return(); Pop(2)

0xf86: Stack[-1] = 0
0xf87: Push(CvectorIndex(Stack[-0], 0))
0xf88: Push(CvectorIndex(Stack[-0], 2))
0xf89: @ RotateAsync(Stack[-2], Stack[-1])
0xf8a: Pop(2)
0xf8b: Return(); Pop(0)

0xf8c: PushEmpty(object, bool, object, bool)
0xf8d: Push("player")
0xf8e: @ FindActor(Stack[-3], Stack[-1])
0xf8f: Pop(1)
0xf90: Pop(0); Push((bool) Stack[-2] == 0)
0xf91: IF (Stack[-1] == 0) GOTO 0xf94; Pop(1)

0xf92: Stack[-5] = (bool) 0
0xf93: Return(); Pop(4)

0xf94: PushEmpty(float, object)
0xf95: Stack[-1] = Stack[-4]
0xf96: Call2 0x1066

0xf97: Pop(1)
0xf98: Push((float)90000.0)
0xf99: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xf9a: IF (Stack[-1] == 0) GOTO 0xf9d; Pop(1)

0xf9b: Stack[-5] = (bool) 0
0xf9c: Return(); Pop(4)

0xf9d: @ CanSee(Stack[-1], Stack[-2])
0xf9e: Pop(0)
0xf9f: Stack[-5] = Stack[-1]
0xfa0: Return(); Pop(4)

0xfa1: Stack[-2] = 0
0xfa2: PushEmpty(float, float)
0xfa3: Push((int) 8)
0xfa4: Push((int) 16)
0xfa5: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xfa6: Pop(2)
0xfa7: Push((int) 10)
0xfa8: @ SetTimer(Stack[-1], Stack[-2])
0xfa9: Pop(1)
0xfaa: Return(); Pop(2)

0xfab: Push((int) 10)
0xfac: @ KillTimer(Stack[-1])
0xfad: Pop(1)
0xfae: Return(); Pop(0)

0xfaf: PushEmpty()
0xfb0: Push((int) 10)
0xfb1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb2: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfb3: PushEmpty()
0xfb4: Call2 0xfab

0xfb5: Pop(0)
0xfb6: PushEmpty(bool)
0xfb7: Stack[-1] = (bool) 0
0xfb8: PushEmpty(bool)
0xfb9: Call2 0x1081

0xfba: Pop(0)
0xfbb: IF (Stack[-1] == 0) GOTO 0xfc1; Pop(1)

0xfbc: PushEmpty(bool)
0xfbd: Call2 0xf8c

0xfbe: Pop(0)
0xfbf: IF (Stack[-1] == 0) GOTO 0xfc1; Pop(1)

0xfc0: Stack[-1] = (bool) 1
0xfc1: IF (Stack[-1] == 0) GOTO 0xfce; Pop(1)

0xfc2: PushEmpty(bool)
0xfc3: Call2 0xf78

0xfc4: Pop(0)
0xfc5: IF (Stack[-1] == 0) GOTO 0xfcd; Pop(1)

0xfc6: PushEmpty(bool, object)
0xfc7: PushEmpty(object)
0xfc8: Call2 0x119c

0xfc9: Stack[-2] = Stack[-1]
0xfca: Pop(1)
0xfcb: Call2 0x1117

0xfcc: Pop(2)
0xfcd: GOTO 0xfd4

0xfce: PushEmpty()
0xfcf: Call2 0xf87

0xfd0: Pop(0)
0xfd1: PushEmpty()
0xfd2: Call2 0xfa2

0xfd3: Pop(0)
0xfd4: Return(); Pop(0)

0xfd5: PushEmpty()
0xfd6: Call2 0x1061

0xfd7: Pop(0)
0xfd8: PushEmpty()
0xfd9: Call2 0xfab

0xfda: Pop(0)
0xfdb: @ lshStopSpeech()
0xfdc: Pop(0)
0xfdd: @ lshStopAnimation()
0xfde: Pop(0)
0xfdf: @ StopAsync()
0xfe0: Pop(0)
0xfe1: @ Hold()
0xfe2: Pop(0)
0xfe3: Return(); Pop(0)

0xfe4: @ StopGroup0()
0xfe5: Pop(0)
0xfe6: PushEmpty()
0xfe7: Call2 0xfab

0xfe8: Pop(0)
0xfe9: PushEmpty(string)
0xfea: Stack[-1] = "Neutral"
0xfeb: Call2 0x1167

0xfec: Pop(1)
0xfed: PushEmpty()
0xfee: Call2 0xfa2

0xfef: Pop(0)
0xff0: Return(); Pop(0)

0xff1: PushEmpty()
0xff2: Push(Stack[-1])
0xff3: IF (Stack[-1] == 0) GOTO 0xff8; Pop(1)

0xff4: PushEmpty()
0xff5: Call2 0xfa2

0xff6: Pop(0)
0xff7: GOTO 0xffc

0xff8: PushEmpty(string)
0xff9: Stack[-1] = "Neutral"
0xffa: Call2 0x1167

0xffb: Pop(1)
0xffc: Return(); Pop(0)

0xffd: PushEmpty(bool, bool)
0xffe: @ IsOverrideActive(Stack[-1])
0xfff: Pop(0)
0x1000: Pop(0); Push((bool) Stack[-1] == 0)
0x1001: IF (Stack[-1] == 0) GOTO 0x1019; Pop(1)

0x1002: EventDisable(0)
0x1003: PushEmpty()
0x1004: Call2 0x1061

0x1005: Pop(0)
0x1006: PushEmpty(bool, object)
0x1007: Stack[-1] = Stack[-5]
0x1008: Call2 0x1078

0x1009: Pop(2)
0x100a: EventEnable(0)
0x100b: PushEmpty(object)
0x100c: Stack[-1] = Stack[-4]
0x100d: Call2 0x14da

0x100e: Pop(1)
0x100f: PushEmpty(string)
0x1010: Stack[-1] = "Neutral"
0x1011: Call2 0x1167

0x1012: Pop(1)
0x1013: PushEmpty()
0x1014: Call2 0xfab

0x1015: Pop(0)
0x1016: PushEmpty()
0x1017: Call2 0xfa2

0x1018: Pop(0)
0x1019: Return(); Pop(2)

0x101a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x101b: @ WaitForAnimEnd()
0x101c: Pop(0)
0x101d: PushEmpty(bool)
0x101e: Call2 0x1081

0x101f: Pop(0)
0x1020: Pop(1); Push((bool) Stack[-1] == 0)
0x1021: IF (Stack[-1] == 0) GOTO 0x1023; Pop(1)

0x1022: Return(); Pop(12)

0x1023: PushEmpty(int)
0x1024: Call2 0x120e

0x1025: Stack[-7] = Stack[-1]
0x1026: Pop(1)
0x1027: Stack[-5] = (int) 0
0x1028: PushEmpty(bool)
0x1029: Stack[-1] = (bool) 0
0x102a: Push((int) 5)
0x102b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x102c: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x102d: PushEmpty(bool)
0x102e: Call2 0x1081

0x102f: Pop(0)
0x1030: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x1031: Stack[-1] = (bool) 1
0x1032: IF (Stack[-1] == 0) GOTO 0x105c; Pop(1)

0x1033: Pop(0); Push((bool) Stack[-6] == 0)
0x1034: IF (Stack[-1] == 0) GOTO 0x103c; Pop(1)

0x1035: Push((int) 3)
0x1036: @ Sleep(Stack[-1], Stack[-5])
0x1037: Pop(1)
0x1038: Pop(0); Push((bool) Stack[-4] == 0)
0x1039: IF (Stack[-1] == 0) GOTO 0x103b; Pop(1)

0x103a: GOTO 0x105c

0x103b: GOTO 0x1051

0x103c: @ irand(Stack[-3], Stack[-6])
0x103d: Pop(0)
0x103e: Push((int) 5)
0x103f: @ irand(Stack[-3], Stack[-1])
0x1040: Pop(1)
0x1041: Push((int) 0)
0x1042: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x1043: IF (Stack[-1] == 0) GOTO 0x1045; Pop(1)

0x1044: Stack[-3] = (int) 0
0x1045: Push("all")
0x1046: PushEmpty(string, int)
0x1047: Stack[-1] = Stack[-6]
0x1048: Call2 0x1207

0x1049: Pop(1)
0x104a: @ PlayAnimation(Stack[-2], Stack[-1])
0x104b: Pop(2)
0x104c: @ WaitForAnimEnd(Stack[-1])
0x104d: Pop(0)
0x104e: Pop(0); Push((bool) Stack[-1] == 0)
0x104f: IF (Stack[-1] == 0) GOTO 0x1051; Pop(1)

0x1050: GOTO 0x105c

0x1051: PushEmpty(bool)
0x1052: Call2 0x105f

0x1053: Pop(0)
0x1054: Pop(1); Push((bool) Stack[-1] == 0)
0x1055: IF (Stack[-1] == 0) GOTO 0x1057; Pop(1)

0x1056: GOTO 0x105c

0x1057: @ ResetAAS()
0x1058: Pop(0)
0x1059: Push((int) 1)
0x105a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x105b: GOTO 0x1028

0x105c: @ ResetAAS()
0x105d: Pop(0)
0x105e: Return(); Pop(12)

0x105f: Stack[-1] = (bool) 1
0x1060: Return(); Pop(0)

0x1061: @ StopAnimation()
0x1062: Pop(0)
0x1063: @ StopGroup0()
0x1064: Pop(0)
0x1065: Return(); Pop(0)

0x1066: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1067: @ GetPosition(Stack[-3])
0x1068: Pop(0)
0x1069: @@ GetPosition(Stack[-2])
0x106a: Pop(0)
0x106b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x106c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x106d: Return(); Pop(6)

0x106e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x106f: @ GetPosition(Stack[-3])
0x1070: Pop(0)
0x1071: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x1072: Push(CvectorIndex(Stack[-2], 0))
0x1073: Push(CvectorIndex(Stack[-3], 2))
0x1074: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1075: Pop(2)
0x1076: Stack[-8] = Stack[-1]
0x1077: Return(); Pop(6)

0x1078: PushEmpty(cvector, cvector)
0x1079: @@ GetPosition(Stack[-1])
0x107a: Pop(0)
0x107b: PushEmpty(bool, cvector)
0x107c: Stack[-1] = Stack[-3]
0x107d: Call2 0x106e

0x107e: Stack[-6] = Stack[-2]
0x107f: Pop(2)
0x1080: Return(); Pop(2)

0x1081: PushEmpty(bool, bool)
0x1082: @ IsLoaded(Stack[-1])
0x1083: Pop(0)
0x1084: Stack[-3] = Stack[-1]
0x1085: Return(); Pop(2)

0x1086: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1087: @@ GetPosition(Stack[-8])
0x1088: Pop(0)
0x1089: @@ GetEyesHeight(Stack[-9])
0x108a: Pop(0)
0x108b: Push(CvectorIndex(Stack[-8], 1))
0x108c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x108d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x108e: @ GetPosition(Stack[-7])
0x108f: Pop(0)
0x1090: @ GetEyesHeight(Stack[-9])
0x1091: Pop(0)
0x1092: Push(CvectorIndex(Stack[-7], 1))
0x1093: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1094: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1095: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1096: Push(CvectorIndex(Stack[-6], 1))
0x1097: Stack[-1] = (int) 0
0x1098: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1099: Pop(0); Push(Stack[-6] | Stack[-6]);
0x109a: Pop(1); Push(Sqrt(Stack[-1]))
0x109b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x109c: Stack[-5] = -Stack[-6]; Pop(0);
0x109d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x109e: PushEmpty(cvector, cvector)
0x109f: Push(CVector(0.0, 1.0, 0.0))
0x10a0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x10a1: Call2 0x11a2

0x10a2: Pop(1)
0x10a3: Push((int) 25)
0x10a4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10a5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10a6: Push(CVector(0.0, 10.0, 0.0))
0x10a7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x10a8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x10a9: @ IsOverrideActive(Stack[-2])
0x10aa: Pop(0)
0x10ab: Push(Stack[-2])
0x10ac: IF (Stack[-1] == 0) GOTO 0x10af; Pop(1)

0x10ad: Stack[-21] = (bool) 0
0x10ae: Return(); Pop(18)

0x10af: @ StopWorld()
0x10b0: Pop(0)
0x10b1: Push((bool) 1)
0x10b2: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x10b3: Pop(1)
0x10b4: Push(CvectorIndex(Stack[-4], 0))
0x10b5: Push(CvectorIndex(Stack[-5], 2))
0x10b6: @ Rotate(Stack[-2], Stack[-1])
0x10b7: Pop(2)
0x10b8: PushEmpty(bool)
0x10b9: Call2 0x1227

0x10ba: Pop(0)
0x10bb: IF (Stack[-1] == 0) GOTO 0x10bd; Pop(1)

0x10bc: GOTO 0x10c5

0x10bd: Push("head")
0x10be: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x10bf: Pop(1)
0x10c0: Push(Stack[-1])
0x10c1: IF (Stack[-1] == 0) GOTO 0x10c5; Pop(1)

0x10c2: Push("head")
0x10c3: @ LookAsyncCamera(Stack[-1])
0x10c4: Pop(1)
0x10c5: @ CameraWaitForPlayFinish()
0x10c6: Pop(0)
0x10c7: @ ResumeWorld()
0x10c8: Pop(0)
0x10c9: Stack[-21] = (bool) 1
0x10ca: Return(); Pop(18)

0x10cb: PushEmpty(bool, bool)
0x10cc: Push((bool) 1)
0x10cd: @ CameraSwitchToNormal(Stack[-1])
0x10ce: Pop(1)
0x10cf: PushEmpty(bool)
0x10d0: Call2 0x1227

0x10d1: Pop(0)
0x10d2: IF (Stack[-1] == 0) GOTO 0x10d4; Pop(1)

0x10d3: GOTO 0x10dc

0x10d4: Push("head")
0x10d5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x10d6: Pop(1)
0x10d7: Push(Stack[-1])
0x10d8: IF (Stack[-1] == 0) GOTO 0x10dc; Pop(1)

0x10d9: Push("head")
0x10da: @ UnlookAsync(Stack[-1])
0x10db: Pop(1)
0x10dc: Return(); Pop(2)

0x10dd: PushEmpty(int, int, int, int)
0x10de: Push("voice_common")
0x10df: @ GetVariable(Stack[-1], Stack[-3])
0x10e0: Pop(1)
0x10e1: Push(Stack[-2])
0x10e2: IF (Stack[-1] == 0) GOTO 0x1103; Pop(1)

0x10e3: PushEmpty(bool, object)
0x10e4: Stack[-1] = Stack[-7]
0x10e5: Call2 0x1117

0x10e6: Pop(1)
0x10e7: Pop(1); Push((bool) Stack[-1] == 0)
0x10e8: IF (Stack[-1] == 0) GOTO 0x10f1; Pop(1)

0x10e9: PushEmpty(bool, object)
0x10ea: Stack[-1] = Stack[-7]
0x10eb: Call2 0x113c

0x10ec: Pop(1)
0x10ed: Pop(1); Push((bool) Stack[-1] == 0)
0x10ee: IF (Stack[-1] == 0) GOTO 0x10f1; Pop(1)

0x10ef: Stack[-6] = (bool) 0
0x10f0: Return(); Pop(4)

0x10f1: Push((int) 2)
0x10f2: @ irand(Stack[-2], Stack[-1])
0x10f3: Pop(1)
0x10f4: Push(Stack[-1])
0x10f5: IF (Stack[-1] == 0) GOTO 0x10fe; Pop(1)

0x10f6: Push("voice_common")
0x10f7: Push((int) 1)
0x10f8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x10f9: Push((int) 3)
0x10fa: Pop(2); Push(Stack[-2] % Stack[-1]);
0x10fb: @ SetVariable(Stack[-2], Stack[-1])
0x10fc: Pop(2)
0x10fd: GOTO 0x1102

0x10fe: Push("voice_common")
0x10ff: Push((int) 0)
0x1100: @ SetVariable(Stack[-2], Stack[-1])
0x1101: Pop(2)
0x1102: GOTO 0x1115

0x1103: PushEmpty(bool, object)
0x1104: Stack[-1] = Stack[-7]
0x1105: Call2 0x113c

0x1106: Pop(1)
0x1107: Pop(1); Push((bool) Stack[-1] == 0)
0x1108: IF (Stack[-1] == 0) GOTO 0x1111; Pop(1)

0x1109: PushEmpty(bool, object)
0x110a: Stack[-1] = Stack[-7]
0x110b: Call2 0x1117

0x110c: Pop(1)
0x110d: Pop(1); Push((bool) Stack[-1] == 0)
0x110e: IF (Stack[-1] == 0) GOTO 0x1111; Pop(1)

0x110f: Stack[-6] = (bool) 0
0x1110: Return(); Pop(4)

0x1111: Push("voice_common")
0x1112: Push((int) 1)
0x1113: @ SetVariable(Stack[-2], Stack[-1])
0x1114: Pop(2)
0x1115: Stack[-6] = (bool) 1
0x1116: Return(); Pop(4)

0x1117: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1118: Stack[-5] = "c"
0x1119: Stack[-4] = (int) 0
0x111a: Push((int) 1)
0x111b: IF (Stack[-1] == 0) GOTO 0x1127; Pop(1)

0x111c: Push((int) 1)
0x111d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x111e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x111f: @@ HasProperty(Stack[-1], Stack[-4])
0x1120: Pop(1)
0x1121: Pop(0); Push((bool) Stack[-3] == 0)
0x1122: IF (Stack[-1] == 0) GOTO 0x1124; Pop(1)

0x1123: GOTO 0x1127

0x1124: Push((int) 1)
0x1125: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1126: GOTO 0x111a

0x1127: Pop(0); Push((bool) Stack[-4] == 0)
0x1128: IF (Stack[-1] == 0) GOTO 0x112b; Pop(1)

0x1129: Stack[-12] = (bool) 0
0x112a: Return(); Pop(10)

0x112b: Stack[-2] = (int) 0
0x112c: Push((int) 1)
0x112d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x112e: IF (Stack[-1] == 0) GOTO 0x1131; Pop(1)

0x112f: @ irand(Stack[-2], Stack[-4])
0x1130: Pop(0)
0x1131: Push((int) 1)
0x1132: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1133: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1134: @@ GetProperty(Stack[-1], Stack[-2])
0x1135: Pop(1)
0x1136: PushEmpty(bool, string)
0x1137: Stack[-1] = Stack[-3]
0x1138: Call2 0x1186

0x1139: Stack[-14] = Stack[-2]
0x113a: Pop(2)
0x113b: Return(); Pop(10)

0x113c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x113d: Push("d")
0x113e: PushEmpty(int)
0x113f: Call2 0x11e5

0x1140: Pop(0)
0x1141: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1142: Push("m")
0x1143: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1144: Stack[-4] = (int) 0
0x1145: Push((int) 1)
0x1146: IF (Stack[-1] == 0) GOTO 0x1152; Pop(1)

0x1147: Push((int) 1)
0x1148: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1149: Pop(1); Push(Stack[-6] + Stack[-1]);
0x114a: @@ HasProperty(Stack[-1], Stack[-4])
0x114b: Pop(1)
0x114c: Pop(0); Push((bool) Stack[-3] == 0)
0x114d: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x114e: GOTO 0x1152

0x114f: Push((int) 1)
0x1150: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1151: GOTO 0x1145

0x1152: Pop(0); Push((bool) Stack[-4] == 0)
0x1153: IF (Stack[-1] == 0) GOTO 0x1156; Pop(1)

0x1154: Stack[-12] = (bool) 0
0x1155: Return(); Pop(10)

0x1156: Stack[-2] = (int) 0
0x1157: Push((int) 1)
0x1158: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1159: IF (Stack[-1] == 0) GOTO 0x115c; Pop(1)

0x115a: @ irand(Stack[-2], Stack[-4])
0x115b: Pop(0)
0x115c: Push((int) 1)
0x115d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x115e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x115f: @@ GetProperty(Stack[-1], Stack[-2])
0x1160: Pop(1)
0x1161: PushEmpty(bool, string)
0x1162: Stack[-1] = Stack[-3]
0x1163: Call2 0x1186

0x1164: Stack[-14] = Stack[-2]
0x1165: Pop(2)
0x1166: Return(); Pop(10)

0x1167: PushEmpty(bool, float, float, bool, float, float)
0x1168: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1169: Pop(0)
0x116a: Push(Stack[-3])
0x116b: IF (Stack[-1] == 0) GOTO 0x1172; Pop(1)

0x116c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x116d: Pop(0)
0x116e: Push((bool) 0)
0x116f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1170: Pop(1)
0x1171: GOTO 0x1176

0x1172: Push("Can't find lsh animation : ")
0x1173: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1174: @ Trace(Stack[-1])
0x1175: Pop(1)
0x1176: Return(); Pop(6)

0x1177: PushEmpty(bool, float, float, bool, float, float)
0x1178: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1179: Pop(0)
0x117a: Push(Stack[-3])
0x117b: IF (Stack[-1] == 0) GOTO 0x1181; Pop(1)

0x117c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x117d: Pop(0)
0x117e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x117f: Pop(0)
0x1180: GOTO 0x1185

0x1181: Push("Can't find lsh animation : ")
0x1182: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1183: @ Trace(Stack[-1])
0x1184: Pop(1)
0x1185: Return(); Pop(6)

0x1186: PushEmpty(bool, bool)
0x1187: PushEmpty(bool)
0x1188: Call2 0x1227

0x1189: Pop(0)
0x118a: IF (Stack[-1] == 0) GOTO 0x1193; Pop(1)

0x118b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x118c: Pop(0)
0x118d: Push(Stack[-1])
0x118e: IF (Stack[-1] == 0) GOTO 0x1193; Pop(1)

0x118f: @ lshPlaySpeech(Stack[-3])
0x1190: Pop(0)
0x1191: Stack[-4] = (bool) 1
0x1192: Return(); Pop(2)

0x1193: Stack[-4] = (bool) 0
0x1194: Return(); Pop(2)

0x1195: PushEmpty(bool)
0x1196: Call2 0x1227

0x1197: Pop(0)
0x1198: IF (Stack[-1] == 0) GOTO 0x119b; Pop(1)

0x1199: @ lshStopSpeech()
0x119a: Pop(0)
0x119b: Return(); Pop(0)

0x119c: PushEmpty(object, object)
0x119d: @ self(Stack[-1])
0x119e: Pop(0)
0x119f: Stack[-3] = Stack[-1]
0x11a0: Return(); Pop(2)

0x11a1: Stack[-1] = 0
0x11a2: PushEmpty(float, float)
0x11a3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11a4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x11a5: Push((float)0.0)
0x11a6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x11a7: IF (Stack[-1] == 0) GOTO 0x11aa; Pop(1)

0x11a8: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x11a9: Return(); Pop(2)

0x11aa: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x11ab: Return(); Pop(2)

0x11ac: PushEmpty(int, int)
0x11ad: @ GetVariable(Stack[-3], Stack[-1])
0x11ae: Pop(0)
0x11af: Stack[-4] = Stack[-1]
0x11b0: Return(); Pop(2)

0x11b1: PushEmpty(object, object, object, object)
0x11b2: @ GetMainOutdoorScene(Stack[-2])
0x11b3: Pop(0)
0x11b4: Push(".bin")
0x11b5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11b6: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x11b7: Pop(1)
0x11b8: Stack[-6] = Stack[-1]
0x11b9: Return(); Pop(4)

0x11ba: Stack[-1] = 0
0x11bb: Stack[-2] = 0
0x11bc: PushEmpty(object, object)
0x11bd: @ FindActor(Stack[-1], Stack[-4])
0x11be: Pop(0)
0x11bf: Pop(0); Push((bool) Stack[-1] == 0)
0x11c0: IF (Stack[-1] == 0) GOTO 0x11c8; Pop(1)

0x11c1: Push("Door ")
0x11c2: Pop(1); Push(Stack[-1] + Stack[-5]);
0x11c3: Push(" not found")
0x11c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11c5: @ Trace(Stack[-1])
0x11c6: Pop(1)
0x11c7: GOTO 0x11cb

0x11c8: Push("locked")
0x11c9: @@ SetProperty(Stack[-1], Stack[-4])
0x11ca: Pop(1)
0x11cb: Return(); Pop(2)

0x11cc: Stack[-1] = 0
0x11cd: PushEmpty(int, bool, int, bool)
0x11ce: @ GetInvItemByName(Stack[-2], Stack[-5])
0x11cf: Pop(0)
0x11d0: @@ HasItem(Stack[-2], Stack[-1])
0x11d1: Pop(0)
0x11d2: Stack[-7] = Stack[-1]
0x11d3: Return(); Pop(4)

0x11d4: PushEmpty(object, object)
0x11d5: @ FindActor(Stack[-1], Stack[-4])
0x11d6: Pop(0)
0x11d7: Pop(0); Push((bool) Stack[-1] == 0)
0x11d8: IF (Stack[-1] == 0) GOTO 0x11db; Pop(1)

0x11d9: Stack[-5] = (bool) 0
0x11da: Return(); Pop(2)

0x11db: @ Trigger(Stack[-1], Stack[-3])
0x11dc: Pop(0)
0x11dd: Stack[-5] = (bool) 1
0x11de: Return(); Pop(2)

0x11df: Stack[-1] = 0
0x11e0: PushEmpty(float, float)
0x11e1: @ GetGameTime(Stack[-1])
0x11e2: Pop(0)
0x11e3: Stack[-3] = Stack[-1]
0x11e4: Return(); Pop(2)

0x11e5: PushEmpty(float, float)
0x11e6: @ GetGameTime(Stack[-1])
0x11e7: Pop(0)
0x11e8: Push((int) 1)
0x11e9: PushEmpty(int)
0x11ea: Push((int) 24)
0x11eb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x11ec: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x11ed: Return(); Pop(2)

0x11ee: PushEmpty()
0x11ef: PushEmpty(int)
0x11f0: Call2 0x11e5

0x11f1: Pop(0)
0x11f2: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x11f3: Return(); Pop(0)

0x11f4: PushEmpty(float, int, int, float, int, int)
0x11f5: @ GetGameTime(Stack[-3])
0x11f6: Pop(0)
0x11f7: Push((int) 1)
0x11f8: PushEmpty(int)
0x11f9: Push((int) 24)
0x11fa: Stack[-2] = Stack[-6] / Stack[-1]; Pop(1);
0x11fb: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x11fc: Pop(0); Push((bool) Stack[-2] != Stack[-7])
0x11fd: IF (Stack[-1] == 0) GOTO 0x1200; Pop(1)

0x11fe: Stack[-8] = (bool) 0
0x11ff: Return(); Pop(6)

0x1200: PushEmpty(int)
0x1201: Stack[-1] = Stack[-4]
0x1202: Push((int) 24)
0x1203: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x1204: Push((int) 7)
0x1205: Stack[-9] = Stack[-2] < Stack[-1]; Pop(1);
0x1206: Return(); Pop(6)

0x1207: PushEmpty(string, string)
0x1208: Stack[-1] = "idle"
0x1209: Push(Stack[-3])
0x120a: IF (Stack[-1] == 0) GOTO 0x120c; Pop(1)

0x120b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x120c: Stack[-4] = Stack[-1]
0x120d: Return(); Pop(2)

0x120e: PushEmpty(int, bool, int, bool)
0x120f: Stack[-2] = (int) 0
0x1210: Push("all")
0x1211: PushEmpty(string, int)
0x1212: Stack[-1] = Stack[-5]
0x1213: Call2 0x1207

0x1214: Pop(1)
0x1215: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1216: Pop(2)
0x1217: Pop(0); Push((bool) Stack[-1] == 0)
0x1218: IF (Stack[-1] == 0) GOTO 0x121a; Pop(1)

0x1219: GOTO 0x121d

0x121a: Push((int) 1)
0x121b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x121c: GOTO 0x1210

0x121d: Stack[-5] = Stack[-2]
0x121e: Return(); Pop(4)

0x121f: Stack[-1] = (int) 515527
0x1220: Return(); Pop(0)

0x1221: Stack[-1] = (int) 513334
0x1222: Return(); Pop(0)

0x1223: Stack[-1] = "ui/NPC_Aglaja.png"
0x1224: Return(); Pop(0)

0x1225: Stack[-1] = "ui/NPC_Aglaja_b.png"
0x1226: Return(); Pop(0)

0x1227: Stack[-1] = (bool) 1
0x1228: Return(); Pop(0)

0x1229: PushEmpty()
0x122a: PushEmpty(string, bool)
0x122b: Stack[-2] = "boiny@door1"
0x122c: Stack[-1] = (bool) 0
0x122d: Call2 0x11bc

0x122e: Pop(2)
0x122f: Return(); Pop(0)

0x1230: PushEmpty(object, object)
0x1231: Push("b7q01")
0x1232: Push((int) 7)
0x1233: @ SetVariable(Stack[-2], Stack[-1])
0x1234: Pop(2)
0x1235: PushEmpty(object)
0x1236: Call2 0x1497

0x1237: Stack[-2] = Stack[-1]
0x1238: Pop(1)
0x1239: Push("b7q01AglajaGotoStarshina")
0x123a: Push("pt_map_starshina")
0x123b: Push((int) 1)
0x123c: Push((int) 521027)
0x123d: PushEmpty(float)
0x123e: Call2 0x11e0

0x123f: Pop(0)
0x1240: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1241: Pop(5)
0x1242: PushEmpty()
0x1243: Call2 0x1406

0x1244: Pop(0)
0x1245: Return(); Pop(2)

0x1246: Stack[-1] = 0
0x1247: PushEmpty()
0x1248: PushEmpty()
0x1249: Call2 0x1413

0x124a: Pop(0)
0x124b: PushEmpty(bool, string, string)
0x124c: Stack[-2] = "quest_b7_01"
0x124d: Stack[-1] = "completed"
0x124e: Call2 0x11d4

0x124f: Pop(3)
0x1250: Return(); Pop(0)

0x1251: PushEmpty(object, object)
0x1252: Push("b7q03")
0x1253: Push((int) 1)
0x1254: @ SetVariable(Stack[-2], Stack[-1])
0x1255: Pop(2)
0x1256: PushEmpty(object)
0x1257: Call2 0x1497

0x1258: Stack[-2] = Stack[-1]
0x1259: Pop(1)
0x125a: Push("b7q03AglajaGotoTheater")
0x125b: Push("pt_map_theater")
0x125c: Push((int) 0)
0x125d: Push((int) 521367)
0x125e: PushEmpty(float)
0x125f: Call2 0x11e0

0x1260: Pop(0)
0x1261: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1262: Pop(5)
0x1263: PushEmpty()
0x1264: Call2 0x1420

0x1265: Pop(0)
0x1266: PushEmpty()
0x1267: Call2 0x142d

0x1268: Pop(0)
0x1269: PushEmpty(object, string)
0x126a: Stack[-1] = "quest_b7_03"
0x126b: Call2 0x11b1

0x126c: Pop(2)
0x126d: PushEmpty(bool, string, string)
0x126e: Stack[-2] = "quest_b7_03"
0x126f: Stack[-1] = "place_birdmask"
0x1270: Call2 0x11d4

0x1271: Pop(3)
0x1272: Return(); Pop(2)

0x1273: Stack[-1] = 0
0x1274: PushEmpty()
0x1275: Push("oob7Aglaja1")
0x1276: Push((int) 1)
0x1277: @ SetVariable(Stack[-2], Stack[-1])
0x1278: Pop(2)
0x1279: Return(); Pop(0)

0x127a: PushEmpty()
0x127b: PushEmpty()
0x127c: Call2 0x143a

0x127d: Pop(0)
0x127e: PushEmpty(bool, string, string)
0x127f: Stack[-2] = "quest_b7_03"
0x1280: Stack[-1] = "completed"
0x1281: Call2 0x11d4

0x1282: Pop(3)
0x1283: Return(); Pop(0)

0x1284: PushEmpty()
0x1285: Push("b8q01")
0x1286: Push((int) 1)
0x1287: @ SetVariable(Stack[-2], Stack[-1])
0x1288: Pop(2)
0x1289: PushEmpty()
0x128a: Call2 0x1447

0x128b: Pop(0)
0x128c: PushEmpty()
0x128d: Call2 0x1454

0x128e: Pop(0)
0x128f: Return(); Pop(0)

0x1290: PushEmpty()
0x1291: Push("oob8Aglaja1")
0x1292: Push((int) 1)
0x1293: @ SetVariable(Stack[-2], Stack[-1])
0x1294: Pop(2)
0x1295: Return(); Pop(0)

0x1296: PushEmpty()
0x1297: PushEmpty()
0x1298: Call2 0x1461

0x1299: Pop(0)
0x129a: PushEmpty(bool, string, string)
0x129b: Stack[-2] = "quest_b8_01"
0x129c: Stack[-1] = "completed"
0x129d: Call2 0x11d4

0x129e: Pop(3)
0x129f: Return(); Pop(0)

0x12a0: PushEmpty()
0x12a1: Push("oob8Aglaja2")
0x12a2: Push((int) 1)
0x12a3: @ SetVariable(Stack[-2], Stack[-1])
0x12a4: Pop(2)
0x12a5: Return(); Pop(0)

0x12a6: PushEmpty()
0x12a7: Push("oob11Aglaja1")
0x12a8: Push((int) 1)
0x12a9: @ SetVariable(Stack[-2], Stack[-1])
0x12aa: Pop(2)
0x12ab: Return(); Pop(0)

0x12ac: PushEmpty()
0x12ad: Push("oob11Aglaja2")
0x12ae: Push((int) 1)
0x12af: @ SetVariable(Stack[-2], Stack[-1])
0x12b0: Pop(2)
0x12b1: Return(); Pop(0)

0x12b2: PushEmpty()
0x12b3: Push("oob9Aglaja1")
0x12b4: Push((int) 1)
0x12b5: @ SetVariable(Stack[-2], Stack[-1])
0x12b6: Pop(2)
0x12b7: Return(); Pop(0)

0x12b8: PushEmpty()
0x12b9: Push("oob9Aglaja2")
0x12ba: Push((int) 1)
0x12bb: @ SetVariable(Stack[-2], Stack[-1])
0x12bc: Pop(2)
0x12bd: Return(); Pop(0)

0x12be: PushEmpty()
0x12bf: PushEmpty(int, string)
0x12c0: Stack[-1] = "map_chertez_state"
0x12c1: Call2 0x11ac

0x12c2: Pop(1)
0x12c3: Push((int) 1)
0x12c4: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x12c5: IF (Stack[-1] == 0) GOTO 0x12ce; Pop(1)

0x12c6: Push("map_chertez_state")
0x12c7: Push((int) 1)
0x12c8: @ SetVariable(Stack[-2], Stack[-1])
0x12c9: Pop(2)
0x12ca: Push("map_chertez_force")
0x12cb: Push((int) 1)
0x12cc: @ SetVariable(Stack[-2], Stack[-1])
0x12cd: Pop(2)
0x12ce: Return(); Pop(0)

0x12cf: PushEmpty()
0x12d0: PushEmpty(int, string)
0x12d1: Stack[-1] = "map_chertez_state"
0x12d2: Call2 0x11ac

0x12d3: Pop(1)
0x12d4: Push((int) 2)
0x12d5: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x12d6: IF (Stack[-1] == 0) GOTO 0x12df; Pop(1)

0x12d7: Push("map_chertez_state")
0x12d8: Push((int) 2)
0x12d9: @ SetVariable(Stack[-2], Stack[-1])
0x12da: Pop(2)
0x12db: Push("map_chertez_force")
0x12dc: Push((int) 1)
0x12dd: @ SetVariable(Stack[-2], Stack[-1])
0x12de: Pop(2)
0x12df: Return(); Pop(0)

0x12e0: PushEmpty()
0x12e1: PushEmpty(object, string, float)
0x12e2: PushEmpty(object)
0x12e3: Call2 0x1497

0x12e4: Stack[-4] = Stack[-1]
0x12e5: Pop(1)
0x12e6: Stack[-2] = "pt_map_aglaja"
0x12e7: Stack[-1] = (int) -1
0x12e8: Call2 0x14a8

0x12e9: Pop(3)
0x12ea: PushEmpty(object)
0x12eb: Call2 0x1497

0x12ec: Pop(0)
0x12ed: @@ ShowMap(Stack[-1])
0x12ee: Pop(1)
0x12ef: Return(); Pop(0)

0x12f0: PushEmpty()
0x12f1: PushEmpty(int, string)
0x12f2: Stack[-1] = "b7q01"
0x12f3: Call2 0x11ac

0x12f4: Pop(1)
0x12f5: Push((int) 1000)
0x12f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12f7: IF (Stack[-1] == 0) GOTO 0x12fa; Pop(1)

0x12f8: Stack[-2] = (bool) 1
0x12f9: Return(); Pop(0)

0x12fa: Stack[-2] = (bool) 0
0x12fb: Return(); Pop(0)

0x12fc: PushEmpty()
0x12fd: PushEmpty(int, string)
0x12fe: Stack[-1] = "oob7Aglaja1"
0x12ff: Call2 0x11ac

0x1300: Pop(1)
0x1301: Push((int) 0)
0x1302: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1303: IF (Stack[-1] == 0) GOTO 0x1306; Pop(1)

0x1304: Stack[-2] = (bool) 1
0x1305: Return(); Pop(0)

0x1306: Stack[-2] = (bool) 0
0x1307: Return(); Pop(0)

0x1308: PushEmpty()
0x1309: PushEmpty(int, string)
0x130a: Stack[-1] = "b7q03"
0x130b: Call2 0x11ac

0x130c: Pop(1)
0x130d: Push((int) 2)
0x130e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x130f: IF (Stack[-1] == 0) GOTO 0x1312; Pop(1)

0x1310: Stack[-2] = (bool) 1
0x1311: Return(); Pop(0)

0x1312: Stack[-2] = (bool) 0
0x1313: Return(); Pop(0)

0x1314: PushEmpty()
0x1315: PushEmpty(int, string)
0x1316: Stack[-1] = "b7q03SerumWorks"
0x1317: Call2 0x11ac

0x1318: Pop(1)
0x1319: Push((int) 0)
0x131a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x131b: IF (Stack[-1] == 0) GOTO 0x131e; Pop(1)

0x131c: Stack[-2] = (bool) 1
0x131d: Return(); Pop(0)

0x131e: Stack[-2] = (bool) 0
0x131f: Return(); Pop(0)

0x1320: PushEmpty()
0x1321: PushEmpty(int, string)
0x1322: Stack[-1] = "b7q03"
0x1323: Call2 0x11ac

0x1324: Pop(1)
0x1325: Push((int) 1000)
0x1326: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1327: IF (Stack[-1] == 0) GOTO 0x132a; Pop(1)

0x1328: Stack[-2] = (bool) 1
0x1329: Return(); Pop(0)

0x132a: Stack[-2] = (bool) 0
0x132b: Return(); Pop(0)

0x132c: PushEmpty()
0x132d: PushEmpty(int, string)
0x132e: Stack[-1] = "oob8Aglaja1"
0x132f: Call2 0x11ac

0x1330: Pop(1)
0x1331: Push((int) 0)
0x1332: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1333: IF (Stack[-1] == 0) GOTO 0x1336; Pop(1)

0x1334: Stack[-2] = (bool) 1
0x1335: Return(); Pop(0)

0x1336: Stack[-2] = (bool) 0
0x1337: Return(); Pop(0)

0x1338: PushEmpty()
0x1339: PushEmpty(int, string)
0x133a: Stack[-1] = "b8q01"
0x133b: Call2 0x11ac

0x133c: Pop(1)
0x133d: Push((int) 0)
0x133e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x133f: IF (Stack[-1] == 0) GOTO 0x1342; Pop(1)

0x1340: Stack[-2] = (bool) 1
0x1341: Return(); Pop(0)

0x1342: Stack[-2] = (bool) 0
0x1343: Return(); Pop(0)

0x1344: PushEmpty()
0x1345: PushEmpty(int, string)
0x1346: Stack[-1] = "b8q01"
0x1347: Call2 0x11ac

0x1348: Pop(1)
0x1349: Push((int) 7)
0x134a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x134b: IF (Stack[-1] == 0) GOTO 0x134e; Pop(1)

0x134c: Stack[-2] = (bool) 1
0x134d: Return(); Pop(0)

0x134e: Stack[-2] = (bool) 0
0x134f: Return(); Pop(0)

0x1350: PushEmpty()
0x1351: PushEmpty(bool)
0x1352: Stack[-1] = (bool) 0
0x1353: PushEmpty(bool)
0x1354: Stack[-1] = (bool) 0
0x1355: PushEmpty(int, string)
0x1356: Stack[-1] = "b8q03"
0x1357: Call2 0x11ac

0x1358: Pop(1)
0x1359: Push((int) 0)
0x135a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x135b: IF (Stack[-1] == 0) GOTO 0x1364; Pop(1)

0x135c: PushEmpty(int, string)
0x135d: Stack[-1] = "b8q03"
0x135e: Call2 0x11ac

0x135f: Pop(1)
0x1360: Push((int) 1000)
0x1361: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1362: IF (Stack[-1] == 0) GOTO 0x1364; Pop(1)

0x1363: Stack[-1] = (bool) 1
0x1364: IF (Stack[-1] == 0) GOTO 0x136d; Pop(1)

0x1365: PushEmpty(int, string)
0x1366: Stack[-1] = "b8q03"
0x1367: Call2 0x11ac

0x1368: Pop(1)
0x1369: Push((int) -1)
0x136a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x136b: IF (Stack[-1] == 0) GOTO 0x136d; Pop(1)

0x136c: Stack[-1] = (bool) 1
0x136d: IF (Stack[-1] == 0) GOTO 0x1370; Pop(1)

0x136e: Stack[-2] = (bool) 1
0x136f: Return(); Pop(0)

0x1370: Stack[-2] = (bool) 0
0x1371: Return(); Pop(0)

0x1372: PushEmpty()
0x1373: PushEmpty(int, string)
0x1374: Stack[-1] = "oob8Aglaja2"
0x1375: Call2 0x11ac

0x1376: Pop(1)
0x1377: Push((int) 0)
0x1378: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1379: IF (Stack[-1] == 0) GOTO 0x137c; Pop(1)

0x137a: Stack[-2] = (bool) 1
0x137b: Return(); Pop(0)

0x137c: Stack[-2] = (bool) 0
0x137d: Return(); Pop(0)

0x137e: PushEmpty()
0x137f: PushEmpty(int, string)
0x1380: Stack[-1] = "b11q01"
0x1381: Call2 0x11ac

0x1382: Pop(1)
0x1383: Push((int) 1000)
0x1384: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1385: IF (Stack[-1] == 0) GOTO 0x1388; Pop(1)

0x1386: Stack[-2] = (bool) 1
0x1387: Return(); Pop(0)

0x1388: Stack[-2] = (bool) 0
0x1389: Return(); Pop(0)

0x138a: PushEmpty()
0x138b: PushEmpty(int, string)
0x138c: Stack[-1] = "oob11Aglaja1"
0x138d: Call2 0x11ac

0x138e: Pop(1)
0x138f: Push((int) 0)
0x1390: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1391: IF (Stack[-1] == 0) GOTO 0x1394; Pop(1)

0x1392: Stack[-2] = (bool) 1
0x1393: Return(); Pop(0)

0x1394: Stack[-2] = (bool) 0
0x1395: Return(); Pop(0)

0x1396: PushEmpty()
0x1397: PushEmpty(int, string)
0x1398: Stack[-1] = "oob11Aglaja2"
0x1399: Call2 0x11ac

0x139a: Pop(1)
0x139b: Push((int) 0)
0x139c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x139d: IF (Stack[-1] == 0) GOTO 0x13a0; Pop(1)

0x139e: Stack[-2] = (bool) 1
0x139f: Return(); Pop(0)

0x13a0: Stack[-2] = (bool) 0
0x13a1: Return(); Pop(0)

0x13a2: PushEmpty()
0x13a3: PushEmpty(int, string)
0x13a4: Stack[-1] = "b9q03BadInit"
0x13a5: Call2 0x11ac

0x13a6: Pop(1)
0x13a7: Push((int) 0)
0x13a8: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x13a9: IF (Stack[-1] == 0) GOTO 0x13ac; Pop(1)

0x13aa: Stack[-2] = (bool) 1
0x13ab: Return(); Pop(0)

0x13ac: Stack[-2] = (bool) 0
0x13ad: Return(); Pop(0)

0x13ae: PushEmpty()
0x13af: PushEmpty(int, string)
0x13b0: Stack[-1] = "b9q03BonefiresCount"
0x13b1: Call2 0x11ac

0x13b2: Pop(1)
0x13b3: Push((int) 4)
0x13b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13b5: IF (Stack[-1] == 0) GOTO 0x13b8; Pop(1)

0x13b6: Stack[-2] = (bool) 1
0x13b7: Return(); Pop(0)

0x13b8: Stack[-2] = (bool) 0
0x13b9: Return(); Pop(0)

0x13ba: PushEmpty()
0x13bb: PushEmpty(int, string)
0x13bc: Stack[-1] = "oob9Aglaja1"
0x13bd: Call2 0x11ac

0x13be: Pop(1)
0x13bf: Push((int) 0)
0x13c0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13c1: IF (Stack[-1] == 0) GOTO 0x13c4; Pop(1)

0x13c2: Stack[-2] = (bool) 1
0x13c3: Return(); Pop(0)

0x13c4: Stack[-2] = (bool) 0
0x13c5: Return(); Pop(0)

0x13c6: PushEmpty()
0x13c7: PushEmpty(int, string)
0x13c8: Stack[-1] = "oob9Aglaja2"
0x13c9: Call2 0x11ac

0x13ca: Pop(1)
0x13cb: Push((int) 0)
0x13cc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13cd: IF (Stack[-1] == 0) GOTO 0x13d0; Pop(1)

0x13ce: Stack[-2] = (bool) 1
0x13cf: Return(); Pop(0)

0x13d0: Stack[-2] = (bool) 0
0x13d1: Return(); Pop(0)

0x13d2: PushEmpty()
0x13d3: PushEmpty(bool, object)
0x13d4: Stack[-1] = Stack[-3]
0x13d5: Call2 0x13ff

0x13d6: Pop(1)
0x13d7: IF (Stack[-1] == 0) GOTO 0x13da; Pop(1)

0x13d8: Stack[-2] = (bool) 1
0x13d9: Return(); Pop(0)

0x13da: Stack[-2] = (bool) 0
0x13db: Return(); Pop(0)

0x13dc: PushEmpty()
0x13dd: PushEmpty(int, string)
0x13de: Stack[-1] = "b7q01"
0x13df: Call2 0x11ac

0x13e0: Pop(1)
0x13e1: Push((int) 6)
0x13e2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13e3: IF (Stack[-1] == 0) GOTO 0x13e6; Pop(1)

0x13e4: Stack[-2] = (bool) 1
0x13e5: Return(); Pop(0)

0x13e6: Stack[-2] = (bool) 0
0x13e7: Return(); Pop(0)

0x13e8: PushEmpty()
0x13e9: PushEmpty(bool, object, string)
0x13ea: Stack[-2] = Stack[-4]
0x13eb: Stack[-1] = "burah_serum"
0x13ec: Call2 0x11cd

0x13ed: Pop(2)
0x13ee: IF (Stack[-1] == 0) GOTO 0x13f1; Pop(1)

0x13ef: Stack[-2] = (bool) 1
0x13f0: Return(); Pop(0)

0x13f1: Stack[-2] = (bool) 0
0x13f2: Return(); Pop(0)

0x13f3: PushEmpty()
0x13f4: PushEmpty(int, string)
0x13f5: Stack[-1] = "b7q01"
0x13f6: Call2 0x11ac

0x13f7: Pop(1)
0x13f8: Push((int) 8)
0x13f9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13fa: IF (Stack[-1] == 0) GOTO 0x13fd; Pop(1)

0x13fb: Stack[-2] = (bool) 1
0x13fc: Return(); Pop(0)

0x13fd: Stack[-2] = (bool) 0
0x13fe: Return(); Pop(0)

0x13ff: PushEmpty(float, float)
0x1400: Push("disease")
0x1401: @@ GetProperty(Stack[-1], Stack[-2])
0x1402: Pop(1)
0x1403: Push((int) 0)
0x1404: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x1405: Return(); Pop(2)

0x1406: PushEmpty(object, object)
0x1407: Push((int) 259)
0x1408: Push((int) 1)
0x1409: Push((int) 521031)
0x140a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x140b: Pop(3)
0x140c: PushEmpty(bool, object, int)
0x140d: Stack[-2] = Stack[-4]
0x140e: Stack[-1] = (int) 253
0x140f: Call2 0x147b

0x1410: Pop(3)
0x1411: Return(); Pop(2)

0x1412: Stack[-1] = 0
0x1413: PushEmpty(object, object)
0x1414: Push((int) 261)
0x1415: Push((int) 1)
0x1416: Push((int) 521033)
0x1417: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1418: Pop(3)
0x1419: PushEmpty(bool, object, int)
0x141a: Stack[-2] = Stack[-4]
0x141b: Stack[-1] = (int) 253
0x141c: Call2 0x147b

0x141d: Pop(3)
0x141e: Return(); Pop(2)

0x141f: Stack[-1] = 0
0x1420: PushEmpty(object, object)
0x1421: Push((int) 280)
0x1422: Push((int) 2)
0x1423: Push((int) 521363)
0x1424: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1425: Pop(3)
0x1426: PushEmpty(bool, object, int)
0x1427: Stack[-2] = Stack[-4]
0x1428: Stack[-1] = (int) -1
0x1429: Call2 0x147b

0x142a: Pop(3)
0x142b: Return(); Pop(2)

0x142c: Stack[-1] = 0
0x142d: PushEmpty(object, object)
0x142e: Push((int) 281)
0x142f: Push((int) 2)
0x1430: Push((int) 521364)
0x1431: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1432: Pop(3)
0x1433: PushEmpty(bool, object, int)
0x1434: Stack[-2] = Stack[-4]
0x1435: Stack[-1] = (int) 280
0x1436: Call2 0x147b

0x1437: Pop(3)
0x1438: Return(); Pop(2)

0x1439: Stack[-1] = 0
0x143a: PushEmpty(object, object)
0x143b: Push((int) 283)
0x143c: Push((int) 2)
0x143d: Push((int) 521366)
0x143e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x143f: Pop(3)
0x1440: PushEmpty(bool, object, int)
0x1441: Stack[-2] = Stack[-4]
0x1442: Stack[-1] = (int) 280
0x1443: Call2 0x147b

0x1444: Pop(3)
0x1445: Return(); Pop(2)

0x1446: Stack[-1] = 0
0x1447: PushEmpty(object, object)
0x1448: Push((int) 284)
0x1449: Push((int) 1)
0x144a: Push((int) 521455)
0x144b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x144c: Pop(3)
0x144d: PushEmpty(bool, object, int)
0x144e: Stack[-2] = Stack[-4]
0x144f: Stack[-1] = (int) -1
0x1450: Call2 0x147b

0x1451: Pop(3)
0x1452: Return(); Pop(2)

0x1453: Stack[-1] = 0
0x1454: PushEmpty(object, object)
0x1455: Push((int) 285)
0x1456: Push((int) 1)
0x1457: Push((int) 521456)
0x1458: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1459: Pop(3)
0x145a: PushEmpty(bool, object, int)
0x145b: Stack[-2] = Stack[-4]
0x145c: Stack[-1] = (int) 284
0x145d: Call2 0x147b

0x145e: Pop(3)
0x145f: Return(); Pop(2)

0x1460: Stack[-1] = 0
0x1461: PushEmpty(object, object)
0x1462: Push((int) 292)
0x1463: Push((int) 1)
0x1464: Push((int) 521463)
0x1465: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1466: Pop(3)
0x1467: PushEmpty(bool, object, int)
0x1468: Stack[-2] = Stack[-4]
0x1469: Stack[-1] = (int) 284
0x146a: Call2 0x147b

0x146b: Pop(3)
0x146c: Return(); Pop(2)

0x146d: Stack[-1] = 0
0x146e: PushEmpty(object, object)
0x146f: @ GetDiaryRoot(Stack[-1])
0x1470: Pop(0)
0x1471: Pop(0); Push((bool) Stack[-1] == 0)
0x1472: IF (Stack[-1] == 0) GOTO 0x1478; Pop(1)

0x1473: Push("Can't retrieve diary root")
0x1474: @ Trace(Stack[-1])
0x1475: Pop(1)
0x1476: Stack[-3] = (bool) 0
0x1477: Return(); Pop(2)

0x1478: Stack[-3] = Stack[-1]
0x1479: Return(); Pop(2)

0x147a: Stack[-1] = 0
0x147b: PushEmpty(object, object, int, object, object, int)
0x147c: PushEmpty(object)
0x147d: Call2 0x146e

0x147e: Stack[-4] = Stack[-1]
0x147f: Pop(1)
0x1480: @@ Find(Stack[-7], Stack[-2])
0x1481: Pop(0)
0x1482: Pop(0); Push((bool) Stack[-2] == 0)
0x1483: IF (Stack[-1] == 0) GOTO 0x148a; Pop(1)

0x1484: Push("Can't find diary parent with id: ")
0x1485: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1486: @ Trace(Stack[-1])
0x1487: Pop(1)
0x1488: Stack[-9] = (bool) 0
0x1489: Return(); Pop(6)

0x148a: @@ AddChild(Stack[-8])
0x148b: Pop(0)
0x148c: Push((int) 7)
0x148d: @ SendWorldWndMessage(Stack[-1])
0x148e: Pop(1)
0x148f: @@ GetCategory(Stack[-1])
0x1490: Pop(0)
0x1491: @ SetDiarySection(Stack[-1])
0x1492: Pop(0)
0x1493: Stack[-9] = (bool) 0
0x1494: Return(); Pop(6)

0x1495: Stack[-2] = 0
0x1496: Stack[-3] = 0
0x1497: PushEmpty(object, object, object, object)
0x1498: @ GetMainOutdoorScene(Stack[-2])
0x1499: Pop(0)
0x149a: Pop(0); Push((bool) Stack[-2] == 0)
0x149b: IF (Stack[-1] == 0) GOTO 0x14a2; Pop(1)

0x149c: Push("Can't find main outdoor scene")
0x149d: @ Trace(Stack[-1])
0x149e: Pop(1)
0x149f: Stack[-1] = 0
0x14a0: Stack[-5] = Stack[-1]
0x14a1: Return(); Pop(4)

0x14a2: @@ GetMap(Stack[-1])
0x14a3: Pop(0)
0x14a4: Stack[-5] = Stack[-1]
0x14a5: Return(); Pop(4)

0x14a6: Stack[-1] = 0
0x14a7: Stack[-2] = 0
0x14a8: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x14a9: @ GetMainOutdoorScene(Stack[-2])
0x14aa: Pop(0)
0x14ab: Pop(0); Push((bool) Stack[-2] == 0)
0x14ac: IF (Stack[-1] == 0) GOTO 0x14b1; Pop(1)

0x14ad: Push("Can't find main outdoor scene")
0x14ae: @ Trace(Stack[-1])
0x14af: Pop(1)
0x14b0: Return(); Pop(8)

0x14b1: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x14b2: Pop(0)
0x14b3: Pop(0); Push((bool) Stack[-1] == 0)
0x14b4: IF (Stack[-1] == 0) GOTO 0x14bb; Pop(1)

0x14b5: Push("Warning: outdoor scene locator ")
0x14b6: Pop(1); Push(Stack[-1] + Stack[-11]);
0x14b7: Push(" doesnt exist")
0x14b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14b9: @ Trace(Stack[-1])
0x14ba: Pop(1)
0x14bb: @@ GetMap(Stack[-11])
0x14bc: Pop(0)
0x14bd: Pop(0); Push((bool) Stack[-11] == 0)
0x14be: IF (Stack[-1] == 0) GOTO 0x14c3; Pop(1)

0x14bf: Push("Can't find map")
0x14c0: @ Trace(Stack[-1])
0x14c1: Pop(1)
0x14c2: Return(); Pop(8)

0x14c3: Push(CvectorIndex(Stack[-4], 0))
0x14c4: Push(CvectorIndex(Stack[-5], 2))
0x14c5: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x14c6: Pop(2)
0x14c7: Return(); Pop(8)

0x14c8: Stack[-2] = 0
0x14c9: PushEmpty(int, int)
0x14ca: Push("branch")
0x14cb: @ GetVariable(Stack[-1], Stack[-2])
0x14cc: Pop(1)
0x14cd: Push((int) 0)
0x14ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14cf: IF (Stack[-1] == 0) GOTO 0x14d3; Pop(1)

0x14d0: Stack[-3] = (int) 1
0x14d1: Return(); Pop(2)

0x14d2: GOTO 0x14d8

0x14d3: Push((int) 1)
0x14d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14d5: IF (Stack[-1] == 0) GOTO 0x14d8; Pop(1)

0x14d6: Stack[-3] = (int) 2
0x14d7: Return(); Pop(2)

0x14d8: Stack[-3] = (int) 3
0x14d9: Return(); Pop(2)

0x14da: PushEmpty(int, int)
0x14db: Push("mt_aglaja")
0x14dc: @ GetVariable(Stack[-1], Stack[-2])
0x14dd: Pop(1)
0x14de: Pop(0); Push((bool) Stack[-1] == 0)
0x14df: IF (Stack[-1] == 0) GOTO 0x14ea; Pop(1)

0x14e0: PushEmpty(int, object)
0x14e1: Stack[-1] = Stack[-5]
0x14e2: Push(-2, 1); TaskCall(12)
0x14e3: Call2 0xe6d

0x14e4: Pop(-2, 1); TaskReturn
0x14e5: Pop(2)
0x14e6: Push("mt_aglaja")
0x14e7: Push((int) 1)
0x14e8: @ SetVariable(Stack[-2], Stack[-1])
0x14e9: Pop(2)
0x14ea: PushEmpty(bool, int)
0x14eb: Stack[-1] = (int) 8
0x14ec: Call2 0x11f4

0x14ed: Pop(1)
0x14ee: IF (Stack[-1] == 0) GOTO 0x14f6; Pop(1)

0x14ef: PushEmpty(int, object)
0x14f0: Stack[-1] = Stack[-5]
0x14f1: Push(-2, 1); TaskCall(6)
0x14f2: Call2 0xb12

0x14f3: Pop(-2, 1); TaskReturn
0x14f4: Pop(2)
0x14f5: Return(); Pop(2)

0x14f6: PushEmpty(bool, int)
0x14f7: Stack[-1] = (int) 12
0x14f8: Call2 0x11f4

0x14f9: Pop(1)
0x14fa: IF (Stack[-1] == 0) GOTO 0x1502; Pop(1)

0x14fb: PushEmpty(int, object)
0x14fc: Stack[-1] = Stack[-5]
0x14fd: Push(-2, 1); TaskCall(8)
0x14fe: Call2 0xbdd

0x14ff: Pop(-2, 1); TaskReturn
0x1500: Pop(2)
0x1501: Return(); Pop(2)

0x1502: PushEmpty(bool, int)
0x1503: Stack[-1] = (int) 7
0x1504: Call2 0x11ee

0x1505: Pop(1)
0x1506: IF (Stack[-1] == 0) GOTO 0x150e; Pop(1)

0x1507: PushEmpty(int, object)
0x1508: Stack[-1] = Stack[-5]
0x1509: Push(-2, 1); TaskCall(0)
0x150a: Call2 0x0

0x150b: Pop(-2, 1); TaskReturn
0x150c: Pop(2)
0x150d: Return(); Pop(2)

0x150e: PushEmpty(bool, int)
0x150f: Stack[-1] = (int) 8
0x1510: Call2 0x11ee

0x1511: Pop(1)
0x1512: IF (Stack[-1] == 0) GOTO 0x151a; Pop(1)

0x1513: PushEmpty(int, object)
0x1514: Stack[-1] = Stack[-5]
0x1515: Push(-2, 1); TaskCall(2)
0x1516: Call2 0x52b

0x1517: Pop(-2, 1); TaskReturn
0x1518: Pop(2)
0x1519: Return(); Pop(2)

0x151a: PushEmpty(bool, int)
0x151b: Stack[-1] = (int) 9
0x151c: Call2 0x11ee

0x151d: Pop(1)
0x151e: IF (Stack[-1] == 0) GOTO 0x1526; Pop(1)

0x151f: PushEmpty(int, object)
0x1520: Stack[-1] = Stack[-5]
0x1521: Push(-2, 1); TaskCall(10)
0x1522: Call2 0xca8

0x1523: Pop(-2, 1); TaskReturn
0x1524: Pop(2)
0x1525: Return(); Pop(2)

0x1526: PushEmpty(bool, int)
0x1527: Stack[-1] = (int) 11
0x1528: Call2 0x11ee

0x1529: Pop(1)
0x152a: IF (Stack[-1] == 0) GOTO 0x1532; Pop(1)

0x152b: PushEmpty(int, object)
0x152c: Stack[-1] = Stack[-5]
0x152d: Push(-2, 1); TaskCall(4)
0x152e: Call2 0x8cf

0x152f: Pop(-2, 1); TaskReturn
0x1530: Pop(2)
0x1531: Return(); Pop(2)

0x1532: Return(); Pop(2)

