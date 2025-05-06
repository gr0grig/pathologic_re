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
	cleanup
	restore
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	m
	Can't find lsh animation : 
	add
	money
	Money
	reputation
	ui/NPC_Bakalavr.png
	ui/NPC_Bakalavr_b.png
	playsound
	givemoney
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	klara2_npc_positioner
	remove_danko
	remove_burah
	k2system_klara_day
	k2system_burah_day
	k2system_danko_day
	k2system_burah_state
	k2system_danko_state
	k2system_klara_state

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetProperty (2 args)

RunOp = 0x2ee
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x194 Vars = (int, int)
	GTASK_4 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x2f6 Vars = (string)
		EVENT_6 Op = 0x30a Vars = ()
		EVENT_5 Op = 0x317 Vars = ()
		EVENT_7 Op = 0x360 Vars = (int)
		EVENT_45 Op = 0x3a2 Vars = (bool)
		EVENT_0 Op = 0x3ae Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x460

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x60c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x60a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x60e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x610

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6e3

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
0x31: Call2 0x576

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x4b7

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
0x48: Call2 0x4a5

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
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 539066)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 539067)
0x61: Push((int) -1)
0x62: Push((int) 41015)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 541074)
0x66: Push((int) -1)
0x67: Push((int) 43179)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x612

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x541

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x612

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x551

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x56f

0xa6: Pop(0)
0xa7: Push((int) 41014)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 539066)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 539067)
0xb4: Push((int) -1)
0xb5: Push((int) 41015)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 541074)
0xb9: Push((int) -1)
0xba: Push((int) 43179)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbf: PushEmpty(bool)
0xc0: Call2 0x612

0xc1: Pop(0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc3: @ lshStopAnimation()
0xc4: Pop(0)
0xc5: GOTO 0xc8

0xc6: @ StopAnimation()
0xc7: Pop(0)
0xc8: Return(); Pop(0)

0xc9: GOTO 0xa2

0xca: Return(); Pop(0)

0xcb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcd: PushEmpty(bool, object, float)
0xce: Stack[-2] = Stack[-12]
0xcf: Stack[-1] = (float) 70.0
0xd0: Call2 0x460

0xd1: Pop(2)
0xd2: Pop(1); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-10] = (int) -2
0xd5: Return(); Pop(8)

0xd6: @ CreateDialog(Stack[-4])
0xd7: Pop(0)
0xd8: PushEmpty(int)
0xd9: Call2 0x60c

0xda: Pop(0)
0xdb: @@ SetNPCName(Stack[-1])
0xdc: Pop(1)
0xdd: PushEmpty(int)
0xde: Call2 0x60a

0xdf: Pop(0)
0xe0: @@ SetNPCDescription(Stack[-1])
0xe1: Pop(1)
0xe2: PushEmpty(string)
0xe3: Call2 0x60e

0xe4: Pop(0)
0xe5: @@ SetPhoto(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(string)
0xe8: Call2 0x610

0xe9: Pop(0)
0xea: @@ SetPhoto2(Stack[-1])
0xeb: Pop(1)
0xec: PushEmpty(int)
0xed: Call2 0x6e3

0xee: Pop(0)
0xef: @@ SetPlayerName(Stack[-1])
0xf0: Pop(1)
0xf1: Stack[-2] = (int) -1
0xf2: @ IsOverrideActive(Stack[-3])
0xf3: Pop(0)
0xf4: Push(Stack[-3])
0xf5: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf6: Stack[-10] = (int) -2
0xf7: Return(); Pop(8)

0xf8: @ DoDialog(Stack[-4])
0xf9: Pop(0)
0xfa: PushEmpty(bool, object)
0xfb: PushEmpty(object)
0xfc: Call2 0x576

0xfd: Stack[-2] = Stack[-1]
0xfe: Pop(1)
0xff: Call2 0x4b7

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[-11]
0x103: Stack[-1] = Stack[-6]
0x104: Push(-2, 4); TaskCall(3)
0x105: Call2 0x11c

0x106: Pop(-2, 4); TaskReturn
0x107: Pop(2)
0x108: @@ IsDialogEnd(Stack[-1])
0x109: Pop(0)
0x10a: Pop(0); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: @ sync()
0x10d: Pop(0)
0x10e: @@ IsDialogEnd(Stack[-1])
0x10f: Pop(0)
0x110: GOTO 0x10a

0x111: PushEmpty(object)
0x112: Stack[-1] = Stack[-10]
0x113: Call2 0x4a5

0x114: Pop(1)
0x115: @ StopDialog(Stack[-4])
0x116: Pop(0)
0x117: @@ GetReturnValue(Stack[-2])
0x118: Pop(0)
0x119: Stack[-10] = Stack[-2]
0x11a: Return(); Pop(8)

0x11b: Stack[-4] = 0
0x11c: PushEmpty()
0x11d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x11e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x11f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x120: Push((int) 1)
0x121: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call2 0x17e

0x125: Pop(1)
0x126: Push((int) 539760)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: PushEmpty(bool, object)
0x12c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Call2 0x66d

0x12e: Pop(1)
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: Push((int) 539761)
0x131: Push((int) 41714)
0x132: Push((int) 41713)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: PushEmpty(bool, object)
0x136: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x137: Call2 0x66d

0x138: Pop(1)
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: Push((int) 539764)
0x13b: Push((int) 41717)
0x13c: Push((int) 41716)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x141: Call2 0x663

0x142: Pop(1)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: Push((int) 539767)
0x145: Push((int) 41720)
0x146: Push((int) 41719)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x677

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: Push((int) 539770)
0x14f: Push((int) 41723)
0x150: Push((int) 41722)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Push((int) 539773)
0x154: Push((int) -1)
0x155: Push((int) 41725)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Push((int) 541091)
0x159: Push((int) -1)
0x15a: Push((int) 43200)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: GOTO 0x160

0x15e: Return(); Pop(0)

0x15f: GOTO 0x120

0x160: PushEmpty(bool)
0x161: Call2 0x612

0x162: Pop(0)
0x163: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x164: @ lshWaitForAnimEnd()
0x165: Pop(0)
0x166: Push( Stack[3 + Tasks[-1].StackPointer] )
0x167: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x168: GOTO 0x16e

0x169: PushEmpty(string)
0x16a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x16b: Call2 0x541

0x16c: Pop(1)
0x16d: GOTO 0x164

0x16e: GOTO 0x17d

0x16f: Push("all")
0x170: Push("idle")
0x171: @ PlayAnimation(Stack[-2], Stack[-1])
0x172: Pop(2)
0x173: @ WaitForAnimEnd()
0x174: Pop(0)
0x175: Push( Stack[3 + Tasks[-1].StackPointer] )
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: GOTO 0x17d

0x178: Push("all")
0x179: Push("idle")
0x17a: @ PlayAnimation(Stack[-2], Stack[-1])
0x17b: Pop(2)
0x17c: GOTO 0x173

0x17d: Return(); Pop(0)

0x17e: PushEmpty()
0x17f: PushEmpty(bool)
0x180: Call2 0x612

0x181: Pop(0)
0x182: Pop(1); Push((bool) Stack[-1] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: Return(); Pop(0)

0x185: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: Return(); Pop(0)

0x188: PushEmpty(string, bool)
0x189: Stack[-2] = Stack[-3]
0x18a: Push("")
0x18b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18d: Stack[-1] = (bool) 0
0x18e: GOTO 0x190

0x18f: Stack[-1] = (bool) 1
0x190: Call2 0x551

0x191: Pop(2)
0x192: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x193: Return(); Pop(0)

0x194: PushEmpty()
0x195: Push((int) 1)
0x196: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x197: PushEmpty()
0x198: Call2 0x56f

0x199: Pop(0)
0x19a: Push((int) 41715)
0x19b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x19d: PushEmpty(object, object)
0x19e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a0: Call2 0x628

0x1a1: Pop(2)
0x1a2: PushEmpty(object, object)
0x1a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a5: Call2 0x641

0x1a6: Pop(2)
0x1a7: PushEmpty(object, object)
0x1a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1aa: Call2 0x614

0x1ab: Pop(2)
0x1ac: Push((int) 41718)
0x1ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1af: PushEmpty(object, object)
0x1b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b2: Call2 0x62d

0x1b3: Pop(2)
0x1b4: Push((int) 41721)
0x1b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1b7: PushEmpty(object, object)
0x1b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Call2 0x632

0x1bb: Pop(2)
0x1bc: PushEmpty(object, object)
0x1bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bf: Call2 0x63c

0x1c0: Pop(2)
0x1c1: PushEmpty(object, object)
0x1c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c4: Call2 0x641

0x1c5: Pop(2)
0x1c6: PushEmpty(object, object)
0x1c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c9: Call2 0x61b

0x1ca: Pop(2)
0x1cb: PushEmpty(object, object)
0x1cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ce: Call2 0x646

0x1cf: Pop(2)
0x1d0: PushEmpty(object, object)
0x1d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d3: Call2 0x622

0x1d4: Pop(2)
0x1d5: Push((int) 41724)
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1d8: PushEmpty(object, object)
0x1d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1db: Call2 0x637

0x1dc: Pop(2)
0x1dd: PushEmpty(object, object)
0x1de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0x651

0x1e1: Pop(2)
0x1e2: PushEmpty(object, object)
0x1e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Call2 0x622

0x1e6: Pop(2)
0x1e7: PushEmpty(object, object)
0x1e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ea: Call2 0x65c

0x1eb: Pop(2)
0x1ec: Push((int) 41712)
0x1ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x1ef: PushEmpty(string)
0x1f0: Stack[-1] = "Neutral"
0x1f1: Call2 0x17e

0x1f2: Pop(1)
0x1f3: Push((int) 539760)
0x1f4: @@ SetMessage(Stack[-1])
0x1f5: Pop(1)
0x1f6: @@ ClearReplies()
0x1f7: Pop(0)
0x1f8: PushEmpty(bool, object)
0x1f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fa: Call2 0x66d

0x1fb: Pop(1)
0x1fc: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fd: Push((int) 539761)
0x1fe: Push((int) 41714)
0x1ff: Push((int) 41713)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: PushEmpty(bool, object)
0x203: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x204: Call2 0x66d

0x205: Pop(1)
0x206: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x207: Push((int) 539764)
0x208: Push((int) 41717)
0x209: Push((int) 41716)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: PushEmpty(bool, object)
0x20d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20e: Call2 0x663

0x20f: Pop(1)
0x210: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x211: Push((int) 539767)
0x212: Push((int) 41720)
0x213: Push((int) 41719)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: PushEmpty(bool, object)
0x217: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x218: Call2 0x677

0x219: Pop(1)
0x21a: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21b: Push((int) 539770)
0x21c: Push((int) 41723)
0x21d: Push((int) 41722)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Push((int) 539773)
0x221: Push((int) -1)
0x222: Push((int) 41725)
0x223: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: Push((int) 541091)
0x226: Push((int) -1)
0x227: Push((int) 43200)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: Push((int) 41723)
0x22c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x22e: PushEmpty(string)
0x22f: Stack[-1] = "Neutral"
0x230: Call2 0x17e

0x231: Pop(1)
0x232: Push((int) 539771)
0x233: @@ SetMessage(Stack[-1])
0x234: Pop(1)
0x235: @@ ClearReplies()
0x236: Pop(0)
0x237: Push((int) 541092)
0x238: Push((int) 43203)
0x239: Push((int) 43201)
0x23a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23b: Pop(3)
0x23c: Push((int) 541093)
0x23d: Push((int) 43203)
0x23e: Push((int) 43202)
0x23f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: Return(); Pop(0)

0x242: Push((int) 43203)
0x243: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral"
0x247: Call2 0x17e

0x248: Pop(1)
0x249: Push((int) 541094)
0x24a: @@ SetMessage(Stack[-1])
0x24b: Pop(1)
0x24c: @@ ClearReplies()
0x24d: Pop(0)
0x24e: Push((int) 539772)
0x24f: Push((int) -1)
0x250: Push((int) 41724)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Push((int) 41720)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x257: PushEmpty(string)
0x258: Stack[-1] = "Neutral"
0x259: Call2 0x17e

0x25a: Pop(1)
0x25b: Push((int) 539768)
0x25c: @@ SetMessage(Stack[-1])
0x25d: Pop(1)
0x25e: @@ ClearReplies()
0x25f: Pop(0)
0x260: Push((int) 541095)
0x261: Push((int) 43207)
0x262: Push((int) 43205)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: Push((int) 541096)
0x266: Push((int) 43207)
0x267: Push((int) 43206)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Return(); Pop(0)

0x26b: Push((int) 43207)
0x26c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x26e: PushEmpty(string)
0x26f: Stack[-1] = "Neutral"
0x270: Call2 0x17e

0x271: Pop(1)
0x272: Push((int) 541097)
0x273: @@ SetMessage(Stack[-1])
0x274: Pop(1)
0x275: @@ ClearReplies()
0x276: Pop(0)
0x277: Push((int) 541098)
0x278: Push((int) 43211)
0x279: Push((int) 43209)
0x27a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(3)
0x27c: Push((int) 541099)
0x27d: Push((int) 43211)
0x27e: Push((int) 43210)
0x27f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x280: Pop(3)
0x281: Return(); Pop(0)

0x282: Push((int) 43211)
0x283: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x285: PushEmpty(string)
0x286: Stack[-1] = "Neutral"
0x287: Call2 0x17e

0x288: Pop(1)
0x289: Push((int) 541100)
0x28a: @@ SetMessage(Stack[-1])
0x28b: Pop(1)
0x28c: @@ ClearReplies()
0x28d: Pop(0)
0x28e: Push((int) 539769)
0x28f: Push((int) -1)
0x290: Push((int) 41721)
0x291: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(3)
0x293: Return(); Pop(0)

0x294: Push((int) 41717)
0x295: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x297: PushEmpty(string)
0x298: Stack[-1] = "Neutral"
0x299: Call2 0x17e

0x29a: Pop(1)
0x29b: Push((int) 539765)
0x29c: @@ SetMessage(Stack[-1])
0x29d: Pop(1)
0x29e: @@ ClearReplies()
0x29f: Pop(0)
0x2a0: Push((int) 541101)
0x2a1: Push((int) 43215)
0x2a2: Push((int) 43213)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Push((int) 541102)
0x2a6: Push((int) 43216)
0x2a7: Push((int) 43214)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: Return(); Pop(0)

0x2ab: Push((int) 43216)
0x2ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ae: PushEmpty(string)
0x2af: Stack[-1] = "Neutral"
0x2b0: Call2 0x17e

0x2b1: Pop(1)
0x2b2: Push((int) 541104)
0x2b3: @@ SetMessage(Stack[-1])
0x2b4: Pop(1)
0x2b5: @@ ClearReplies()
0x2b6: Pop(0)
0x2b7: Push((int) 541105)
0x2b8: Push((int) 43215)
0x2b9: Push((int) 43217)
0x2ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bb: Pop(3)
0x2bc: Return(); Pop(0)

0x2bd: Push((int) 43215)
0x2be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2c0: PushEmpty(string)
0x2c1: Stack[-1] = "Neutral"
0x2c2: Call2 0x17e

0x2c3: Pop(1)
0x2c4: Push((int) 541103)
0x2c5: @@ SetMessage(Stack[-1])
0x2c6: Pop(1)
0x2c7: @@ ClearReplies()
0x2c8: Pop(0)
0x2c9: Push((int) 539766)
0x2ca: Push((int) -1)
0x2cb: Push((int) 41718)
0x2cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cd: Pop(3)
0x2ce: Return(); Pop(0)

0x2cf: Push((int) 41714)
0x2d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2d2: PushEmpty(string)
0x2d3: Stack[-1] = "Neutral"
0x2d4: Call2 0x17e

0x2d5: Pop(1)
0x2d6: Push((int) 539762)
0x2d7: @@ SetMessage(Stack[-1])
0x2d8: Pop(1)
0x2d9: @@ ClearReplies()
0x2da: Pop(0)
0x2db: Push((int) 539763)
0x2dc: Push((int) -1)
0x2dd: Push((int) 41715)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Return(); Pop(0)

0x2e1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2e2: PushEmpty(bool)
0x2e3: Call2 0x612

0x2e4: Pop(0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e6: @ lshStopAnimation()
0x2e7: Pop(0)
0x2e8: GOTO 0x2eb

0x2e9: @ StopAnimation()
0x2ea: Pop(0)
0x2eb: Return(); Pop(0)

0x2ec: GOTO 0x195

0x2ed: Return(); Pop(0)

0x2ee: PushEmpty()
0x2ef: Call2 0x2f2

0x2f0: Pop(0)
0x2f1: Return(); Pop(0)

0x2f2: PushEmpty()
0x2f3: Call2 0x31b

0x2f4: Pop(0)
0x2f5: Return(); Pop(0)

0x2f6: PushEmpty(bool, bool)
0x2f7: Push("cleanup")
0x2f8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2fa: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x2fb: @ IsLoaded(Stack[-1])
0x2fc: Pop(0)
0x2fd: Pop(0); Push((bool) Stack[-1] == 0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2ff: PushEmpty(object)
0x300: Call2 0x576

0x301: Pop(0)
0x302: @ RemoveActor(Stack[-1])
0x303: Pop(1)
0x304: GOTO 0x309

0x305: Push("restore")
0x306: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x309: Return(); Pop(2)

0x30a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x30b: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x30c: PushEmpty(object)
0x30d: Call2 0x576

0x30e: Pop(0)
0x30f: @ RemoveActor(Stack[-1])
0x310: Pop(1)
0x311: @ Hold()
0x312: Pop(0)
0x313: PushEmpty()
0x314: Call2 0x386

0x315: Pop(0)
0x316: Return(); Pop(0)

0x317: PushEmpty()
0x318: Call2 0x395

0x319: Pop(0)
0x31a: Return(); Pop(0)

0x31b: PushEmpty(bool)
0x31c: Call2 0x45b

0x31d: Pop(0)
0x31e: Pop(1); Push((bool) Stack[-1] == 0)
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: @ Hold()
0x321: Pop(0)
0x322: @ GetDirection(Stack[-0])
0x323: Pop(0)
0x324: PushEmpty()
0x325: Call2 0x3cb

0x326: Pop(0)
0x327: GOTO 0x324

0x328: Return(); Pop(0)

0x329: PushEmpty(object, object)
0x32a: Push("player")
0x32b: @ FindActor(Stack[-2], Stack[-1])
0x32c: Pop(1)
0x32d: Pop(0); Push((bool) Stack[-1] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-3] = (bool) 0
0x330: Return(); Pop(2)

0x331: PushEmpty(bool, object)
0x332: Stack[-1] = Stack[-3]
0x333: Call2 0x452

0x334: Stack[-5] = Stack[-2]
0x335: Pop(2)
0x336: Return(); Pop(2)

0x337: Stack[-1] = 0
0x338: Push(CvectorIndex(Stack[-0], 0))
0x339: Push(CvectorIndex(Stack[-0], 2))
0x33a: @ RotateAsync(Stack[-2], Stack[-1])
0x33b: Pop(2)
0x33c: Return(); Pop(0)

0x33d: PushEmpty(object, bool, object, bool)
0x33e: Push("player")
0x33f: @ FindActor(Stack[-3], Stack[-1])
0x340: Pop(1)
0x341: Pop(0); Push((bool) Stack[-2] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-5] = (bool) 0
0x344: Return(); Pop(4)

0x345: PushEmpty(float, object)
0x346: Stack[-1] = Stack[-4]
0x347: Call2 0x417

0x348: Pop(1)
0x349: Push((float)90000.0)
0x34a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-5] = (bool) 0
0x34d: Return(); Pop(4)

0x34e: @ CanSee(Stack[-1], Stack[-2])
0x34f: Pop(0)
0x350: Stack[-5] = Stack[-1]
0x351: Return(); Pop(4)

0x352: Stack[-2] = 0
0x353: PushEmpty(float, float)
0x354: Push((int) 8)
0x355: Push((int) 16)
0x356: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: Push((int) 10)
0x359: @ SetTimer(Stack[-1], Stack[-2])
0x35a: Pop(1)
0x35b: Return(); Pop(2)

0x35c: Push((int) 10)
0x35d: @ KillTimer(Stack[-1])
0x35e: Pop(1)
0x35f: Return(); Pop(0)

0x360: PushEmpty()
0x361: Push((int) 10)
0x362: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x364: PushEmpty()
0x365: Call2 0x35c

0x366: Pop(0)
0x367: PushEmpty(bool)
0x368: Stack[-1] = (bool) 0
0x369: PushEmpty(bool)
0x36a: Call2 0x45b

0x36b: Pop(0)
0x36c: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36d: PushEmpty(bool)
0x36e: Call2 0x33d

0x36f: Pop(0)
0x370: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x371: Stack[-1] = (bool) 1
0x372: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x373: PushEmpty(bool)
0x374: Call2 0x329

0x375: Pop(0)
0x376: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x377: PushEmpty(bool, object)
0x378: PushEmpty(object)
0x379: Call2 0x576

0x37a: Stack[-2] = Stack[-1]
0x37b: Pop(1)
0x37c: Call2 0x4f1

0x37d: Pop(2)
0x37e: GOTO 0x385

0x37f: PushEmpty()
0x380: Call2 0x338

0x381: Pop(0)
0x382: PushEmpty()
0x383: Call2 0x353

0x384: Pop(0)
0x385: Return(); Pop(0)

0x386: PushEmpty()
0x387: Call2 0x412

0x388: Pop(0)
0x389: PushEmpty()
0x38a: Call2 0x35c

0x38b: Pop(0)
0x38c: @ lshStopSpeech()
0x38d: Pop(0)
0x38e: @ lshStopAnimation()
0x38f: Pop(0)
0x390: @ StopAsync()
0x391: Pop(0)
0x392: @ Hold()
0x393: Pop(0)
0x394: Return(); Pop(0)

0x395: @ StopGroup0()
0x396: Pop(0)
0x397: PushEmpty()
0x398: Call2 0x35c

0x399: Pop(0)
0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Neutral"
0x39c: Call2 0x541

0x39d: Pop(1)
0x39e: PushEmpty()
0x39f: Call2 0x353

0x3a0: Pop(0)
0x3a1: Return(); Pop(0)

0x3a2: PushEmpty()
0x3a3: Push(Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a5: PushEmpty()
0x3a6: Call2 0x353

0x3a7: Pop(0)
0x3a8: GOTO 0x3ad

0x3a9: PushEmpty(string)
0x3aa: Stack[-1] = "Neutral"
0x3ab: Call2 0x541

0x3ac: Pop(1)
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty(bool, bool)
0x3af: @ IsOverrideActive(Stack[-1])
0x3b0: Pop(0)
0x3b1: Pop(0); Push((bool) Stack[-1] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3b3: EventDisable(0)
0x3b4: PushEmpty()
0x3b5: Call2 0x412

0x3b6: Pop(0)
0x3b7: PushEmpty(bool, object)
0x3b8: Stack[-1] = Stack[-5]
0x3b9: Call2 0x452

0x3ba: Pop(2)
0x3bb: EventEnable(0)
0x3bc: PushEmpty(object)
0x3bd: Stack[-1] = Stack[-4]
0x3be: Call2 0x780

0x3bf: Pop(1)
0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Neutral"
0x3c2: Call2 0x541

0x3c3: Pop(1)
0x3c4: PushEmpty()
0x3c5: Call2 0x35c

0x3c6: Pop(0)
0x3c7: PushEmpty()
0x3c8: Call2 0x353

0x3c9: Pop(0)
0x3ca: Return(); Pop(2)

0x3cb: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x3cc: @ WaitForAnimEnd()
0x3cd: Pop(0)
0x3ce: PushEmpty(bool)
0x3cf: Call2 0x45b

0x3d0: Pop(0)
0x3d1: Pop(1); Push((bool) Stack[-1] == 0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: Return(); Pop(12)

0x3d4: PushEmpty(int)
0x3d5: Call2 0x5f9

0x3d6: Stack[-7] = Stack[-1]
0x3d7: Pop(1)
0x3d8: Stack[-5] = (int) 0
0x3d9: PushEmpty(bool)
0x3da: Stack[-1] = (bool) 0
0x3db: Push((int) 5)
0x3dc: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3de: PushEmpty(bool)
0x3df: Call2 0x45b

0x3e0: Pop(0)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: Stack[-1] = (bool) 1
0x3e3: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3e4: Pop(0); Push((bool) Stack[-6] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e6: Push((int) 3)
0x3e7: @ Sleep(Stack[-1], Stack[-5])
0x3e8: Pop(1)
0x3e9: Pop(0); Push((bool) Stack[-4] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3eb: GOTO 0x40d

0x3ec: GOTO 0x402

0x3ed: @ irand(Stack[-3], Stack[-6])
0x3ee: Pop(0)
0x3ef: Push((int) 5)
0x3f0: @ irand(Stack[-3], Stack[-1])
0x3f1: Pop(1)
0x3f2: Push((int) 0)
0x3f3: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: Stack[-3] = (int) 0
0x3f6: Push("all")
0x3f7: PushEmpty(string, int)
0x3f8: Stack[-1] = Stack[-6]
0x3f9: Call2 0x5f2

0x3fa: Pop(1)
0x3fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x3fc: Pop(2)
0x3fd: @ WaitForAnimEnd(Stack[-1])
0x3fe: Pop(0)
0x3ff: Pop(0); Push((bool) Stack[-1] == 0)
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: GOTO 0x40d

0x402: PushEmpty(bool)
0x403: Call2 0x410

0x404: Pop(0)
0x405: Pop(1); Push((bool) Stack[-1] == 0)
0x406: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x407: GOTO 0x40d

0x408: @ ResetAAS()
0x409: Pop(0)
0x40a: Push((int) 1)
0x40b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x40c: GOTO 0x3d9

0x40d: @ ResetAAS()
0x40e: Pop(0)
0x40f: Return(); Pop(12)

0x410: Stack[-1] = (bool) 1
0x411: Return(); Pop(0)

0x412: @ StopAnimation()
0x413: Pop(0)
0x414: @ StopGroup0()
0x415: Pop(0)
0x416: Return(); Pop(0)

0x417: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x418: @ GetPosition(Stack[-3])
0x419: Pop(0)
0x41a: @@ GetPosition(Stack[-2])
0x41b: Pop(0)
0x41c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x41d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x41e: Return(); Pop(6)

0x41f: PushEmpty(bool, bool)
0x420: Push("HasProperty")
0x421: Push((int) 2)
0x422: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x423: Pop(1); Push((bool) Stack[-1] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: Stack[-5] = (bool) 0
0x426: Return(); Pop(2)

0x427: @@ HasProperty(Stack[-3], Stack[-1])
0x428: Pop(0)
0x429: Stack[-5] = Stack[-1]
0x42a: Return(); Pop(2)

0x42b: PushEmpty(float, float)
0x42c: PushEmpty(bool, object, string)
0x42d: Stack[-2] = Stack[-10]
0x42e: Stack[-1] = Stack[-9]
0x42f: Call2 0x41f

0x430: Pop(2)
0x431: Pop(1); Push((bool) Stack[-1] == 0)
0x432: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x433: Stack[-8] = (bool) 0
0x434: Return(); Pop(2)

0x435: @@ GetProperty(Stack[-6], Stack[-1])
0x436: Pop(0)
0x437: PushEmpty(float, float, float, float)
0x438: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x439: Stack[-2] = Stack[-8]
0x43a: Stack[-1] = Stack[-7]
0x43b: Call2 0x586

0x43c: Pop(3)
0x43d: @@ SetProperty(Stack[-7], Stack[-1])
0x43e: Pop(1)
0x43f: Stack[-8] = (bool) 1
0x440: Return(); Pop(2)

0x441: PushEmpty(int, int)
0x442: @@ GetProperty(Stack[-4], Stack[-1])
0x443: Pop(0)
0x444: Pop(0); Push(Stack[-1] + Stack[-3]);
0x445: @@ SetProperty(Stack[-5], Stack[-1])
0x446: Pop(1)
0x447: Return(); Pop(2)

0x448: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x449: @ GetPosition(Stack[-3])
0x44a: Pop(0)
0x44b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x44c: Push(CvectorIndex(Stack[-2], 0))
0x44d: Push(CvectorIndex(Stack[-3], 2))
0x44e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x44f: Pop(2)
0x450: Stack[-8] = Stack[-1]
0x451: Return(); Pop(6)

0x452: PushEmpty(cvector, cvector)
0x453: @@ GetPosition(Stack[-1])
0x454: Pop(0)
0x455: PushEmpty(bool, cvector)
0x456: Stack[-1] = Stack[-3]
0x457: Call2 0x448

0x458: Stack[-6] = Stack[-2]
0x459: Pop(2)
0x45a: Return(); Pop(2)

0x45b: PushEmpty(bool, bool)
0x45c: @ IsLoaded(Stack[-1])
0x45d: Pop(0)
0x45e: Stack[-3] = Stack[-1]
0x45f: Return(); Pop(2)

0x460: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x461: @@ GetPosition(Stack[-8])
0x462: Pop(0)
0x463: @@ GetEyesHeight(Stack[-9])
0x464: Pop(0)
0x465: Push(CvectorIndex(Stack[-8], 1))
0x466: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x467: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x468: @ GetPosition(Stack[-7])
0x469: Pop(0)
0x46a: @ GetEyesHeight(Stack[-9])
0x46b: Pop(0)
0x46c: Push(CvectorIndex(Stack[-7], 1))
0x46d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x46e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x46f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x470: Push(CvectorIndex(Stack[-6], 1))
0x471: Stack[-1] = (int) 0
0x472: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x473: Pop(0); Push(Stack[-6] | Stack[-6]);
0x474: Pop(1); Push(Sqrt(Stack[-1]))
0x475: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x476: Stack[-5] = -Stack[-6]; Pop(0);
0x477: Pop(0); Push(Stack[-6] * Stack[-19]);
0x478: PushEmpty(cvector, cvector)
0x479: Push(CVector(0.0, 1.0, 0.0))
0x47a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x47b: Call2 0x57c

0x47c: Pop(1)
0x47d: Push((int) 25)
0x47e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x47f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x480: Push(CVector(0.0, 10.0, 0.0))
0x481: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x482: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x483: @ IsOverrideActive(Stack[-2])
0x484: Pop(0)
0x485: Push(Stack[-2])
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-21] = (bool) 0
0x488: Return(); Pop(18)

0x489: @ StopWorld()
0x48a: Pop(0)
0x48b: Push((bool) 1)
0x48c: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x48d: Pop(1)
0x48e: Push(CvectorIndex(Stack[-4], 0))
0x48f: Push(CvectorIndex(Stack[-5], 2))
0x490: @ Rotate(Stack[-2], Stack[-1])
0x491: Pop(2)
0x492: PushEmpty(bool)
0x493: Call2 0x612

0x494: Pop(0)
0x495: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x496: GOTO 0x49f

0x497: Push("head")
0x498: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x499: Pop(1)
0x49a: Push(Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49c: Push("head")
0x49d: @ LookAsyncCamera(Stack[-1])
0x49e: Pop(1)
0x49f: @ CameraWaitForPlayFinish()
0x4a0: Pop(0)
0x4a1: @ ResumeWorld()
0x4a2: Pop(0)
0x4a3: Stack[-21] = (bool) 1
0x4a4: Return(); Pop(18)

0x4a5: PushEmpty(bool, bool)
0x4a6: Push((bool) 1)
0x4a7: @ CameraSwitchToNormal(Stack[-1])
0x4a8: Pop(1)
0x4a9: PushEmpty(bool)
0x4aa: Call2 0x612

0x4ab: Pop(0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ad: GOTO 0x4b6

0x4ae: Push("head")
0x4af: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4b0: Pop(1)
0x4b1: Push(Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b3: Push("head")
0x4b4: @ UnlookAsync(Stack[-1])
0x4b5: Pop(1)
0x4b6: Return(); Pop(2)

0x4b7: PushEmpty(int, int, int, int)
0x4b8: Push("voice_common")
0x4b9: @ GetVariable(Stack[-1], Stack[-3])
0x4ba: Pop(1)
0x4bb: Push(Stack[-2])
0x4bc: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4bd: PushEmpty(bool, object)
0x4be: Stack[-1] = Stack[-7]
0x4bf: Call2 0x4f1

0x4c0: Pop(1)
0x4c1: Pop(1); Push((bool) Stack[-1] == 0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c3: PushEmpty(bool, object)
0x4c4: Stack[-1] = Stack[-7]
0x4c5: Call2 0x516

0x4c6: Pop(1)
0x4c7: Pop(1); Push((bool) Stack[-1] == 0)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c9: Stack[-6] = (bool) 0
0x4ca: Return(); Pop(4)

0x4cb: Push((int) 2)
0x4cc: @ irand(Stack[-2], Stack[-1])
0x4cd: Pop(1)
0x4ce: Push(Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d0: Push("voice_common")
0x4d1: Push((int) 1)
0x4d2: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4d3: Push((int) 3)
0x4d4: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4d5: @ SetVariable(Stack[-2], Stack[-1])
0x4d6: Pop(2)
0x4d7: GOTO 0x4dc

0x4d8: Push("voice_common")
0x4d9: Push((int) 0)
0x4da: @ SetVariable(Stack[-2], Stack[-1])
0x4db: Pop(2)
0x4dc: GOTO 0x4ef

0x4dd: PushEmpty(bool, object)
0x4de: Stack[-1] = Stack[-7]
0x4df: Call2 0x516

0x4e0: Pop(1)
0x4e1: Pop(1); Push((bool) Stack[-1] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e3: PushEmpty(bool, object)
0x4e4: Stack[-1] = Stack[-7]
0x4e5: Call2 0x4f1

0x4e6: Pop(1)
0x4e7: Pop(1); Push((bool) Stack[-1] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e9: Stack[-6] = (bool) 0
0x4ea: Return(); Pop(4)

0x4eb: Push("voice_common")
0x4ec: Push((int) 1)
0x4ed: @ SetVariable(Stack[-2], Stack[-1])
0x4ee: Pop(2)
0x4ef: Stack[-6] = (bool) 1
0x4f0: Return(); Pop(4)

0x4f1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4f2: Stack[-5] = "c"
0x4f3: Stack[-4] = (int) 0
0x4f4: Push((int) 1)
0x4f5: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4f6: Push((int) 1)
0x4f7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4f8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4f9: @@ HasProperty(Stack[-1], Stack[-4])
0x4fa: Pop(1)
0x4fb: Pop(0); Push((bool) Stack[-3] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fd: GOTO 0x501

0x4fe: Push((int) 1)
0x4ff: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x500: GOTO 0x4f4

0x501: Pop(0); Push((bool) Stack[-4] == 0)
0x502: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x503: Stack[-12] = (bool) 0
0x504: Return(); Pop(10)

0x505: Stack[-2] = (int) 0
0x506: Push((int) 1)
0x507: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x509: @ irand(Stack[-2], Stack[-4])
0x50a: Pop(0)
0x50b: Push((int) 1)
0x50c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x50d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x50e: @@ GetProperty(Stack[-1], Stack[-2])
0x50f: Pop(1)
0x510: PushEmpty(bool, string)
0x511: Stack[-1] = Stack[-3]
0x512: Call2 0x560

0x513: Stack[-14] = Stack[-2]
0x514: Pop(2)
0x515: Return(); Pop(10)

0x516: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x517: Push("d")
0x518: PushEmpty(int)
0x519: Call2 0x5e9

0x51a: Pop(0)
0x51b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x51c: Push("m")
0x51d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x51e: Stack[-4] = (int) 0
0x51f: Push((int) 1)
0x520: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x521: Push((int) 1)
0x522: Pop(1); Push(Stack[-5] + Stack[-1]);
0x523: Pop(1); Push(Stack[-6] + Stack[-1]);
0x524: @@ HasProperty(Stack[-1], Stack[-4])
0x525: Pop(1)
0x526: Pop(0); Push((bool) Stack[-3] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x528: GOTO 0x52c

0x529: Push((int) 1)
0x52a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x52b: GOTO 0x51f

0x52c: Pop(0); Push((bool) Stack[-4] == 0)
0x52d: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52e: Stack[-12] = (bool) 0
0x52f: Return(); Pop(10)

0x530: Stack[-2] = (int) 0
0x531: Push((int) 1)
0x532: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x533: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x534: @ irand(Stack[-2], Stack[-4])
0x535: Pop(0)
0x536: Push((int) 1)
0x537: Pop(1); Push(Stack[-3] + Stack[-1]);
0x538: Pop(1); Push(Stack[-6] + Stack[-1]);
0x539: @@ GetProperty(Stack[-1], Stack[-2])
0x53a: Pop(1)
0x53b: PushEmpty(bool, string)
0x53c: Stack[-1] = Stack[-3]
0x53d: Call2 0x560

0x53e: Stack[-14] = Stack[-2]
0x53f: Pop(2)
0x540: Return(); Pop(10)

0x541: PushEmpty(bool, float, float, bool, float, float)
0x542: @ lshHasAnimation(Stack[-3], Stack[-7])
0x543: Pop(0)
0x544: Push(Stack[-3])
0x545: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x546: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x547: Pop(0)
0x548: Push((bool) 0)
0x549: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x54a: Pop(1)
0x54b: GOTO 0x550

0x54c: Push("Can't find lsh animation : ")
0x54d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x54e: @ Trace(Stack[-1])
0x54f: Pop(1)
0x550: Return(); Pop(6)

0x551: PushEmpty(bool, float, float, bool, float, float)
0x552: @ lshHasAnimation(Stack[-3], Stack[-8])
0x553: Pop(0)
0x554: Push(Stack[-3])
0x555: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x556: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x557: Pop(0)
0x558: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x559: Pop(0)
0x55a: GOTO 0x55f

0x55b: Push("Can't find lsh animation : ")
0x55c: Pop(1); Push(Stack[-1] + Stack[-9]);
0x55d: @ Trace(Stack[-1])
0x55e: Pop(1)
0x55f: Return(); Pop(6)

0x560: PushEmpty(bool, bool)
0x561: PushEmpty(bool)
0x562: Call2 0x612

0x563: Pop(0)
0x564: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x565: @ lshHasSpeech(Stack[-1], Stack[-3])
0x566: Pop(0)
0x567: Push(Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x569: @ lshPlaySpeech(Stack[-3])
0x56a: Pop(0)
0x56b: Stack[-4] = (bool) 1
0x56c: Return(); Pop(2)

0x56d: Stack[-4] = (bool) 0
0x56e: Return(); Pop(2)

0x56f: PushEmpty(bool)
0x570: Call2 0x612

0x571: Pop(0)
0x572: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x573: @ lshStopSpeech()
0x574: Pop(0)
0x575: Return(); Pop(0)

0x576: PushEmpty(object, object)
0x577: @ self(Stack[-1])
0x578: Pop(0)
0x579: Stack[-3] = Stack[-1]
0x57a: Return(); Pop(2)

0x57b: Stack[-1] = 0
0x57c: PushEmpty(float, float)
0x57d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x57e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x57f: Push((float)0.0)
0x580: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x581: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x582: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x583: Return(); Pop(2)

0x584: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x585: Return(); Pop(2)

0x586: PushEmpty()
0x587: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x588: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x589: Stack[-4] = Stack[-2]
0x58a: Return(); Pop(0)

0x58b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58d: Stack[-4] = Stack[-1]
0x58e: Return(); Pop(0)

0x58f: Stack[-4] = Stack[-3]
0x590: Return(); Pop(0)

0x591: PushEmpty(object, object)
0x592: @ CreateIntVector(Stack[-1])
0x593: Pop(0)
0x594: @@ add(Stack[-4])
0x595: Pop(0)
0x596: @@ add(Stack[-3])
0x597: Pop(0)
0x598: Push((int) 3)
0x599: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x59a: Pop(1)
0x59b: Return(); Pop(2)

0x59c: Stack[-1] = 0
0x59d: PushEmpty(int, int)
0x59e: PushEmpty(object, string, int)
0x59f: Stack[-3] = Stack[-7]
0x5a0: Stack[-2] = "money"
0x5a1: Stack[-1] = Stack[-6]
0x5a2: Call2 0x441

0x5a3: Pop(3)
0x5a4: Push((int) 0)
0x5a5: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5a7: Push("Money")
0x5a8: @ GetInvItemByName(Stack[-2], Stack[-1])
0x5a9: Pop(1)
0x5aa: PushEmpty(int, int)
0x5ab: Stack[-2] = Stack[-3]
0x5ac: Stack[-1] = Stack[-5]
0x5ad: Call2 0x591

0x5ae: Pop(2)
0x5af: Return(); Pop(2)

0x5b0: PushEmpty()
0x5b1: Pop(0); Push((bool) Stack[-2] == 0)
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b3: Stack[-3] = (bool) 0
0x5b4: Return(); Pop(0)

0x5b5: Push((int) 0)
0x5b6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5b8: Push((int) 8)
0x5b9: @ SendWorldWndMessage(Stack[-1])
0x5ba: Pop(1)
0x5bb: GOTO 0x5c5

0x5bc: Push((int) 0)
0x5bd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5bf: Push((int) 9)
0x5c0: @ SendWorldWndMessage(Stack[-1])
0x5c1: Pop(1)
0x5c2: GOTO 0x5c5

0x5c3: Stack[-3] = (bool) 0
0x5c4: Return(); Pop(0)

0x5c5: PushEmpty(float)
0x5c6: Stack[-1] = Stack[-2]
0x5c7: Call2 0x5d3

0x5c8: Pop(1)
0x5c9: PushEmpty(bool, object, string, float, float, float)
0x5ca: Stack[-5] = Stack[-8]
0x5cb: Stack[-4] = "reputation"
0x5cc: Stack[-3] = Stack[-7]
0x5cd: Stack[-2] = (int) 0
0x5ce: Stack[-1] = (int) 1
0x5cf: Call2 0x42b

0x5d0: Pop(6)
0x5d1: Stack[-3] = (bool) 1
0x5d2: Return(); Pop(0)

0x5d3: PushEmpty(object, object)
0x5d4: @ CreateFloatVector(Stack[-1])
0x5d5: Pop(0)
0x5d6: @@ add(Stack[-3])
0x5d7: Pop(0)
0x5d8: Push((int) 16)
0x5d9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5da: Pop(1)
0x5db: Return(); Pop(2)

0x5dc: Stack[-1] = 0
0x5dd: PushEmpty(object, object)
0x5de: @ FindActor(Stack[-1], Stack[-4])
0x5df: Pop(0)
0x5e0: Pop(0); Push((bool) Stack[-1] == 0)
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e2: Stack[-5] = (bool) 0
0x5e3: Return(); Pop(2)

0x5e4: @ Trigger(Stack[-1], Stack[-3])
0x5e5: Pop(0)
0x5e6: Stack[-5] = (bool) 1
0x5e7: Return(); Pop(2)

0x5e8: Stack[-1] = 0
0x5e9: PushEmpty(float, float)
0x5ea: @ GetGameTime(Stack[-1])
0x5eb: Pop(0)
0x5ec: Push((int) 1)
0x5ed: PushEmpty(int)
0x5ee: Push((int) 24)
0x5ef: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5f0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5f1: Return(); Pop(2)

0x5f2: PushEmpty(string, string)
0x5f3: Stack[-1] = "idle"
0x5f4: Push(Stack[-3])
0x5f5: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5f7: Stack[-4] = Stack[-1]
0x5f8: Return(); Pop(2)

0x5f9: PushEmpty(int, bool, int, bool)
0x5fa: Stack[-2] = (int) 0
0x5fb: Push("all")
0x5fc: PushEmpty(string, int)
0x5fd: Stack[-1] = Stack[-5]
0x5fe: Call2 0x5f2

0x5ff: Pop(1)
0x600: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x601: Pop(2)
0x602: Pop(0); Push((bool) Stack[-1] == 0)
0x603: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x604: GOTO 0x608

0x605: Push((int) 1)
0x606: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x607: GOTO 0x5fb

0x608: Stack[-5] = Stack[-2]
0x609: Return(); Pop(4)

0x60a: Stack[-1] = (int) 515573
0x60b: Return(); Pop(0)

0x60c: Stack[-1] = (int) 504032
0x60d: Return(); Pop(0)

0x60e: Stack[-1] = "ui/NPC_Bakalavr.png"
0x60f: Return(); Pop(0)

0x610: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x611: Return(); Pop(0)

0x612: Stack[-1] = (bool) 1
0x613: Return(); Pop(0)

0x614: PushEmpty()
0x615: PushEmpty(bool, object, float)
0x616: Stack[-2] = Stack[-5]
0x617: Stack[-1] = (float) 0.05
0x618: Call2 0x5b0

0x619: Pop(3)
0x61a: Return(); Pop(0)

0x61b: PushEmpty()
0x61c: PushEmpty(bool, object, float)
0x61d: Stack[-2] = Stack[-5]
0x61e: Stack[-1] = (float) -0.05
0x61f: Call2 0x5b0

0x620: Pop(3)
0x621: Return(); Pop(0)

0x622: PushEmpty()
0x623: Push("playsound")
0x624: Push("givemoney")
0x625: @ TriggerWorld(Stack[-2], Stack[-1])
0x626: Pop(2)
0x627: Return(); Pop(0)

0x628: PushEmpty()
0x629: PushEmpty()
0x62a: Call2 0x751

0x62b: Pop(0)
0x62c: Return(); Pop(0)

0x62d: PushEmpty()
0x62e: PushEmpty()
0x62f: Call2 0x759

0x630: Pop(0)
0x631: Return(); Pop(0)

0x632: PushEmpty()
0x633: PushEmpty()
0x634: Call2 0x767

0x635: Pop(0)
0x636: Return(); Pop(0)

0x637: PushEmpty()
0x638: PushEmpty()
0x639: Call2 0x77b

0x63a: Pop(0)
0x63b: Return(); Pop(0)

0x63c: PushEmpty()
0x63d: PushEmpty()
0x63e: Call2 0x6fa

0x63f: Pop(0)
0x640: Return(); Pop(0)

0x641: PushEmpty()
0x642: PushEmpty()
0x643: Call2 0x6f4

0x644: Pop(0)
0x645: Return(); Pop(0)

0x646: PushEmpty(int, int)
0x647: Push((int) 1000)
0x648: @ irand(Stack[-2], Stack[-1])
0x649: Pop(1)
0x64a: PushEmpty(object, int)
0x64b: Stack[-2] = Stack[-6]
0x64c: Push((int) 3000)
0x64d: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0x64e: Call2 0x59d

0x64f: Pop(2)
0x650: Return(); Pop(2)

0x651: PushEmpty(int, int)
0x652: Push((int) 1000)
0x653: @ irand(Stack[-2], Stack[-1])
0x654: Pop(1)
0x655: PushEmpty(object, int)
0x656: Stack[-2] = Stack[-6]
0x657: Push((int) 4000)
0x658: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0x659: Call2 0x59d

0x65a: Pop(2)
0x65b: Return(); Pop(2)

0x65c: PushEmpty()
0x65d: PushEmpty(bool, object, float)
0x65e: Stack[-2] = Stack[-5]
0x65f: Stack[-1] = (float) -0.3
0x660: Call2 0x5b0

0x661: Pop(3)
0x662: Return(); Pop(0)

0x663: PushEmpty()
0x664: PushEmpty(bool, object)
0x665: Stack[-1] = Stack[-3]
0x666: Call2 0x681

0x667: Pop(1)
0x668: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x669: Stack[-2] = (bool) 1
0x66a: Return(); Pop(0)

0x66b: Stack[-2] = (bool) 0
0x66c: Return(); Pop(0)

0x66d: PushEmpty()
0x66e: PushEmpty(bool, object)
0x66f: Stack[-1] = Stack[-3]
0x670: Call2 0x687

0x671: Pop(1)
0x672: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x673: Stack[-2] = (bool) 1
0x674: Return(); Pop(0)

0x675: Stack[-2] = (bool) 0
0x676: Return(); Pop(0)

0x677: PushEmpty()
0x678: PushEmpty(bool, object)
0x679: Stack[-1] = Stack[-3]
0x67a: Call2 0x68d

0x67b: Pop(1)
0x67c: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67d: Stack[-2] = (bool) 1
0x67e: Return(); Pop(0)

0x67f: Stack[-2] = (bool) 0
0x680: Return(); Pop(0)

0x681: PushEmpty()
0x682: PushEmpty(bool)
0x683: Call2 0x76f

0x684: Stack[-3] = Stack[-1]
0x685: Pop(1)
0x686: Return(); Pop(0)

0x687: PushEmpty()
0x688: PushEmpty(bool)
0x689: Call2 0x761

0x68a: Stack[-3] = Stack[-1]
0x68b: Pop(1)
0x68c: Return(); Pop(0)

0x68d: PushEmpty()
0x68e: PushEmpty(bool)
0x68f: Call2 0x775

0x690: Stack[-3] = Stack[-1]
0x691: Pop(1)
0x692: Return(); Pop(0)

0x693: PushEmpty(object, object)
0x694: Push((int) 755)
0x695: Push((int) 2)
0x696: Push((int) 539740)
0x697: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: PushEmpty(bool, object, int)
0x69a: Stack[-2] = Stack[-4]
0x69b: Stack[-1] = (int) 751
0x69c: Call2 0x6c7

0x69d: Pop(3)
0x69e: Return(); Pop(2)

0x69f: Stack[-1] = 0
0x6a0: PushEmpty(object, object)
0x6a1: Push((int) 759)
0x6a2: Push((int) 2)
0x6a3: Push((int) 539744)
0x6a4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6a5: Pop(3)
0x6a6: PushEmpty(bool, object, int)
0x6a7: Stack[-2] = Stack[-4]
0x6a8: Stack[-1] = (int) 757
0x6a9: Call2 0x6c7

0x6aa: Pop(3)
0x6ab: Return(); Pop(2)

0x6ac: Stack[-1] = 0
0x6ad: PushEmpty(object, object)
0x6ae: Push((int) 760)
0x6af: Push((int) 2)
0x6b0: Push((int) 539745)
0x6b1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6b2: Pop(3)
0x6b3: PushEmpty(bool, object, int)
0x6b4: Stack[-2] = Stack[-4]
0x6b5: Stack[-1] = (int) 757
0x6b6: Call2 0x6c7

0x6b7: Pop(3)
0x6b8: Return(); Pop(2)

0x6b9: Stack[-1] = 0
0x6ba: PushEmpty(object, object)
0x6bb: @ GetDiaryRoot(Stack[-1])
0x6bc: Pop(0)
0x6bd: Pop(0); Push((bool) Stack[-1] == 0)
0x6be: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6bf: Push("Can't retrieve diary root")
0x6c0: @ Trace(Stack[-1])
0x6c1: Pop(1)
0x6c2: Stack[-3] = (bool) 0
0x6c3: Return(); Pop(2)

0x6c4: Stack[-3] = Stack[-1]
0x6c5: Return(); Pop(2)

0x6c6: Stack[-1] = 0
0x6c7: PushEmpty(object, object, int, object, object, int)
0x6c8: PushEmpty(object)
0x6c9: Call2 0x6ba

0x6ca: Stack[-4] = Stack[-1]
0x6cb: Pop(1)
0x6cc: @@ Find(Stack[-7], Stack[-2])
0x6cd: Pop(0)
0x6ce: Pop(0); Push((bool) Stack[-2] == 0)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d0: Push("Can't find diary parent with id: ")
0x6d1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6d2: @ Trace(Stack[-1])
0x6d3: Pop(1)
0x6d4: Stack[-9] = (bool) 0
0x6d5: Return(); Pop(6)

0x6d6: @@ AddChild(Stack[-8])
0x6d7: Pop(0)
0x6d8: Push((int) 7)
0x6d9: @ SendWorldWndMessage(Stack[-1])
0x6da: Pop(1)
0x6db: @@ GetCategory(Stack[-1])
0x6dc: Pop(0)
0x6dd: @ SetDiarySection(Stack[-1])
0x6de: Pop(0)
0x6df: Stack[-9] = (bool) 0
0x6e0: Return(); Pop(6)

0x6e1: Stack[-2] = 0
0x6e2: Stack[-3] = 0
0x6e3: PushEmpty(int, int)
0x6e4: Push("branch")
0x6e5: @ GetVariable(Stack[-1], Stack[-2])
0x6e6: Pop(1)
0x6e7: Push((int) 0)
0x6e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e9: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6ea: Stack[-3] = (int) 1
0x6eb: Return(); Pop(2)

0x6ec: GOTO 0x6f2

0x6ed: Push((int) 1)
0x6ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f0: Stack[-3] = (int) 2
0x6f1: Return(); Pop(2)

0x6f2: Stack[-3] = (int) 3
0x6f3: Return(); Pop(2)

0x6f4: PushEmpty(bool, string, string)
0x6f5: Stack[-2] = "klara2_npc_positioner"
0x6f6: Stack[-1] = "remove_danko"
0x6f7: Call2 0x5dd

0x6f8: Pop(3)
0x6f9: Return(); Pop(0)

0x6fa: PushEmpty(bool, string, string)
0x6fb: Stack[-2] = "klara2_npc_positioner"
0x6fc: Stack[-1] = "remove_burah"
0x6fd: Call2 0x5dd

0x6fe: Pop(3)
0x6ff: Return(); Pop(0)

0x700: PushEmpty(int, int)
0x701: Push("k2system_klara_day")
0x702: @ GetVariable(Stack[-1], Stack[-2])
0x703: Pop(1)
0x704: Stack[-3] = Stack[-1]
0x705: Return(); Pop(2)

0x706: PushEmpty(int, int)
0x707: Push("k2system_burah_day")
0x708: @ GetVariable(Stack[-1], Stack[-2])
0x709: Pop(1)
0x70a: Stack[-3] = Stack[-1]
0x70b: Return(); Pop(2)

0x70c: PushEmpty(int, int)
0x70d: Push("k2system_danko_day")
0x70e: @ GetVariable(Stack[-1], Stack[-2])
0x70f: Pop(1)
0x710: Stack[-3] = Stack[-1]
0x711: Return(); Pop(2)

0x712: PushEmpty(int, int, int, int)
0x713: PushEmpty(int)
0x714: Call2 0x706

0x715: Stack[-3] = Stack[-1]
0x716: Pop(1)
0x717: Push("k2system_burah_state")
0x718: Pop(1); Push(Stack[-1] + Stack[-3]);
0x719: @ GetVariable(Stack[-1], Stack[-2])
0x71a: Pop(1)
0x71b: Stack[-5] = Stack[-1]
0x71c: Return(); Pop(4)

0x71d: PushEmpty(int, int)
0x71e: PushEmpty(int)
0x71f: Call2 0x706

0x720: Stack[-2] = Stack[-1]
0x721: Pop(1)
0x722: Push("k2system_burah_state")
0x723: Pop(1); Push(Stack[-1] + Stack[-2]);
0x724: @ SetVariable(Stack[-1], Stack[-4])
0x725: Pop(1)
0x726: Return(); Pop(2)

0x727: PushEmpty(int, int, int, int)
0x728: PushEmpty(int)
0x729: Call2 0x70c

0x72a: Stack[-3] = Stack[-1]
0x72b: Pop(1)
0x72c: Push("k2system_danko_state")
0x72d: Pop(1); Push(Stack[-1] + Stack[-3]);
0x72e: @ GetVariable(Stack[-1], Stack[-2])
0x72f: Pop(1)
0x730: Stack[-5] = Stack[-1]
0x731: Return(); Pop(4)

0x732: PushEmpty(int, int)
0x733: PushEmpty(int)
0x734: Call2 0x70c

0x735: Stack[-2] = Stack[-1]
0x736: Pop(1)
0x737: Push("k2system_danko_state")
0x738: Pop(1); Push(Stack[-1] + Stack[-2]);
0x739: @ SetVariable(Stack[-1], Stack[-4])
0x73a: Pop(1)
0x73b: Return(); Pop(2)

0x73c: PushEmpty(int, int, int, int)
0x73d: PushEmpty(int)
0x73e: Call2 0x700

0x73f: Stack[-3] = Stack[-1]
0x740: Pop(1)
0x741: Push("k2system_klara_state")
0x742: Pop(1); Push(Stack[-1] + Stack[-3]);
0x743: @ GetVariable(Stack[-1], Stack[-2])
0x744: Pop(1)
0x745: Stack[-5] = Stack[-1]
0x746: Return(); Pop(4)

0x747: PushEmpty(int, int)
0x748: PushEmpty(int)
0x749: Call2 0x700

0x74a: Stack[-2] = Stack[-1]
0x74b: Pop(1)
0x74c: Push("k2system_klara_state")
0x74d: Pop(1); Push(Stack[-1] + Stack[-2]);
0x74e: @ SetVariable(Stack[-1], Stack[-4])
0x74f: Pop(1)
0x750: Return(); Pop(2)

0x751: PushEmpty()
0x752: Call2 0x6a0

0x753: Pop(0)
0x754: PushEmpty(int)
0x755: Stack[-1] = (int) 2
0x756: Call2 0x732

0x757: Pop(1)
0x758: Return(); Pop(0)

0x759: PushEmpty()
0x75a: Call2 0x6ad

0x75b: Pop(0)
0x75c: PushEmpty(int)
0x75d: Stack[-1] = (int) 1
0x75e: Call2 0x732

0x75f: Pop(1)
0x760: Return(); Pop(0)

0x761: PushEmpty(int)
0x762: Call2 0x727

0x763: Pop(0)
0x764: Push((int) 0)
0x765: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x766: Return(); Pop(0)

0x767: PushEmpty()
0x768: Call2 0x693

0x769: Pop(0)
0x76a: PushEmpty(int)
0x76b: Stack[-1] = (int) 3
0x76c: Call2 0x71d

0x76d: Pop(1)
0x76e: Return(); Pop(0)

0x76f: PushEmpty(int)
0x770: Call2 0x712

0x771: Pop(0)
0x772: Push((int) 1)
0x773: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x774: Return(); Pop(0)

0x775: PushEmpty(int)
0x776: Call2 0x73c

0x777: Pop(0)
0x778: Push((int) 1)
0x779: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x77a: Return(); Pop(0)

0x77b: PushEmpty(int)
0x77c: Stack[-1] = (int) 3
0x77d: Call2 0x747

0x77e: Pop(1)
0x77f: Return(); Pop(0)

0x780: PushEmpty(int, int)
0x781: Push("day")
0x782: @ GetProperty(Stack[-1], Stack[-2])
0x783: Pop(1)
0x784: PushEmpty(int)
0x785: Call2 0x5e9

0x786: Pop(0)
0x787: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x789: PushEmpty(int, object)
0x78a: Stack[-1] = Stack[-5]
0x78b: Push(-2, 1); TaskCall(2)
0x78c: Call2 0xcb

0x78d: Pop(-2, 1); TaskReturn
0x78e: Pop(2)
0x78f: GOTO 0x796

0x790: PushEmpty(int, object)
0x791: Stack[-1] = Stack[-5]
0x792: Push(-2, 1); TaskCall(0)
0x793: Call2 0x0

0x794: Pop(-2, 1); TaskReturn
0x795: Pop(2)
0x796: Return(); Pop(2)

