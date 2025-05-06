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
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	reputation
	ui/NPC_Burah.png
	ui/NPC_Burah_b.png
	beta_pills 5 is given
	beta_pills
	playsound
	giveitem
	burah_serum is given
	burah_serum
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
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
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

RunOp = 0x305
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1ab Vars = (int, int)
	GTASK_4 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x30d Vars = (string)
		EVENT_6 Op = 0x321 Vars = ()
		EVENT_5 Op = 0x32e Vars = ()
		EVENT_7 Op = 0x377 Vars = (int)
		EVENT_45 Op = 0x3b9 Vars = (bool)
		EVENT_0 Op = 0x3c5 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x470

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x627

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x625

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x629

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x62b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6fe

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
0x31: Call2 0x584

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x4c5

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
0x48: Call2 0x4b4

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
0x5b: Push((int) 539060)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 539061)
0x61: Push((int) 43176)
0x62: Push((int) 41009)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 541070)
0x66: Push((int) -1)
0x67: Push((int) 43175)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x62d

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x54f

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
0x8d: Call2 0x62d

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
0x9d: Call2 0x55f

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x57d

0xa6: Pop(0)
0xa7: Push((int) 41008)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 539060)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 539061)
0xb4: Push((int) 43176)
0xb5: Push((int) 41009)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 541070)
0xb9: Push((int) -1)
0xba: Push((int) 43175)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 43176)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 541071)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 541072)
0xcb: Push((int) -1)
0xcc: Push((int) 43177)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 541073)
0xd0: Push((int) -1)
0xd1: Push((int) 43178)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd6: PushEmpty(bool)
0xd7: Call2 0x62d

0xd8: Pop(0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xda: @ lshStopAnimation()
0xdb: Pop(0)
0xdc: GOTO 0xdf

0xdd: @ StopAnimation()
0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: GOTO 0xa2

0xe1: Return(); Pop(0)

0xe2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe4: PushEmpty(bool, object, float)
0xe5: Stack[-2] = Stack[-12]
0xe6: Stack[-1] = (float) 70.0
0xe7: Call2 0x470

0xe8: Pop(2)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-10] = (int) -2
0xec: Return(); Pop(8)

0xed: @ CreateDialog(Stack[-4])
0xee: Pop(0)
0xef: PushEmpty(int)
0xf0: Call2 0x627

0xf1: Pop(0)
0xf2: @@ SetNPCName(Stack[-1])
0xf3: Pop(1)
0xf4: PushEmpty(int)
0xf5: Call2 0x625

0xf6: Pop(0)
0xf7: @@ SetNPCDescription(Stack[-1])
0xf8: Pop(1)
0xf9: PushEmpty(string)
0xfa: Call2 0x629

0xfb: Pop(0)
0xfc: @@ SetPhoto(Stack[-1])
0xfd: Pop(1)
0xfe: PushEmpty(string)
0xff: Call2 0x62b

0x100: Pop(0)
0x101: @@ SetPhoto2(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(int)
0x104: Call2 0x6fe

0x105: Pop(0)
0x106: @@ SetPlayerName(Stack[-1])
0x107: Pop(1)
0x108: Stack[-2] = (int) -1
0x109: @ IsOverrideActive(Stack[-3])
0x10a: Pop(0)
0x10b: Push(Stack[-3])
0x10c: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10d: Stack[-10] = (int) -2
0x10e: Return(); Pop(8)

0x10f: @ DoDialog(Stack[-4])
0x110: Pop(0)
0x111: PushEmpty(bool, object)
0x112: PushEmpty(object)
0x113: Call2 0x584

0x114: Stack[-2] = Stack[-1]
0x115: Pop(1)
0x116: Call2 0x4c5

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[-11]
0x11a: Stack[-1] = Stack[-6]
0x11b: Push(-2, 4); TaskCall(3)
0x11c: Call2 0x133

0x11d: Pop(-2, 4); TaskReturn
0x11e: Pop(2)
0x11f: @@ IsDialogEnd(Stack[-1])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: @ sync()
0x124: Pop(0)
0x125: @@ IsDialogEnd(Stack[-1])
0x126: Pop(0)
0x127: GOTO 0x121

0x128: PushEmpty(object)
0x129: Stack[-1] = Stack[-10]
0x12a: Call2 0x4b4

0x12b: Pop(1)
0x12c: @ StopDialog(Stack[-4])
0x12d: Pop(0)
0x12e: @@ GetReturnValue(Stack[-2])
0x12f: Pop(0)
0x130: Stack[-10] = Stack[-2]
0x131: Return(); Pop(8)

0x132: Stack[-4] = 0
0x133: PushEmpty()
0x134: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x135: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x136: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x137: Push((int) 1)
0x138: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0x195

0x13c: Pop(1)
0x13d: Push((int) 539063)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0x67e

0x145: Pop(1)
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: Push((int) 539064)
0x148: Push((int) 41700)
0x149: Push((int) 41012)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Call2 0x67e

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: Push((int) 539750)
0x152: Push((int) 41703)
0x153: Push((int) 41702)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x688

0x159: Pop(1)
0x15a: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15b: Push((int) 539753)
0x15c: Push((int) 41706)
0x15d: Push((int) 41705)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call2 0x692

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x165: Push((int) 539756)
0x166: Push((int) 41709)
0x167: Push((int) 41708)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Push((int) 539759)
0x16b: Push((int) -1)
0x16c: Push((int) 41711)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: Push((int) 541075)
0x170: Push((int) -1)
0x171: Push((int) 43180)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: GOTO 0x177

0x175: Return(); Pop(0)

0x176: GOTO 0x137

0x177: PushEmpty(bool)
0x178: Call2 0x62d

0x179: Pop(0)
0x17a: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x17b: @ lshWaitForAnimEnd()
0x17c: Pop(0)
0x17d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: GOTO 0x185

0x180: PushEmpty(string)
0x181: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x182: Call2 0x54f

0x183: Pop(1)
0x184: GOTO 0x17b

0x185: GOTO 0x194

0x186: Push("all")
0x187: Push("idle")
0x188: @ PlayAnimation(Stack[-2], Stack[-1])
0x189: Pop(2)
0x18a: @ WaitForAnimEnd()
0x18b: Pop(0)
0x18c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18d: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18e: GOTO 0x194

0x18f: Push("all")
0x190: Push("idle")
0x191: @ PlayAnimation(Stack[-2], Stack[-1])
0x192: Pop(2)
0x193: GOTO 0x18a

0x194: Return(); Pop(0)

0x195: PushEmpty()
0x196: PushEmpty(bool)
0x197: Call2 0x62d

0x198: Pop(0)
0x199: Pop(1); Push((bool) Stack[-1] == 0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Return(); Pop(0)

0x19c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Return(); Pop(0)

0x19f: PushEmpty(string, bool)
0x1a0: Stack[-2] = Stack[-3]
0x1a1: Push("")
0x1a2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a4: Stack[-1] = (bool) 0
0x1a5: GOTO 0x1a7

0x1a6: Stack[-1] = (bool) 1
0x1a7: Call2 0x55f

0x1a8: Pop(2)
0x1a9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty()
0x1ac: Push((int) 1)
0x1ad: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x1ae: PushEmpty()
0x1af: Call2 0x57d

0x1b0: Pop(0)
0x1b1: Push((int) 41701)
0x1b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b4: PushEmpty(object, object)
0x1b5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b7: Call2 0x659

0x1b8: Pop(2)
0x1b9: PushEmpty(object, object)
0x1ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bc: Call2 0x66d

0x1bd: Pop(2)
0x1be: PushEmpty(object, object)
0x1bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c1: Call2 0x62f

0x1c2: Pop(2)
0x1c3: Push((int) 41704)
0x1c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: PushEmpty(object, object)
0x1c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c9: Call2 0x65e

0x1ca: Pop(2)
0x1cb: Push((int) 41707)
0x1cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1ce: PushEmpty(object, object)
0x1cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d1: Call2 0x663

0x1d2: Pop(2)
0x1d3: PushEmpty(object, object)
0x1d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d6: Call2 0x66d

0x1d7: Pop(2)
0x1d8: PushEmpty(object, object)
0x1d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1db: Call2 0x672

0x1dc: Pop(2)
0x1dd: PushEmpty(object, object)
0x1de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0x636

0x1e1: Pop(2)
0x1e2: PushEmpty(object, object)
0x1e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Call2 0x63d

0x1e6: Pop(2)
0x1e7: PushEmpty(object, object)
0x1e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ea: Call2 0x648

0x1eb: Pop(2)
0x1ec: Push((int) 41710)
0x1ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ef: PushEmpty(object, object)
0x1f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f2: Call2 0x668

0x1f3: Pop(2)
0x1f4: PushEmpty(object, object)
0x1f5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f7: Call2 0x64e

0x1f8: Pop(2)
0x1f9: PushEmpty(object, object)
0x1fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fc: Call2 0x648

0x1fd: Pop(2)
0x1fe: PushEmpty(object, object)
0x1ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x200: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x201: Call2 0x677

0x202: Pop(2)
0x203: Push((int) 41011)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral"
0x208: Call2 0x195

0x209: Pop(1)
0x20a: Push((int) 539063)
0x20b: @@ SetMessage(Stack[-1])
0x20c: Pop(1)
0x20d: @@ ClearReplies()
0x20e: Pop(0)
0x20f: PushEmpty(bool, object)
0x210: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x211: Call2 0x67e

0x212: Pop(1)
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: Push((int) 539064)
0x215: Push((int) 41700)
0x216: Push((int) 41012)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: PushEmpty(bool, object)
0x21a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21b: Call2 0x67e

0x21c: Pop(1)
0x21d: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21e: Push((int) 539750)
0x21f: Push((int) 41703)
0x220: Push((int) 41702)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x688

0x226: Pop(1)
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: Push((int) 539753)
0x229: Push((int) 41706)
0x22a: Push((int) 41705)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: PushEmpty(bool, object)
0x22e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22f: Call2 0x692

0x230: Pop(1)
0x231: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x232: Push((int) 539756)
0x233: Push((int) 41709)
0x234: Push((int) 41708)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Push((int) 539759)
0x238: Push((int) -1)
0x239: Push((int) 41711)
0x23a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23b: Pop(3)
0x23c: Push((int) 541075)
0x23d: Push((int) -1)
0x23e: Push((int) 43180)
0x23f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: Return(); Pop(0)

0x242: Push((int) 41709)
0x243: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral"
0x247: Call2 0x195

0x248: Pop(1)
0x249: Push((int) 539757)
0x24a: @@ SetMessage(Stack[-1])
0x24b: Pop(1)
0x24c: @@ ClearReplies()
0x24d: Pop(0)
0x24e: Push((int) 539758)
0x24f: Push((int) -1)
0x250: Push((int) 41710)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Push((int) 41706)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x257: PushEmpty(string)
0x258: Stack[-1] = "Neutral"
0x259: Call2 0x195

0x25a: Pop(1)
0x25b: Push((int) 539754)
0x25c: @@ SetMessage(Stack[-1])
0x25d: Pop(1)
0x25e: @@ ClearReplies()
0x25f: Pop(0)
0x260: Push((int) 541088)
0x261: Push((int) 43197)
0x262: Push((int) 43196)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: Push((int) 541090)
0x266: Push((int) 43197)
0x267: Push((int) 43198)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Return(); Pop(0)

0x26b: Push((int) 43197)
0x26c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x26e: PushEmpty(string)
0x26f: Stack[-1] = "Neutral"
0x270: Call2 0x195

0x271: Pop(1)
0x272: Push((int) 541089)
0x273: @@ SetMessage(Stack[-1])
0x274: Pop(1)
0x275: @@ ClearReplies()
0x276: Pop(0)
0x277: Push((int) 539755)
0x278: Push((int) -1)
0x279: Push((int) 41707)
0x27a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(3)
0x27c: Return(); Pop(0)

0x27d: Push((int) 41703)
0x27e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x280: PushEmpty(string)
0x281: Stack[-1] = "Neutral"
0x282: Call2 0x195

0x283: Pop(1)
0x284: Push((int) 539751)
0x285: @@ SetMessage(Stack[-1])
0x286: Pop(1)
0x287: @@ ClearReplies()
0x288: Pop(0)
0x289: Push((int) 541077)
0x28a: Push((int) 43183)
0x28b: Push((int) 43182)
0x28c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28d: Pop(3)
0x28e: Return(); Pop(0)

0x28f: Push((int) 43183)
0x290: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x292: PushEmpty(string)
0x293: Stack[-1] = "Neutral"
0x294: Call2 0x195

0x295: Pop(1)
0x296: Push((int) 541078)
0x297: @@ SetMessage(Stack[-1])
0x298: Pop(1)
0x299: @@ ClearReplies()
0x29a: Pop(0)
0x29b: Push((int) 541085)
0x29c: Push((int) 43194)
0x29d: Push((int) 43192)
0x29e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29f: Pop(3)
0x2a0: Push((int) 541086)
0x2a1: Push((int) 43194)
0x2a2: Push((int) 43193)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Return(); Pop(0)

0x2a6: Push((int) 43194)
0x2a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2a9: PushEmpty(string)
0x2aa: Stack[-1] = "Neutral"
0x2ab: Call2 0x195

0x2ac: Pop(1)
0x2ad: Push((int) 541087)
0x2ae: @@ SetMessage(Stack[-1])
0x2af: Pop(1)
0x2b0: @@ ClearReplies()
0x2b1: Pop(0)
0x2b2: Push((int) 539752)
0x2b3: Push((int) -1)
0x2b4: Push((int) 41704)
0x2b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(3)
0x2b7: Return(); Pop(0)

0x2b8: Push((int) 41700)
0x2b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2bb: PushEmpty(string)
0x2bc: Stack[-1] = "Neutral"
0x2bd: Call2 0x195

0x2be: Pop(1)
0x2bf: Push((int) 539748)
0x2c0: @@ SetMessage(Stack[-1])
0x2c1: Pop(1)
0x2c2: @@ ClearReplies()
0x2c3: Pop(0)
0x2c4: Push((int) 541079)
0x2c5: Push((int) 43186)
0x2c6: Push((int) 43184)
0x2c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c8: Pop(3)
0x2c9: Push((int) 541080)
0x2ca: Push((int) 43186)
0x2cb: Push((int) 43185)
0x2cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cd: Pop(3)
0x2ce: Return(); Pop(0)

0x2cf: Push((int) 43186)
0x2d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2d2: PushEmpty(string)
0x2d3: Stack[-1] = "Neutral"
0x2d4: Call2 0x195

0x2d5: Pop(1)
0x2d6: Push((int) 541081)
0x2d7: @@ SetMessage(Stack[-1])
0x2d8: Pop(1)
0x2d9: @@ ClearReplies()
0x2da: Pop(0)
0x2db: Push((int) 541082)
0x2dc: Push((int) 43189)
0x2dd: Push((int) 43187)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Push((int) 541083)
0x2e1: Push((int) 43189)
0x2e2: Push((int) 43188)
0x2e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(3)
0x2e5: Return(); Pop(0)

0x2e6: Push((int) 43189)
0x2e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2e9: PushEmpty(string)
0x2ea: Stack[-1] = "Neutral"
0x2eb: Call2 0x195

0x2ec: Pop(1)
0x2ed: Push((int) 541084)
0x2ee: @@ SetMessage(Stack[-1])
0x2ef: Pop(1)
0x2f0: @@ ClearReplies()
0x2f1: Pop(0)
0x2f2: Push((int) 539749)
0x2f3: Push((int) -1)
0x2f4: Push((int) 41701)
0x2f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f6: Pop(3)
0x2f7: Return(); Pop(0)

0x2f8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2f9: PushEmpty(bool)
0x2fa: Call2 0x62d

0x2fb: Pop(0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fd: @ lshStopAnimation()
0x2fe: Pop(0)
0x2ff: GOTO 0x302

0x300: @ StopAnimation()
0x301: Pop(0)
0x302: Return(); Pop(0)

0x303: GOTO 0x1ac

0x304: Return(); Pop(0)

0x305: PushEmpty()
0x306: Call2 0x309

0x307: Pop(0)
0x308: Return(); Pop(0)

0x309: PushEmpty()
0x30a: Call2 0x332

0x30b: Pop(0)
0x30c: Return(); Pop(0)

0x30d: PushEmpty(bool, bool)
0x30e: Push("cleanup")
0x30f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x311: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x312: @ IsLoaded(Stack[-1])
0x313: Pop(0)
0x314: Pop(0); Push((bool) Stack[-1] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x316: PushEmpty(object)
0x317: Call2 0x584

0x318: Pop(0)
0x319: @ RemoveActor(Stack[-1])
0x31a: Pop(1)
0x31b: GOTO 0x320

0x31c: Push("restore")
0x31d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x320: Return(); Pop(2)

0x321: Push( Stack[1 + Tasks[-1].StackPointer] )
0x322: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x323: PushEmpty(object)
0x324: Call2 0x584

0x325: Pop(0)
0x326: @ RemoveActor(Stack[-1])
0x327: Pop(1)
0x328: @ Hold()
0x329: Pop(0)
0x32a: PushEmpty()
0x32b: Call2 0x39d

0x32c: Pop(0)
0x32d: Return(); Pop(0)

0x32e: PushEmpty()
0x32f: Call2 0x3ac

0x330: Pop(0)
0x331: Return(); Pop(0)

0x332: PushEmpty(bool)
0x333: Call2 0x46b

0x334: Pop(0)
0x335: Pop(1); Push((bool) Stack[-1] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x337: @ Hold()
0x338: Pop(0)
0x339: @ GetDirection(Stack[-0])
0x33a: Pop(0)
0x33b: PushEmpty()
0x33c: Call2 0x3e2

0x33d: Pop(0)
0x33e: GOTO 0x33b

0x33f: Return(); Pop(0)

0x340: PushEmpty(object, object)
0x341: Push("player")
0x342: @ FindActor(Stack[-2], Stack[-1])
0x343: Pop(1)
0x344: Pop(0); Push((bool) Stack[-1] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x346: Stack[-3] = (bool) 0
0x347: Return(); Pop(2)

0x348: PushEmpty(bool, object)
0x349: Stack[-1] = Stack[-3]
0x34a: Call2 0x462

0x34b: Stack[-5] = Stack[-2]
0x34c: Pop(2)
0x34d: Return(); Pop(2)

0x34e: Stack[-1] = 0
0x34f: Push(CvectorIndex(Stack[-0], 0))
0x350: Push(CvectorIndex(Stack[-0], 2))
0x351: @ RotateAsync(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: Return(); Pop(0)

0x354: PushEmpty(object, bool, object, bool)
0x355: Push("player")
0x356: @ FindActor(Stack[-3], Stack[-1])
0x357: Pop(1)
0x358: Pop(0); Push((bool) Stack[-2] == 0)
0x359: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35a: Stack[-5] = (bool) 0
0x35b: Return(); Pop(4)

0x35c: PushEmpty(float, object)
0x35d: Stack[-1] = Stack[-4]
0x35e: Call2 0x42e

0x35f: Pop(1)
0x360: Push((float)90000.0)
0x361: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: Stack[-5] = (bool) 0
0x364: Return(); Pop(4)

0x365: @ CanSee(Stack[-1], Stack[-2])
0x366: Pop(0)
0x367: Stack[-5] = Stack[-1]
0x368: Return(); Pop(4)

0x369: Stack[-2] = 0
0x36a: PushEmpty(float, float)
0x36b: Push((int) 8)
0x36c: Push((int) 16)
0x36d: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(2)
0x36f: Push((int) 10)
0x370: @ SetTimer(Stack[-1], Stack[-2])
0x371: Pop(1)
0x372: Return(); Pop(2)

0x373: Push((int) 10)
0x374: @ KillTimer(Stack[-1])
0x375: Pop(1)
0x376: Return(); Pop(0)

0x377: PushEmpty()
0x378: Push((int) 10)
0x379: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x37b: PushEmpty()
0x37c: Call2 0x373

0x37d: Pop(0)
0x37e: PushEmpty(bool)
0x37f: Stack[-1] = (bool) 0
0x380: PushEmpty(bool)
0x381: Call2 0x46b

0x382: Pop(0)
0x383: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x384: PushEmpty(bool)
0x385: Call2 0x354

0x386: Pop(0)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Stack[-1] = (bool) 1
0x389: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x38a: PushEmpty(bool)
0x38b: Call2 0x340

0x38c: Pop(0)
0x38d: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x38e: PushEmpty(bool, object)
0x38f: PushEmpty(object)
0x390: Call2 0x584

0x391: Stack[-2] = Stack[-1]
0x392: Pop(1)
0x393: Call2 0x4ff

0x394: Pop(2)
0x395: GOTO 0x39c

0x396: PushEmpty()
0x397: Call2 0x34f

0x398: Pop(0)
0x399: PushEmpty()
0x39a: Call2 0x36a

0x39b: Pop(0)
0x39c: Return(); Pop(0)

0x39d: PushEmpty()
0x39e: Call2 0x429

0x39f: Pop(0)
0x3a0: PushEmpty()
0x3a1: Call2 0x373

0x3a2: Pop(0)
0x3a3: @ lshStopSpeech()
0x3a4: Pop(0)
0x3a5: @ lshStopAnimation()
0x3a6: Pop(0)
0x3a7: @ StopAsync()
0x3a8: Pop(0)
0x3a9: @ Hold()
0x3aa: Pop(0)
0x3ab: Return(); Pop(0)

0x3ac: @ StopGroup0()
0x3ad: Pop(0)
0x3ae: PushEmpty()
0x3af: Call2 0x373

0x3b0: Pop(0)
0x3b1: PushEmpty(string)
0x3b2: Stack[-1] = "Neutral"
0x3b3: Call2 0x54f

0x3b4: Pop(1)
0x3b5: PushEmpty()
0x3b6: Call2 0x36a

0x3b7: Pop(0)
0x3b8: Return(); Pop(0)

0x3b9: PushEmpty()
0x3ba: Push(Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bc: PushEmpty()
0x3bd: Call2 0x36a

0x3be: Pop(0)
0x3bf: GOTO 0x3c4

0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Neutral"
0x3c2: Call2 0x54f

0x3c3: Pop(1)
0x3c4: Return(); Pop(0)

0x3c5: PushEmpty(bool, bool)
0x3c6: @ IsOverrideActive(Stack[-1])
0x3c7: Pop(0)
0x3c8: Pop(0); Push((bool) Stack[-1] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3ca: EventDisable(0)
0x3cb: PushEmpty()
0x3cc: Call2 0x429

0x3cd: Pop(0)
0x3ce: PushEmpty(bool, object)
0x3cf: Stack[-1] = Stack[-5]
0x3d0: Call2 0x462

0x3d1: Pop(2)
0x3d2: EventEnable(0)
0x3d3: PushEmpty(object)
0x3d4: Stack[-1] = Stack[-4]
0x3d5: Call2 0x79b

0x3d6: Pop(1)
0x3d7: PushEmpty(string)
0x3d8: Stack[-1] = "Neutral"
0x3d9: Call2 0x54f

0x3da: Pop(1)
0x3db: PushEmpty()
0x3dc: Call2 0x373

0x3dd: Pop(0)
0x3de: PushEmpty()
0x3df: Call2 0x36a

0x3e0: Pop(0)
0x3e1: Return(); Pop(2)

0x3e2: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x3e3: @ WaitForAnimEnd()
0x3e4: Pop(0)
0x3e5: PushEmpty(bool)
0x3e6: Call2 0x46b

0x3e7: Pop(0)
0x3e8: Pop(1); Push((bool) Stack[-1] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: Return(); Pop(12)

0x3eb: PushEmpty(int)
0x3ec: Call2 0x614

0x3ed: Stack[-7] = Stack[-1]
0x3ee: Pop(1)
0x3ef: Stack[-5] = (int) 0
0x3f0: PushEmpty(bool)
0x3f1: Stack[-1] = (bool) 0
0x3f2: Push((int) 5)
0x3f3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f5: PushEmpty(bool)
0x3f6: Call2 0x46b

0x3f7: Pop(0)
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f9: Stack[-1] = (bool) 1
0x3fa: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x3fb: Pop(0); Push((bool) Stack[-6] == 0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3fd: Push((int) 3)
0x3fe: @ Sleep(Stack[-1], Stack[-5])
0x3ff: Pop(1)
0x400: Pop(0); Push((bool) Stack[-4] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: GOTO 0x424

0x403: GOTO 0x419

0x404: @ irand(Stack[-3], Stack[-6])
0x405: Pop(0)
0x406: Push((int) 5)
0x407: @ irand(Stack[-3], Stack[-1])
0x408: Pop(1)
0x409: Push((int) 0)
0x40a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: Stack[-3] = (int) 0
0x40d: Push("all")
0x40e: PushEmpty(string, int)
0x40f: Stack[-1] = Stack[-6]
0x410: Call2 0x60d

0x411: Pop(1)
0x412: @ PlayAnimation(Stack[-2], Stack[-1])
0x413: Pop(2)
0x414: @ WaitForAnimEnd(Stack[-1])
0x415: Pop(0)
0x416: Pop(0); Push((bool) Stack[-1] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x418: GOTO 0x424

0x419: PushEmpty(bool)
0x41a: Call2 0x427

0x41b: Pop(0)
0x41c: Pop(1); Push((bool) Stack[-1] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41e: GOTO 0x424

0x41f: @ ResetAAS()
0x420: Pop(0)
0x421: Push((int) 1)
0x422: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x423: GOTO 0x3f0

0x424: @ ResetAAS()
0x425: Pop(0)
0x426: Return(); Pop(12)

0x427: Stack[-1] = (bool) 1
0x428: Return(); Pop(0)

0x429: @ StopAnimation()
0x42a: Pop(0)
0x42b: @ StopGroup0()
0x42c: Pop(0)
0x42d: Return(); Pop(0)

0x42e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x42f: @ GetPosition(Stack[-3])
0x430: Pop(0)
0x431: @@ GetPosition(Stack[-2])
0x432: Pop(0)
0x433: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x434: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x435: Return(); Pop(6)

0x436: PushEmpty(bool, bool)
0x437: Push("HasProperty")
0x438: Push((int) 2)
0x439: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x43a: Pop(1); Push((bool) Stack[-1] == 0)
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: Stack[-5] = (bool) 0
0x43d: Return(); Pop(2)

0x43e: @@ HasProperty(Stack[-3], Stack[-1])
0x43f: Pop(0)
0x440: Stack[-5] = Stack[-1]
0x441: Return(); Pop(2)

0x442: PushEmpty(float, float)
0x443: PushEmpty(bool, object, string)
0x444: Stack[-2] = Stack[-10]
0x445: Stack[-1] = Stack[-9]
0x446: Call2 0x436

0x447: Pop(2)
0x448: Pop(1); Push((bool) Stack[-1] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44a: Stack[-8] = (bool) 0
0x44b: Return(); Pop(2)

0x44c: @@ GetProperty(Stack[-6], Stack[-1])
0x44d: Pop(0)
0x44e: PushEmpty(float, float, float, float)
0x44f: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x450: Stack[-2] = Stack[-8]
0x451: Stack[-1] = Stack[-7]
0x452: Call2 0x594

0x453: Pop(3)
0x454: @@ SetProperty(Stack[-7], Stack[-1])
0x455: Pop(1)
0x456: Stack[-8] = (bool) 1
0x457: Return(); Pop(2)

0x458: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x459: @ GetPosition(Stack[-3])
0x45a: Pop(0)
0x45b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x45c: Push(CvectorIndex(Stack[-2], 0))
0x45d: Push(CvectorIndex(Stack[-3], 2))
0x45e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x45f: Pop(2)
0x460: Stack[-8] = Stack[-1]
0x461: Return(); Pop(6)

0x462: PushEmpty(cvector, cvector)
0x463: @@ GetPosition(Stack[-1])
0x464: Pop(0)
0x465: PushEmpty(bool, cvector)
0x466: Stack[-1] = Stack[-3]
0x467: Call2 0x458

0x468: Stack[-6] = Stack[-2]
0x469: Pop(2)
0x46a: Return(); Pop(2)

0x46b: PushEmpty(bool, bool)
0x46c: @ IsLoaded(Stack[-1])
0x46d: Pop(0)
0x46e: Stack[-3] = Stack[-1]
0x46f: Return(); Pop(2)

0x470: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x471: @@ GetPosition(Stack[-8])
0x472: Pop(0)
0x473: @@ GetEyesHeight(Stack[-9])
0x474: Pop(0)
0x475: Push(CvectorIndex(Stack[-8], 1))
0x476: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x477: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x478: @ GetPosition(Stack[-7])
0x479: Pop(0)
0x47a: @ GetEyesHeight(Stack[-9])
0x47b: Pop(0)
0x47c: Push(CvectorIndex(Stack[-7], 1))
0x47d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x47e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x47f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x480: Push(CvectorIndex(Stack[-6], 1))
0x481: Stack[-1] = (int) 0
0x482: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x483: Pop(0); Push(Stack[-6] | Stack[-6]);
0x484: Pop(1); Push(Sqrt(Stack[-1]))
0x485: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x486: Stack[-5] = -Stack[-6]; Pop(0);
0x487: Pop(0); Push(Stack[-6] * Stack[-19]);
0x488: PushEmpty(cvector, cvector)
0x489: Push(CVector(0.0, 1.0, 0.0))
0x48a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x48b: Call2 0x58a

0x48c: Pop(1)
0x48d: Push((int) 25)
0x48e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x48f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x490: Push(CVector(0.0, 10.0, 0.0))
0x491: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x492: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x493: @ IsOverrideActive(Stack[-2])
0x494: Pop(0)
0x495: Push(Stack[-2])
0x496: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x497: Stack[-21] = (bool) 0
0x498: Return(); Pop(18)

0x499: @ StopWorld()
0x49a: Pop(0)
0x49b: @ CameraTransit(Stack[-3], Stack[-5])
0x49c: Pop(0)
0x49d: Push(CvectorIndex(Stack[-4], 0))
0x49e: Push(CvectorIndex(Stack[-5], 2))
0x49f: @ Rotate(Stack[-2], Stack[-1])
0x4a0: Pop(2)
0x4a1: PushEmpty(bool)
0x4a2: Call2 0x62d

0x4a3: Pop(0)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a5: GOTO 0x4ae

0x4a6: Push("head")
0x4a7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4a8: Pop(1)
0x4a9: Push(Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ab: Push("head")
0x4ac: @ LookAsyncCamera(Stack[-1])
0x4ad: Pop(1)
0x4ae: @ CameraWaitForPlayFinish()
0x4af: Pop(0)
0x4b0: @ ResumeWorld()
0x4b1: Pop(0)
0x4b2: Stack[-21] = (bool) 1
0x4b3: Return(); Pop(18)

0x4b4: PushEmpty(bool, bool)
0x4b5: @ CameraSwitchToNormal()
0x4b6: Pop(0)
0x4b7: PushEmpty(bool)
0x4b8: Call2 0x62d

0x4b9: Pop(0)
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4bb: GOTO 0x4c4

0x4bc: Push("head")
0x4bd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4be: Pop(1)
0x4bf: Push(Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c1: Push("head")
0x4c2: @ UnlookAsync(Stack[-1])
0x4c3: Pop(1)
0x4c4: Return(); Pop(2)

0x4c5: PushEmpty(int, int, int, int)
0x4c6: Push("voice_common")
0x4c7: @ GetVariable(Stack[-1], Stack[-3])
0x4c8: Pop(1)
0x4c9: Push(Stack[-2])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4cb: PushEmpty(bool, object)
0x4cc: Stack[-1] = Stack[-7]
0x4cd: Call2 0x4ff

0x4ce: Pop(1)
0x4cf: Pop(1); Push((bool) Stack[-1] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d1: PushEmpty(bool, object)
0x4d2: Stack[-1] = Stack[-7]
0x4d3: Call2 0x524

0x4d4: Pop(1)
0x4d5: Pop(1); Push((bool) Stack[-1] == 0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d7: Stack[-6] = (bool) 0
0x4d8: Return(); Pop(4)

0x4d9: Push((int) 2)
0x4da: @ irand(Stack[-2], Stack[-1])
0x4db: Pop(1)
0x4dc: Push(Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4de: Push("voice_common")
0x4df: Push((int) 1)
0x4e0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4e1: Push((int) 3)
0x4e2: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4e3: @ SetVariable(Stack[-2], Stack[-1])
0x4e4: Pop(2)
0x4e5: GOTO 0x4ea

0x4e6: Push("voice_common")
0x4e7: Push((int) 0)
0x4e8: @ SetVariable(Stack[-2], Stack[-1])
0x4e9: Pop(2)
0x4ea: GOTO 0x4fd

0x4eb: PushEmpty(bool, object)
0x4ec: Stack[-1] = Stack[-7]
0x4ed: Call2 0x524

0x4ee: Pop(1)
0x4ef: Pop(1); Push((bool) Stack[-1] == 0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f1: PushEmpty(bool, object)
0x4f2: Stack[-1] = Stack[-7]
0x4f3: Call2 0x4ff

0x4f4: Pop(1)
0x4f5: Pop(1); Push((bool) Stack[-1] == 0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-6] = (bool) 0
0x4f8: Return(); Pop(4)

0x4f9: Push("voice_common")
0x4fa: Push((int) 1)
0x4fb: @ SetVariable(Stack[-2], Stack[-1])
0x4fc: Pop(2)
0x4fd: Stack[-6] = (bool) 1
0x4fe: Return(); Pop(4)

0x4ff: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x500: Stack[-5] = "c"
0x501: Stack[-4] = (int) 0
0x502: Push((int) 1)
0x503: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x504: Push((int) 1)
0x505: Pop(1); Push(Stack[-5] + Stack[-1]);
0x506: Pop(1); Push(Stack[-6] + Stack[-1]);
0x507: @@ HasProperty(Stack[-1], Stack[-4])
0x508: Pop(1)
0x509: Pop(0); Push((bool) Stack[-3] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50b: GOTO 0x50f

0x50c: Push((int) 1)
0x50d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x50e: GOTO 0x502

0x50f: Pop(0); Push((bool) Stack[-4] == 0)
0x510: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x511: Stack[-12] = (bool) 0
0x512: Return(); Pop(10)

0x513: Stack[-2] = (int) 0
0x514: Push((int) 1)
0x515: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x517: @ irand(Stack[-2], Stack[-4])
0x518: Pop(0)
0x519: Push((int) 1)
0x51a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x51b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x51c: @@ GetProperty(Stack[-1], Stack[-2])
0x51d: Pop(1)
0x51e: PushEmpty(bool, string)
0x51f: Stack[-1] = Stack[-3]
0x520: Call2 0x56e

0x521: Stack[-14] = Stack[-2]
0x522: Pop(2)
0x523: Return(); Pop(10)

0x524: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x525: Push("d")
0x526: PushEmpty(int)
0x527: Call2 0x604

0x528: Pop(0)
0x529: Pop(2); Push(Stack[-2] + Stack[-1]);
0x52a: Push("m")
0x52b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x52c: Stack[-4] = (int) 0
0x52d: Push((int) 1)
0x52e: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x52f: Push((int) 1)
0x530: Pop(1); Push(Stack[-5] + Stack[-1]);
0x531: Pop(1); Push(Stack[-6] + Stack[-1]);
0x532: @@ HasProperty(Stack[-1], Stack[-4])
0x533: Pop(1)
0x534: Pop(0); Push((bool) Stack[-3] == 0)
0x535: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x536: GOTO 0x53a

0x537: Push((int) 1)
0x538: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x539: GOTO 0x52d

0x53a: Pop(0); Push((bool) Stack[-4] == 0)
0x53b: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53c: Stack[-12] = (bool) 0
0x53d: Return(); Pop(10)

0x53e: Stack[-2] = (int) 0
0x53f: Push((int) 1)
0x540: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x542: @ irand(Stack[-2], Stack[-4])
0x543: Pop(0)
0x544: Push((int) 1)
0x545: Pop(1); Push(Stack[-3] + Stack[-1]);
0x546: Pop(1); Push(Stack[-6] + Stack[-1]);
0x547: @@ GetProperty(Stack[-1], Stack[-2])
0x548: Pop(1)
0x549: PushEmpty(bool, string)
0x54a: Stack[-1] = Stack[-3]
0x54b: Call2 0x56e

0x54c: Stack[-14] = Stack[-2]
0x54d: Pop(2)
0x54e: Return(); Pop(10)

0x54f: PushEmpty(bool, float, float, bool, float, float)
0x550: @ lshHasAnimation(Stack[-3], Stack[-7])
0x551: Pop(0)
0x552: Push(Stack[-3])
0x553: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x554: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x555: Pop(0)
0x556: Push((bool) 0)
0x557: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x558: Pop(1)
0x559: GOTO 0x55e

0x55a: Push("Can't find lsh animation : ")
0x55b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x55c: @ Trace(Stack[-1])
0x55d: Pop(1)
0x55e: Return(); Pop(6)

0x55f: PushEmpty(bool, float, float, bool, float, float)
0x560: @ lshHasAnimation(Stack[-3], Stack[-8])
0x561: Pop(0)
0x562: Push(Stack[-3])
0x563: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x564: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x565: Pop(0)
0x566: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x567: Pop(0)
0x568: GOTO 0x56d

0x569: Push("Can't find lsh animation : ")
0x56a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x56b: @ Trace(Stack[-1])
0x56c: Pop(1)
0x56d: Return(); Pop(6)

0x56e: PushEmpty(bool, bool)
0x56f: PushEmpty(bool)
0x570: Call2 0x62d

0x571: Pop(0)
0x572: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x573: @ lshHasSpeech(Stack[-1], Stack[-3])
0x574: Pop(0)
0x575: Push(Stack[-1])
0x576: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x577: @ lshPlaySpeech(Stack[-3])
0x578: Pop(0)
0x579: Stack[-4] = (bool) 1
0x57a: Return(); Pop(2)

0x57b: Stack[-4] = (bool) 0
0x57c: Return(); Pop(2)

0x57d: PushEmpty(bool)
0x57e: Call2 0x62d

0x57f: Pop(0)
0x580: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x581: @ lshStopSpeech()
0x582: Pop(0)
0x583: Return(); Pop(0)

0x584: PushEmpty(object, object)
0x585: @ self(Stack[-1])
0x586: Pop(0)
0x587: Stack[-3] = Stack[-1]
0x588: Return(); Pop(2)

0x589: Stack[-1] = 0
0x58a: PushEmpty(float, float)
0x58b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x58c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x58d: Push((float)0.0)
0x58e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x591: Return(); Pop(2)

0x592: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x593: Return(); Pop(2)

0x594: PushEmpty()
0x595: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x596: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x597: Stack[-4] = Stack[-2]
0x598: Return(); Pop(0)

0x599: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x59a: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59b: Stack[-4] = Stack[-1]
0x59c: Return(); Pop(0)

0x59d: Stack[-4] = Stack[-3]
0x59e: Return(); Pop(0)

0x59f: PushEmpty(object, object)
0x5a0: @ CreateIntVector(Stack[-1])
0x5a1: Pop(0)
0x5a2: @@ add(Stack[-4])
0x5a3: Pop(0)
0x5a4: @@ add(Stack[-3])
0x5a5: Pop(0)
0x5a6: Push((int) 3)
0x5a7: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5a8: Pop(1)
0x5a9: Return(); Pop(2)

0x5aa: Stack[-1] = 0
0x5ab: PushEmpty(int, int, bool, int, int, bool)
0x5ac: @@ GetItemID(Stack[-3])
0x5ad: Pop(0)
0x5ae: Push("Category")
0x5af: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x5b0: Pop(1)
0x5b1: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x5b2: Pop(0)
0x5b3: Pop(0); Push((bool) Stack[-1] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b5: @@ DropItems(Stack[-8], Stack[-7])
0x5b6: Pop(0)
0x5b7: GOTO 0x5bd

0x5b8: PushEmpty(int, int)
0x5b9: Stack[-2] = Stack[-5]
0x5ba: Stack[-1] = Stack[-9]
0x5bb: Call2 0x59f

0x5bc: Pop(2)
0x5bd: Return(); Pop(6)

0x5be: PushEmpty(object, object)
0x5bf: @ CreateInvItem(Stack[-1])
0x5c0: Pop(0)
0x5c1: @@ SetItemName(Stack[-4])
0x5c2: Pop(0)
0x5c3: PushEmpty(object, object, int)
0x5c4: Stack[-3] = Stack[-8]
0x5c5: Stack[-2] = Stack[-4]
0x5c6: Stack[-1] = Stack[-6]
0x5c7: Call2 0x5ab

0x5c8: Pop(3)
0x5c9: Return(); Pop(2)

0x5ca: Stack[-1] = 0
0x5cb: PushEmpty()
0x5cc: Pop(0); Push((bool) Stack[-2] == 0)
0x5cd: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5ce: Stack[-3] = (bool) 0
0x5cf: Return(); Pop(0)

0x5d0: Push((int) 0)
0x5d1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d3: Push((int) 8)
0x5d4: @ SendWorldWndMessage(Stack[-1])
0x5d5: Pop(1)
0x5d6: GOTO 0x5e0

0x5d7: Push((int) 0)
0x5d8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5da: Push((int) 9)
0x5db: @ SendWorldWndMessage(Stack[-1])
0x5dc: Pop(1)
0x5dd: GOTO 0x5e0

0x5de: Stack[-3] = (bool) 0
0x5df: Return(); Pop(0)

0x5e0: PushEmpty(float)
0x5e1: Stack[-1] = Stack[-2]
0x5e2: Call2 0x5ee

0x5e3: Pop(1)
0x5e4: PushEmpty(bool, object, string, float, float, float)
0x5e5: Stack[-5] = Stack[-8]
0x5e6: Stack[-4] = "reputation"
0x5e7: Stack[-3] = Stack[-7]
0x5e8: Stack[-2] = (int) 0
0x5e9: Stack[-1] = (int) 1
0x5ea: Call2 0x442

0x5eb: Pop(6)
0x5ec: Stack[-3] = (bool) 1
0x5ed: Return(); Pop(0)

0x5ee: PushEmpty(object, object)
0x5ef: @ CreateFloatVector(Stack[-1])
0x5f0: Pop(0)
0x5f1: @@ add(Stack[-3])
0x5f2: Pop(0)
0x5f3: Push((int) 16)
0x5f4: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5f5: Pop(1)
0x5f6: Return(); Pop(2)

0x5f7: Stack[-1] = 0
0x5f8: PushEmpty(object, object)
0x5f9: @ FindActor(Stack[-1], Stack[-4])
0x5fa: Pop(0)
0x5fb: Pop(0); Push((bool) Stack[-1] == 0)
0x5fc: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fd: Stack[-5] = (bool) 0
0x5fe: Return(); Pop(2)

0x5ff: @ Trigger(Stack[-1], Stack[-3])
0x600: Pop(0)
0x601: Stack[-5] = (bool) 1
0x602: Return(); Pop(2)

0x603: Stack[-1] = 0
0x604: PushEmpty(float, float)
0x605: @ GetGameTime(Stack[-1])
0x606: Pop(0)
0x607: Push((int) 1)
0x608: PushEmpty(int)
0x609: Push((int) 24)
0x60a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x60b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x60c: Return(); Pop(2)

0x60d: PushEmpty(string, string)
0x60e: Stack[-1] = "idle"
0x60f: Push(Stack[-3])
0x610: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x611: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x612: Stack[-4] = Stack[-1]
0x613: Return(); Pop(2)

0x614: PushEmpty(int, bool, int, bool)
0x615: Stack[-2] = (int) 0
0x616: Push("all")
0x617: PushEmpty(string, int)
0x618: Stack[-1] = Stack[-5]
0x619: Call2 0x60d

0x61a: Pop(1)
0x61b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x61c: Pop(2)
0x61d: Pop(0); Push((bool) Stack[-1] == 0)
0x61e: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61f: GOTO 0x623

0x620: Push((int) 1)
0x621: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x622: GOTO 0x616

0x623: Stack[-5] = Stack[-2]
0x624: Return(); Pop(4)

0x625: Stack[-1] = (int) 515592
0x626: Return(); Pop(0)

0x627: Stack[-1] = (int) 511961
0x628: Return(); Pop(0)

0x629: Stack[-1] = "ui/NPC_Burah.png"
0x62a: Return(); Pop(0)

0x62b: Stack[-1] = "ui/NPC_Burah_b.png"
0x62c: Return(); Pop(0)

0x62d: Stack[-1] = (bool) 1
0x62e: Return(); Pop(0)

0x62f: PushEmpty()
0x630: PushEmpty(bool, object, float)
0x631: Stack[-2] = Stack[-5]
0x632: Stack[-1] = (float) 0.05
0x633: Call2 0x5cb

0x634: Pop(3)
0x635: Return(); Pop(0)

0x636: PushEmpty()
0x637: PushEmpty(bool, object, float)
0x638: Stack[-2] = Stack[-5]
0x639: Stack[-1] = (float) -0.05
0x63a: Call2 0x5cb

0x63b: Pop(3)
0x63c: Return(); Pop(0)

0x63d: PushEmpty()
0x63e: Push("beta_pills 5 is given")
0x63f: @ Trace(Stack[-1])
0x640: Pop(1)
0x641: PushEmpty(object, string, int)
0x642: Stack[-3] = Stack[-5]
0x643: Stack[-2] = "beta_pills"
0x644: Stack[-1] = (int) 5
0x645: Call2 0x5be

0x646: Pop(3)
0x647: Return(); Pop(0)

0x648: PushEmpty()
0x649: Push("playsound")
0x64a: Push("giveitem")
0x64b: @ TriggerWorld(Stack[-2], Stack[-1])
0x64c: Pop(2)
0x64d: Return(); Pop(0)

0x64e: PushEmpty()
0x64f: Push("burah_serum is given")
0x650: @ Trace(Stack[-1])
0x651: Pop(1)
0x652: PushEmpty(object, string, int)
0x653: Stack[-3] = Stack[-5]
0x654: Stack[-2] = "burah_serum"
0x655: Stack[-1] = (int) 1
0x656: Call2 0x5be

0x657: Pop(3)
0x658: Return(); Pop(0)

0x659: PushEmpty()
0x65a: PushEmpty()
0x65b: Call2 0x77a

0x65c: Pop(0)
0x65d: Return(); Pop(0)

0x65e: PushEmpty()
0x65f: PushEmpty()
0x660: Call2 0x782

0x661: Pop(0)
0x662: Return(); Pop(0)

0x663: PushEmpty()
0x664: PushEmpty()
0x665: Call2 0x76c

0x666: Pop(0)
0x667: Return(); Pop(0)

0x668: PushEmpty()
0x669: PushEmpty()
0x66a: Call2 0x796

0x66b: Pop(0)
0x66c: Return(); Pop(0)

0x66d: PushEmpty()
0x66e: PushEmpty()
0x66f: Call2 0x715

0x670: Pop(0)
0x671: Return(); Pop(0)

0x672: PushEmpty()
0x673: PushEmpty()
0x674: Call2 0x70f

0x675: Pop(0)
0x676: Return(); Pop(0)

0x677: PushEmpty()
0x678: PushEmpty(bool, object, float)
0x679: Stack[-2] = Stack[-5]
0x67a: Stack[-1] = (float) -0.3
0x67b: Call2 0x5cb

0x67c: Pop(3)
0x67d: Return(); Pop(0)

0x67e: PushEmpty()
0x67f: PushEmpty(bool, object)
0x680: Stack[-1] = Stack[-3]
0x681: Call2 0x69c

0x682: Pop(1)
0x683: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x684: Stack[-2] = (bool) 1
0x685: Return(); Pop(0)

0x686: Stack[-2] = (bool) 0
0x687: Return(); Pop(0)

0x688: PushEmpty()
0x689: PushEmpty(bool, object)
0x68a: Stack[-1] = Stack[-3]
0x68b: Call2 0x6a2

0x68c: Pop(1)
0x68d: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68e: Stack[-2] = (bool) 1
0x68f: Return(); Pop(0)

0x690: Stack[-2] = (bool) 0
0x691: Return(); Pop(0)

0x692: PushEmpty()
0x693: PushEmpty(bool, object)
0x694: Stack[-1] = Stack[-3]
0x695: Call2 0x6a8

0x696: Pop(1)
0x697: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x698: Stack[-2] = (bool) 1
0x699: Return(); Pop(0)

0x69a: Stack[-2] = (bool) 0
0x69b: Return(); Pop(0)

0x69c: PushEmpty()
0x69d: PushEmpty(bool)
0x69e: Call2 0x78a

0x69f: Stack[-3] = Stack[-1]
0x6a0: Pop(1)
0x6a1: Return(); Pop(0)

0x6a2: PushEmpty()
0x6a3: PushEmpty(bool)
0x6a4: Call2 0x774

0x6a5: Stack[-3] = Stack[-1]
0x6a6: Pop(1)
0x6a7: Return(); Pop(0)

0x6a8: PushEmpty()
0x6a9: PushEmpty(bool)
0x6aa: Call2 0x790

0x6ab: Stack[-3] = Stack[-1]
0x6ac: Pop(1)
0x6ad: Return(); Pop(0)

0x6ae: PushEmpty(object, object)
0x6af: Push((int) 753)
0x6b0: Push((int) 2)
0x6b1: Push((int) 539738)
0x6b2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6b3: Pop(3)
0x6b4: PushEmpty(bool, object, int)
0x6b5: Stack[-2] = Stack[-4]
0x6b6: Stack[-1] = (int) 751
0x6b7: Call2 0x6e2

0x6b8: Pop(3)
0x6b9: Return(); Pop(2)

0x6ba: Stack[-1] = 0
0x6bb: PushEmpty(object, object)
0x6bc: Push((int) 754)
0x6bd: Push((int) 2)
0x6be: Push((int) 539739)
0x6bf: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6c0: Pop(3)
0x6c1: PushEmpty(bool, object, int)
0x6c2: Stack[-2] = Stack[-4]
0x6c3: Stack[-1] = (int) 751
0x6c4: Call2 0x6e2

0x6c5: Pop(3)
0x6c6: Return(); Pop(2)

0x6c7: Stack[-1] = 0
0x6c8: PushEmpty(object, object)
0x6c9: Push((int) 761)
0x6ca: Push((int) 2)
0x6cb: Push((int) 539746)
0x6cc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6cd: Pop(3)
0x6ce: PushEmpty(bool, object, int)
0x6cf: Stack[-2] = Stack[-4]
0x6d0: Stack[-1] = (int) 757
0x6d1: Call2 0x6e2

0x6d2: Pop(3)
0x6d3: Return(); Pop(2)

0x6d4: Stack[-1] = 0
0x6d5: PushEmpty(object, object)
0x6d6: @ GetDiaryRoot(Stack[-1])
0x6d7: Pop(0)
0x6d8: Pop(0); Push((bool) Stack[-1] == 0)
0x6d9: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6da: Push("Can't retrieve diary root")
0x6db: @ Trace(Stack[-1])
0x6dc: Pop(1)
0x6dd: Stack[-3] = (bool) 0
0x6de: Return(); Pop(2)

0x6df: Stack[-3] = Stack[-1]
0x6e0: Return(); Pop(2)

0x6e1: Stack[-1] = 0
0x6e2: PushEmpty(object, object, int, object, object, int)
0x6e3: PushEmpty(object)
0x6e4: Call2 0x6d5

0x6e5: Stack[-4] = Stack[-1]
0x6e6: Pop(1)
0x6e7: @@ Find(Stack[-7], Stack[-2])
0x6e8: Pop(0)
0x6e9: Pop(0); Push((bool) Stack[-2] == 0)
0x6ea: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6eb: Push("Can't find diary parent with id: ")
0x6ec: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6ed: @ Trace(Stack[-1])
0x6ee: Pop(1)
0x6ef: Stack[-9] = (bool) 0
0x6f0: Return(); Pop(6)

0x6f1: @@ AddChild(Stack[-8])
0x6f2: Pop(0)
0x6f3: Push((int) 7)
0x6f4: @ SendWorldWndMessage(Stack[-1])
0x6f5: Pop(1)
0x6f6: @@ GetCategory(Stack[-1])
0x6f7: Pop(0)
0x6f8: @ SetDiarySection(Stack[-1])
0x6f9: Pop(0)
0x6fa: Stack[-9] = (bool) 0
0x6fb: Return(); Pop(6)

0x6fc: Stack[-2] = 0
0x6fd: Stack[-3] = 0
0x6fe: PushEmpty(int, int)
0x6ff: Push("branch")
0x700: @ GetVariable(Stack[-1], Stack[-2])
0x701: Pop(1)
0x702: Push((int) 0)
0x703: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x704: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x705: Stack[-3] = (int) 1
0x706: Return(); Pop(2)

0x707: GOTO 0x70d

0x708: Push((int) 1)
0x709: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x70a: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70b: Stack[-3] = (int) 2
0x70c: Return(); Pop(2)

0x70d: Stack[-3] = (int) 3
0x70e: Return(); Pop(2)

0x70f: PushEmpty(bool, string, string)
0x710: Stack[-2] = "klara2_npc_positioner"
0x711: Stack[-1] = "remove_danko"
0x712: Call2 0x5f8

0x713: Pop(3)
0x714: Return(); Pop(0)

0x715: PushEmpty(bool, string, string)
0x716: Stack[-2] = "klara2_npc_positioner"
0x717: Stack[-1] = "remove_burah"
0x718: Call2 0x5f8

0x719: Pop(3)
0x71a: Return(); Pop(0)

0x71b: PushEmpty(int, int)
0x71c: Push("k2system_klara_day")
0x71d: @ GetVariable(Stack[-1], Stack[-2])
0x71e: Pop(1)
0x71f: Stack[-3] = Stack[-1]
0x720: Return(); Pop(2)

0x721: PushEmpty(int, int)
0x722: Push("k2system_burah_day")
0x723: @ GetVariable(Stack[-1], Stack[-2])
0x724: Pop(1)
0x725: Stack[-3] = Stack[-1]
0x726: Return(); Pop(2)

0x727: PushEmpty(int, int)
0x728: Push("k2system_danko_day")
0x729: @ GetVariable(Stack[-1], Stack[-2])
0x72a: Pop(1)
0x72b: Stack[-3] = Stack[-1]
0x72c: Return(); Pop(2)

0x72d: PushEmpty(int, int, int, int)
0x72e: PushEmpty(int)
0x72f: Call2 0x721

0x730: Stack[-3] = Stack[-1]
0x731: Pop(1)
0x732: Push("k2system_burah_state")
0x733: Pop(1); Push(Stack[-1] + Stack[-3]);
0x734: @ GetVariable(Stack[-1], Stack[-2])
0x735: Pop(1)
0x736: Stack[-5] = Stack[-1]
0x737: Return(); Pop(4)

0x738: PushEmpty(int, int)
0x739: PushEmpty(int)
0x73a: Call2 0x721

0x73b: Stack[-2] = Stack[-1]
0x73c: Pop(1)
0x73d: Push("k2system_burah_state")
0x73e: Pop(1); Push(Stack[-1] + Stack[-2]);
0x73f: @ SetVariable(Stack[-1], Stack[-4])
0x740: Pop(1)
0x741: Return(); Pop(2)

0x742: PushEmpty(int, int, int, int)
0x743: PushEmpty(int)
0x744: Call2 0x727

0x745: Stack[-3] = Stack[-1]
0x746: Pop(1)
0x747: Push("k2system_danko_state")
0x748: Pop(1); Push(Stack[-1] + Stack[-3]);
0x749: @ GetVariable(Stack[-1], Stack[-2])
0x74a: Pop(1)
0x74b: Stack[-5] = Stack[-1]
0x74c: Return(); Pop(4)

0x74d: PushEmpty(int, int)
0x74e: PushEmpty(int)
0x74f: Call2 0x727

0x750: Stack[-2] = Stack[-1]
0x751: Pop(1)
0x752: Push("k2system_danko_state")
0x753: Pop(1); Push(Stack[-1] + Stack[-2]);
0x754: @ SetVariable(Stack[-1], Stack[-4])
0x755: Pop(1)
0x756: Return(); Pop(2)

0x757: PushEmpty(int, int, int, int)
0x758: PushEmpty(int)
0x759: Call2 0x71b

0x75a: Stack[-3] = Stack[-1]
0x75b: Pop(1)
0x75c: Push("k2system_klara_state")
0x75d: Pop(1); Push(Stack[-1] + Stack[-3]);
0x75e: @ GetVariable(Stack[-1], Stack[-2])
0x75f: Pop(1)
0x760: Stack[-5] = Stack[-1]
0x761: Return(); Pop(4)

0x762: PushEmpty(int, int)
0x763: PushEmpty(int)
0x764: Call2 0x71b

0x765: Stack[-2] = Stack[-1]
0x766: Pop(1)
0x767: Push("k2system_klara_state")
0x768: Pop(1); Push(Stack[-1] + Stack[-2]);
0x769: @ SetVariable(Stack[-1], Stack[-4])
0x76a: Pop(1)
0x76b: Return(); Pop(2)

0x76c: PushEmpty()
0x76d: Call2 0x6c8

0x76e: Pop(0)
0x76f: PushEmpty(int)
0x770: Stack[-1] = (int) 3
0x771: Call2 0x74d

0x772: Pop(1)
0x773: Return(); Pop(0)

0x774: PushEmpty(int)
0x775: Call2 0x742

0x776: Pop(0)
0x777: Push((int) 1)
0x778: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x779: Return(); Pop(0)

0x77a: PushEmpty()
0x77b: Call2 0x6ae

0x77c: Pop(0)
0x77d: PushEmpty(int)
0x77e: Stack[-1] = (int) 2
0x77f: Call2 0x738

0x780: Pop(1)
0x781: Return(); Pop(0)

0x782: PushEmpty()
0x783: Call2 0x6bb

0x784: Pop(0)
0x785: PushEmpty(int)
0x786: Stack[-1] = (int) 1
0x787: Call2 0x738

0x788: Pop(1)
0x789: Return(); Pop(0)

0x78a: PushEmpty(int)
0x78b: Call2 0x72d

0x78c: Pop(0)
0x78d: Push((int) 0)
0x78e: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x78f: Return(); Pop(0)

0x790: PushEmpty(int)
0x791: Call2 0x757

0x792: Pop(0)
0x793: Push((int) 1)
0x794: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x795: Return(); Pop(0)

0x796: PushEmpty(int)
0x797: Stack[-1] = (int) 3
0x798: Call2 0x762

0x799: Pop(1)
0x79a: Return(); Pop(0)

0x79b: PushEmpty(int, int)
0x79c: Push("day")
0x79d: @ GetProperty(Stack[-1], Stack[-2])
0x79e: Pop(1)
0x79f: PushEmpty(int)
0x7a0: Call2 0x604

0x7a1: Pop(0)
0x7a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a3: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a4: PushEmpty(int, object)
0x7a5: Stack[-1] = Stack[-5]
0x7a6: Push(-2, 1); TaskCall(2)
0x7a7: Call2 0xe2

0x7a8: Pop(-2, 1); TaskReturn
0x7a9: Pop(2)
0x7aa: GOTO 0x7b1

0x7ab: PushEmpty(int, object)
0x7ac: Stack[-1] = Stack[-5]
0x7ad: Push(-2, 1); TaskCall(0)
0x7ae: Call2 0x0

0x7af: Pop(-2, 1); TaskReturn
0x7b0: Pop(2)
0x7b1: Return(); Pop(2)

