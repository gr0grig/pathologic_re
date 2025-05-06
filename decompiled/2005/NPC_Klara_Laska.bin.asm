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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Disturbance
	Pain
	Autizm
	Welldie
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	.bin
	HasItem
	ui/NPC_Laska.png
	ui/NPC_Laska_b.png
	pt_map_burah_home
	ShowMap
	ook1Laska1
	ook1Laska2
	k1q01LaskaGotoBurah
	AddMark
	k2q02
	milk
	RemoveItemByType
	bread
	flower
	ook2Laska1
	k5q03LaskaGotoAlbinos
	pt_k5q03_albinos_path12
	quest_k5_03
	ook5Laska1
	k5LaskaVisit
	k6LaskaVisit
	ook6Laska1
	k6q03LaskaGotoAlbinos
	pt_k6q03_albinos_path9
	quest_k6_03
	playsound
	giveitem
	mapmark
	k1q01
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
	mt_laska

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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xac6
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xde Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x32c Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x415 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5aa Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x71e Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x852 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9c Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xb0f Vars = (int)
		EVENT_6 Op = 0xb35 Vars = ()
		EVENT_5 Op = 0xb44 Vars = ()
		EVENT_45 Op = 0xb51 Vars = (bool)
		EVENT_0 Op = 0xb5d Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xbe6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xd4f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xd4d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xd51

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xd53

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xf25

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
0x31: Call2 0xcfa

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xc3b

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
0x48: Call2 0xc2a

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
0x56: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0xc8

0x5a: Pop(1)
0x5b: Push((int) 525297)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 1
0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 0
0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0xe39

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0xe21

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x70: PushEmpty(bool)
0x71: Stack[-1] = (bool) 0
0x72: PushEmpty(bool, object)
0x73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74: Call2 0xe2d

0x75: Pop(1)
0x76: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call2 0xe39

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: Stack[-1] = (bool) 1
0x7d: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7e: Stack[-1] = (bool) 0
0x7f: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x80: Push((int) 525298)
0x81: Push((int) 26667)
0x82: Push((int) 26666)
0x83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84: Pop(3)
0x85: PushEmpty(bool)
0x86: Stack[-1] = (bool) 0
0x87: PushEmpty(bool)
0x88: Stack[-1] = (bool) 0
0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0xe21

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0xe39

0x91: Pop(1)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 1
0x95: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0xe58

0x99: Pop(1)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Stack[-1] = (bool) 1
0x9c: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9d: Push((int) 525310)
0x9e: Push((int) 26679)
0x9f: Push((int) 26678)
0xa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1: Pop(3)
0xa2: Push((int) 525305)
0xa3: Push((int) -1)
0xa4: Push((int) 26673)
0xa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6: Pop(3)
0xa7: GOTO 0xaa

0xa8: Return(); Pop(0)

0xa9: GOTO 0x55

0xaa: PushEmpty(bool)
0xab: Call2 0xd55

0xac: Pop(0)
0xad: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xae: @ lshWaitForAnimEnd()
0xaf: Pop(0)
0xb0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: GOTO 0xb8

0xb3: PushEmpty(string)
0xb4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb5: Call2 0xcc5

0xb6: Pop(1)
0xb7: GOTO 0xae

0xb8: GOTO 0xc7

0xb9: Push("all")
0xba: Push("idle")
0xbb: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc: Pop(2)
0xbd: @ WaitForAnimEnd()
0xbe: Pop(0)
0xbf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: GOTO 0xc7

0xc2: Push("all")
0xc3: Push("idle")
0xc4: @ PlayAnimation(Stack[-2], Stack[-1])
0xc5: Pop(2)
0xc6: GOTO 0xbd

0xc7: Return(); Pop(0)

0xc8: PushEmpty()
0xc9: PushEmpty(bool)
0xca: Call2 0xd55

0xcb: Pop(0)
0xcc: Pop(1); Push((bool) Stack[-1] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: Return(); Pop(0)

0xcf: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Return(); Pop(0)

0xd2: PushEmpty(string, bool)
0xd3: Stack[-2] = Stack[-3]
0xd4: Push("")
0xd5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd7: Stack[-1] = (bool) 0
0xd8: GOTO 0xda

0xd9: Stack[-1] = (bool) 1
0xda: Call2 0xcd5

0xdb: Pop(2)
0xdc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdd: Return(); Pop(0)

0xde: PushEmpty()
0xdf: Push((int) 1)
0xe0: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0xe1: PushEmpty()
0xe2: Call2 0xcf3

0xe3: Pop(0)
0xe4: Push((int) 26672)
0xe5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0xd8a

0xeb: Pop(2)
0xec: PushEmpty(object, object)
0xed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef: Call2 0xdf1

0xf0: Pop(2)
0xf1: Push((int) 30634)
0xf2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0xd8a

0xf8: Pop(2)
0xf9: PushEmpty(object, object)
0xfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfc: Call2 0xdf1

0xfd: Pop(2)
0xfe: Push((int) 26678)
0xff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0xd9f

0x105: Pop(2)
0x106: Push((int) 26665)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0xc8

0x10c: Pop(1)
0x10d: Push((int) 525297)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: PushEmpty(bool)
0x113: Stack[-1] = (bool) 1
0x114: PushEmpty(bool)
0x115: Stack[-1] = (bool) 0
0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0xe39

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call2 0xe21

0x11e: Pop(1)
0x11f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x120: Stack[-1] = (bool) 1
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(bool)
0x123: Stack[-1] = (bool) 0
0x124: PushEmpty(bool, object)
0x125: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x126: Call2 0xe2d

0x127: Pop(1)
0x128: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x129: PushEmpty(bool, object)
0x12a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Call2 0xe39

0x12c: Pop(1)
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: Stack[-1] = (bool) 1
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Stack[-1] = (bool) 0
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: Push((int) 525298)
0x133: Push((int) 26667)
0x134: Push((int) 26666)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 0
0x139: PushEmpty(bool)
0x13a: Stack[-1] = (bool) 0
0x13b: PushEmpty(bool, object)
0x13c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Call2 0xe21

0x13e: Pop(1)
0x13f: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x142: Call2 0xe39

0x143: Pop(1)
0x144: Pop(1); Push((bool) Stack[-1] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x146: Stack[-1] = (bool) 1
0x147: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x148: PushEmpty(bool, object)
0x149: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Call2 0xe58

0x14b: Pop(1)
0x14c: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14d: Stack[-1] = (bool) 1
0x14e: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14f: Push((int) 525310)
0x150: Push((int) 26679)
0x151: Push((int) 26678)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Push((int) 525305)
0x155: Push((int) -1)
0x156: Push((int) 26673)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 26679)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Disturbance"
0x15f: Call2 0xc8

0x160: Pop(1)
0x161: Push((int) 525311)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 525312)
0x167: Push((int) 42889)
0x168: Push((int) 26680)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 540831)
0x16c: Push((int) -1)
0x16d: Push((int) 42888)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 42889)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Pain"
0x176: Call2 0xc8

0x177: Pop(1)
0x178: Push((int) 540832)
0x179: @@ SetMessage(Stack[-1])
0x17a: Pop(1)
0x17b: @@ ClearReplies()
0x17c: Pop(0)
0x17d: Push((int) 540833)
0x17e: Push((int) -1)
0x17f: Push((int) 42890)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Push((int) 540834)
0x183: Push((int) -1)
0x184: Push((int) 42891)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Push((int) 26667)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Autizm"
0x18d: Call2 0xc8

0x18e: Pop(1)
0x18f: Push((int) 525299)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: Push((int) 529180)
0x195: Push((int) 30631)
0x196: Push((int) 30630)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Push((int) 540812)
0x19a: Push((int) 30633)
0x19b: Push((int) 42864)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Push((int) 30631)
0x1a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Autizm"
0x1a4: Call2 0xc8

0x1a5: Pop(1)
0x1a6: Push((int) 529181)
0x1a7: @@ SetMessage(Stack[-1])
0x1a8: Pop(1)
0x1a9: @@ ClearReplies()
0x1aa: Pop(0)
0x1ab: Push((int) 529182)
0x1ac: Push((int) 30633)
0x1ad: Push((int) 30632)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 30633)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Welldie"
0x1b6: Call2 0xc8

0x1b7: Pop(1)
0x1b8: Push((int) 529183)
0x1b9: @@ SetMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: @@ ClearReplies()
0x1bc: Pop(0)
0x1bd: Push((int) 525300)
0x1be: Push((int) 26669)
0x1bf: Push((int) 26668)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Push((int) 540813)
0x1c3: Push((int) 42867)
0x1c4: Push((int) 42866)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 42867)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Disturbance"
0x1cd: Call2 0xc8

0x1ce: Pop(1)
0x1cf: Push((int) 540814)
0x1d0: @@ SetMessage(Stack[-1])
0x1d1: Pop(1)
0x1d2: @@ ClearReplies()
0x1d3: Pop(0)
0x1d4: Push((int) 540819)
0x1d5: Push((int) 26669)
0x1d6: Push((int) 42872)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Push((int) 540820)
0x1da: Push((int) 42875)
0x1db: Push((int) 42874)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Push((int) 42875)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral"
0x1e4: Call2 0xc8

0x1e5: Pop(1)
0x1e6: Push((int) 540821)
0x1e7: @@ SetMessage(Stack[-1])
0x1e8: Pop(1)
0x1e9: @@ ClearReplies()
0x1ea: Pop(0)
0x1eb: Push((int) 540822)
0x1ec: Push((int) 42868)
0x1ed: Push((int) 42876)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: Push((int) 26669)
0x1f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f4: PushEmpty(string)
0x1f5: Stack[-1] = "Welldie"
0x1f6: Call2 0xc8

0x1f7: Pop(1)
0x1f8: Push((int) 525301)
0x1f9: @@ SetMessage(Stack[-1])
0x1fa: Pop(1)
0x1fb: @@ ClearReplies()
0x1fc: Pop(0)
0x1fd: Push((int) 525302)
0x1fe: Push((int) 42868)
0x1ff: Push((int) 26670)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Push((int) 540826)
0x203: Push((int) 42882)
0x204: Push((int) 42881)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Push((int) 42882)
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Welldie"
0x20d: Call2 0xc8

0x20e: Pop(1)
0x20f: Push((int) 540827)
0x210: @@ SetMessage(Stack[-1])
0x211: Pop(1)
0x212: @@ ClearReplies()
0x213: Pop(0)
0x214: Push((int) 540828)
0x215: Push((int) 42879)
0x216: Push((int) 42883)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Return(); Pop(0)

0x21a: Push((int) 42868)
0x21b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x21d: PushEmpty(string)
0x21e: Stack[-1] = "Disturbance"
0x21f: Call2 0xc8

0x220: Pop(1)
0x221: Push((int) 540815)
0x222: @@ SetMessage(Stack[-1])
0x223: Pop(1)
0x224: @@ ClearReplies()
0x225: Pop(0)
0x226: Push((int) 540816)
0x227: Push((int) 42870)
0x228: Push((int) 42869)
0x229: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22a: Pop(3)
0x22b: Push((int) 540823)
0x22c: Push((int) 42879)
0x22d: Push((int) 42878)
0x22e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22f: Pop(3)
0x230: Return(); Pop(0)

0x231: Push((int) 42879)
0x232: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x234: PushEmpty(string)
0x235: Stack[-1] = "Neutral"
0x236: Call2 0xc8

0x237: Pop(1)
0x238: Push((int) 540824)
0x239: @@ SetMessage(Stack[-1])
0x23a: Pop(1)
0x23b: @@ ClearReplies()
0x23c: Pop(0)
0x23d: Push((int) 540825)
0x23e: Push((int) 42870)
0x23f: Push((int) 42880)
0x240: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x241: Pop(3)
0x242: Return(); Pop(0)

0x243: Push((int) 42870)
0x244: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x246: PushEmpty(string)
0x247: Stack[-1] = "Pain"
0x248: Call2 0xc8

0x249: Pop(1)
0x24a: Push((int) 540817)
0x24b: @@ SetMessage(Stack[-1])
0x24c: Pop(1)
0x24d: @@ ClearReplies()
0x24e: Pop(0)
0x24f: Push((int) 540818)
0x250: Push((int) 26671)
0x251: Push((int) 42871)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: Push((int) 26671)
0x256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x258: PushEmpty(string)
0x259: Stack[-1] = "Pain"
0x25a: Call2 0xc8

0x25b: Pop(1)
0x25c: Push((int) 525303)
0x25d: @@ SetMessage(Stack[-1])
0x25e: Pop(1)
0x25f: @@ ClearReplies()
0x260: Pop(0)
0x261: Push((int) 525304)
0x262: Push((int) -1)
0x263: Push((int) 26672)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: Push((int) 540829)
0x267: Push((int) 42887)
0x268: Push((int) 42886)
0x269: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26a: Pop(3)
0x26b: Return(); Pop(0)

0x26c: Push((int) 42887)
0x26d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26f: PushEmpty(string)
0x270: Stack[-1] = "Neutral"
0x271: Call2 0xc8

0x272: Pop(1)
0x273: Push((int) 540830)
0x274: @@ SetMessage(Stack[-1])
0x275: Pop(1)
0x276: @@ ClearReplies()
0x277: Pop(0)
0x278: Push((int) 529184)
0x279: Push((int) -1)
0x27a: Push((int) 30634)
0x27b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27c: Pop(3)
0x27d: Return(); Pop(0)

0x27e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x27f: PushEmpty(bool)
0x280: Call2 0xd55

0x281: Pop(0)
0x282: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x283: @ lshStopAnimation()
0x284: Pop(0)
0x285: GOTO 0x288

0x286: @ StopAnimation()
0x287: Pop(0)
0x288: Return(); Pop(0)

0x289: GOTO 0xdf

0x28a: Return(); Pop(0)

0x28b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x28c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x28d: PushEmpty(bool, object, float)
0x28e: Stack[-2] = Stack[-12]
0x28f: Stack[-1] = (float) 70.0
0x290: Call2 0xbe6

0x291: Pop(2)
0x292: Pop(1); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Stack[-10] = (int) -2
0x295: Return(); Pop(8)

0x296: @ CreateDialog(Stack[-4])
0x297: Pop(0)
0x298: PushEmpty(int)
0x299: Call2 0xd4f

0x29a: Pop(0)
0x29b: @@ SetNPCName(Stack[-1])
0x29c: Pop(1)
0x29d: PushEmpty(int)
0x29e: Call2 0xd4d

0x29f: Pop(0)
0x2a0: @@ SetNPCDescription(Stack[-1])
0x2a1: Pop(1)
0x2a2: PushEmpty(string)
0x2a3: Call2 0xd51

0x2a4: Pop(0)
0x2a5: @@ SetPhoto(Stack[-1])
0x2a6: Pop(1)
0x2a7: PushEmpty(string)
0x2a8: Call2 0xd53

0x2a9: Pop(0)
0x2aa: @@ SetPhoto2(Stack[-1])
0x2ab: Pop(1)
0x2ac: PushEmpty(int)
0x2ad: Call2 0xf25

0x2ae: Pop(0)
0x2af: @@ SetPlayerName(Stack[-1])
0x2b0: Pop(1)
0x2b1: Stack[-2] = (int) -1
0x2b2: @ IsOverrideActive(Stack[-3])
0x2b3: Pop(0)
0x2b4: Push(Stack[-3])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b6: Stack[-10] = (int) -2
0x2b7: Return(); Pop(8)

0x2b8: @ DoDialog(Stack[-4])
0x2b9: Pop(0)
0x2ba: PushEmpty(bool, object)
0x2bb: PushEmpty(object)
0x2bc: Call2 0xcfa

0x2bd: Stack[-2] = Stack[-1]
0x2be: Pop(1)
0x2bf: Call2 0xc3b

0x2c0: Pop(2)
0x2c1: PushEmpty(object, object)
0x2c2: Stack[-2] = Stack[-11]
0x2c3: Stack[-1] = Stack[-6]
0x2c4: Push(-2, 4); TaskCall(3)
0x2c5: Call2 0x2dc

0x2c6: Pop(-2, 4); TaskReturn
0x2c7: Pop(2)
0x2c8: @@ IsDialogEnd(Stack[-1])
0x2c9: Pop(0)
0x2ca: Pop(0); Push((bool) Stack[-1] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cc: @ sync()
0x2cd: Pop(0)
0x2ce: @@ IsDialogEnd(Stack[-1])
0x2cf: Pop(0)
0x2d0: GOTO 0x2ca

0x2d1: PushEmpty(object)
0x2d2: Stack[-1] = Stack[-10]
0x2d3: Call2 0xc2a

0x2d4: Pop(1)
0x2d5: @ StopDialog(Stack[-4])
0x2d6: Pop(0)
0x2d7: @@ GetReturnValue(Stack[-2])
0x2d8: Pop(0)
0x2d9: Stack[-10] = Stack[-2]
0x2da: Return(); Pop(8)

0x2db: Stack[-4] = 0
0x2dc: PushEmpty()
0x2dd: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2de: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2df: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2e0: Push((int) 1)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2e2: PushEmpty(string)
0x2e3: Stack[-1] = "Neutral"
0x2e4: Call2 0x316

0x2e5: Pop(1)
0x2e6: Push((int) 525498)
0x2e7: @@ SetMessage(Stack[-1])
0x2e8: Pop(1)
0x2e9: @@ ClearReplies()
0x2ea: Pop(0)
0x2eb: Push((int) 525499)
0x2ec: Push((int) -1)
0x2ed: Push((int) 26855)
0x2ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ef: Pop(3)
0x2f0: Push((int) 526256)
0x2f1: Push((int) -1)
0x2f2: Push((int) 27530)
0x2f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f4: Pop(3)
0x2f5: GOTO 0x2f8

0x2f6: Return(); Pop(0)

0x2f7: GOTO 0x2e0

0x2f8: PushEmpty(bool)
0x2f9: Call2 0xd55

0x2fa: Pop(0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2fc: @ lshWaitForAnimEnd()
0x2fd: Pop(0)
0x2fe: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ff: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x300: GOTO 0x306

0x301: PushEmpty(string)
0x302: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x303: Call2 0xcc5

0x304: Pop(1)
0x305: GOTO 0x2fc

0x306: GOTO 0x315

0x307: Push("all")
0x308: Push("idle")
0x309: @ PlayAnimation(Stack[-2], Stack[-1])
0x30a: Pop(2)
0x30b: @ WaitForAnimEnd()
0x30c: Pop(0)
0x30d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: GOTO 0x315

0x310: Push("all")
0x311: Push("idle")
0x312: @ PlayAnimation(Stack[-2], Stack[-1])
0x313: Pop(2)
0x314: GOTO 0x30b

0x315: Return(); Pop(0)

0x316: PushEmpty()
0x317: PushEmpty(bool)
0x318: Call2 0xd55

0x319: Pop(0)
0x31a: Pop(1); Push((bool) Stack[-1] == 0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: Return(); Pop(0)

0x31d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: Return(); Pop(0)

0x320: PushEmpty(string, bool)
0x321: Stack[-2] = Stack[-3]
0x322: Push("")
0x323: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-1] = (bool) 0
0x326: GOTO 0x328

0x327: Stack[-1] = (bool) 1
0x328: Call2 0xcd5

0x329: Pop(2)
0x32a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x32b: Return(); Pop(0)

0x32c: PushEmpty()
0x32d: Push((int) 1)
0x32e: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x32f: PushEmpty()
0x330: Call2 0xcf3

0x331: Pop(0)
0x332: Push((int) 26854)
0x333: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x335: PushEmpty(string)
0x336: Stack[-1] = "Neutral"
0x337: Call2 0x316

0x338: Pop(1)
0x339: Push((int) 525498)
0x33a: @@ SetMessage(Stack[-1])
0x33b: Pop(1)
0x33c: @@ ClearReplies()
0x33d: Pop(0)
0x33e: Push((int) 525499)
0x33f: Push((int) -1)
0x340: Push((int) 26855)
0x341: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x342: Pop(3)
0x343: Push((int) 526256)
0x344: Push((int) -1)
0x345: Push((int) 27530)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Return(); Pop(0)

0x349: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x34a: PushEmpty(bool)
0x34b: Call2 0xd55

0x34c: Pop(0)
0x34d: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34e: @ lshStopAnimation()
0x34f: Pop(0)
0x350: GOTO 0x353

0x351: @ StopAnimation()
0x352: Pop(0)
0x353: Return(); Pop(0)

0x354: GOTO 0x32d

0x355: Return(); Pop(0)

0x356: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x357: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x358: PushEmpty(bool, object, float)
0x359: Stack[-2] = Stack[-12]
0x35a: Stack[-1] = (float) 70.0
0x35b: Call2 0xbe6

0x35c: Pop(2)
0x35d: Pop(1); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: Stack[-10] = (int) -2
0x360: Return(); Pop(8)

0x361: @ CreateDialog(Stack[-4])
0x362: Pop(0)
0x363: PushEmpty(int)
0x364: Call2 0xd4f

0x365: Pop(0)
0x366: @@ SetNPCName(Stack[-1])
0x367: Pop(1)
0x368: PushEmpty(int)
0x369: Call2 0xd4d

0x36a: Pop(0)
0x36b: @@ SetNPCDescription(Stack[-1])
0x36c: Pop(1)
0x36d: PushEmpty(string)
0x36e: Call2 0xd51

0x36f: Pop(0)
0x370: @@ SetPhoto(Stack[-1])
0x371: Pop(1)
0x372: PushEmpty(string)
0x373: Call2 0xd53

0x374: Pop(0)
0x375: @@ SetPhoto2(Stack[-1])
0x376: Pop(1)
0x377: PushEmpty(int)
0x378: Call2 0xf25

0x379: Pop(0)
0x37a: @@ SetPlayerName(Stack[-1])
0x37b: Pop(1)
0x37c: Stack[-2] = (int) -1
0x37d: @ IsOverrideActive(Stack[-3])
0x37e: Pop(0)
0x37f: Push(Stack[-3])
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-10] = (int) -2
0x382: Return(); Pop(8)

0x383: @ DoDialog(Stack[-4])
0x384: Pop(0)
0x385: PushEmpty(bool, object)
0x386: PushEmpty(object)
0x387: Call2 0xcfa

0x388: Stack[-2] = Stack[-1]
0x389: Pop(1)
0x38a: Call2 0xc3b

0x38b: Pop(2)
0x38c: PushEmpty(object, object)
0x38d: Stack[-2] = Stack[-11]
0x38e: Stack[-1] = Stack[-6]
0x38f: Push(-2, 4); TaskCall(5)
0x390: Call2 0x3a7

0x391: Pop(-2, 4); TaskReturn
0x392: Pop(2)
0x393: @@ IsDialogEnd(Stack[-1])
0x394: Pop(0)
0x395: Pop(0); Push((bool) Stack[-1] == 0)
0x396: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x397: @ sync()
0x398: Pop(0)
0x399: @@ IsDialogEnd(Stack[-1])
0x39a: Pop(0)
0x39b: GOTO 0x395

0x39c: PushEmpty(object)
0x39d: Stack[-1] = Stack[-10]
0x39e: Call2 0xc2a

0x39f: Pop(1)
0x3a0: @ StopDialog(Stack[-4])
0x3a1: Pop(0)
0x3a2: @@ GetReturnValue(Stack[-2])
0x3a3: Pop(0)
0x3a4: Stack[-10] = Stack[-2]
0x3a5: Return(); Pop(8)

0x3a6: Stack[-4] = 0
0x3a7: PushEmpty()
0x3a8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3a9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3aa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3ab: Push((int) 1)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3ad: PushEmpty(bool, object)
0x3ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3af: Call2 0xe64

0x3b0: Pop(1)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3b2: PushEmpty(object, object)
0x3b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b5: Call2 0xdbf

0x3b6: Pop(2)
0x3b7: PushEmpty(object, object)
0x3b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ba: Call2 0xdc5

0x3bb: Pop(2)
0x3bc: PushEmpty(string)
0x3bd: Stack[-1] = "Autizm"
0x3be: Call2 0x3ff

0x3bf: Pop(1)
0x3c0: Push((int) 525944)
0x3c1: @@ SetMessage(Stack[-1])
0x3c2: Pop(1)
0x3c3: @@ ClearReplies()
0x3c4: Pop(0)
0x3c5: Push((int) 542433)
0x3c6: Push((int) 44818)
0x3c7: Push((int) 44817)
0x3c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c9: Pop(3)
0x3ca: GOTO 0x3e1

0x3cb: PushEmpty(string)
0x3cc: Stack[-1] = "Neutral"
0x3cd: Call2 0x3ff

0x3ce: Pop(1)
0x3cf: Push((int) 525948)
0x3d0: @@ SetMessage(Stack[-1])
0x3d1: Pop(1)
0x3d2: @@ ClearReplies()
0x3d3: Pop(0)
0x3d4: Push((int) 525949)
0x3d5: Push((int) -1)
0x3d6: Push((int) 27233)
0x3d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d8: Pop(3)
0x3d9: Push((int) 529092)
0x3da: Push((int) -1)
0x3db: Push((int) 30537)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: GOTO 0x3e1

0x3df: Return(); Pop(0)

0x3e0: GOTO 0x3ab

0x3e1: PushEmpty(bool)
0x3e2: Call2 0xd55

0x3e3: Pop(0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3e5: @ lshWaitForAnimEnd()
0x3e6: Pop(0)
0x3e7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e9: GOTO 0x3ef

0x3ea: PushEmpty(string)
0x3eb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3ec: Call2 0xcc5

0x3ed: Pop(1)
0x3ee: GOTO 0x3e5

0x3ef: GOTO 0x3fe

0x3f0: Push("all")
0x3f1: Push("idle")
0x3f2: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f3: Pop(2)
0x3f4: @ WaitForAnimEnd()
0x3f5: Pop(0)
0x3f6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: GOTO 0x3fe

0x3f9: Push("all")
0x3fa: Push("idle")
0x3fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x3fc: Pop(2)
0x3fd: GOTO 0x3f4

0x3fe: Return(); Pop(0)

0x3ff: PushEmpty()
0x400: PushEmpty(bool)
0x401: Call2 0xd55

0x402: Pop(0)
0x403: Pop(1); Push((bool) Stack[-1] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: Return(); Pop(0)

0x406: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x407: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x408: Return(); Pop(0)

0x409: PushEmpty(string, bool)
0x40a: Stack[-2] = Stack[-3]
0x40b: Push("")
0x40c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40e: Stack[-1] = (bool) 0
0x40f: GOTO 0x411

0x410: Stack[-1] = (bool) 1
0x411: Call2 0xcd5

0x412: Pop(2)
0x413: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x414: Return(); Pop(0)

0x415: PushEmpty()
0x416: Push((int) 1)
0x417: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x418: PushEmpty()
0x419: Call2 0xcf3

0x41a: Pop(0)
0x41b: Push((int) 27231)
0x41c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x41e: PushEmpty(object, object)
0x41f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x420: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x421: Call2 0xda5

0x422: Pop(2)
0x423: PushEmpty(object, object)
0x424: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x425: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x426: Call2 0xdf7

0x427: Pop(2)
0x428: Push((int) 44834)
0x429: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x42b: PushEmpty(object, object)
0x42c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42e: Call2 0xda5

0x42f: Pop(2)
0x430: PushEmpty(object, object)
0x431: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x432: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x433: Call2 0xdf7

0x434: Pop(2)
0x435: Push((int) 27228)
0x436: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43a: Call2 0xe64

0x43b: Pop(1)
0x43c: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x43d: PushEmpty(object, object)
0x43e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x440: Call2 0xdbf

0x441: Pop(2)
0x442: PushEmpty(object, object)
0x443: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x444: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x445: Call2 0xdc5

0x446: Pop(2)
0x447: PushEmpty(string)
0x448: Stack[-1] = "Autizm"
0x449: Call2 0x3ff

0x44a: Pop(1)
0x44b: Push((int) 525944)
0x44c: @@ SetMessage(Stack[-1])
0x44d: Pop(1)
0x44e: @@ ClearReplies()
0x44f: Pop(0)
0x450: Push((int) 542433)
0x451: Push((int) 44818)
0x452: Push((int) 44817)
0x453: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x454: Pop(3)
0x455: Return(); Pop(0)

0x456: PushEmpty(string)
0x457: Stack[-1] = "Neutral"
0x458: Call2 0x3ff

0x459: Pop(1)
0x45a: Push((int) 525948)
0x45b: @@ SetMessage(Stack[-1])
0x45c: Pop(1)
0x45d: @@ ClearReplies()
0x45e: Pop(0)
0x45f: Push((int) 525949)
0x460: Push((int) -1)
0x461: Push((int) 27233)
0x462: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x463: Pop(3)
0x464: Push((int) 529092)
0x465: Push((int) -1)
0x466: Push((int) 30537)
0x467: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x468: Pop(3)
0x469: Return(); Pop(0)

0x46a: Push((int) 44824)
0x46b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46d: Push((int) 44818)
0x46e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x470: PushEmpty(string)
0x471: Stack[-1] = "Pain"
0x472: Call2 0x3ff

0x473: Pop(1)
0x474: Push((int) 542434)
0x475: @@ SetMessage(Stack[-1])
0x476: Pop(1)
0x477: @@ ClearReplies()
0x478: Pop(0)
0x479: Push((int) 542435)
0x47a: Push((int) 44820)
0x47b: Push((int) 44819)
0x47c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47d: Pop(3)
0x47e: Push((int) 542437)
0x47f: Push((int) 44820)
0x480: Push((int) 44821)
0x481: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x482: Pop(3)
0x483: Return(); Pop(0)

0x484: Push((int) 44820)
0x485: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x487: PushEmpty(string)
0x488: Stack[-1] = "Pain"
0x489: Call2 0x3ff

0x48a: Pop(1)
0x48b: Push((int) 542436)
0x48c: @@ SetMessage(Stack[-1])
0x48d: Pop(1)
0x48e: @@ ClearReplies()
0x48f: Pop(0)
0x490: Push((int) 529090)
0x491: Push((int) 30536)
0x492: Push((int) 30535)
0x493: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x494: Pop(3)
0x495: Push((int) 542441)
0x496: Push((int) 30536)
0x497: Push((int) 44826)
0x498: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x499: Pop(3)
0x49a: Return(); Pop(0)

0x49b: Push((int) 30536)
0x49c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x49e: PushEmpty(string)
0x49f: Stack[-1] = "Neutral"
0x4a0: Call2 0x3ff

0x4a1: Pop(1)
0x4a2: Push((int) 529091)
0x4a3: @@ SetMessage(Stack[-1])
0x4a4: Pop(1)
0x4a5: @@ ClearReplies()
0x4a6: Pop(0)
0x4a7: Push((int) 525945)
0x4a8: Push((int) 27230)
0x4a9: Push((int) 27229)
0x4aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ab: Pop(3)
0x4ac: Return(); Pop(0)

0x4ad: Push((int) 44831)
0x4ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4b0: Push((int) 27230)
0x4b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4b3: PushEmpty(string)
0x4b4: Stack[-1] = "Welldie"
0x4b5: Call2 0x3ff

0x4b6: Pop(1)
0x4b7: Push((int) 525946)
0x4b8: @@ SetMessage(Stack[-1])
0x4b9: Pop(1)
0x4ba: @@ ClearReplies()
0x4bb: Pop(0)
0x4bc: Push((int) 529093)
0x4bd: Push((int) 30539)
0x4be: Push((int) 30538)
0x4bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c0: Pop(3)
0x4c1: Return(); Pop(0)

0x4c2: Push((int) 30539)
0x4c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4c5: PushEmpty(string)
0x4c6: Stack[-1] = "Disturbance"
0x4c7: Call2 0x3ff

0x4c8: Pop(1)
0x4c9: Push((int) 529094)
0x4ca: @@ SetMessage(Stack[-1])
0x4cb: Pop(1)
0x4cc: @@ ClearReplies()
0x4cd: Pop(0)
0x4ce: Push((int) 525947)
0x4cf: Push((int) -1)
0x4d0: Push((int) 27231)
0x4d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d2: Pop(3)
0x4d3: Push((int) 542445)
0x4d4: Push((int) -1)
0x4d5: Push((int) 44834)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Return(); Pop(0)

0x4d9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4da: PushEmpty(bool)
0x4db: Call2 0xd55

0x4dc: Pop(0)
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4de: @ lshStopAnimation()
0x4df: Pop(0)
0x4e0: GOTO 0x4e3

0x4e1: @ StopAnimation()
0x4e2: Pop(0)
0x4e3: Return(); Pop(0)

0x4e4: GOTO 0x416

0x4e5: Return(); Pop(0)

0x4e6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4e7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4e8: PushEmpty(bool, object, float)
0x4e9: Stack[-2] = Stack[-12]
0x4ea: Stack[-1] = (float) 70.0
0x4eb: Call2 0xbe6

0x4ec: Pop(2)
0x4ed: Pop(1); Push((bool) Stack[-1] == 0)
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4ef: Stack[-10] = (int) -2
0x4f0: Return(); Pop(8)

0x4f1: @ CreateDialog(Stack[-4])
0x4f2: Pop(0)
0x4f3: PushEmpty(int)
0x4f4: Call2 0xd4f

0x4f5: Pop(0)
0x4f6: @@ SetNPCName(Stack[-1])
0x4f7: Pop(1)
0x4f8: PushEmpty(int)
0x4f9: Call2 0xd4d

0x4fa: Pop(0)
0x4fb: @@ SetNPCDescription(Stack[-1])
0x4fc: Pop(1)
0x4fd: PushEmpty(string)
0x4fe: Call2 0xd51

0x4ff: Pop(0)
0x500: @@ SetPhoto(Stack[-1])
0x501: Pop(1)
0x502: PushEmpty(string)
0x503: Call2 0xd53

0x504: Pop(0)
0x505: @@ SetPhoto2(Stack[-1])
0x506: Pop(1)
0x507: PushEmpty(int)
0x508: Call2 0xf25

0x509: Pop(0)
0x50a: @@ SetPlayerName(Stack[-1])
0x50b: Pop(1)
0x50c: Stack[-2] = (int) -1
0x50d: @ IsOverrideActive(Stack[-3])
0x50e: Pop(0)
0x50f: Push(Stack[-3])
0x510: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x511: Stack[-10] = (int) -2
0x512: Return(); Pop(8)

0x513: @ DoDialog(Stack[-4])
0x514: Pop(0)
0x515: PushEmpty(bool, object)
0x516: PushEmpty(object)
0x517: Call2 0xcfa

0x518: Stack[-2] = Stack[-1]
0x519: Pop(1)
0x51a: Call2 0xc3b

0x51b: Pop(2)
0x51c: PushEmpty(object, object)
0x51d: Stack[-2] = Stack[-11]
0x51e: Stack[-1] = Stack[-6]
0x51f: Push(-2, 4); TaskCall(7)
0x520: Call2 0x537

0x521: Pop(-2, 4); TaskReturn
0x522: Pop(2)
0x523: @@ IsDialogEnd(Stack[-1])
0x524: Pop(0)
0x525: Pop(0); Push((bool) Stack[-1] == 0)
0x526: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x527: @ sync()
0x528: Pop(0)
0x529: @@ IsDialogEnd(Stack[-1])
0x52a: Pop(0)
0x52b: GOTO 0x525

0x52c: PushEmpty(object)
0x52d: Stack[-1] = Stack[-10]
0x52e: Call2 0xc2a

0x52f: Pop(1)
0x530: @ StopDialog(Stack[-4])
0x531: Pop(0)
0x532: @@ GetReturnValue(Stack[-2])
0x533: Pop(0)
0x534: Stack[-10] = Stack[-2]
0x535: Return(); Pop(8)

0x536: Stack[-4] = 0
0x537: PushEmpty()
0x538: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x539: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x53a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x53b: Push((int) 1)
0x53c: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x53d: PushEmpty(bool, object)
0x53e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x53f: Call2 0xe70

0x540: Pop(1)
0x541: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x542: PushEmpty(object, object)
0x543: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x544: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x545: Call2 0xdcb

0x546: Pop(2)
0x547: PushEmpty(object, object)
0x548: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x549: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x54a: Call2 0xdd1

0x54b: Pop(2)
0x54c: PushEmpty(string)
0x54d: Stack[-1] = "Disturbance"
0x54e: Call2 0x594

0x54f: Pop(1)
0x550: Push((int) 528802)
0x551: @@ SetMessage(Stack[-1])
0x552: Pop(1)
0x553: @@ ClearReplies()
0x554: Pop(0)
0x555: Push((int) 526757)
0x556: Push((int) 30208)
0x557: Push((int) 28034)
0x558: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x559: Pop(3)
0x55a: Push((int) 528803)
0x55b: Push((int) 30208)
0x55c: Push((int) 30216)
0x55d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55e: Pop(3)
0x55f: GOTO 0x576

0x560: PushEmpty(string)
0x561: Stack[-1] = "Neutral"
0x562: Call2 0x594

0x563: Pop(1)
0x564: Push((int) 526758)
0x565: @@ SetMessage(Stack[-1])
0x566: Pop(1)
0x567: @@ ClearReplies()
0x568: Pop(0)
0x569: Push((int) 526759)
0x56a: Push((int) -1)
0x56b: Push((int) 28036)
0x56c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56d: Pop(3)
0x56e: Push((int) 528801)
0x56f: Push((int) -1)
0x570: Push((int) 30214)
0x571: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x572: Pop(3)
0x573: GOTO 0x576

0x574: Return(); Pop(0)

0x575: GOTO 0x53b

0x576: PushEmpty(bool)
0x577: Call2 0xd55

0x578: Pop(0)
0x579: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x57a: @ lshWaitForAnimEnd()
0x57b: Pop(0)
0x57c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x57d: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57e: GOTO 0x584

0x57f: PushEmpty(string)
0x580: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x581: Call2 0xcc5

0x582: Pop(1)
0x583: GOTO 0x57a

0x584: GOTO 0x593

0x585: Push("all")
0x586: Push("idle")
0x587: @ PlayAnimation(Stack[-2], Stack[-1])
0x588: Pop(2)
0x589: @ WaitForAnimEnd()
0x58a: Pop(0)
0x58b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x58c: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58d: GOTO 0x593

0x58e: Push("all")
0x58f: Push("idle")
0x590: @ PlayAnimation(Stack[-2], Stack[-1])
0x591: Pop(2)
0x592: GOTO 0x589

0x593: Return(); Pop(0)

0x594: PushEmpty()
0x595: PushEmpty(bool)
0x596: Call2 0xd55

0x597: Pop(0)
0x598: Pop(1); Push((bool) Stack[-1] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x59a: Return(); Pop(0)

0x59b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x59c: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59d: Return(); Pop(0)

0x59e: PushEmpty(string, bool)
0x59f: Stack[-2] = Stack[-3]
0x5a0: Push("")
0x5a1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a3: Stack[-1] = (bool) 0
0x5a4: GOTO 0x5a6

0x5a5: Stack[-1] = (bool) 1
0x5a6: Call2 0xcd5

0x5a7: Pop(2)
0x5a8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5a9: Return(); Pop(0)

0x5aa: PushEmpty()
0x5ab: Push((int) 1)
0x5ac: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x5ad: PushEmpty()
0x5ae: Call2 0xcf3

0x5af: Pop(0)
0x5b0: Push((int) 30213)
0x5b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5b3: PushEmpty(object, object)
0x5b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b6: Call2 0xdd7

0x5b7: Pop(2)
0x5b8: PushEmpty(object, object)
0x5b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5bb: Call2 0xdf7

0x5bc: Pop(2)
0x5bd: Push((int) 44908)
0x5be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c0: PushEmpty(object, object)
0x5c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c3: Call2 0xdd7

0x5c4: Pop(2)
0x5c5: PushEmpty(object, object)
0x5c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c8: Call2 0xdf7

0x5c9: Pop(2)
0x5ca: Push((int) 30215)
0x5cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x5cd: PushEmpty(bool, object)
0x5ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5cf: Call2 0xe70

0x5d0: Pop(1)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5d2: PushEmpty(object, object)
0x5d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d5: Call2 0xdcb

0x5d6: Pop(2)
0x5d7: PushEmpty(object, object)
0x5d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5da: Call2 0xdd1

0x5db: Pop(2)
0x5dc: PushEmpty(string)
0x5dd: Stack[-1] = "Disturbance"
0x5de: Call2 0x594

0x5df: Pop(1)
0x5e0: Push((int) 528802)
0x5e1: @@ SetMessage(Stack[-1])
0x5e2: Pop(1)
0x5e3: @@ ClearReplies()
0x5e4: Pop(0)
0x5e5: Push((int) 526757)
0x5e6: Push((int) 30208)
0x5e7: Push((int) 28034)
0x5e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: Push((int) 528803)
0x5eb: Push((int) 30208)
0x5ec: Push((int) 30216)
0x5ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: Return(); Pop(0)

0x5f0: PushEmpty(string)
0x5f1: Stack[-1] = "Neutral"
0x5f2: Call2 0x594

0x5f3: Pop(1)
0x5f4: Push((int) 526758)
0x5f5: @@ SetMessage(Stack[-1])
0x5f6: Pop(1)
0x5f7: @@ ClearReplies()
0x5f8: Pop(0)
0x5f9: Push((int) 526759)
0x5fa: Push((int) -1)
0x5fb: Push((int) 28036)
0x5fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fd: Pop(3)
0x5fe: Push((int) 528801)
0x5ff: Push((int) -1)
0x600: Push((int) 30214)
0x601: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x602: Pop(3)
0x603: Return(); Pop(0)

0x604: Push((int) 30208)
0x605: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x607: PushEmpty(string)
0x608: Stack[-1] = "Disturbance"
0x609: Call2 0x594

0x60a: Pop(1)
0x60b: Push((int) 528795)
0x60c: @@ SetMessage(Stack[-1])
0x60d: Pop(1)
0x60e: @@ ClearReplies()
0x60f: Pop(0)
0x610: Push((int) 528796)
0x611: Push((int) 30210)
0x612: Push((int) 30209)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Return(); Pop(0)

0x616: Push((int) 44899)
0x617: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x619: Push((int) 44902)
0x61a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61b: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x61c: PushEmpty(string)
0x61d: Stack[-1] = "Autizm"
0x61e: Call2 0x594

0x61f: Pop(1)
0x620: Push((int) 542512)
0x621: @@ SetMessage(Stack[-1])
0x622: Pop(1)
0x623: @@ ClearReplies()
0x624: Pop(0)
0x625: Push((int) 542513)
0x626: Push((int) 30210)
0x627: Push((int) 44904)
0x628: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x629: Pop(3)
0x62a: Push((int) 542514)
0x62b: Push((int) -1)
0x62c: Push((int) 44905)
0x62d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62e: Pop(3)
0x62f: Return(); Pop(0)

0x630: Push((int) 30210)
0x631: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x633: PushEmpty(string)
0x634: Stack[-1] = "Welldie"
0x635: Call2 0x594

0x636: Pop(1)
0x637: Push((int) 528797)
0x638: @@ SetMessage(Stack[-1])
0x639: Pop(1)
0x63a: @@ ClearReplies()
0x63b: Pop(0)
0x63c: Push((int) 528798)
0x63d: Push((int) 30212)
0x63e: Push((int) 30211)
0x63f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x640: Pop(3)
0x641: Push((int) 542515)
0x642: Push((int) 44907)
0x643: Push((int) 44906)
0x644: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x645: Pop(3)
0x646: Return(); Pop(0)

0x647: Push((int) 44907)
0x648: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x64a: PushEmpty(string)
0x64b: Stack[-1] = "Neutral"
0x64c: Call2 0x594

0x64d: Pop(1)
0x64e: Push((int) 542516)
0x64f: @@ SetMessage(Stack[-1])
0x650: Pop(1)
0x651: @@ ClearReplies()
0x652: Pop(0)
0x653: Push((int) 542517)
0x654: Push((int) -1)
0x655: Push((int) 44908)
0x656: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x657: Pop(3)
0x658: Return(); Pop(0)

0x659: Push((int) 30212)
0x65a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x65c: PushEmpty(string)
0x65d: Stack[-1] = "Neutral"
0x65e: Call2 0x594

0x65f: Pop(1)
0x660: Push((int) 528799)
0x661: @@ SetMessage(Stack[-1])
0x662: Pop(1)
0x663: @@ ClearReplies()
0x664: Pop(0)
0x665: Push((int) 528800)
0x666: Push((int) -1)
0x667: Push((int) 30213)
0x668: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x669: Pop(3)
0x66a: Return(); Pop(0)

0x66b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x66c: PushEmpty(bool)
0x66d: Call2 0xd55

0x66e: Pop(0)
0x66f: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x670: @ lshStopAnimation()
0x671: Pop(0)
0x672: GOTO 0x675

0x673: @ StopAnimation()
0x674: Pop(0)
0x675: Return(); Pop(0)

0x676: GOTO 0x5ab

0x677: Return(); Pop(0)

0x678: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x679: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x67a: PushEmpty(bool, object, float)
0x67b: Stack[-2] = Stack[-12]
0x67c: Stack[-1] = (float) 70.0
0x67d: Call2 0xbe6

0x67e: Pop(2)
0x67f: Pop(1); Push((bool) Stack[-1] == 0)
0x680: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x681: Stack[-10] = (int) -2
0x682: Return(); Pop(8)

0x683: @ CreateDialog(Stack[-4])
0x684: Pop(0)
0x685: PushEmpty(int)
0x686: Call2 0xd4f

0x687: Pop(0)
0x688: @@ SetNPCName(Stack[-1])
0x689: Pop(1)
0x68a: PushEmpty(int)
0x68b: Call2 0xd4d

0x68c: Pop(0)
0x68d: @@ SetNPCDescription(Stack[-1])
0x68e: Pop(1)
0x68f: PushEmpty(string)
0x690: Call2 0xd51

0x691: Pop(0)
0x692: @@ SetPhoto(Stack[-1])
0x693: Pop(1)
0x694: PushEmpty(string)
0x695: Call2 0xd53

0x696: Pop(0)
0x697: @@ SetPhoto2(Stack[-1])
0x698: Pop(1)
0x699: PushEmpty(int)
0x69a: Call2 0xf25

0x69b: Pop(0)
0x69c: @@ SetPlayerName(Stack[-1])
0x69d: Pop(1)
0x69e: Stack[-2] = (int) -1
0x69f: @ IsOverrideActive(Stack[-3])
0x6a0: Pop(0)
0x6a1: Push(Stack[-3])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a3: Stack[-10] = (int) -2
0x6a4: Return(); Pop(8)

0x6a5: @ DoDialog(Stack[-4])
0x6a6: Pop(0)
0x6a7: PushEmpty(bool, object)
0x6a8: PushEmpty(object)
0x6a9: Call2 0xcfa

0x6aa: Stack[-2] = Stack[-1]
0x6ab: Pop(1)
0x6ac: Call2 0xc3b

0x6ad: Pop(2)
0x6ae: PushEmpty(object, object)
0x6af: Stack[-2] = Stack[-11]
0x6b0: Stack[-1] = Stack[-6]
0x6b1: Push(-2, 4); TaskCall(9)
0x6b2: Call2 0x6c9

0x6b3: Pop(-2, 4); TaskReturn
0x6b4: Pop(2)
0x6b5: @@ IsDialogEnd(Stack[-1])
0x6b6: Pop(0)
0x6b7: Pop(0); Push((bool) Stack[-1] == 0)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6b9: @ sync()
0x6ba: Pop(0)
0x6bb: @@ IsDialogEnd(Stack[-1])
0x6bc: Pop(0)
0x6bd: GOTO 0x6b7

0x6be: PushEmpty(object)
0x6bf: Stack[-1] = Stack[-10]
0x6c0: Call2 0xc2a

0x6c1: Pop(1)
0x6c2: @ StopDialog(Stack[-4])
0x6c3: Pop(0)
0x6c4: @@ GetReturnValue(Stack[-2])
0x6c5: Pop(0)
0x6c6: Stack[-10] = Stack[-2]
0x6c7: Return(); Pop(8)

0x6c8: Stack[-4] = 0
0x6c9: PushEmpty()
0x6ca: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6cb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6cc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6cd: Push((int) 1)
0x6ce: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6cf: PushEmpty(string)
0x6d0: Stack[-1] = "Neutral"
0x6d1: Call2 0x708

0x6d2: Pop(1)
0x6d3: Push((int) 535284)
0x6d4: @@ SetMessage(Stack[-1])
0x6d5: Pop(1)
0x6d6: @@ ClearReplies()
0x6d7: Pop(0)
0x6d8: Push((int) 535285)
0x6d9: Push((int) 36962)
0x6da: Push((int) 36961)
0x6db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dc: Pop(3)
0x6dd: Push((int) 535292)
0x6de: Push((int) -1)
0x6df: Push((int) 36968)
0x6e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e1: Pop(3)
0x6e2: Push((int) 535293)
0x6e3: Push((int) -1)
0x6e4: Push((int) 36969)
0x6e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e6: Pop(3)
0x6e7: GOTO 0x6ea

0x6e8: Return(); Pop(0)

0x6e9: GOTO 0x6cd

0x6ea: PushEmpty(bool)
0x6eb: Call2 0xd55

0x6ec: Pop(0)
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6ee: @ lshWaitForAnimEnd()
0x6ef: Pop(0)
0x6f0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f2: GOTO 0x6f8

0x6f3: PushEmpty(string)
0x6f4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6f5: Call2 0xcc5

0x6f6: Pop(1)
0x6f7: GOTO 0x6ee

0x6f8: GOTO 0x707

0x6f9: Push("all")
0x6fa: Push("idle")
0x6fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x6fc: Pop(2)
0x6fd: @ WaitForAnimEnd()
0x6fe: Pop(0)
0x6ff: Push( Stack[3 + Tasks[-1].StackPointer] )
0x700: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x701: GOTO 0x707

0x702: Push("all")
0x703: Push("idle")
0x704: @ PlayAnimation(Stack[-2], Stack[-1])
0x705: Pop(2)
0x706: GOTO 0x6fd

0x707: Return(); Pop(0)

0x708: PushEmpty()
0x709: PushEmpty(bool)
0x70a: Call2 0xd55

0x70b: Pop(0)
0x70c: Pop(1); Push((bool) Stack[-1] == 0)
0x70d: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70e: Return(); Pop(0)

0x70f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x710: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x711: Return(); Pop(0)

0x712: PushEmpty(string, bool)
0x713: Stack[-2] = Stack[-3]
0x714: Push("")
0x715: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x717: Stack[-1] = (bool) 0
0x718: GOTO 0x71a

0x719: Stack[-1] = (bool) 1
0x71a: Call2 0xcd5

0x71b: Pop(2)
0x71c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x71d: Return(); Pop(0)

0x71e: PushEmpty()
0x71f: Push((int) 1)
0x720: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x721: PushEmpty()
0x722: Call2 0xcf3

0x723: Pop(0)
0x724: Push((int) 36960)
0x725: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x726: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x727: PushEmpty(string)
0x728: Stack[-1] = "Neutral"
0x729: Call2 0x708

0x72a: Pop(1)
0x72b: Push((int) 535284)
0x72c: @@ SetMessage(Stack[-1])
0x72d: Pop(1)
0x72e: @@ ClearReplies()
0x72f: Pop(0)
0x730: Push((int) 535285)
0x731: Push((int) 36962)
0x732: Push((int) 36961)
0x733: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x734: Pop(3)
0x735: Push((int) 535292)
0x736: Push((int) -1)
0x737: Push((int) 36968)
0x738: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x739: Pop(3)
0x73a: Push((int) 535293)
0x73b: Push((int) -1)
0x73c: Push((int) 36969)
0x73d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73e: Pop(3)
0x73f: Return(); Pop(0)

0x740: Push((int) 36962)
0x741: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x742: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x743: PushEmpty(string)
0x744: Stack[-1] = "Neutral"
0x745: Call2 0x708

0x746: Pop(1)
0x747: Push((int) 535286)
0x748: @@ SetMessage(Stack[-1])
0x749: Pop(1)
0x74a: @@ ClearReplies()
0x74b: Pop(0)
0x74c: Push((int) 535287)
0x74d: Push((int) 36964)
0x74e: Push((int) 36963)
0x74f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x750: Pop(3)
0x751: Push((int) 535291)
0x752: Push((int) -1)
0x753: Push((int) 36967)
0x754: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x755: Pop(3)
0x756: Return(); Pop(0)

0x757: Push((int) 36964)
0x758: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x759: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x75a: PushEmpty(string)
0x75b: Stack[-1] = "Neutral"
0x75c: Call2 0x708

0x75d: Pop(1)
0x75e: Push((int) 535288)
0x75f: @@ SetMessage(Stack[-1])
0x760: Pop(1)
0x761: @@ ClearReplies()
0x762: Pop(0)
0x763: Push((int) 535289)
0x764: Push((int) -1)
0x765: Push((int) 36965)
0x766: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x767: Pop(3)
0x768: Push((int) 535290)
0x769: Push((int) -1)
0x76a: Push((int) 36966)
0x76b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: Return(); Pop(0)

0x76e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x76f: PushEmpty(bool)
0x770: Call2 0xd55

0x771: Pop(0)
0x772: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x773: @ lshStopAnimation()
0x774: Pop(0)
0x775: GOTO 0x778

0x776: @ StopAnimation()
0x777: Pop(0)
0x778: Return(); Pop(0)

0x779: GOTO 0x71f

0x77a: Return(); Pop(0)

0x77b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x77c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x77d: PushEmpty(bool, object, float)
0x77e: Stack[-2] = Stack[-12]
0x77f: Stack[-1] = (float) 70.0
0x780: Call2 0xbe6

0x781: Pop(2)
0x782: Pop(1); Push((bool) Stack[-1] == 0)
0x783: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x784: Stack[-10] = (int) -2
0x785: Return(); Pop(8)

0x786: @ CreateDialog(Stack[-4])
0x787: Pop(0)
0x788: PushEmpty(int)
0x789: Call2 0xd4f

0x78a: Pop(0)
0x78b: @@ SetNPCName(Stack[-1])
0x78c: Pop(1)
0x78d: PushEmpty(int)
0x78e: Call2 0xd4d

0x78f: Pop(0)
0x790: @@ SetNPCDescription(Stack[-1])
0x791: Pop(1)
0x792: PushEmpty(string)
0x793: Call2 0xd51

0x794: Pop(0)
0x795: @@ SetPhoto(Stack[-1])
0x796: Pop(1)
0x797: PushEmpty(string)
0x798: Call2 0xd53

0x799: Pop(0)
0x79a: @@ SetPhoto2(Stack[-1])
0x79b: Pop(1)
0x79c: PushEmpty(int)
0x79d: Call2 0xf25

0x79e: Pop(0)
0x79f: @@ SetPlayerName(Stack[-1])
0x7a0: Pop(1)
0x7a1: Stack[-2] = (int) -1
0x7a2: @ IsOverrideActive(Stack[-3])
0x7a3: Pop(0)
0x7a4: Push(Stack[-3])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a6: Stack[-10] = (int) -2
0x7a7: Return(); Pop(8)

0x7a8: @ DoDialog(Stack[-4])
0x7a9: Pop(0)
0x7aa: PushEmpty(bool, object)
0x7ab: PushEmpty(object)
0x7ac: Call2 0xcfa

0x7ad: Stack[-2] = Stack[-1]
0x7ae: Pop(1)
0x7af: Call2 0xc3b

0x7b0: Pop(2)
0x7b1: PushEmpty(object, object)
0x7b2: Stack[-2] = Stack[-11]
0x7b3: Stack[-1] = Stack[-6]
0x7b4: Push(-2, 4); TaskCall(11)
0x7b5: Call2 0x7cc

0x7b6: Pop(-2, 4); TaskReturn
0x7b7: Pop(2)
0x7b8: @@ IsDialogEnd(Stack[-1])
0x7b9: Pop(0)
0x7ba: Pop(0); Push((bool) Stack[-1] == 0)
0x7bb: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7bc: @ sync()
0x7bd: Pop(0)
0x7be: @@ IsDialogEnd(Stack[-1])
0x7bf: Pop(0)
0x7c0: GOTO 0x7ba

0x7c1: PushEmpty(object)
0x7c2: Stack[-1] = Stack[-10]
0x7c3: Call2 0xc2a

0x7c4: Pop(1)
0x7c5: @ StopDialog(Stack[-4])
0x7c6: Pop(0)
0x7c7: @@ GetReturnValue(Stack[-2])
0x7c8: Pop(0)
0x7c9: Stack[-10] = Stack[-2]
0x7ca: Return(); Pop(8)

0x7cb: Stack[-4] = 0
0x7cc: PushEmpty()
0x7cd: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7ce: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7cf: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7d0: Push((int) 1)
0x7d1: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x7d2: PushEmpty(bool)
0x7d3: Stack[-1] = (bool) 0
0x7d4: PushEmpty(bool, object)
0x7d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d6: Call2 0xdfd

0x7d7: Pop(1)
0x7d8: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7d9: PushEmpty(bool, object)
0x7da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7db: Call2 0xe09

0x7dc: Pop(1)
0x7dd: Pop(1); Push((bool) Stack[-1] == 0)
0x7de: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7df: Stack[-1] = (bool) 1
0x7e0: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7e1: PushEmpty(object, object)
0x7e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e4: Call2 0xd67

0x7e5: Pop(2)
0x7e6: PushEmpty(string)
0x7e7: Stack[-1] = "Autizm"
0x7e8: Call2 0x83c

0x7e9: Pop(1)
0x7ea: Push((int) 524644)
0x7eb: @@ SetMessage(Stack[-1])
0x7ec: Pop(1)
0x7ed: @@ ClearReplies()
0x7ee: Pop(0)
0x7ef: Push((int) 526298)
0x7f0: Push((int) 27579)
0x7f1: Push((int) 27578)
0x7f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f3: Pop(3)
0x7f4: Push((int) 526300)
0x7f5: Push((int) 27581)
0x7f6: Push((int) 27580)
0x7f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f8: Pop(3)
0x7f9: GOTO 0x81e

0x7fa: PushEmpty(string)
0x7fb: Stack[-1] = "Neutral"
0x7fc: Call2 0x83c

0x7fd: Pop(1)
0x7fe: Push((int) 524648)
0x7ff: @@ SetMessage(Stack[-1])
0x800: Pop(1)
0x801: @@ ClearReplies()
0x802: Pop(0)
0x803: PushEmpty(bool)
0x804: Stack[-1] = (bool) 0
0x805: PushEmpty(bool, object)
0x806: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x807: Call2 0xe09

0x808: Pop(1)
0x809: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80a: PushEmpty(bool, object)
0x80b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80c: Call2 0xe15

0x80d: Pop(1)
0x80e: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80f: Stack[-1] = (bool) 1
0x810: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x811: Push((int) 524681)
0x812: Push((int) 43988)
0x813: Push((int) 26020)
0x814: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x815: Pop(3)
0x816: Push((int) 524649)
0x817: Push((int) -1)
0x818: Push((int) 25988)
0x819: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81a: Pop(3)
0x81b: GOTO 0x81e

0x81c: Return(); Pop(0)

0x81d: GOTO 0x7d0

0x81e: PushEmpty(bool)
0x81f: Call2 0xd55

0x820: Pop(0)
0x821: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x822: @ lshWaitForAnimEnd()
0x823: Pop(0)
0x824: Push( Stack[3 + Tasks[-1].StackPointer] )
0x825: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x826: GOTO 0x82c

0x827: PushEmpty(string)
0x828: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x829: Call2 0xcc5

0x82a: Pop(1)
0x82b: GOTO 0x822

0x82c: GOTO 0x83b

0x82d: Push("all")
0x82e: Push("idle")
0x82f: @ PlayAnimation(Stack[-2], Stack[-1])
0x830: Pop(2)
0x831: @ WaitForAnimEnd()
0x832: Pop(0)
0x833: Push( Stack[3 + Tasks[-1].StackPointer] )
0x834: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x835: GOTO 0x83b

0x836: Push("all")
0x837: Push("idle")
0x838: @ PlayAnimation(Stack[-2], Stack[-1])
0x839: Pop(2)
0x83a: GOTO 0x831

0x83b: Return(); Pop(0)

0x83c: PushEmpty()
0x83d: PushEmpty(bool)
0x83e: Call2 0xd55

0x83f: Pop(0)
0x840: Pop(1); Push((bool) Stack[-1] == 0)
0x841: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x842: Return(); Pop(0)

0x843: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x844: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x845: Return(); Pop(0)

0x846: PushEmpty(string, bool)
0x847: Stack[-2] = Stack[-3]
0x848: Push("")
0x849: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x84a: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x84b: Stack[-1] = (bool) 0
0x84c: GOTO 0x84e

0x84d: Stack[-1] = (bool) 1
0x84e: Call2 0xcd5

0x84f: Pop(2)
0x850: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x851: Return(); Pop(0)

0x852: PushEmpty()
0x853: Push((int) 1)
0x854: IF (Stack[-1] == 0) GOTO 0x9fa; Pop(1)

0x855: PushEmpty()
0x856: Call2 0xcf3

0x857: Pop(0)
0x858: Push((int) 26020)
0x859: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x85a: IF (Stack[-1] == 0) GOTO 0x860; Pop(1)

0x85b: PushEmpty(object, object)
0x85c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x85d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x85e: Call2 0xd6d

0x85f: Pop(2)
0x860: Push((int) 26022)
0x861: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x862: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x863: PushEmpty(object, object)
0x864: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x865: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x866: Call2 0xd73

0x867: Pop(2)
0x868: PushEmpty(object, object)
0x869: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x86b: Call2 0xd57

0x86c: Pop(2)
0x86d: Push((int) 43956)
0x86e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x86f: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x870: PushEmpty(object, object)
0x871: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x872: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x873: Call2 0xd57

0x874: Pop(2)
0x875: PushEmpty(object, object)
0x876: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x877: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x878: Call2 0xd73

0x879: Pop(2)
0x87a: Push((int) 25983)
0x87b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x87c: IF (Stack[-1] == 0) GOTO 0x8c7; Pop(1)

0x87d: PushEmpty(bool)
0x87e: Stack[-1] = (bool) 0
0x87f: PushEmpty(bool, object)
0x880: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x881: Call2 0xdfd

0x882: Pop(1)
0x883: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x884: PushEmpty(bool, object)
0x885: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x886: Call2 0xe09

0x887: Pop(1)
0x888: Pop(1); Push((bool) Stack[-1] == 0)
0x889: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x88a: Stack[-1] = (bool) 1
0x88b: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x88c: PushEmpty(object, object)
0x88d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x88e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x88f: Call2 0xd67

0x890: Pop(2)
0x891: PushEmpty(string)
0x892: Stack[-1] = "Autizm"
0x893: Call2 0x83c

0x894: Pop(1)
0x895: Push((int) 524644)
0x896: @@ SetMessage(Stack[-1])
0x897: Pop(1)
0x898: @@ ClearReplies()
0x899: Pop(0)
0x89a: Push((int) 526298)
0x89b: Push((int) 27579)
0x89c: Push((int) 27578)
0x89d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89e: Pop(3)
0x89f: Push((int) 526300)
0x8a0: Push((int) 27581)
0x8a1: Push((int) 27580)
0x8a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a3: Pop(3)
0x8a4: Return(); Pop(0)

0x8a5: PushEmpty(string)
0x8a6: Stack[-1] = "Neutral"
0x8a7: Call2 0x83c

0x8a8: Pop(1)
0x8a9: Push((int) 524648)
0x8aa: @@ SetMessage(Stack[-1])
0x8ab: Pop(1)
0x8ac: @@ ClearReplies()
0x8ad: Pop(0)
0x8ae: PushEmpty(bool)
0x8af: Stack[-1] = (bool) 0
0x8b0: PushEmpty(bool, object)
0x8b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b2: Call2 0xe09

0x8b3: Pop(1)
0x8b4: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8b5: PushEmpty(bool, object)
0x8b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b7: Call2 0xe15

0x8b8: Pop(1)
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8ba: Stack[-1] = (bool) 1
0x8bb: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8bc: Push((int) 524681)
0x8bd: Push((int) 43988)
0x8be: Push((int) 26020)
0x8bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c0: Pop(3)
0x8c1: Push((int) 524649)
0x8c2: Push((int) -1)
0x8c3: Push((int) 25988)
0x8c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c5: Pop(3)
0x8c6: Return(); Pop(0)

0x8c7: Push((int) 43988)
0x8c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c9: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8ca: PushEmpty(string)
0x8cb: Stack[-1] = "Welldie"
0x8cc: Call2 0x83c

0x8cd: Pop(1)
0x8ce: Push((int) 541782)
0x8cf: @@ SetMessage(Stack[-1])
0x8d0: Pop(1)
0x8d1: @@ ClearReplies()
0x8d2: Pop(0)
0x8d3: Push((int) 541783)
0x8d4: Push((int) 26021)
0x8d5: Push((int) 43989)
0x8d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d7: Pop(3)
0x8d8: Return(); Pop(0)

0x8d9: Push((int) 43991)
0x8da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8db: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8dc: Push((int) 43994)
0x8dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8df: PushEmpty(string)
0x8e0: Stack[-1] = "Autizm"
0x8e1: Call2 0x83c

0x8e2: Pop(1)
0x8e3: Push((int) 541788)
0x8e4: @@ SetMessage(Stack[-1])
0x8e5: Pop(1)
0x8e6: @@ ClearReplies()
0x8e7: Pop(0)
0x8e8: Push((int) 541791)
0x8e9: Push((int) 26021)
0x8ea: Push((int) 43997)
0x8eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ec: Pop(3)
0x8ed: Return(); Pop(0)

0x8ee: Push((int) 43995)
0x8ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f0: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8f1: PushEmpty(string)
0x8f2: Stack[-1] = "Pain"
0x8f3: Call2 0x83c

0x8f4: Pop(1)
0x8f5: Push((int) 541789)
0x8f6: @@ SetMessage(Stack[-1])
0x8f7: Pop(1)
0x8f8: @@ ClearReplies()
0x8f9: Pop(0)
0x8fa: Push((int) 541790)
0x8fb: Push((int) 26021)
0x8fc: Push((int) 43996)
0x8fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fe: Pop(3)
0x8ff: Return(); Pop(0)

0x900: Push((int) 26021)
0x901: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x902: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x903: PushEmpty(string)
0x904: Stack[-1] = "Disturbance"
0x905: Call2 0x83c

0x906: Pop(1)
0x907: Push((int) 524682)
0x908: @@ SetMessage(Stack[-1])
0x909: Pop(1)
0x90a: @@ ClearReplies()
0x90b: Pop(0)
0x90c: Push((int) 541792)
0x90d: Push((int) 44001)
0x90e: Push((int) 44000)
0x90f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x910: Pop(3)
0x911: Push((int) 541794)
0x912: Push((int) 44001)
0x913: Push((int) 44002)
0x914: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x915: Pop(3)
0x916: Return(); Pop(0)

0x917: Push((int) 44001)
0x918: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x919: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x91a: PushEmpty(string)
0x91b: Stack[-1] = "Disturbance"
0x91c: Call2 0x83c

0x91d: Pop(1)
0x91e: Push((int) 541793)
0x91f: @@ SetMessage(Stack[-1])
0x920: Pop(1)
0x921: @@ ClearReplies()
0x922: Pop(0)
0x923: Push((int) 526310)
0x924: Push((int) 27593)
0x925: Push((int) 27592)
0x926: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x927: Pop(3)
0x928: Push((int) 541702)
0x929: Push((int) 44004)
0x92a: Push((int) 43885)
0x92b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92c: Pop(3)
0x92d: Return(); Pop(0)

0x92e: Push((int) 44004)
0x92f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x930: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x931: PushEmpty(string)
0x932: Stack[-1] = "Neutral"
0x933: Call2 0x83c

0x934: Pop(1)
0x935: Push((int) 541795)
0x936: @@ SetMessage(Stack[-1])
0x937: Pop(1)
0x938: @@ ClearReplies()
0x939: Pop(0)
0x93a: Push((int) 541796)
0x93b: Push((int) 27593)
0x93c: Push((int) 44005)
0x93d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93e: Pop(3)
0x93f: Return(); Pop(0)

0x940: Push((int) 27593)
0x941: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x942: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x943: PushEmpty(string)
0x944: Stack[-1] = "Pain"
0x945: Call2 0x83c

0x946: Pop(1)
0x947: Push((int) 526311)
0x948: @@ SetMessage(Stack[-1])
0x949: Pop(1)
0x94a: @@ ClearReplies()
0x94b: Pop(0)
0x94c: Push((int) 526312)
0x94d: Push((int) 27595)
0x94e: Push((int) 27594)
0x94f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x950: Pop(3)
0x951: Push((int) 541751)
0x952: Push((int) 43953)
0x953: Push((int) 43952)
0x954: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x955: Pop(3)
0x956: Return(); Pop(0)

0x957: Push((int) 43953)
0x958: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x959: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x95a: PushEmpty(string)
0x95b: Stack[-1] = "Neutral"
0x95c: Call2 0x83c

0x95d: Pop(1)
0x95e: Push((int) 541752)
0x95f: @@ SetMessage(Stack[-1])
0x960: Pop(1)
0x961: @@ ClearReplies()
0x962: Pop(0)
0x963: Push((int) 541753)
0x964: Push((int) 27595)
0x965: Push((int) 43954)
0x966: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x967: Pop(3)
0x968: Return(); Pop(0)

0x969: Push((int) 27595)
0x96a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96b: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x96c: PushEmpty(string)
0x96d: Stack[-1] = "Neutral"
0x96e: Call2 0x83c

0x96f: Pop(1)
0x970: Push((int) 526313)
0x971: @@ SetMessage(Stack[-1])
0x972: Pop(1)
0x973: @@ ClearReplies()
0x974: Pop(0)
0x975: Push((int) 524683)
0x976: Push((int) -1)
0x977: Push((int) 26022)
0x978: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x979: Pop(3)
0x97a: Push((int) 541754)
0x97b: Push((int) -1)
0x97c: Push((int) 43956)
0x97d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97e: Pop(3)
0x97f: Return(); Pop(0)

0x980: Push((int) 27581)
0x981: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x982: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x983: PushEmpty(string)
0x984: Stack[-1] = "Pain"
0x985: Call2 0x83c

0x986: Pop(1)
0x987: Push((int) 526301)
0x988: @@ SetMessage(Stack[-1])
0x989: Pop(1)
0x98a: @@ ClearReplies()
0x98b: Pop(0)
0x98c: Push((int) 526302)
0x98d: Push((int) 27579)
0x98e: Push((int) 27582)
0x98f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x990: Pop(3)
0x991: Return(); Pop(0)

0x992: Push((int) 27579)
0x993: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x994: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x995: PushEmpty(string)
0x996: Stack[-1] = "Autizm"
0x997: Call2 0x83c

0x998: Pop(1)
0x999: Push((int) 526299)
0x99a: @@ SetMessage(Stack[-1])
0x99b: Pop(1)
0x99c: @@ ClearReplies()
0x99d: Pop(0)
0x99e: Push((int) 526303)
0x99f: Push((int) 27585)
0x9a0: Push((int) 27584)
0x9a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a2: Pop(3)
0x9a3: Push((int) 541701)
0x9a4: Push((int) 27585)
0x9a5: Push((int) 43883)
0x9a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a7: Pop(3)
0x9a8: Return(); Pop(0)

0x9a9: Push((int) 27585)
0x9aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9ac: PushEmpty(string)
0x9ad: Stack[-1] = "Disturbance"
0x9ae: Call2 0x83c

0x9af: Pop(1)
0x9b0: Push((int) 526304)
0x9b1: @@ SetMessage(Stack[-1])
0x9b2: Pop(1)
0x9b3: @@ ClearReplies()
0x9b4: Pop(0)
0x9b5: Push((int) 524645)
0x9b6: Push((int) 25985)
0x9b7: Push((int) 25984)
0x9b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b9: Pop(3)
0x9ba: Push((int) 526305)
0x9bb: Push((int) 25985)
0x9bc: Push((int) 27586)
0x9bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9be: Pop(3)
0x9bf: Return(); Pop(0)

0x9c0: Push((int) 25985)
0x9c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c2: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9c3: PushEmpty(string)
0x9c4: Stack[-1] = "Disturbance"
0x9c5: Call2 0x83c

0x9c6: Pop(1)
0x9c7: Push((int) 524646)
0x9c8: @@ SetMessage(Stack[-1])
0x9c9: Pop(1)
0x9ca: @@ ClearReplies()
0x9cb: Pop(0)
0x9cc: Push((int) 524647)
0x9cd: Push((int) -1)
0x9ce: Push((int) 25986)
0x9cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d0: Pop(3)
0x9d1: Push((int) 526306)
0x9d2: Push((int) 27589)
0x9d3: Push((int) 27588)
0x9d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d5: Pop(3)
0x9d6: Return(); Pop(0)

0x9d7: Push((int) 27589)
0x9d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d9: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9da: PushEmpty(string)
0x9db: Stack[-1] = "Neutral"
0x9dc: Call2 0x83c

0x9dd: Pop(1)
0x9de: Push((int) 526307)
0x9df: @@ SetMessage(Stack[-1])
0x9e0: Pop(1)
0x9e1: @@ ClearReplies()
0x9e2: Pop(0)
0x9e3: Push((int) 526308)
0x9e4: Push((int) -1)
0x9e5: Push((int) 27590)
0x9e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e7: Pop(3)
0x9e8: Push((int) 526309)
0x9e9: Push((int) -1)
0x9ea: Push((int) 27591)
0x9eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ec: Pop(3)
0x9ed: Return(); Pop(0)

0x9ee: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9ef: PushEmpty(bool)
0x9f0: Call2 0xd55

0x9f1: Pop(0)
0x9f2: IF (Stack[-1] == 0) GOTO 0x9f6; Pop(1)

0x9f3: @ lshStopAnimation()
0x9f4: Pop(0)
0x9f5: GOTO 0x9f8

0x9f6: @ StopAnimation()
0x9f7: Pop(0)
0x9f8: Return(); Pop(0)

0x9f9: GOTO 0x853

0x9fa: Return(); Pop(0)

0x9fb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x9fc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x9fd: PushEmpty(bool, object, float)
0x9fe: Stack[-2] = Stack[-12]
0x9ff: Stack[-1] = (float) 70.0
0xa00: Call2 0xbe6

0xa01: Pop(2)
0xa02: Pop(1); Push((bool) Stack[-1] == 0)
0xa03: IF (Stack[-1] == 0) GOTO 0xa06; Pop(1)

0xa04: Stack[-10] = (int) -2
0xa05: Return(); Pop(8)

0xa06: @ CreateDialog(Stack[-4])
0xa07: Pop(0)
0xa08: PushEmpty(int)
0xa09: Call2 0xd4f

0xa0a: Pop(0)
0xa0b: @@ SetNPCName(Stack[-1])
0xa0c: Pop(1)
0xa0d: PushEmpty(int)
0xa0e: Call2 0xd4d

0xa0f: Pop(0)
0xa10: @@ SetNPCDescription(Stack[-1])
0xa11: Pop(1)
0xa12: PushEmpty(string)
0xa13: Call2 0xd51

0xa14: Pop(0)
0xa15: @@ SetPhoto(Stack[-1])
0xa16: Pop(1)
0xa17: PushEmpty(string)
0xa18: Call2 0xd53

0xa19: Pop(0)
0xa1a: @@ SetPhoto2(Stack[-1])
0xa1b: Pop(1)
0xa1c: PushEmpty(int)
0xa1d: Call2 0xf25

0xa1e: Pop(0)
0xa1f: @@ SetPlayerName(Stack[-1])
0xa20: Pop(1)
0xa21: Stack[-2] = (int) -1
0xa22: @ IsOverrideActive(Stack[-3])
0xa23: Pop(0)
0xa24: Push(Stack[-3])
0xa25: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa26: Stack[-10] = (int) -2
0xa27: Return(); Pop(8)

0xa28: @ DoDialog(Stack[-4])
0xa29: Pop(0)
0xa2a: PushEmpty(bool, object)
0xa2b: PushEmpty(object)
0xa2c: Call2 0xcfa

0xa2d: Stack[-2] = Stack[-1]
0xa2e: Pop(1)
0xa2f: Call2 0xc3b

0xa30: Pop(2)
0xa31: PushEmpty(object, object)
0xa32: Stack[-2] = Stack[-11]
0xa33: Stack[-1] = Stack[-6]
0xa34: Push(-2, 4); TaskCall(13)
0xa35: Call2 0xa4c

0xa36: Pop(-2, 4); TaskReturn
0xa37: Pop(2)
0xa38: @@ IsDialogEnd(Stack[-1])
0xa39: Pop(0)
0xa3a: Pop(0); Push((bool) Stack[-1] == 0)
0xa3b: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa3c: @ sync()
0xa3d: Pop(0)
0xa3e: @@ IsDialogEnd(Stack[-1])
0xa3f: Pop(0)
0xa40: GOTO 0xa3a

0xa41: PushEmpty(object)
0xa42: Stack[-1] = Stack[-10]
0xa43: Call2 0xc2a

0xa44: Pop(1)
0xa45: @ StopDialog(Stack[-4])
0xa46: Pop(0)
0xa47: @@ GetReturnValue(Stack[-2])
0xa48: Pop(0)
0xa49: Stack[-10] = Stack[-2]
0xa4a: Return(); Pop(8)

0xa4b: Stack[-4] = 0
0xa4c: PushEmpty()
0xa4d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa4e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa4f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa50: Push((int) 1)
0xa51: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa52: PushEmpty(string)
0xa53: Stack[-1] = "Neutral"
0xa54: Call2 0xa86

0xa55: Pop(1)
0xa56: Push((int) 540539)
0xa57: @@ SetMessage(Stack[-1])
0xa58: Pop(1)
0xa59: @@ ClearReplies()
0xa5a: Pop(0)
0xa5b: Push((int) 540540)
0xa5c: Push((int) -1)
0xa5d: Push((int) 42549)
0xa5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5f: Pop(3)
0xa60: Push((int) 540799)
0xa61: Push((int) -1)
0xa62: Push((int) 42848)
0xa63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa64: Pop(3)
0xa65: GOTO 0xa68

0xa66: Return(); Pop(0)

0xa67: GOTO 0xa50

0xa68: PushEmpty(bool)
0xa69: Call2 0xd55

0xa6a: Pop(0)
0xa6b: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa6c: @ lshWaitForAnimEnd()
0xa6d: Pop(0)
0xa6e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6f: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa70: GOTO 0xa76

0xa71: PushEmpty(string)
0xa72: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa73: Call2 0xcc5

0xa74: Pop(1)
0xa75: GOTO 0xa6c

0xa76: GOTO 0xa85

0xa77: Push("all")
0xa78: Push("idle")
0xa79: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7a: Pop(2)
0xa7b: @ WaitForAnimEnd()
0xa7c: Pop(0)
0xa7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa7e: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa7f: GOTO 0xa85

0xa80: Push("all")
0xa81: Push("idle")
0xa82: @ PlayAnimation(Stack[-2], Stack[-1])
0xa83: Pop(2)
0xa84: GOTO 0xa7b

0xa85: Return(); Pop(0)

0xa86: PushEmpty()
0xa87: PushEmpty(bool)
0xa88: Call2 0xd55

0xa89: Pop(0)
0xa8a: Pop(1); Push((bool) Stack[-1] == 0)
0xa8b: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa8c: Return(); Pop(0)

0xa8d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa8e: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8f: Return(); Pop(0)

0xa90: PushEmpty(string, bool)
0xa91: Stack[-2] = Stack[-3]
0xa92: Push("")
0xa93: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa94: IF (Stack[-1] == 0) GOTO 0xa97; Pop(1)

0xa95: Stack[-1] = (bool) 0
0xa96: GOTO 0xa98

0xa97: Stack[-1] = (bool) 1
0xa98: Call2 0xcd5

0xa99: Pop(2)
0xa9a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa9b: Return(); Pop(0)

0xa9c: PushEmpty()
0xa9d: Push((int) 1)
0xa9e: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xa9f: PushEmpty()
0xaa0: Call2 0xcf3

0xaa1: Pop(0)
0xaa2: Push((int) 42548)
0xaa3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa4: IF (Stack[-1] == 0) GOTO 0xab9; Pop(1)

0xaa5: PushEmpty(string)
0xaa6: Stack[-1] = "Neutral"
0xaa7: Call2 0xa86

0xaa8: Pop(1)
0xaa9: Push((int) 540539)
0xaaa: @@ SetMessage(Stack[-1])
0xaab: Pop(1)
0xaac: @@ ClearReplies()
0xaad: Pop(0)
0xaae: Push((int) 540540)
0xaaf: Push((int) -1)
0xab0: Push((int) 42549)
0xab1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab2: Pop(3)
0xab3: Push((int) 540799)
0xab4: Push((int) -1)
0xab5: Push((int) 42848)
0xab6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab7: Pop(3)
0xab8: Return(); Pop(0)

0xab9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xaba: PushEmpty(bool)
0xabb: Call2 0xd55

0xabc: Pop(0)
0xabd: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xabe: @ lshStopAnimation()
0xabf: Pop(0)
0xac0: GOTO 0xac3

0xac1: @ StopAnimation()
0xac2: Pop(0)
0xac3: Return(); Pop(0)

0xac4: GOTO 0xa9d

0xac5: Return(); Pop(0)

0xac6: PushEmpty()
0xac7: Call2 0xaca

0xac8: Pop(0)
0xac9: Return(); Pop(0)

0xaca: PushEmpty(bool)
0xacb: Call2 0xbe1

0xacc: Pop(0)
0xacd: Pop(1); Push((bool) Stack[-1] == 0)
0xace: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xacf: @ Hold()
0xad0: Pop(0)
0xad1: @ GetDirection(Stack[-0])
0xad2: Pop(0)
0xad3: PushEmpty()
0xad4: Call2 0xb7a

0xad5: Pop(0)
0xad6: GOTO 0xad3

0xad7: Return(); Pop(0)

0xad8: PushEmpty(object, object)
0xad9: Push("player")
0xada: @ FindActor(Stack[-2], Stack[-1])
0xadb: Pop(1)
0xadc: Pop(0); Push((bool) Stack[-1] == 0)
0xadd: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xade: Stack[-3] = (bool) 0
0xadf: Return(); Pop(2)

0xae0: PushEmpty(bool, object)
0xae1: Stack[-1] = Stack[-3]
0xae2: Call2 0xbd8

0xae3: Stack[-5] = Stack[-2]
0xae4: Pop(2)
0xae5: Return(); Pop(2)

0xae6: Stack[-1] = 0
0xae7: Push(CvectorIndex(Stack[-0], 0))
0xae8: Push(CvectorIndex(Stack[-0], 2))
0xae9: @ RotateAsync(Stack[-2], Stack[-1])
0xaea: Pop(2)
0xaeb: Return(); Pop(0)

0xaec: PushEmpty(object, bool, object, bool)
0xaed: Push("player")
0xaee: @ FindActor(Stack[-3], Stack[-1])
0xaef: Pop(1)
0xaf0: Pop(0); Push((bool) Stack[-2] == 0)
0xaf1: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xaf2: Stack[-5] = (bool) 0
0xaf3: Return(); Pop(4)

0xaf4: PushEmpty(float, object)
0xaf5: Stack[-1] = Stack[-4]
0xaf6: Call2 0xbc6

0xaf7: Pop(1)
0xaf8: Push((float)90000.0)
0xaf9: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xafa: IF (Stack[-1] == 0) GOTO 0xafd; Pop(1)

0xafb: Stack[-5] = (bool) 0
0xafc: Return(); Pop(4)

0xafd: @ CanSee(Stack[-1], Stack[-2])
0xafe: Pop(0)
0xaff: Stack[-5] = Stack[-1]
0xb00: Return(); Pop(4)

0xb01: Stack[-2] = 0
0xb02: PushEmpty(float, float)
0xb03: Push((int) 8)
0xb04: Push((int) 16)
0xb05: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb06: Pop(2)
0xb07: Push((int) 10)
0xb08: @ SetTimer(Stack[-1], Stack[-2])
0xb09: Pop(1)
0xb0a: Return(); Pop(2)

0xb0b: Push((int) 10)
0xb0c: @ KillTimer(Stack[-1])
0xb0d: Pop(1)
0xb0e: Return(); Pop(0)

0xb0f: PushEmpty()
0xb10: Push((int) 10)
0xb11: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb12: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb13: PushEmpty()
0xb14: Call2 0xb0b

0xb15: Pop(0)
0xb16: PushEmpty(bool)
0xb17: Stack[-1] = (bool) 0
0xb18: PushEmpty(bool)
0xb19: Call2 0xbe1

0xb1a: Pop(0)
0xb1b: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb1c: PushEmpty(bool)
0xb1d: Call2 0xaec

0xb1e: Pop(0)
0xb1f: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb20: Stack[-1] = (bool) 1
0xb21: IF (Stack[-1] == 0) GOTO 0xb2e; Pop(1)

0xb22: PushEmpty(bool)
0xb23: Call2 0xad8

0xb24: Pop(0)
0xb25: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb26: PushEmpty(bool, object)
0xb27: PushEmpty(object)
0xb28: Call2 0xcfa

0xb29: Stack[-2] = Stack[-1]
0xb2a: Pop(1)
0xb2b: Call2 0xc75

0xb2c: Pop(2)
0xb2d: GOTO 0xb34

0xb2e: PushEmpty()
0xb2f: Call2 0xae7

0xb30: Pop(0)
0xb31: PushEmpty()
0xb32: Call2 0xb02

0xb33: Pop(0)
0xb34: Return(); Pop(0)

0xb35: PushEmpty()
0xb36: Call2 0xbc1

0xb37: Pop(0)
0xb38: PushEmpty()
0xb39: Call2 0xb0b

0xb3a: Pop(0)
0xb3b: @ lshStopSpeech()
0xb3c: Pop(0)
0xb3d: @ lshStopAnimation()
0xb3e: Pop(0)
0xb3f: @ StopAsync()
0xb40: Pop(0)
0xb41: @ Hold()
0xb42: Pop(0)
0xb43: Return(); Pop(0)

0xb44: @ StopGroup0()
0xb45: Pop(0)
0xb46: PushEmpty()
0xb47: Call2 0xb0b

0xb48: Pop(0)
0xb49: PushEmpty(string)
0xb4a: Stack[-1] = "Neutral"
0xb4b: Call2 0xcc5

0xb4c: Pop(1)
0xb4d: PushEmpty()
0xb4e: Call2 0xb02

0xb4f: Pop(0)
0xb50: Return(); Pop(0)

0xb51: PushEmpty()
0xb52: Push(Stack[-1])
0xb53: IF (Stack[-1] == 0) GOTO 0xb58; Pop(1)

0xb54: PushEmpty()
0xb55: Call2 0xb02

0xb56: Pop(0)
0xb57: GOTO 0xb5c

0xb58: PushEmpty(string)
0xb59: Stack[-1] = "Neutral"
0xb5a: Call2 0xcc5

0xb5b: Pop(1)
0xb5c: Return(); Pop(0)

0xb5d: PushEmpty(bool, bool)
0xb5e: @ IsOverrideActive(Stack[-1])
0xb5f: Pop(0)
0xb60: Pop(0); Push((bool) Stack[-1] == 0)
0xb61: IF (Stack[-1] == 0) GOTO 0xb79; Pop(1)

0xb62: EventDisable(0)
0xb63: PushEmpty()
0xb64: Call2 0xbc1

0xb65: Pop(0)
0xb66: PushEmpty(bool, object)
0xb67: Stack[-1] = Stack[-5]
0xb68: Call2 0xbd8

0xb69: Pop(2)
0xb6a: EventEnable(0)
0xb6b: PushEmpty(object)
0xb6c: Stack[-1] = Stack[-4]
0xb6d: Call2 0xf36

0xb6e: Pop(1)
0xb6f: PushEmpty(string)
0xb70: Stack[-1] = "Neutral"
0xb71: Call2 0xcc5

0xb72: Pop(1)
0xb73: PushEmpty()
0xb74: Call2 0xb0b

0xb75: Pop(0)
0xb76: PushEmpty()
0xb77: Call2 0xb02

0xb78: Pop(0)
0xb79: Return(); Pop(2)

0xb7a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xb7b: @ WaitForAnimEnd()
0xb7c: Pop(0)
0xb7d: PushEmpty(bool)
0xb7e: Call2 0xbe1

0xb7f: Pop(0)
0xb80: Pop(1); Push((bool) Stack[-1] == 0)
0xb81: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb82: Return(); Pop(12)

0xb83: PushEmpty(int)
0xb84: Call2 0xd3c

0xb85: Stack[-7] = Stack[-1]
0xb86: Pop(1)
0xb87: Stack[-5] = (int) 0
0xb88: PushEmpty(bool)
0xb89: Stack[-1] = (bool) 0
0xb8a: Push((int) 5)
0xb8b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xb8c: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb8d: PushEmpty(bool)
0xb8e: Call2 0xbe1

0xb8f: Pop(0)
0xb90: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb91: Stack[-1] = (bool) 1
0xb92: IF (Stack[-1] == 0) GOTO 0xbbc; Pop(1)

0xb93: Pop(0); Push((bool) Stack[-6] == 0)
0xb94: IF (Stack[-1] == 0) GOTO 0xb9c; Pop(1)

0xb95: Push((int) 3)
0xb96: @ Sleep(Stack[-1], Stack[-5])
0xb97: Pop(1)
0xb98: Pop(0); Push((bool) Stack[-4] == 0)
0xb99: IF (Stack[-1] == 0) GOTO 0xb9b; Pop(1)

0xb9a: GOTO 0xbbc

0xb9b: GOTO 0xbb1

0xb9c: @ irand(Stack[-3], Stack[-6])
0xb9d: Pop(0)
0xb9e: Push((int) 5)
0xb9f: @ irand(Stack[-3], Stack[-1])
0xba0: Pop(1)
0xba1: Push((int) 0)
0xba2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xba3: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xba4: Stack[-3] = (int) 0
0xba5: Push("all")
0xba6: PushEmpty(string, int)
0xba7: Stack[-1] = Stack[-6]
0xba8: Call2 0xd35

0xba9: Pop(1)
0xbaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xbab: Pop(2)
0xbac: @ WaitForAnimEnd(Stack[-1])
0xbad: Pop(0)
0xbae: Pop(0); Push((bool) Stack[-1] == 0)
0xbaf: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbb0: GOTO 0xbbc

0xbb1: PushEmpty(bool)
0xbb2: Call2 0xbbf

0xbb3: Pop(0)
0xbb4: Pop(1); Push((bool) Stack[-1] == 0)
0xbb5: IF (Stack[-1] == 0) GOTO 0xbb7; Pop(1)

0xbb6: GOTO 0xbbc

0xbb7: @ ResetAAS()
0xbb8: Pop(0)
0xbb9: Push((int) 1)
0xbba: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xbbb: GOTO 0xb88

0xbbc: @ ResetAAS()
0xbbd: Pop(0)
0xbbe: Return(); Pop(12)

0xbbf: Stack[-1] = (bool) 1
0xbc0: Return(); Pop(0)

0xbc1: @ StopAnimation()
0xbc2: Pop(0)
0xbc3: @ StopGroup0()
0xbc4: Pop(0)
0xbc5: Return(); Pop(0)

0xbc6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xbc7: @ GetPosition(Stack[-3])
0xbc8: Pop(0)
0xbc9: @@ GetPosition(Stack[-2])
0xbca: Pop(0)
0xbcb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xbcc: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xbcd: Return(); Pop(6)

0xbce: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xbcf: @ GetPosition(Stack[-3])
0xbd0: Pop(0)
0xbd1: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xbd2: Push(CvectorIndex(Stack[-2], 0))
0xbd3: Push(CvectorIndex(Stack[-3], 2))
0xbd4: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xbd5: Pop(2)
0xbd6: Stack[-8] = Stack[-1]
0xbd7: Return(); Pop(6)

0xbd8: PushEmpty(cvector, cvector)
0xbd9: @@ GetPosition(Stack[-1])
0xbda: Pop(0)
0xbdb: PushEmpty(bool, cvector)
0xbdc: Stack[-1] = Stack[-3]
0xbdd: Call2 0xbce

0xbde: Stack[-6] = Stack[-2]
0xbdf: Pop(2)
0xbe0: Return(); Pop(2)

0xbe1: PushEmpty(bool, bool)
0xbe2: @ IsLoaded(Stack[-1])
0xbe3: Pop(0)
0xbe4: Stack[-3] = Stack[-1]
0xbe5: Return(); Pop(2)

0xbe6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xbe7: @@ GetPosition(Stack[-8])
0xbe8: Pop(0)
0xbe9: @@ GetEyesHeight(Stack[-9])
0xbea: Pop(0)
0xbeb: Push(CvectorIndex(Stack[-8], 1))
0xbec: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xbed: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xbee: @ GetPosition(Stack[-7])
0xbef: Pop(0)
0xbf0: @ GetEyesHeight(Stack[-9])
0xbf1: Pop(0)
0xbf2: Push(CvectorIndex(Stack[-7], 1))
0xbf3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xbf4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xbf5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xbf6: Push(CvectorIndex(Stack[-6], 1))
0xbf7: Stack[-1] = (int) 0
0xbf8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xbf9: Pop(0); Push(Stack[-6] | Stack[-6]);
0xbfa: Pop(1); Push(Sqrt(Stack[-1]))
0xbfb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xbfc: Stack[-5] = -Stack[-6]; Pop(0);
0xbfd: Pop(0); Push(Stack[-6] * Stack[-19]);
0xbfe: PushEmpty(cvector, cvector)
0xbff: Push(CVector(0.0, 1.0, 0.0))
0xc00: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xc01: Call2 0xd00

0xc02: Pop(1)
0xc03: Push((int) 25)
0xc04: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc05: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc06: Push(CVector(0.0, 10.0, 0.0))
0xc07: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xc08: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xc09: @ IsOverrideActive(Stack[-2])
0xc0a: Pop(0)
0xc0b: Push(Stack[-2])
0xc0c: IF (Stack[-1] == 0) GOTO 0xc0f; Pop(1)

0xc0d: Stack[-21] = (bool) 0
0xc0e: Return(); Pop(18)

0xc0f: @ StopWorld()
0xc10: Pop(0)
0xc11: @ CameraTransit(Stack[-3], Stack[-5])
0xc12: Pop(0)
0xc13: Push(CvectorIndex(Stack[-4], 0))
0xc14: Push(CvectorIndex(Stack[-5], 2))
0xc15: @ Rotate(Stack[-2], Stack[-1])
0xc16: Pop(2)
0xc17: PushEmpty(bool)
0xc18: Call2 0xd55

0xc19: Pop(0)
0xc1a: IF (Stack[-1] == 0) GOTO 0xc1c; Pop(1)

0xc1b: GOTO 0xc24

0xc1c: Push("head")
0xc1d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc1e: Pop(1)
0xc1f: Push(Stack[-1])
0xc20: IF (Stack[-1] == 0) GOTO 0xc24; Pop(1)

0xc21: Push("head")
0xc22: @ LookAsyncCamera(Stack[-1])
0xc23: Pop(1)
0xc24: @ CameraWaitForPlayFinish()
0xc25: Pop(0)
0xc26: @ ResumeWorld()
0xc27: Pop(0)
0xc28: Stack[-21] = (bool) 1
0xc29: Return(); Pop(18)

0xc2a: PushEmpty(bool, bool)
0xc2b: @ CameraSwitchToNormal()
0xc2c: Pop(0)
0xc2d: PushEmpty(bool)
0xc2e: Call2 0xd55

0xc2f: Pop(0)
0xc30: IF (Stack[-1] == 0) GOTO 0xc32; Pop(1)

0xc31: GOTO 0xc3a

0xc32: Push("head")
0xc33: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc34: Pop(1)
0xc35: Push(Stack[-1])
0xc36: IF (Stack[-1] == 0) GOTO 0xc3a; Pop(1)

0xc37: Push("head")
0xc38: @ UnlookAsync(Stack[-1])
0xc39: Pop(1)
0xc3a: Return(); Pop(2)

0xc3b: PushEmpty(int, int, int, int)
0xc3c: Push("voice_common")
0xc3d: @ GetVariable(Stack[-1], Stack[-3])
0xc3e: Pop(1)
0xc3f: Push(Stack[-2])
0xc40: IF (Stack[-1] == 0) GOTO 0xc61; Pop(1)

0xc41: PushEmpty(bool, object)
0xc42: Stack[-1] = Stack[-7]
0xc43: Call2 0xc75

0xc44: Pop(1)
0xc45: Pop(1); Push((bool) Stack[-1] == 0)
0xc46: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc47: PushEmpty(bool, object)
0xc48: Stack[-1] = Stack[-7]
0xc49: Call2 0xc9a

0xc4a: Pop(1)
0xc4b: Pop(1); Push((bool) Stack[-1] == 0)
0xc4c: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc4d: Stack[-6] = (bool) 0
0xc4e: Return(); Pop(4)

0xc4f: Push((int) 2)
0xc50: @ irand(Stack[-2], Stack[-1])
0xc51: Pop(1)
0xc52: Push(Stack[-1])
0xc53: IF (Stack[-1] == 0) GOTO 0xc5c; Pop(1)

0xc54: Push("voice_common")
0xc55: Push((int) 1)
0xc56: Pop(1); Push(Stack[-4] + Stack[-1]);
0xc57: Push((int) 3)
0xc58: Pop(2); Push(Stack[-2] % Stack[-1]);
0xc59: @ SetVariable(Stack[-2], Stack[-1])
0xc5a: Pop(2)
0xc5b: GOTO 0xc60

0xc5c: Push("voice_common")
0xc5d: Push((int) 0)
0xc5e: @ SetVariable(Stack[-2], Stack[-1])
0xc5f: Pop(2)
0xc60: GOTO 0xc73

0xc61: PushEmpty(bool, object)
0xc62: Stack[-1] = Stack[-7]
0xc63: Call2 0xc9a

0xc64: Pop(1)
0xc65: Pop(1); Push((bool) Stack[-1] == 0)
0xc66: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xc67: PushEmpty(bool, object)
0xc68: Stack[-1] = Stack[-7]
0xc69: Call2 0xc75

0xc6a: Pop(1)
0xc6b: Pop(1); Push((bool) Stack[-1] == 0)
0xc6c: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xc6d: Stack[-6] = (bool) 0
0xc6e: Return(); Pop(4)

0xc6f: Push("voice_common")
0xc70: Push((int) 1)
0xc71: @ SetVariable(Stack[-2], Stack[-1])
0xc72: Pop(2)
0xc73: Stack[-6] = (bool) 1
0xc74: Return(); Pop(4)

0xc75: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc76: Stack[-5] = "c"
0xc77: Stack[-4] = (int) 0
0xc78: Push((int) 1)
0xc79: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc7a: Push((int) 1)
0xc7b: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc7c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc7d: @@ HasProperty(Stack[-1], Stack[-4])
0xc7e: Pop(1)
0xc7f: Pop(0); Push((bool) Stack[-3] == 0)
0xc80: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc81: GOTO 0xc85

0xc82: Push((int) 1)
0xc83: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc84: GOTO 0xc78

0xc85: Pop(0); Push((bool) Stack[-4] == 0)
0xc86: IF (Stack[-1] == 0) GOTO 0xc89; Pop(1)

0xc87: Stack[-12] = (bool) 0
0xc88: Return(); Pop(10)

0xc89: Stack[-2] = (int) 0
0xc8a: Push((int) 1)
0xc8b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc8c: IF (Stack[-1] == 0) GOTO 0xc8f; Pop(1)

0xc8d: @ irand(Stack[-2], Stack[-4])
0xc8e: Pop(0)
0xc8f: Push((int) 1)
0xc90: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc91: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc92: @@ GetProperty(Stack[-1], Stack[-2])
0xc93: Pop(1)
0xc94: PushEmpty(bool, string)
0xc95: Stack[-1] = Stack[-3]
0xc96: Call2 0xce4

0xc97: Stack[-14] = Stack[-2]
0xc98: Pop(2)
0xc99: Return(); Pop(10)

0xc9a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc9b: Push("d")
0xc9c: PushEmpty(int)
0xc9d: Call2 0xd26

0xc9e: Pop(0)
0xc9f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xca0: Push("m")
0xca1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xca2: Stack[-4] = (int) 0
0xca3: Push((int) 1)
0xca4: IF (Stack[-1] == 0) GOTO 0xcb0; Pop(1)

0xca5: Push((int) 1)
0xca6: Pop(1); Push(Stack[-5] + Stack[-1]);
0xca7: Pop(1); Push(Stack[-6] + Stack[-1]);
0xca8: @@ HasProperty(Stack[-1], Stack[-4])
0xca9: Pop(1)
0xcaa: Pop(0); Push((bool) Stack[-3] == 0)
0xcab: IF (Stack[-1] == 0) GOTO 0xcad; Pop(1)

0xcac: GOTO 0xcb0

0xcad: Push((int) 1)
0xcae: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xcaf: GOTO 0xca3

0xcb0: Pop(0); Push((bool) Stack[-4] == 0)
0xcb1: IF (Stack[-1] == 0) GOTO 0xcb4; Pop(1)

0xcb2: Stack[-12] = (bool) 0
0xcb3: Return(); Pop(10)

0xcb4: Stack[-2] = (int) 0
0xcb5: Push((int) 1)
0xcb6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xcb7: IF (Stack[-1] == 0) GOTO 0xcba; Pop(1)

0xcb8: @ irand(Stack[-2], Stack[-4])
0xcb9: Pop(0)
0xcba: Push((int) 1)
0xcbb: Pop(1); Push(Stack[-3] + Stack[-1]);
0xcbc: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcbd: @@ GetProperty(Stack[-1], Stack[-2])
0xcbe: Pop(1)
0xcbf: PushEmpty(bool, string)
0xcc0: Stack[-1] = Stack[-3]
0xcc1: Call2 0xce4

0xcc2: Stack[-14] = Stack[-2]
0xcc3: Pop(2)
0xcc4: Return(); Pop(10)

0xcc5: PushEmpty(bool, float, float, bool, float, float)
0xcc6: @ lshHasAnimation(Stack[-3], Stack[-7])
0xcc7: Pop(0)
0xcc8: Push(Stack[-3])
0xcc9: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcca: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xccb: Pop(0)
0xccc: Push((bool) 0)
0xccd: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xcce: Pop(1)
0xccf: GOTO 0xcd4

0xcd0: Push("Can't find lsh animation : ")
0xcd1: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcd2: @ Trace(Stack[-1])
0xcd3: Pop(1)
0xcd4: Return(); Pop(6)

0xcd5: PushEmpty(bool, float, float, bool, float, float)
0xcd6: @ lshHasAnimation(Stack[-3], Stack[-8])
0xcd7: Pop(0)
0xcd8: Push(Stack[-3])
0xcd9: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcda: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xcdb: Pop(0)
0xcdc: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xcdd: Pop(0)
0xcde: GOTO 0xce3

0xcdf: Push("Can't find lsh animation : ")
0xce0: Pop(1); Push(Stack[-1] + Stack[-9]);
0xce1: @ Trace(Stack[-1])
0xce2: Pop(1)
0xce3: Return(); Pop(6)

0xce4: PushEmpty(bool, bool)
0xce5: PushEmpty(bool)
0xce6: Call2 0xd55

0xce7: Pop(0)
0xce8: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xce9: @ lshHasSpeech(Stack[-1], Stack[-3])
0xcea: Pop(0)
0xceb: Push(Stack[-1])
0xcec: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xced: @ lshPlaySpeech(Stack[-3])
0xcee: Pop(0)
0xcef: Stack[-4] = (bool) 1
0xcf0: Return(); Pop(2)

0xcf1: Stack[-4] = (bool) 0
0xcf2: Return(); Pop(2)

0xcf3: PushEmpty(bool)
0xcf4: Call2 0xd55

0xcf5: Pop(0)
0xcf6: IF (Stack[-1] == 0) GOTO 0xcf9; Pop(1)

0xcf7: @ lshStopSpeech()
0xcf8: Pop(0)
0xcf9: Return(); Pop(0)

0xcfa: PushEmpty(object, object)
0xcfb: @ self(Stack[-1])
0xcfc: Pop(0)
0xcfd: Stack[-3] = Stack[-1]
0xcfe: Return(); Pop(2)

0xcff: Stack[-1] = 0
0xd00: PushEmpty(float, float)
0xd01: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd02: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd03: Push((float)0.0)
0xd04: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd05: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd06: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd07: Return(); Pop(2)

0xd08: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd09: Return(); Pop(2)

0xd0a: PushEmpty(int, int)
0xd0b: @ GetVariable(Stack[-3], Stack[-1])
0xd0c: Pop(0)
0xd0d: Stack[-4] = Stack[-1]
0xd0e: Return(); Pop(2)

0xd0f: PushEmpty(object, object, object, object)
0xd10: @ GetMainOutdoorScene(Stack[-2])
0xd11: Pop(0)
0xd12: Push(".bin")
0xd13: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd14: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xd15: Pop(1)
0xd16: Stack[-6] = Stack[-1]
0xd17: Return(); Pop(4)

0xd18: Stack[-1] = 0
0xd19: Stack[-2] = 0
0xd1a: PushEmpty(int, bool, int, bool)
0xd1b: @ GetInvItemByName(Stack[-2], Stack[-5])
0xd1c: Pop(0)
0xd1d: @@ HasItem(Stack[-2], Stack[-1])
0xd1e: Pop(0)
0xd1f: Stack[-7] = Stack[-1]
0xd20: Return(); Pop(4)

0xd21: PushEmpty(float, float)
0xd22: @ GetGameTime(Stack[-1])
0xd23: Pop(0)
0xd24: Stack[-3] = Stack[-1]
0xd25: Return(); Pop(2)

0xd26: PushEmpty(float, float)
0xd27: @ GetGameTime(Stack[-1])
0xd28: Pop(0)
0xd29: Push((int) 1)
0xd2a: PushEmpty(int)
0xd2b: Push((int) 24)
0xd2c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xd2d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd2e: Return(); Pop(2)

0xd2f: PushEmpty()
0xd30: PushEmpty(int)
0xd31: Call2 0xd26

0xd32: Pop(0)
0xd33: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xd34: Return(); Pop(0)

0xd35: PushEmpty(string, string)
0xd36: Stack[-1] = "idle"
0xd37: Push(Stack[-3])
0xd38: IF (Stack[-1] == 0) GOTO 0xd3a; Pop(1)

0xd39: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd3a: Stack[-4] = Stack[-1]
0xd3b: Return(); Pop(2)

0xd3c: PushEmpty(int, bool, int, bool)
0xd3d: Stack[-2] = (int) 0
0xd3e: Push("all")
0xd3f: PushEmpty(string, int)
0xd40: Stack[-1] = Stack[-5]
0xd41: Call2 0xd35

0xd42: Pop(1)
0xd43: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd44: Pop(2)
0xd45: Pop(0); Push((bool) Stack[-1] == 0)
0xd46: IF (Stack[-1] == 0) GOTO 0xd48; Pop(1)

0xd47: GOTO 0xd4b

0xd48: Push((int) 1)
0xd49: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd4a: GOTO 0xd3e

0xd4b: Stack[-5] = Stack[-2]
0xd4c: Return(); Pop(4)

0xd4d: Stack[-1] = (int) 515542
0xd4e: Return(); Pop(0)

0xd4f: Stack[-1] = (int) 502867
0xd50: Return(); Pop(0)

0xd51: Stack[-1] = "ui/NPC_Laska.png"
0xd52: Return(); Pop(0)

0xd53: Stack[-1] = "ui/NPC_Laska_b.png"
0xd54: Return(); Pop(0)

0xd55: Stack[-1] = (bool) 1
0xd56: Return(); Pop(0)

0xd57: PushEmpty()
0xd58: PushEmpty(object, string, float)
0xd59: PushEmpty(object)
0xd5a: Call2 0xef3

0xd5b: Stack[-4] = Stack[-1]
0xd5c: Pop(1)
0xd5d: Stack[-2] = "pt_map_burah_home"
0xd5e: Stack[-1] = (int) 2
0xd5f: Call2 0xf04

0xd60: Pop(3)
0xd61: PushEmpty(object)
0xd62: Call2 0xef3

0xd63: Pop(0)
0xd64: @@ ShowMap(Stack[-1])
0xd65: Pop(1)
0xd66: Return(); Pop(0)

0xd67: PushEmpty()
0xd68: Push("ook1Laska1")
0xd69: Push((int) 1)
0xd6a: @ SetVariable(Stack[-2], Stack[-1])
0xd6b: Pop(2)
0xd6c: Return(); Pop(0)

0xd6d: PushEmpty()
0xd6e: Push("ook1Laska2")
0xd6f: Push((int) 1)
0xd70: @ SetVariable(Stack[-2], Stack[-1])
0xd71: Pop(2)
0xd72: Return(); Pop(0)

0xd73: PushEmpty(object, object)
0xd74: Push("k1q01LaskaGotoBurah")
0xd75: Push((int) 1)
0xd76: @ SetVariable(Stack[-2], Stack[-1])
0xd77: Pop(2)
0xd78: PushEmpty(object)
0xd79: Call2 0xef3

0xd7a: Stack[-2] = Stack[-1]
0xd7b: Pop(1)
0xd7c: Push("k1q01LaskaGotoBurah")
0xd7d: Push("pt_map_burah_home")
0xd7e: Push((int) 1)
0xd7f: Push((int) 524731)
0xd80: PushEmpty(float)
0xd81: Call2 0xd21

0xd82: Pop(0)
0xd83: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd84: Pop(5)
0xd85: PushEmpty()
0xd86: Call2 0xe7c

0xd87: Pop(0)
0xd88: Return(); Pop(2)

0xd89: Stack[-1] = 0
0xd8a: PushEmpty(int, int)
0xd8b: Push("k2q02")
0xd8c: Push((int) 3)
0xd8d: @ SetVariable(Stack[-2], Stack[-1])
0xd8e: Pop(2)
0xd8f: PushEmpty()
0xd90: Call2 0xe89

0xd91: Pop(0)
0xd92: Push("milk")
0xd93: Push((int) 1)
0xd94: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xd95: Pop(2)
0xd96: Push("bread")
0xd97: Push((int) 1)
0xd98: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xd99: Pop(2)
0xd9a: Push("flower")
0xd9b: Push((int) 1)
0xd9c: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xd9d: Pop(2)
0xd9e: Return(); Pop(2)

0xd9f: PushEmpty()
0xda0: Push("ook2Laska1")
0xda1: Push((int) 1)
0xda2: @ SetVariable(Stack[-2], Stack[-1])
0xda3: Pop(2)
0xda4: Return(); Pop(0)

0xda5: PushEmpty(object, object)
0xda6: PushEmpty(object)
0xda7: Call2 0xef3

0xda8: Stack[-2] = Stack[-1]
0xda9: Pop(1)
0xdaa: Push("k5q03LaskaGotoAlbinos")
0xdab: Push("pt_k5q03_albinos_path12")
0xdac: Push((int) 0)
0xdad: Push((int) 526026)
0xdae: PushEmpty(float)
0xdaf: Call2 0xd21

0xdb0: Pop(0)
0xdb1: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdb2: Pop(5)
0xdb3: PushEmpty()
0xdb4: Call2 0xe96

0xdb5: Pop(0)
0xdb6: PushEmpty()
0xdb7: Call2 0xea3

0xdb8: Pop(0)
0xdb9: PushEmpty(object, string)
0xdba: Stack[-1] = "quest_k5_03"
0xdbb: Call2 0xd0f

0xdbc: Pop(2)
0xdbd: Return(); Pop(2)

0xdbe: Stack[-1] = 0
0xdbf: PushEmpty()
0xdc0: Push("ook5Laska1")
0xdc1: Push((int) 1)
0xdc2: @ SetVariable(Stack[-2], Stack[-1])
0xdc3: Pop(2)
0xdc4: Return(); Pop(0)

0xdc5: PushEmpty()
0xdc6: Push("k5LaskaVisit")
0xdc7: Push((int) 1)
0xdc8: @ SetVariable(Stack[-2], Stack[-1])
0xdc9: Pop(2)
0xdca: Return(); Pop(0)

0xdcb: PushEmpty()
0xdcc: Push("k6LaskaVisit")
0xdcd: Push((int) 1)
0xdce: @ SetVariable(Stack[-2], Stack[-1])
0xdcf: Pop(2)
0xdd0: Return(); Pop(0)

0xdd1: PushEmpty()
0xdd2: Push("ook6Laska1")
0xdd3: Push((int) 1)
0xdd4: @ SetVariable(Stack[-2], Stack[-1])
0xdd5: Pop(2)
0xdd6: Return(); Pop(0)

0xdd7: PushEmpty(object, object)
0xdd8: PushEmpty(object)
0xdd9: Call2 0xef3

0xdda: Stack[-2] = Stack[-1]
0xddb: Pop(1)
0xddc: Push("k6q03LaskaGotoAlbinos")
0xddd: Push("pt_k6q03_albinos_path9")
0xdde: Push((int) 0)
0xddf: Push((int) 511153)
0xde0: PushEmpty(float)
0xde1: Call2 0xd21

0xde2: Pop(0)
0xde3: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xde4: Pop(5)
0xde5: PushEmpty()
0xde6: Call2 0xeb0

0xde7: Pop(0)
0xde8: PushEmpty()
0xde9: Call2 0xebd

0xdea: Pop(0)
0xdeb: PushEmpty(object, string)
0xdec: Stack[-1] = "quest_k6_03"
0xded: Call2 0xd0f

0xdee: Pop(2)
0xdef: Return(); Pop(2)

0xdf0: Stack[-1] = 0
0xdf1: PushEmpty()
0xdf2: Push("playsound")
0xdf3: Push("giveitem")
0xdf4: @ TriggerWorld(Stack[-2], Stack[-1])
0xdf5: Pop(2)
0xdf6: Return(); Pop(0)

0xdf7: PushEmpty()
0xdf8: Push("playsound")
0xdf9: Push("mapmark")
0xdfa: @ TriggerWorld(Stack[-2], Stack[-1])
0xdfb: Pop(2)
0xdfc: Return(); Pop(0)

0xdfd: PushEmpty()
0xdfe: PushEmpty(int, string)
0xdff: Stack[-1] = "ook1Laska1"
0xe00: Call2 0xd0a

0xe01: Pop(1)
0xe02: Push((int) 0)
0xe03: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe04: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe05: Stack[-2] = (bool) 1
0xe06: Return(); Pop(0)

0xe07: Stack[-2] = (bool) 0
0xe08: Return(); Pop(0)

0xe09: PushEmpty()
0xe0a: PushEmpty(int, string)
0xe0b: Stack[-1] = "k1q01"
0xe0c: Call2 0xd0a

0xe0d: Pop(1)
0xe0e: Push((int) 4)
0xe0f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe10: IF (Stack[-1] == 0) GOTO 0xe13; Pop(1)

0xe11: Stack[-2] = (bool) 1
0xe12: Return(); Pop(0)

0xe13: Stack[-2] = (bool) 0
0xe14: Return(); Pop(0)

0xe15: PushEmpty()
0xe16: PushEmpty(int, string)
0xe17: Stack[-1] = "ook1Laska2"
0xe18: Call2 0xd0a

0xe19: Pop(1)
0xe1a: Push((int) 0)
0xe1b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe1c: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe1d: Stack[-2] = (bool) 1
0xe1e: Return(); Pop(0)

0xe1f: Stack[-2] = (bool) 0
0xe20: Return(); Pop(0)

0xe21: PushEmpty()
0xe22: PushEmpty(int, string)
0xe23: Stack[-1] = "k2q02"
0xe24: Call2 0xd0a

0xe25: Pop(1)
0xe26: Push((int) 1)
0xe27: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe28: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe29: Stack[-2] = (bool) 1
0xe2a: Return(); Pop(0)

0xe2b: Stack[-2] = (bool) 0
0xe2c: Return(); Pop(0)

0xe2d: PushEmpty()
0xe2e: PushEmpty(int, string)
0xe2f: Stack[-1] = "k2q02"
0xe30: Call2 0xd0a

0xe31: Pop(1)
0xe32: Push((int) 2)
0xe33: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe34: IF (Stack[-1] == 0) GOTO 0xe37; Pop(1)

0xe35: Stack[-2] = (bool) 1
0xe36: Return(); Pop(0)

0xe37: Stack[-2] = (bool) 0
0xe38: Return(); Pop(0)

0xe39: PushEmpty()
0xe3a: PushEmpty(bool)
0xe3b: Stack[-1] = (bool) 0
0xe3c: PushEmpty(bool)
0xe3d: Stack[-1] = (bool) 0
0xe3e: PushEmpty(bool, object, string)
0xe3f: Stack[-2] = Stack[-6]
0xe40: Stack[-1] = "flower"
0xe41: Call2 0xd1a

0xe42: Pop(2)
0xe43: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe44: PushEmpty(bool, object, string)
0xe45: Stack[-2] = Stack[-6]
0xe46: Stack[-1] = "milk"
0xe47: Call2 0xd1a

0xe48: Pop(2)
0xe49: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe4a: Stack[-1] = (bool) 1
0xe4b: IF (Stack[-1] == 0) GOTO 0xe53; Pop(1)

0xe4c: PushEmpty(bool, object, string)
0xe4d: Stack[-2] = Stack[-5]
0xe4e: Stack[-1] = "bread"
0xe4f: Call2 0xd1a

0xe50: Pop(2)
0xe51: IF (Stack[-1] == 0) GOTO 0xe53; Pop(1)

0xe52: Stack[-1] = (bool) 1
0xe53: IF (Stack[-1] == 0) GOTO 0xe56; Pop(1)

0xe54: Stack[-2] = (bool) 1
0xe55: Return(); Pop(0)

0xe56: Stack[-2] = (bool) 0
0xe57: Return(); Pop(0)

0xe58: PushEmpty()
0xe59: PushEmpty(int, string)
0xe5a: Stack[-1] = "ook2Laska1"
0xe5b: Call2 0xd0a

0xe5c: Pop(1)
0xe5d: Push((int) 0)
0xe5e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe5f: IF (Stack[-1] == 0) GOTO 0xe62; Pop(1)

0xe60: Stack[-2] = (bool) 1
0xe61: Return(); Pop(0)

0xe62: Stack[-2] = (bool) 0
0xe63: Return(); Pop(0)

0xe64: PushEmpty()
0xe65: PushEmpty(int, string)
0xe66: Stack[-1] = "ook5Laska1"
0xe67: Call2 0xd0a

0xe68: Pop(1)
0xe69: Push((int) 0)
0xe6a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe6b: IF (Stack[-1] == 0) GOTO 0xe6e; Pop(1)

0xe6c: Stack[-2] = (bool) 1
0xe6d: Return(); Pop(0)

0xe6e: Stack[-2] = (bool) 0
0xe6f: Return(); Pop(0)

0xe70: PushEmpty()
0xe71: PushEmpty(int, string)
0xe72: Stack[-1] = "ook6Laska1"
0xe73: Call2 0xd0a

0xe74: Pop(1)
0xe75: Push((int) 0)
0xe76: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe77: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe78: Stack[-2] = (bool) 1
0xe79: Return(); Pop(0)

0xe7a: Stack[-2] = (bool) 0
0xe7b: Return(); Pop(0)

0xe7c: PushEmpty(object, object)
0xe7d: Push((int) 776)
0xe7e: Push((int) 1)
0xe7f: Push((int) 541530)
0xe80: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe81: Pop(3)
0xe82: PushEmpty(bool, object, int)
0xe83: Stack[-2] = Stack[-4]
0xe84: Stack[-1] = (int) 318
0xe85: Call2 0xed7

0xe86: Pop(3)
0xe87: Return(); Pop(2)

0xe88: Stack[-1] = 0
0xe89: PushEmpty(object, object)
0xe8a: Push((int) 473)
0xe8b: Push((int) 2)
0xe8c: Push((int) 527789)
0xe8d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe8e: Pop(3)
0xe8f: PushEmpty(bool, object, int)
0xe90: Stack[-2] = Stack[-4]
0xe91: Stack[-1] = (int) 470
0xe92: Call2 0xed7

0xe93: Pop(3)
0xe94: Return(); Pop(2)

0xe95: Stack[-1] = 0
0xe96: PushEmpty(object, object)
0xe97: Push((int) 405)
0xe98: Push((int) 2)
0xe99: Push((int) 526023)
0xe9a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe9b: Pop(3)
0xe9c: PushEmpty(bool, object, int)
0xe9d: Stack[-2] = Stack[-4]
0xe9e: Stack[-1] = (int) -1
0xe9f: Call2 0xed7

0xea0: Pop(3)
0xea1: Return(); Pop(2)

0xea2: Stack[-1] = 0
0xea3: PushEmpty(object, object)
0xea4: Push((int) 406)
0xea5: Push((int) 2)
0xea6: Push((int) 526024)
0xea7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xea8: Pop(3)
0xea9: PushEmpty(bool, object, int)
0xeaa: Stack[-2] = Stack[-4]
0xeab: Stack[-1] = (int) 405
0xeac: Call2 0xed7

0xead: Pop(3)
0xeae: Return(); Pop(2)

0xeaf: Stack[-1] = 0
0xeb0: PushEmpty(object, object)
0xeb1: Push((int) 748)
0xeb2: Push((int) 2)
0xeb3: Push((int) 539627)
0xeb4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xeb5: Pop(3)
0xeb6: PushEmpty(bool, object, int)
0xeb7: Stack[-2] = Stack[-4]
0xeb8: Stack[-1] = (int) -1
0xeb9: Call2 0xed7

0xeba: Pop(3)
0xebb: Return(); Pop(2)

0xebc: Stack[-1] = 0
0xebd: PushEmpty(object, object)
0xebe: Push((int) 749)
0xebf: Push((int) 2)
0xec0: Push((int) 539628)
0xec1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xec2: Pop(3)
0xec3: PushEmpty(bool, object, int)
0xec4: Stack[-2] = Stack[-4]
0xec5: Stack[-1] = (int) 748
0xec6: Call2 0xed7

0xec7: Pop(3)
0xec8: Return(); Pop(2)

0xec9: Stack[-1] = 0
0xeca: PushEmpty(object, object)
0xecb: @ GetDiaryRoot(Stack[-1])
0xecc: Pop(0)
0xecd: Pop(0); Push((bool) Stack[-1] == 0)
0xece: IF (Stack[-1] == 0) GOTO 0xed4; Pop(1)

0xecf: Push("Can't retrieve diary root")
0xed0: @ Trace(Stack[-1])
0xed1: Pop(1)
0xed2: Stack[-3] = (bool) 0
0xed3: Return(); Pop(2)

0xed4: Stack[-3] = Stack[-1]
0xed5: Return(); Pop(2)

0xed6: Stack[-1] = 0
0xed7: PushEmpty(object, object, int, object, object, int)
0xed8: PushEmpty(object)
0xed9: Call2 0xeca

0xeda: Stack[-4] = Stack[-1]
0xedb: Pop(1)
0xedc: @@ Find(Stack[-7], Stack[-2])
0xedd: Pop(0)
0xede: Pop(0); Push((bool) Stack[-2] == 0)
0xedf: IF (Stack[-1] == 0) GOTO 0xee6; Pop(1)

0xee0: Push("Can't find diary parent with id: ")
0xee1: Pop(1); Push(Stack[-1] + Stack[-8]);
0xee2: @ Trace(Stack[-1])
0xee3: Pop(1)
0xee4: Stack[-9] = (bool) 0
0xee5: Return(); Pop(6)

0xee6: @@ AddChild(Stack[-8])
0xee7: Pop(0)
0xee8: Push((int) 7)
0xee9: @ SendWorldWndMessage(Stack[-1])
0xeea: Pop(1)
0xeeb: @@ GetCategory(Stack[-1])
0xeec: Pop(0)
0xeed: @ SetDiarySection(Stack[-1])
0xeee: Pop(0)
0xeef: Stack[-9] = (bool) 0
0xef0: Return(); Pop(6)

0xef1: Stack[-2] = 0
0xef2: Stack[-3] = 0
0xef3: PushEmpty(object, object, object, object)
0xef4: @ GetMainOutdoorScene(Stack[-2])
0xef5: Pop(0)
0xef6: Pop(0); Push((bool) Stack[-2] == 0)
0xef7: IF (Stack[-1] == 0) GOTO 0xefe; Pop(1)

0xef8: Push("Can't find main outdoor scene")
0xef9: @ Trace(Stack[-1])
0xefa: Pop(1)
0xefb: Stack[-1] = 0
0xefc: Stack[-5] = Stack[-1]
0xefd: Return(); Pop(4)

0xefe: @@ GetMap(Stack[-1])
0xeff: Pop(0)
0xf00: Stack[-5] = Stack[-1]
0xf01: Return(); Pop(4)

0xf02: Stack[-1] = 0
0xf03: Stack[-2] = 0
0xf04: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xf05: @ GetMainOutdoorScene(Stack[-2])
0xf06: Pop(0)
0xf07: Pop(0); Push((bool) Stack[-2] == 0)
0xf08: IF (Stack[-1] == 0) GOTO 0xf0d; Pop(1)

0xf09: Push("Can't find main outdoor scene")
0xf0a: @ Trace(Stack[-1])
0xf0b: Pop(1)
0xf0c: Return(); Pop(8)

0xf0d: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xf0e: Pop(0)
0xf0f: Pop(0); Push((bool) Stack[-1] == 0)
0xf10: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xf11: Push("Warning: outdoor scene locator ")
0xf12: Pop(1); Push(Stack[-1] + Stack[-11]);
0xf13: Push(" doesnt exist")
0xf14: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf15: @ Trace(Stack[-1])
0xf16: Pop(1)
0xf17: @@ GetMap(Stack[-11])
0xf18: Pop(0)
0xf19: Pop(0); Push((bool) Stack[-11] == 0)
0xf1a: IF (Stack[-1] == 0) GOTO 0xf1f; Pop(1)

0xf1b: Push("Can't find map")
0xf1c: @ Trace(Stack[-1])
0xf1d: Pop(1)
0xf1e: Return(); Pop(8)

0xf1f: Push(CvectorIndex(Stack[-4], 0))
0xf20: Push(CvectorIndex(Stack[-5], 2))
0xf21: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xf22: Pop(2)
0xf23: Return(); Pop(8)

0xf24: Stack[-2] = 0
0xf25: PushEmpty(int, int)
0xf26: Push("branch")
0xf27: @ GetVariable(Stack[-1], Stack[-2])
0xf28: Pop(1)
0xf29: Push((int) 0)
0xf2a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2b: IF (Stack[-1] == 0) GOTO 0xf2f; Pop(1)

0xf2c: Stack[-3] = (int) 1
0xf2d: Return(); Pop(2)

0xf2e: GOTO 0xf34

0xf2f: Push((int) 1)
0xf30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf31: IF (Stack[-1] == 0) GOTO 0xf34; Pop(1)

0xf32: Stack[-3] = (int) 2
0xf33: Return(); Pop(2)

0xf34: Stack[-3] = (int) 3
0xf35: Return(); Pop(2)

0xf36: PushEmpty(int, int)
0xf37: Push("mt_laska")
0xf38: @ GetVariable(Stack[-1], Stack[-2])
0xf39: Pop(1)
0xf3a: Pop(0); Push((bool) Stack[-1] == 0)
0xf3b: IF (Stack[-1] == 0) GOTO 0xf46; Pop(1)

0xf3c: PushEmpty(int, object)
0xf3d: Stack[-1] = Stack[-5]
0xf3e: Push(-2, 1); TaskCall(2)
0xf3f: Call2 0x28b

0xf40: Pop(-2, 1); TaskReturn
0xf41: Pop(2)
0xf42: Push("mt_laska")
0xf43: Push((int) 1)
0xf44: @ SetVariable(Stack[-2], Stack[-1])
0xf45: Pop(2)
0xf46: PushEmpty(bool, int)
0xf47: Stack[-1] = (int) 1
0xf48: Call2 0xd2f

0xf49: Pop(1)
0xf4a: IF (Stack[-1] == 0) GOTO 0xf52; Pop(1)

0xf4b: PushEmpty(int, object)
0xf4c: Stack[-1] = Stack[-5]
0xf4d: Push(-2, 1); TaskCall(10)
0xf4e: Call2 0x77b

0xf4f: Pop(-2, 1); TaskReturn
0xf50: Pop(2)
0xf51: Return(); Pop(2)

0xf52: PushEmpty(bool, int)
0xf53: Stack[-1] = (int) 2
0xf54: Call2 0xd2f

0xf55: Pop(1)
0xf56: IF (Stack[-1] == 0) GOTO 0xf5e; Pop(1)

0xf57: PushEmpty(int, object)
0xf58: Stack[-1] = Stack[-5]
0xf59: Push(-2, 1); TaskCall(0)
0xf5a: Call2 0x0

0xf5b: Pop(-2, 1); TaskReturn
0xf5c: Pop(2)
0xf5d: Return(); Pop(2)

0xf5e: PushEmpty(bool, int)
0xf5f: Stack[-1] = (int) 5
0xf60: Call2 0xd2f

0xf61: Pop(1)
0xf62: IF (Stack[-1] == 0) GOTO 0xf6a; Pop(1)

0xf63: PushEmpty(int, object)
0xf64: Stack[-1] = Stack[-5]
0xf65: Push(-2, 1); TaskCall(4)
0xf66: Call2 0x356

0xf67: Pop(-2, 1); TaskReturn
0xf68: Pop(2)
0xf69: Return(); Pop(2)

0xf6a: PushEmpty(bool, int)
0xf6b: Stack[-1] = (int) 6
0xf6c: Call2 0xd2f

0xf6d: Pop(1)
0xf6e: IF (Stack[-1] == 0) GOTO 0xf76; Pop(1)

0xf6f: PushEmpty(int, object)
0xf70: Stack[-1] = Stack[-5]
0xf71: Push(-2, 1); TaskCall(6)
0xf72: Call2 0x4e6

0xf73: Pop(-2, 1); TaskReturn
0xf74: Pop(2)
0xf75: Return(); Pop(2)

0xf76: PushEmpty(bool, int)
0xf77: Stack[-1] = (int) 12
0xf78: Call2 0xd2f

0xf79: Pop(1)
0xf7a: IF (Stack[-1] == 0) GOTO 0xf82; Pop(1)

0xf7b: PushEmpty(int, object)
0xf7c: Stack[-1] = Stack[-5]
0xf7d: Push(-2, 1); TaskCall(8)
0xf7e: Call2 0x678

0xf7f: Pop(-2, 1); TaskReturn
0xf80: Pop(2)
0xf81: Return(); Pop(2)

0xf82: PushEmpty(int, object)
0xf83: Stack[-1] = Stack[-5]
0xf84: Push(-2, 1); TaskCall(12)
0xf85: Call2 0x9fb

0xf86: Pop(-2, 1); TaskReturn
0xf87: Pop(2)
0xf88: Return(); Pop(2)

