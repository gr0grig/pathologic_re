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
0xe: Call2 0x60a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x608

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x60c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x60e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6e1

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
0x31: Call2 0x574

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x4b5

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
0x48: Call2 0x4a4

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
0x6e: Call2 0x610

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x53f

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
0x8d: Call2 0x610

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
0x9d: Call2 0x54f

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x56d

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
0xc0: Call2 0x610

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
0xd9: Call2 0x60a

0xda: Pop(0)
0xdb: @@ SetNPCName(Stack[-1])
0xdc: Pop(1)
0xdd: PushEmpty(int)
0xde: Call2 0x608

0xdf: Pop(0)
0xe0: @@ SetNPCDescription(Stack[-1])
0xe1: Pop(1)
0xe2: PushEmpty(string)
0xe3: Call2 0x60c

0xe4: Pop(0)
0xe5: @@ SetPhoto(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(string)
0xe8: Call2 0x60e

0xe9: Pop(0)
0xea: @@ SetPhoto2(Stack[-1])
0xeb: Pop(1)
0xec: PushEmpty(int)
0xed: Call2 0x6e1

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
0xfc: Call2 0x574

0xfd: Stack[-2] = Stack[-1]
0xfe: Pop(1)
0xff: Call2 0x4b5

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
0x113: Call2 0x4a4

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
0x12d: Call2 0x66b

0x12e: Pop(1)
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: Push((int) 539761)
0x131: Push((int) 41714)
0x132: Push((int) 41713)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: PushEmpty(bool, object)
0x136: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x137: Call2 0x66b

0x138: Pop(1)
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: Push((int) 539764)
0x13b: Push((int) 41717)
0x13c: Push((int) 41716)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x141: Call2 0x661

0x142: Pop(1)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: Push((int) 539767)
0x145: Push((int) 41720)
0x146: Push((int) 41719)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x675

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
0x161: Call2 0x610

0x162: Pop(0)
0x163: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x164: @ lshWaitForAnimEnd()
0x165: Pop(0)
0x166: Push( Stack[3 + Tasks[-1].StackPointer] )
0x167: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x168: GOTO 0x16e

0x169: PushEmpty(string)
0x16a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x16b: Call2 0x53f

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
0x180: Call2 0x610

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
0x190: Call2 0x54f

0x191: Pop(2)
0x192: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x193: Return(); Pop(0)

0x194: PushEmpty()
0x195: Push((int) 1)
0x196: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x197: PushEmpty()
0x198: Call2 0x56d

0x199: Pop(0)
0x19a: Push((int) 41715)
0x19b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x19d: PushEmpty(object, object)
0x19e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a0: Call2 0x626

0x1a1: Pop(2)
0x1a2: PushEmpty(object, object)
0x1a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a5: Call2 0x63f

0x1a6: Pop(2)
0x1a7: PushEmpty(object, object)
0x1a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1aa: Call2 0x612

0x1ab: Pop(2)
0x1ac: Push((int) 41718)
0x1ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1af: PushEmpty(object, object)
0x1b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b2: Call2 0x62b

0x1b3: Pop(2)
0x1b4: Push((int) 41721)
0x1b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1b7: PushEmpty(object, object)
0x1b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Call2 0x630

0x1bb: Pop(2)
0x1bc: PushEmpty(object, object)
0x1bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bf: Call2 0x63a

0x1c0: Pop(2)
0x1c1: PushEmpty(object, object)
0x1c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c4: Call2 0x63f

0x1c5: Pop(2)
0x1c6: PushEmpty(object, object)
0x1c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c9: Call2 0x619

0x1ca: Pop(2)
0x1cb: PushEmpty(object, object)
0x1cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ce: Call2 0x644

0x1cf: Pop(2)
0x1d0: PushEmpty(object, object)
0x1d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d3: Call2 0x620

0x1d4: Pop(2)
0x1d5: Push((int) 41724)
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1d8: PushEmpty(object, object)
0x1d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1db: Call2 0x635

0x1dc: Pop(2)
0x1dd: PushEmpty(object, object)
0x1de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0x64f

0x1e1: Pop(2)
0x1e2: PushEmpty(object, object)
0x1e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Call2 0x620

0x1e6: Pop(2)
0x1e7: PushEmpty(object, object)
0x1e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ea: Call2 0x65a

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
0x1fa: Call2 0x66b

0x1fb: Pop(1)
0x1fc: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fd: Push((int) 539761)
0x1fe: Push((int) 41714)
0x1ff: Push((int) 41713)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: PushEmpty(bool, object)
0x203: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x204: Call2 0x66b

0x205: Pop(1)
0x206: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x207: Push((int) 539764)
0x208: Push((int) 41717)
0x209: Push((int) 41716)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: PushEmpty(bool, object)
0x20d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20e: Call2 0x661

0x20f: Pop(1)
0x210: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x211: Push((int) 539767)
0x212: Push((int) 41720)
0x213: Push((int) 41719)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: PushEmpty(bool, object)
0x217: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x218: Call2 0x675

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
0x2e3: Call2 0x610

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
0x300: Call2 0x574

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
0x30d: Call2 0x574

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
0x379: Call2 0x574

0x37a: Stack[-2] = Stack[-1]
0x37b: Pop(1)
0x37c: Call2 0x4ef

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
0x39c: Call2 0x53f

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
0x3ab: Call2 0x53f

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
0x3be: Call2 0x77e

0x3bf: Pop(1)
0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Neutral"
0x3c2: Call2 0x53f

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
0x3d5: Call2 0x5f7

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
0x3f9: Call2 0x5f0

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
0x43b: Call2 0x584

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
0x47b: Call2 0x57a

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
0x48b: @ CameraTransit(Stack[-3], Stack[-5])
0x48c: Pop(0)
0x48d: Push(CvectorIndex(Stack[-4], 0))
0x48e: Push(CvectorIndex(Stack[-5], 2))
0x48f: @ Rotate(Stack[-2], Stack[-1])
0x490: Pop(2)
0x491: PushEmpty(bool)
0x492: Call2 0x610

0x493: Pop(0)
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: GOTO 0x49e

0x496: Push("head")
0x497: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x498: Pop(1)
0x499: Push(Stack[-1])
0x49a: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49b: Push("head")
0x49c: @ LookAsyncCamera(Stack[-1])
0x49d: Pop(1)
0x49e: @ CameraWaitForPlayFinish()
0x49f: Pop(0)
0x4a0: @ ResumeWorld()
0x4a1: Pop(0)
0x4a2: Stack[-21] = (bool) 1
0x4a3: Return(); Pop(18)

0x4a4: PushEmpty(bool, bool)
0x4a5: @ CameraSwitchToNormal()
0x4a6: Pop(0)
0x4a7: PushEmpty(bool)
0x4a8: Call2 0x610

0x4a9: Pop(0)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4ab: GOTO 0x4b4

0x4ac: Push("head")
0x4ad: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4ae: Pop(1)
0x4af: Push(Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b1: Push("head")
0x4b2: @ UnlookAsync(Stack[-1])
0x4b3: Pop(1)
0x4b4: Return(); Pop(2)

0x4b5: PushEmpty(int, int, int, int)
0x4b6: Push("voice_common")
0x4b7: @ GetVariable(Stack[-1], Stack[-3])
0x4b8: Pop(1)
0x4b9: Push(Stack[-2])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4bb: PushEmpty(bool, object)
0x4bc: Stack[-1] = Stack[-7]
0x4bd: Call2 0x4ef

0x4be: Pop(1)
0x4bf: Pop(1); Push((bool) Stack[-1] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c1: PushEmpty(bool, object)
0x4c2: Stack[-1] = Stack[-7]
0x4c3: Call2 0x514

0x4c4: Pop(1)
0x4c5: Pop(1); Push((bool) Stack[-1] == 0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c7: Stack[-6] = (bool) 0
0x4c8: Return(); Pop(4)

0x4c9: Push((int) 2)
0x4ca: @ irand(Stack[-2], Stack[-1])
0x4cb: Pop(1)
0x4cc: Push(Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4ce: Push("voice_common")
0x4cf: Push((int) 1)
0x4d0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4d1: Push((int) 3)
0x4d2: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4d3: @ SetVariable(Stack[-2], Stack[-1])
0x4d4: Pop(2)
0x4d5: GOTO 0x4da

0x4d6: Push("voice_common")
0x4d7: Push((int) 0)
0x4d8: @ SetVariable(Stack[-2], Stack[-1])
0x4d9: Pop(2)
0x4da: GOTO 0x4ed

0x4db: PushEmpty(bool, object)
0x4dc: Stack[-1] = Stack[-7]
0x4dd: Call2 0x514

0x4de: Pop(1)
0x4df: Pop(1); Push((bool) Stack[-1] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e1: PushEmpty(bool, object)
0x4e2: Stack[-1] = Stack[-7]
0x4e3: Call2 0x4ef

0x4e4: Pop(1)
0x4e5: Pop(1); Push((bool) Stack[-1] == 0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e7: Stack[-6] = (bool) 0
0x4e8: Return(); Pop(4)

0x4e9: Push("voice_common")
0x4ea: Push((int) 1)
0x4eb: @ SetVariable(Stack[-2], Stack[-1])
0x4ec: Pop(2)
0x4ed: Stack[-6] = (bool) 1
0x4ee: Return(); Pop(4)

0x4ef: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4f0: Stack[-5] = "c"
0x4f1: Stack[-4] = (int) 0
0x4f2: Push((int) 1)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4f4: Push((int) 1)
0x4f5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4f6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4f7: @@ HasProperty(Stack[-1], Stack[-4])
0x4f8: Pop(1)
0x4f9: Pop(0); Push((bool) Stack[-3] == 0)
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fb: GOTO 0x4ff

0x4fc: Push((int) 1)
0x4fd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4fe: GOTO 0x4f2

0x4ff: Pop(0); Push((bool) Stack[-4] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: Stack[-12] = (bool) 0
0x502: Return(); Pop(10)

0x503: Stack[-2] = (int) 0
0x504: Push((int) 1)
0x505: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x507: @ irand(Stack[-2], Stack[-4])
0x508: Pop(0)
0x509: Push((int) 1)
0x50a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x50b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x50c: @@ GetProperty(Stack[-1], Stack[-2])
0x50d: Pop(1)
0x50e: PushEmpty(bool, string)
0x50f: Stack[-1] = Stack[-3]
0x510: Call2 0x55e

0x511: Stack[-14] = Stack[-2]
0x512: Pop(2)
0x513: Return(); Pop(10)

0x514: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x515: Push("d")
0x516: PushEmpty(int)
0x517: Call2 0x5e7

0x518: Pop(0)
0x519: Pop(2); Push(Stack[-2] + Stack[-1]);
0x51a: Push("m")
0x51b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x51c: Stack[-4] = (int) 0
0x51d: Push((int) 1)
0x51e: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x51f: Push((int) 1)
0x520: Pop(1); Push(Stack[-5] + Stack[-1]);
0x521: Pop(1); Push(Stack[-6] + Stack[-1]);
0x522: @@ HasProperty(Stack[-1], Stack[-4])
0x523: Pop(1)
0x524: Pop(0); Push((bool) Stack[-3] == 0)
0x525: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x526: GOTO 0x52a

0x527: Push((int) 1)
0x528: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x529: GOTO 0x51d

0x52a: Pop(0); Push((bool) Stack[-4] == 0)
0x52b: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52c: Stack[-12] = (bool) 0
0x52d: Return(); Pop(10)

0x52e: Stack[-2] = (int) 0
0x52f: Push((int) 1)
0x530: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x532: @ irand(Stack[-2], Stack[-4])
0x533: Pop(0)
0x534: Push((int) 1)
0x535: Pop(1); Push(Stack[-3] + Stack[-1]);
0x536: Pop(1); Push(Stack[-6] + Stack[-1]);
0x537: @@ GetProperty(Stack[-1], Stack[-2])
0x538: Pop(1)
0x539: PushEmpty(bool, string)
0x53a: Stack[-1] = Stack[-3]
0x53b: Call2 0x55e

0x53c: Stack[-14] = Stack[-2]
0x53d: Pop(2)
0x53e: Return(); Pop(10)

0x53f: PushEmpty(bool, float, float, bool, float, float)
0x540: @ lshHasAnimation(Stack[-3], Stack[-7])
0x541: Pop(0)
0x542: Push(Stack[-3])
0x543: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x544: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x545: Pop(0)
0x546: Push((bool) 0)
0x547: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(1)
0x549: GOTO 0x54e

0x54a: Push("Can't find lsh animation : ")
0x54b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x54c: @ Trace(Stack[-1])
0x54d: Pop(1)
0x54e: Return(); Pop(6)

0x54f: PushEmpty(bool, float, float, bool, float, float)
0x550: @ lshHasAnimation(Stack[-3], Stack[-8])
0x551: Pop(0)
0x552: Push(Stack[-3])
0x553: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x554: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x555: Pop(0)
0x556: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x557: Pop(0)
0x558: GOTO 0x55d

0x559: Push("Can't find lsh animation : ")
0x55a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x55b: @ Trace(Stack[-1])
0x55c: Pop(1)
0x55d: Return(); Pop(6)

0x55e: PushEmpty(bool, bool)
0x55f: PushEmpty(bool)
0x560: Call2 0x610

0x561: Pop(0)
0x562: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x563: @ lshHasSpeech(Stack[-1], Stack[-3])
0x564: Pop(0)
0x565: Push(Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x567: @ lshPlaySpeech(Stack[-3])
0x568: Pop(0)
0x569: Stack[-4] = (bool) 1
0x56a: Return(); Pop(2)

0x56b: Stack[-4] = (bool) 0
0x56c: Return(); Pop(2)

0x56d: PushEmpty(bool)
0x56e: Call2 0x610

0x56f: Pop(0)
0x570: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x571: @ lshStopSpeech()
0x572: Pop(0)
0x573: Return(); Pop(0)

0x574: PushEmpty(object, object)
0x575: @ self(Stack[-1])
0x576: Pop(0)
0x577: Stack[-3] = Stack[-1]
0x578: Return(); Pop(2)

0x579: Stack[-1] = 0
0x57a: PushEmpty(float, float)
0x57b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x57c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x57d: Push((float)0.0)
0x57e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x580: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x581: Return(); Pop(2)

0x582: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x583: Return(); Pop(2)

0x584: PushEmpty()
0x585: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x586: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x587: Stack[-4] = Stack[-2]
0x588: Return(); Pop(0)

0x589: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58b: Stack[-4] = Stack[-1]
0x58c: Return(); Pop(0)

0x58d: Stack[-4] = Stack[-3]
0x58e: Return(); Pop(0)

0x58f: PushEmpty(object, object)
0x590: @ CreateIntVector(Stack[-1])
0x591: Pop(0)
0x592: @@ add(Stack[-4])
0x593: Pop(0)
0x594: @@ add(Stack[-3])
0x595: Pop(0)
0x596: Push((int) 3)
0x597: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x598: Pop(1)
0x599: Return(); Pop(2)

0x59a: Stack[-1] = 0
0x59b: PushEmpty(int, int)
0x59c: PushEmpty(object, string, int)
0x59d: Stack[-3] = Stack[-7]
0x59e: Stack[-2] = "money"
0x59f: Stack[-1] = Stack[-6]
0x5a0: Call2 0x441

0x5a1: Pop(3)
0x5a2: Push((int) 0)
0x5a3: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5a5: Push("Money")
0x5a6: @ GetInvItemByName(Stack[-2], Stack[-1])
0x5a7: Pop(1)
0x5a8: PushEmpty(int, int)
0x5a9: Stack[-2] = Stack[-3]
0x5aa: Stack[-1] = Stack[-5]
0x5ab: Call2 0x58f

0x5ac: Pop(2)
0x5ad: Return(); Pop(2)

0x5ae: PushEmpty()
0x5af: Pop(0); Push((bool) Stack[-2] == 0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5b1: Stack[-3] = (bool) 0
0x5b2: Return(); Pop(0)

0x5b3: Push((int) 0)
0x5b4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b6: Push((int) 8)
0x5b7: @ SendWorldWndMessage(Stack[-1])
0x5b8: Pop(1)
0x5b9: GOTO 0x5c3

0x5ba: Push((int) 0)
0x5bb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bd: Push((int) 9)
0x5be: @ SendWorldWndMessage(Stack[-1])
0x5bf: Pop(1)
0x5c0: GOTO 0x5c3

0x5c1: Stack[-3] = (bool) 0
0x5c2: Return(); Pop(0)

0x5c3: PushEmpty(float)
0x5c4: Stack[-1] = Stack[-2]
0x5c5: Call2 0x5d1

0x5c6: Pop(1)
0x5c7: PushEmpty(bool, object, string, float, float, float)
0x5c8: Stack[-5] = Stack[-8]
0x5c9: Stack[-4] = "reputation"
0x5ca: Stack[-3] = Stack[-7]
0x5cb: Stack[-2] = (int) 0
0x5cc: Stack[-1] = (int) 1
0x5cd: Call2 0x42b

0x5ce: Pop(6)
0x5cf: Stack[-3] = (bool) 1
0x5d0: Return(); Pop(0)

0x5d1: PushEmpty(object, object)
0x5d2: @ CreateFloatVector(Stack[-1])
0x5d3: Pop(0)
0x5d4: @@ add(Stack[-3])
0x5d5: Pop(0)
0x5d6: Push((int) 16)
0x5d7: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5d8: Pop(1)
0x5d9: Return(); Pop(2)

0x5da: Stack[-1] = 0
0x5db: PushEmpty(object, object)
0x5dc: @ FindActor(Stack[-1], Stack[-4])
0x5dd: Pop(0)
0x5de: Pop(0); Push((bool) Stack[-1] == 0)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e0: Stack[-5] = (bool) 0
0x5e1: Return(); Pop(2)

0x5e2: @ Trigger(Stack[-1], Stack[-3])
0x5e3: Pop(0)
0x5e4: Stack[-5] = (bool) 1
0x5e5: Return(); Pop(2)

0x5e6: Stack[-1] = 0
0x5e7: PushEmpty(float, float)
0x5e8: @ GetGameTime(Stack[-1])
0x5e9: Pop(0)
0x5ea: Push((int) 1)
0x5eb: PushEmpty(int)
0x5ec: Push((int) 24)
0x5ed: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5ee: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5ef: Return(); Pop(2)

0x5f0: PushEmpty(string, string)
0x5f1: Stack[-1] = "idle"
0x5f2: Push(Stack[-3])
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5f5: Stack[-4] = Stack[-1]
0x5f6: Return(); Pop(2)

0x5f7: PushEmpty(int, bool, int, bool)
0x5f8: Stack[-2] = (int) 0
0x5f9: Push("all")
0x5fa: PushEmpty(string, int)
0x5fb: Stack[-1] = Stack[-5]
0x5fc: Call2 0x5f0

0x5fd: Pop(1)
0x5fe: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5ff: Pop(2)
0x600: Pop(0); Push((bool) Stack[-1] == 0)
0x601: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x602: GOTO 0x606

0x603: Push((int) 1)
0x604: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x605: GOTO 0x5f9

0x606: Stack[-5] = Stack[-2]
0x607: Return(); Pop(4)

0x608: Stack[-1] = (int) 515573
0x609: Return(); Pop(0)

0x60a: Stack[-1] = (int) 504032
0x60b: Return(); Pop(0)

0x60c: Stack[-1] = "ui/NPC_Bakalavr.png"
0x60d: Return(); Pop(0)

0x60e: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x60f: Return(); Pop(0)

0x610: Stack[-1] = (bool) 1
0x611: Return(); Pop(0)

0x612: PushEmpty()
0x613: PushEmpty(bool, object, float)
0x614: Stack[-2] = Stack[-5]
0x615: Stack[-1] = (float) 0.05
0x616: Call2 0x5ae

0x617: Pop(3)
0x618: Return(); Pop(0)

0x619: PushEmpty()
0x61a: PushEmpty(bool, object, float)
0x61b: Stack[-2] = Stack[-5]
0x61c: Stack[-1] = (float) -0.05
0x61d: Call2 0x5ae

0x61e: Pop(3)
0x61f: Return(); Pop(0)

0x620: PushEmpty()
0x621: Push("playsound")
0x622: Push("givemoney")
0x623: @ TriggerWorld(Stack[-2], Stack[-1])
0x624: Pop(2)
0x625: Return(); Pop(0)

0x626: PushEmpty()
0x627: PushEmpty()
0x628: Call2 0x74f

0x629: Pop(0)
0x62a: Return(); Pop(0)

0x62b: PushEmpty()
0x62c: PushEmpty()
0x62d: Call2 0x757

0x62e: Pop(0)
0x62f: Return(); Pop(0)

0x630: PushEmpty()
0x631: PushEmpty()
0x632: Call2 0x765

0x633: Pop(0)
0x634: Return(); Pop(0)

0x635: PushEmpty()
0x636: PushEmpty()
0x637: Call2 0x779

0x638: Pop(0)
0x639: Return(); Pop(0)

0x63a: PushEmpty()
0x63b: PushEmpty()
0x63c: Call2 0x6f8

0x63d: Pop(0)
0x63e: Return(); Pop(0)

0x63f: PushEmpty()
0x640: PushEmpty()
0x641: Call2 0x6f2

0x642: Pop(0)
0x643: Return(); Pop(0)

0x644: PushEmpty(int, int)
0x645: Push((int) 1000)
0x646: @ irand(Stack[-2], Stack[-1])
0x647: Pop(1)
0x648: PushEmpty(object, int)
0x649: Stack[-2] = Stack[-6]
0x64a: Push((int) 3000)
0x64b: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0x64c: Call2 0x59b

0x64d: Pop(2)
0x64e: Return(); Pop(2)

0x64f: PushEmpty(int, int)
0x650: Push((int) 1000)
0x651: @ irand(Stack[-2], Stack[-1])
0x652: Pop(1)
0x653: PushEmpty(object, int)
0x654: Stack[-2] = Stack[-6]
0x655: Push((int) 4000)
0x656: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0x657: Call2 0x59b

0x658: Pop(2)
0x659: Return(); Pop(2)

0x65a: PushEmpty()
0x65b: PushEmpty(bool, object, float)
0x65c: Stack[-2] = Stack[-5]
0x65d: Stack[-1] = (float) -0.3
0x65e: Call2 0x5ae

0x65f: Pop(3)
0x660: Return(); Pop(0)

0x661: PushEmpty()
0x662: PushEmpty(bool, object)
0x663: Stack[-1] = Stack[-3]
0x664: Call2 0x67f

0x665: Pop(1)
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: Stack[-2] = (bool) 1
0x668: Return(); Pop(0)

0x669: Stack[-2] = (bool) 0
0x66a: Return(); Pop(0)

0x66b: PushEmpty()
0x66c: PushEmpty(bool, object)
0x66d: Stack[-1] = Stack[-3]
0x66e: Call2 0x685

0x66f: Pop(1)
0x670: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x671: Stack[-2] = (bool) 1
0x672: Return(); Pop(0)

0x673: Stack[-2] = (bool) 0
0x674: Return(); Pop(0)

0x675: PushEmpty()
0x676: PushEmpty(bool, object)
0x677: Stack[-1] = Stack[-3]
0x678: Call2 0x68b

0x679: Pop(1)
0x67a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67b: Stack[-2] = (bool) 1
0x67c: Return(); Pop(0)

0x67d: Stack[-2] = (bool) 0
0x67e: Return(); Pop(0)

0x67f: PushEmpty()
0x680: PushEmpty(bool)
0x681: Call2 0x76d

0x682: Stack[-3] = Stack[-1]
0x683: Pop(1)
0x684: Return(); Pop(0)

0x685: PushEmpty()
0x686: PushEmpty(bool)
0x687: Call2 0x75f

0x688: Stack[-3] = Stack[-1]
0x689: Pop(1)
0x68a: Return(); Pop(0)

0x68b: PushEmpty()
0x68c: PushEmpty(bool)
0x68d: Call2 0x773

0x68e: Stack[-3] = Stack[-1]
0x68f: Pop(1)
0x690: Return(); Pop(0)

0x691: PushEmpty(object, object)
0x692: Push((int) 755)
0x693: Push((int) 2)
0x694: Push((int) 539740)
0x695: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x696: Pop(3)
0x697: PushEmpty(bool, object, int)
0x698: Stack[-2] = Stack[-4]
0x699: Stack[-1] = (int) 751
0x69a: Call2 0x6c5

0x69b: Pop(3)
0x69c: Return(); Pop(2)

0x69d: Stack[-1] = 0
0x69e: PushEmpty(object, object)
0x69f: Push((int) 759)
0x6a0: Push((int) 2)
0x6a1: Push((int) 539744)
0x6a2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6a3: Pop(3)
0x6a4: PushEmpty(bool, object, int)
0x6a5: Stack[-2] = Stack[-4]
0x6a6: Stack[-1] = (int) 757
0x6a7: Call2 0x6c5

0x6a8: Pop(3)
0x6a9: Return(); Pop(2)

0x6aa: Stack[-1] = 0
0x6ab: PushEmpty(object, object)
0x6ac: Push((int) 760)
0x6ad: Push((int) 2)
0x6ae: Push((int) 539745)
0x6af: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6b0: Pop(3)
0x6b1: PushEmpty(bool, object, int)
0x6b2: Stack[-2] = Stack[-4]
0x6b3: Stack[-1] = (int) 757
0x6b4: Call2 0x6c5

0x6b5: Pop(3)
0x6b6: Return(); Pop(2)

0x6b7: Stack[-1] = 0
0x6b8: PushEmpty(object, object)
0x6b9: @ GetDiaryRoot(Stack[-1])
0x6ba: Pop(0)
0x6bb: Pop(0); Push((bool) Stack[-1] == 0)
0x6bc: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6bd: Push("Can't retrieve diary root")
0x6be: @ Trace(Stack[-1])
0x6bf: Pop(1)
0x6c0: Stack[-3] = (bool) 0
0x6c1: Return(); Pop(2)

0x6c2: Stack[-3] = Stack[-1]
0x6c3: Return(); Pop(2)

0x6c4: Stack[-1] = 0
0x6c5: PushEmpty(object, object, int, object, object, int)
0x6c6: PushEmpty(object)
0x6c7: Call2 0x6b8

0x6c8: Stack[-4] = Stack[-1]
0x6c9: Pop(1)
0x6ca: @@ Find(Stack[-7], Stack[-2])
0x6cb: Pop(0)
0x6cc: Pop(0); Push((bool) Stack[-2] == 0)
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6ce: Push("Can't find diary parent with id: ")
0x6cf: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6d0: @ Trace(Stack[-1])
0x6d1: Pop(1)
0x6d2: Stack[-9] = (bool) 0
0x6d3: Return(); Pop(6)

0x6d4: @@ AddChild(Stack[-8])
0x6d5: Pop(0)
0x6d6: Push((int) 7)
0x6d7: @ SendWorldWndMessage(Stack[-1])
0x6d8: Pop(1)
0x6d9: @@ GetCategory(Stack[-1])
0x6da: Pop(0)
0x6db: @ SetDiarySection(Stack[-1])
0x6dc: Pop(0)
0x6dd: Stack[-9] = (bool) 0
0x6de: Return(); Pop(6)

0x6df: Stack[-2] = 0
0x6e0: Stack[-3] = 0
0x6e1: PushEmpty(int, int)
0x6e2: Push("branch")
0x6e3: @ GetVariable(Stack[-1], Stack[-2])
0x6e4: Pop(1)
0x6e5: Push((int) 0)
0x6e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e7: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e8: Stack[-3] = (int) 1
0x6e9: Return(); Pop(2)

0x6ea: GOTO 0x6f0

0x6eb: Push((int) 1)
0x6ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ee: Stack[-3] = (int) 2
0x6ef: Return(); Pop(2)

0x6f0: Stack[-3] = (int) 3
0x6f1: Return(); Pop(2)

0x6f2: PushEmpty(bool, string, string)
0x6f3: Stack[-2] = "klara2_npc_positioner"
0x6f4: Stack[-1] = "remove_danko"
0x6f5: Call2 0x5db

0x6f6: Pop(3)
0x6f7: Return(); Pop(0)

0x6f8: PushEmpty(bool, string, string)
0x6f9: Stack[-2] = "klara2_npc_positioner"
0x6fa: Stack[-1] = "remove_burah"
0x6fb: Call2 0x5db

0x6fc: Pop(3)
0x6fd: Return(); Pop(0)

0x6fe: PushEmpty(int, int)
0x6ff: Push("k2system_klara_day")
0x700: @ GetVariable(Stack[-1], Stack[-2])
0x701: Pop(1)
0x702: Stack[-3] = Stack[-1]
0x703: Return(); Pop(2)

0x704: PushEmpty(int, int)
0x705: Push("k2system_burah_day")
0x706: @ GetVariable(Stack[-1], Stack[-2])
0x707: Pop(1)
0x708: Stack[-3] = Stack[-1]
0x709: Return(); Pop(2)

0x70a: PushEmpty(int, int)
0x70b: Push("k2system_danko_day")
0x70c: @ GetVariable(Stack[-1], Stack[-2])
0x70d: Pop(1)
0x70e: Stack[-3] = Stack[-1]
0x70f: Return(); Pop(2)

0x710: PushEmpty(int, int, int, int)
0x711: PushEmpty(int)
0x712: Call2 0x704

0x713: Stack[-3] = Stack[-1]
0x714: Pop(1)
0x715: Push("k2system_burah_state")
0x716: Pop(1); Push(Stack[-1] + Stack[-3]);
0x717: @ GetVariable(Stack[-1], Stack[-2])
0x718: Pop(1)
0x719: Stack[-5] = Stack[-1]
0x71a: Return(); Pop(4)

0x71b: PushEmpty(int, int)
0x71c: PushEmpty(int)
0x71d: Call2 0x704

0x71e: Stack[-2] = Stack[-1]
0x71f: Pop(1)
0x720: Push("k2system_burah_state")
0x721: Pop(1); Push(Stack[-1] + Stack[-2]);
0x722: @ SetVariable(Stack[-1], Stack[-4])
0x723: Pop(1)
0x724: Return(); Pop(2)

0x725: PushEmpty(int, int, int, int)
0x726: PushEmpty(int)
0x727: Call2 0x70a

0x728: Stack[-3] = Stack[-1]
0x729: Pop(1)
0x72a: Push("k2system_danko_state")
0x72b: Pop(1); Push(Stack[-1] + Stack[-3]);
0x72c: @ GetVariable(Stack[-1], Stack[-2])
0x72d: Pop(1)
0x72e: Stack[-5] = Stack[-1]
0x72f: Return(); Pop(4)

0x730: PushEmpty(int, int)
0x731: PushEmpty(int)
0x732: Call2 0x70a

0x733: Stack[-2] = Stack[-1]
0x734: Pop(1)
0x735: Push("k2system_danko_state")
0x736: Pop(1); Push(Stack[-1] + Stack[-2]);
0x737: @ SetVariable(Stack[-1], Stack[-4])
0x738: Pop(1)
0x739: Return(); Pop(2)

0x73a: PushEmpty(int, int, int, int)
0x73b: PushEmpty(int)
0x73c: Call2 0x6fe

0x73d: Stack[-3] = Stack[-1]
0x73e: Pop(1)
0x73f: Push("k2system_klara_state")
0x740: Pop(1); Push(Stack[-1] + Stack[-3]);
0x741: @ GetVariable(Stack[-1], Stack[-2])
0x742: Pop(1)
0x743: Stack[-5] = Stack[-1]
0x744: Return(); Pop(4)

0x745: PushEmpty(int, int)
0x746: PushEmpty(int)
0x747: Call2 0x6fe

0x748: Stack[-2] = Stack[-1]
0x749: Pop(1)
0x74a: Push("k2system_klara_state")
0x74b: Pop(1); Push(Stack[-1] + Stack[-2]);
0x74c: @ SetVariable(Stack[-1], Stack[-4])
0x74d: Pop(1)
0x74e: Return(); Pop(2)

0x74f: PushEmpty()
0x750: Call2 0x69e

0x751: Pop(0)
0x752: PushEmpty(int)
0x753: Stack[-1] = (int) 2
0x754: Call2 0x730

0x755: Pop(1)
0x756: Return(); Pop(0)

0x757: PushEmpty()
0x758: Call2 0x6ab

0x759: Pop(0)
0x75a: PushEmpty(int)
0x75b: Stack[-1] = (int) 1
0x75c: Call2 0x730

0x75d: Pop(1)
0x75e: Return(); Pop(0)

0x75f: PushEmpty(int)
0x760: Call2 0x725

0x761: Pop(0)
0x762: Push((int) 0)
0x763: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x764: Return(); Pop(0)

0x765: PushEmpty()
0x766: Call2 0x691

0x767: Pop(0)
0x768: PushEmpty(int)
0x769: Stack[-1] = (int) 3
0x76a: Call2 0x71b

0x76b: Pop(1)
0x76c: Return(); Pop(0)

0x76d: PushEmpty(int)
0x76e: Call2 0x710

0x76f: Pop(0)
0x770: Push((int) 1)
0x771: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x772: Return(); Pop(0)

0x773: PushEmpty(int)
0x774: Call2 0x73a

0x775: Pop(0)
0x776: Push((int) 1)
0x777: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x778: Return(); Pop(0)

0x779: PushEmpty(int)
0x77a: Stack[-1] = (int) 3
0x77b: Call2 0x745

0x77c: Pop(1)
0x77d: Return(); Pop(0)

0x77e: PushEmpty(int, int)
0x77f: Push("day")
0x780: @ GetProperty(Stack[-1], Stack[-2])
0x781: Pop(1)
0x782: PushEmpty(int)
0x783: Call2 0x5e7

0x784: Pop(0)
0x785: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x786: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x787: PushEmpty(int, object)
0x788: Stack[-1] = Stack[-5]
0x789: Push(-2, 1); TaskCall(2)
0x78a: Call2 0xcb

0x78b: Pop(-2, 1); TaskReturn
0x78c: Pop(2)
0x78d: GOTO 0x794

0x78e: PushEmpty(int, object)
0x78f: Stack[-1] = Stack[-5]
0x790: Push(-2, 1); TaskCall(0)
0x791: Call2 0x0

0x792: Pop(-2, 1); TaskReturn
0x793: Pop(2)
0x794: Return(); Pop(2)

