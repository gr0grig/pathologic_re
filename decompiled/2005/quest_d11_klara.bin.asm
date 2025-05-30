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
	Saveyouall
	idle
	Smile
	Fear
	Grin
	Sly
	cleanup
	restore
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
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	d11q06KlaraRing
	d11q06KlaraRing is given
	d11q06KapellaRing
	d11q06
	ood11Klara2
	ood11Klara3
	ood11Klara1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png

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
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x35c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdc Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x360 Vars = (string)
		EVENT_6 Op = 0x374 Vars = ()
		EVENT_5 Op = 0x381 Vars = ()
		EVENT_7 Op = 0x3ca Vars = (int)
		EVENT_45 Op = 0x40c Vars = (bool)
		EVENT_0 Op = 0x418 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x4a1

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x6dc

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x6da

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x6de

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x6e0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6c9

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
0x31: Call2 0x5b5

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x4f6

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
0x48: Call2 0x4e5

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
0x56: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x67a

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x650

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Neutral"
0x63: Call2 0xc6

0x64: Pop(1)
0x65: Push((int) 514350)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 514351)
0x6b: Push((int) 15575)
0x6c: Push((int) 15574)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 538680)
0x70: Push((int) 15575)
0x71: Push((int) 40578)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0xa8

0x75: PushEmpty(string)
0x76: Stack[-1] = "Saveyouall"
0x77: Call2 0xc6

0x78: Pop(1)
0x79: Push((int) 514514)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x656

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x662

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 1
0x8b: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8c: Push((int) 534506)
0x8d: Push((int) 40595)
0x8e: Push((int) 36147)
0x8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90: Pop(3)
0x91: PushEmpty(bool, object)
0x92: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x93: Call2 0x66e

0x94: Pop(1)
0x95: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x96: Push((int) 538711)
0x97: Push((int) 40619)
0x98: Push((int) 40618)
0x99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a: Pop(3)
0x9b: Push((int) 514515)
0x9c: Push((int) -1)
0x9d: Push((int) 15754)
0x9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(3)
0xa0: Push((int) 538691)
0xa1: Push((int) -1)
0xa2: Push((int) 40594)
0xa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4: Pop(3)
0xa5: GOTO 0xa8

0xa6: Return(); Pop(0)

0xa7: GOTO 0x55

0xa8: PushEmpty(bool)
0xa9: Call2 0x6e2

0xaa: Pop(0)
0xab: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xac: @ lshWaitForAnimEnd()
0xad: Pop(0)
0xae: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: GOTO 0xb6

0xb1: PushEmpty(string)
0xb2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb3: Call2 0x580

0xb4: Pop(1)
0xb5: GOTO 0xac

0xb6: GOTO 0xc5

0xb7: Push("all")
0xb8: Push("idle")
0xb9: @ PlayAnimation(Stack[-2], Stack[-1])
0xba: Pop(2)
0xbb: @ WaitForAnimEnd()
0xbc: Pop(0)
0xbd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: GOTO 0xc5

0xc0: Push("all")
0xc1: Push("idle")
0xc2: @ PlayAnimation(Stack[-2], Stack[-1])
0xc3: Pop(2)
0xc4: GOTO 0xbb

0xc5: Return(); Pop(0)

0xc6: PushEmpty()
0xc7: PushEmpty(bool)
0xc8: Call2 0x6e2

0xc9: Pop(0)
0xca: Pop(1); Push((bool) Stack[-1] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: Return(); Pop(0)

0xcd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Return(); Pop(0)

0xd0: PushEmpty(string, bool)
0xd1: Stack[-2] = Stack[-3]
0xd2: Push("")
0xd3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd5: Stack[-1] = (bool) 0
0xd6: GOTO 0xd8

0xd7: Stack[-1] = (bool) 1
0xd8: Call2 0x590

0xd9: Pop(2)
0xda: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdb: Return(); Pop(0)

0xdc: PushEmpty()
0xdd: Push((int) 1)
0xde: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0xdf: PushEmpty()
0xe0: Call2 0x5ae

0xe1: Pop(0)
0xe2: Push((int) 36147)
0xe3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe5: PushEmpty(object, object)
0xe6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8: Call2 0x644

0xe9: Pop(2)
0xea: Push((int) 36151)
0xeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x617

0xf1: Pop(2)
0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x629

0xf6: Pop(2)
0xf7: Push((int) 40618)
0xf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x64a

0xfe: Pop(2)
0xff: Push((int) 15573)
0x100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x104: Call2 0x67a

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x650

0x10b: Pop(2)
0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral"
0x10e: Call2 0xc6

0x10f: Pop(1)
0x110: Push((int) 514350)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 514351)
0x116: Push((int) 15575)
0x117: Push((int) 15574)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 538680)
0x11b: Push((int) 15575)
0x11c: Push((int) 40578)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Saveyouall"
0x122: Call2 0xc6

0x123: Pop(1)
0x124: Push((int) 514514)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: PushEmpty(bool)
0x12a: Stack[-1] = (bool) 0
0x12b: PushEmpty(bool, object)
0x12c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Call2 0x656

0x12e: Pop(1)
0x12f: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x130: PushEmpty(bool, object)
0x131: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x132: Call2 0x662

0x133: Pop(1)
0x134: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x135: Stack[-1] = (bool) 1
0x136: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x137: Push((int) 534506)
0x138: Push((int) 40595)
0x139: Push((int) 36147)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Call2 0x66e

0x13f: Pop(1)
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: Push((int) 538711)
0x142: Push((int) 40619)
0x143: Push((int) 40618)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 514515)
0x147: Push((int) -1)
0x148: Push((int) 15754)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Push((int) 538691)
0x14c: Push((int) -1)
0x14d: Push((int) 40594)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Push((int) 40619)
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Smile"
0x156: Call2 0xc6

0x157: Pop(1)
0x158: Push((int) 538712)
0x159: @@ SetMessage(Stack[-1])
0x15a: Pop(1)
0x15b: @@ ClearReplies()
0x15c: Pop(0)
0x15d: Push((int) 538714)
0x15e: Push((int) 40622)
0x15f: Push((int) 40621)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Push((int) 538713)
0x163: Push((int) -1)
0x164: Push((int) 40620)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Return(); Pop(0)

0x168: Push((int) 40622)
0x169: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x16b: PushEmpty(string)
0x16c: Stack[-1] = "Smile"
0x16d: Call2 0xc6

0x16e: Pop(1)
0x16f: Push((int) 538715)
0x170: @@ SetMessage(Stack[-1])
0x171: Pop(1)
0x172: @@ ClearReplies()
0x173: Pop(0)
0x174: Push((int) 538716)
0x175: Push((int) 40624)
0x176: Push((int) 40623)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 40624)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Smile"
0x17f: Call2 0xc6

0x180: Pop(1)
0x181: Push((int) 538717)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 538718)
0x187: Push((int) -1)
0x188: Push((int) 40625)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 538719)
0x18c: Push((int) -1)
0x18d: Push((int) 40626)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 40595)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Saveyouall"
0x196: Call2 0xc6

0x197: Pop(1)
0x198: Push((int) 538692)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 538693)
0x19e: Push((int) 40616)
0x19f: Push((int) 40596)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Push((int) 538699)
0x1a3: Push((int) 40604)
0x1a4: Push((int) 40603)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 40604)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ab: PushEmpty(string)
0x1ac: Stack[-1] = "Fear"
0x1ad: Call2 0xc6

0x1ae: Pop(1)
0x1af: Push((int) 538700)
0x1b0: @@ SetMessage(Stack[-1])
0x1b1: Pop(1)
0x1b2: @@ ClearReplies()
0x1b3: Pop(0)
0x1b4: Push((int) 538701)
0x1b5: Push((int) 40607)
0x1b6: Push((int) 40605)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Push((int) 538702)
0x1ba: Push((int) 40609)
0x1bb: Push((int) 40606)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Return(); Pop(0)

0x1bf: Push((int) 40609)
0x1c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c2: PushEmpty(string)
0x1c3: Stack[-1] = "Fear"
0x1c4: Call2 0xc6

0x1c5: Pop(1)
0x1c6: Push((int) 538705)
0x1c7: @@ SetMessage(Stack[-1])
0x1c8: Pop(1)
0x1c9: @@ ClearReplies()
0x1ca: Pop(0)
0x1cb: Push((int) 538707)
0x1cc: Push((int) 40600)
0x1cd: Push((int) 40612)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Push((int) 538708)
0x1d1: Push((int) 40600)
0x1d2: Push((int) 40613)
0x1d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 40607)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Grin"
0x1db: Call2 0xc6

0x1dc: Pop(1)
0x1dd: Push((int) 538703)
0x1de: @@ SetMessage(Stack[-1])
0x1df: Pop(1)
0x1e0: @@ ClearReplies()
0x1e1: Pop(0)
0x1e2: Push((int) 538704)
0x1e3: Push((int) -1)
0x1e4: Push((int) 40608)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Push((int) 538706)
0x1e8: Push((int) 40600)
0x1e9: Push((int) 40610)
0x1ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Push((int) 40616)
0x1ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Neutral"
0x1f2: Call2 0xc6

0x1f3: Pop(1)
0x1f4: Push((int) 538709)
0x1f5: @@ SetMessage(Stack[-1])
0x1f6: Pop(1)
0x1f7: @@ ClearReplies()
0x1f8: Pop(0)
0x1f9: Push((int) 538710)
0x1fa: Push((int) 40597)
0x1fb: Push((int) 40617)
0x1fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fd: Pop(3)
0x1fe: Return(); Pop(0)

0x1ff: Push((int) 40597)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x202: PushEmpty(string)
0x203: Stack[-1] = "Saveyouall"
0x204: Call2 0xc6

0x205: Pop(1)
0x206: Push((int) 538694)
0x207: @@ SetMessage(Stack[-1])
0x208: Pop(1)
0x209: @@ ClearReplies()
0x20a: Pop(0)
0x20b: Push((int) 538695)
0x20c: Push((int) 40600)
0x20d: Push((int) 40598)
0x20e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20f: Pop(3)
0x210: Push((int) 538696)
0x211: Push((int) 40600)
0x212: Push((int) 40599)
0x213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 40600)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Neutral"
0x21b: Call2 0xc6

0x21c: Pop(1)
0x21d: Push((int) 538697)
0x21e: @@ SetMessage(Stack[-1])
0x21f: Pop(1)
0x220: @@ ClearReplies()
0x221: Pop(0)
0x222: Push((int) 538698)
0x223: Push((int) 36148)
0x224: Push((int) 40602)
0x225: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(3)
0x227: Return(); Pop(0)

0x228: Push((int) 36148)
0x229: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral"
0x22d: Call2 0xc6

0x22e: Pop(1)
0x22f: Push((int) 534507)
0x230: @@ SetMessage(Stack[-1])
0x231: Pop(1)
0x232: @@ ClearReplies()
0x233: Pop(0)
0x234: Push((int) 534508)
0x235: Push((int) 36150)
0x236: Push((int) 36149)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: Push((int) 36150)
0x23b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x23d: PushEmpty(string)
0x23e: Stack[-1] = "Neutral"
0x23f: Call2 0xc6

0x240: Pop(1)
0x241: Push((int) 534509)
0x242: @@ SetMessage(Stack[-1])
0x243: Pop(1)
0x244: @@ ClearReplies()
0x245: Pop(0)
0x246: Push((int) 534510)
0x247: Push((int) -1)
0x248: Push((int) 36151)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Return(); Pop(0)

0x24c: Push((int) 15575)
0x24d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x24f: PushEmpty(string)
0x250: Stack[-1] = "Neutral"
0x251: Call2 0xc6

0x252: Pop(1)
0x253: Push((int) 514352)
0x254: @@ SetMessage(Stack[-1])
0x255: Pop(1)
0x256: @@ ClearReplies()
0x257: Pop(0)
0x258: Push((int) 514353)
0x259: Push((int) 15577)
0x25a: Push((int) 15576)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: Push((int) 538679)
0x25e: Push((int) 15579)
0x25f: Push((int) 40577)
0x260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(3)
0x262: Return(); Pop(0)

0x263: Push((int) 15577)
0x264: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x266: PushEmpty(string)
0x267: Stack[-1] = "Neutral"
0x268: Call2 0xc6

0x269: Pop(1)
0x26a: Push((int) 514354)
0x26b: @@ SetMessage(Stack[-1])
0x26c: Pop(1)
0x26d: @@ ClearReplies()
0x26e: Pop(0)
0x26f: Push((int) 514355)
0x270: Push((int) 15579)
0x271: Push((int) 15578)
0x272: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(3)
0x274: Push((int) 538681)
0x275: Push((int) 15581)
0x276: Push((int) 40581)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: Return(); Pop(0)

0x27a: Push((int) 15579)
0x27b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x27d: PushEmpty(string)
0x27e: Stack[-1] = "Grin"
0x27f: Call2 0xc6

0x280: Pop(1)
0x281: Push((int) 514356)
0x282: @@ SetMessage(Stack[-1])
0x283: Pop(1)
0x284: @@ ClearReplies()
0x285: Pop(0)
0x286: Push((int) 514357)
0x287: Push((int) 15581)
0x288: Push((int) 15580)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Return(); Pop(0)

0x28c: Push((int) 15581)
0x28d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x28f: PushEmpty(string)
0x290: Stack[-1] = "Grin"
0x291: Call2 0xc6

0x292: Pop(1)
0x293: Push((int) 514358)
0x294: @@ SetMessage(Stack[-1])
0x295: Pop(1)
0x296: @@ ClearReplies()
0x297: Pop(0)
0x298: Push((int) 514359)
0x299: Push((int) 15583)
0x29a: Push((int) 15582)
0x29b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29c: Pop(3)
0x29d: Push((int) 538682)
0x29e: Push((int) 15587)
0x29f: Push((int) 40583)
0x2a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a1: Pop(3)
0x2a2: Return(); Pop(0)

0x2a3: Push((int) 15583)
0x2a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a6: PushEmpty(string)
0x2a7: Stack[-1] = "Sly"
0x2a8: Call2 0xc6

0x2a9: Pop(1)
0x2aa: Push((int) 514360)
0x2ab: @@ SetMessage(Stack[-1])
0x2ac: Pop(1)
0x2ad: @@ ClearReplies()
0x2ae: Pop(0)
0x2af: Push((int) 514361)
0x2b0: Push((int) 15585)
0x2b1: Push((int) 15584)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: Push((int) 15585)
0x2b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b8: PushEmpty(string)
0x2b9: Stack[-1] = "Sly"
0x2ba: Call2 0xc6

0x2bb: Pop(1)
0x2bc: Push((int) 514362)
0x2bd: @@ SetMessage(Stack[-1])
0x2be: Pop(1)
0x2bf: @@ ClearReplies()
0x2c0: Pop(0)
0x2c1: Push((int) 514363)
0x2c2: Push((int) 15587)
0x2c3: Push((int) 15586)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: Return(); Pop(0)

0x2c7: Push((int) 15587)
0x2c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Sly"
0x2cc: Call2 0xc6

0x2cd: Pop(1)
0x2ce: Push((int) 514364)
0x2cf: @@ SetMessage(Stack[-1])
0x2d0: Pop(1)
0x2d1: @@ ClearReplies()
0x2d2: Pop(0)
0x2d3: Push((int) 514365)
0x2d4: Push((int) 15589)
0x2d5: Push((int) 15588)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: Push((int) 538683)
0x2d9: Push((int) 40586)
0x2da: Push((int) 40585)
0x2db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(3)
0x2dd: Push((int) 539687)
0x2de: Push((int) 41639)
0x2df: Push((int) 41638)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: Return(); Pop(0)

0x2e3: Push((int) 41639)
0x2e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2e6: PushEmpty(string)
0x2e7: Stack[-1] = "Neutral"
0x2e8: Call2 0xc6

0x2e9: Pop(1)
0x2ea: Push((int) 539688)
0x2eb: @@ SetMessage(Stack[-1])
0x2ec: Pop(1)
0x2ed: @@ ClearReplies()
0x2ee: Pop(0)
0x2ef: Push((int) 539689)
0x2f0: Push((int) 15589)
0x2f1: Push((int) 41640)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Return(); Pop(0)

0x2f5: Push((int) 40586)
0x2f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2f8: PushEmpty(string)
0x2f9: Stack[-1] = "Sly"
0x2fa: Call2 0xc6

0x2fb: Pop(1)
0x2fc: Push((int) 538684)
0x2fd: @@ SetMessage(Stack[-1])
0x2fe: Pop(1)
0x2ff: @@ ClearReplies()
0x300: Pop(0)
0x301: Push((int) 538686)
0x302: Push((int) 40589)
0x303: Push((int) 40588)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Return(); Pop(0)

0x307: Push((int) 40589)
0x308: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x30a: PushEmpty(string)
0x30b: Stack[-1] = "Sly"
0x30c: Call2 0xc6

0x30d: Pop(1)
0x30e: Push((int) 538687)
0x30f: @@ SetMessage(Stack[-1])
0x310: Pop(1)
0x311: @@ ClearReplies()
0x312: Pop(0)
0x313: Push((int) 538688)
0x314: Push((int) 40591)
0x315: Push((int) 40590)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: Return(); Pop(0)

0x319: Push((int) 40591)
0x31a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x31c: PushEmpty(string)
0x31d: Stack[-1] = "Neutral"
0x31e: Call2 0xc6

0x31f: Pop(1)
0x320: Push((int) 538689)
0x321: @@ SetMessage(Stack[-1])
0x322: Pop(1)
0x323: @@ ClearReplies()
0x324: Pop(0)
0x325: Push((int) 538690)
0x326: Push((int) 15589)
0x327: Push((int) 40592)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: Push((int) 539690)
0x32b: Push((int) -1)
0x32c: Push((int) 41642)
0x32d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(3)
0x32f: Return(); Pop(0)

0x330: Push((int) 15589)
0x331: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x333: PushEmpty(string)
0x334: Stack[-1] = "Saveyouall"
0x335: Call2 0xc6

0x336: Pop(1)
0x337: Push((int) 514366)
0x338: @@ SetMessage(Stack[-1])
0x339: Pop(1)
0x33a: @@ ClearReplies()
0x33b: Pop(0)
0x33c: Push((int) 514367)
0x33d: Push((int) -1)
0x33e: Push((int) 15590)
0x33f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x340: Pop(3)
0x341: Push((int) 538685)
0x342: Push((int) -1)
0x343: Push((int) 40587)
0x344: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x345: Pop(3)
0x346: Return(); Pop(0)

0x347: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x348: PushEmpty(bool)
0x349: Call2 0x6e2

0x34a: Pop(0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34c: @ lshStopAnimation()
0x34d: Pop(0)
0x34e: GOTO 0x351

0x34f: @ StopAnimation()
0x350: Pop(0)
0x351: Return(); Pop(0)

0x352: GOTO 0xdd

0x353: Return(); Pop(0)

0x354: PushEmpty()
0x355: PushEmpty(int, object)
0x356: Stack[-1] = Stack[-3]
0x357: Push(-2, 1); TaskCall(0)
0x358: Call2 0x0

0x359: Pop(-2, 1); TaskReturn
0x35a: Pop(2)
0x35b: Return(); Pop(0)

0x35c: PushEmpty()
0x35d: Call2 0x385

0x35e: Pop(0)
0x35f: Return(); Pop(0)

0x360: PushEmpty(bool, bool)
0x361: Push("cleanup")
0x362: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x364: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x365: @ IsLoaded(Stack[-1])
0x366: Pop(0)
0x367: Pop(0); Push((bool) Stack[-1] == 0)
0x368: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x369: PushEmpty(object)
0x36a: Call2 0x5b5

0x36b: Pop(0)
0x36c: @ RemoveActor(Stack[-1])
0x36d: Pop(1)
0x36e: GOTO 0x373

0x36f: Push("restore")
0x370: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x373: Return(); Pop(2)

0x374: Push( Stack[1 + Tasks[-1].StackPointer] )
0x375: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x376: PushEmpty(object)
0x377: Call2 0x5b5

0x378: Pop(0)
0x379: @ RemoveActor(Stack[-1])
0x37a: Pop(1)
0x37b: @ Hold()
0x37c: Pop(0)
0x37d: PushEmpty()
0x37e: Call2 0x3f0

0x37f: Pop(0)
0x380: Return(); Pop(0)

0x381: PushEmpty()
0x382: Call2 0x3ff

0x383: Pop(0)
0x384: Return(); Pop(0)

0x385: PushEmpty(bool)
0x386: Call2 0x49c

0x387: Pop(0)
0x388: Pop(1); Push((bool) Stack[-1] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: @ Hold()
0x38b: Pop(0)
0x38c: @ GetDirection(Stack[-0])
0x38d: Pop(0)
0x38e: PushEmpty()
0x38f: Call2 0x435

0x390: Pop(0)
0x391: GOTO 0x38e

0x392: Return(); Pop(0)

0x393: PushEmpty(object, object)
0x394: Push("player")
0x395: @ FindActor(Stack[-2], Stack[-1])
0x396: Pop(1)
0x397: Pop(0); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Stack[-3] = (bool) 0
0x39a: Return(); Pop(2)

0x39b: PushEmpty(bool, object)
0x39c: Stack[-1] = Stack[-3]
0x39d: Call2 0x493

0x39e: Stack[-5] = Stack[-2]
0x39f: Pop(2)
0x3a0: Return(); Pop(2)

0x3a1: Stack[-1] = 0
0x3a2: Push(CvectorIndex(Stack[-0], 0))
0x3a3: Push(CvectorIndex(Stack[-0], 2))
0x3a4: @ RotateAsync(Stack[-2], Stack[-1])
0x3a5: Pop(2)
0x3a6: Return(); Pop(0)

0x3a7: PushEmpty(object, bool, object, bool)
0x3a8: Push("player")
0x3a9: @ FindActor(Stack[-3], Stack[-1])
0x3aa: Pop(1)
0x3ab: Pop(0); Push((bool) Stack[-2] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-5] = (bool) 0
0x3ae: Return(); Pop(4)

0x3af: PushEmpty(float, object)
0x3b0: Stack[-1] = Stack[-4]
0x3b1: Call2 0x481

0x3b2: Pop(1)
0x3b3: Push((float)90000.0)
0x3b4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[-5] = (bool) 0
0x3b7: Return(); Pop(4)

0x3b8: @ CanSee(Stack[-1], Stack[-2])
0x3b9: Pop(0)
0x3ba: Stack[-5] = Stack[-1]
0x3bb: Return(); Pop(4)

0x3bc: Stack[-2] = 0
0x3bd: PushEmpty(float, float)
0x3be: Push((int) 8)
0x3bf: Push((int) 16)
0x3c0: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(2)
0x3c2: Push((int) 10)
0x3c3: @ SetTimer(Stack[-1], Stack[-2])
0x3c4: Pop(1)
0x3c5: Return(); Pop(2)

0x3c6: Push((int) 10)
0x3c7: @ KillTimer(Stack[-1])
0x3c8: Pop(1)
0x3c9: Return(); Pop(0)

0x3ca: PushEmpty()
0x3cb: Push((int) 10)
0x3cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ce: PushEmpty()
0x3cf: Call2 0x3c6

0x3d0: Pop(0)
0x3d1: PushEmpty(bool)
0x3d2: Stack[-1] = (bool) 0
0x3d3: PushEmpty(bool)
0x3d4: Call2 0x49c

0x3d5: Pop(0)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d7: PushEmpty(bool)
0x3d8: Call2 0x3a7

0x3d9: Pop(0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: Stack[-1] = (bool) 1
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3dd: PushEmpty(bool)
0x3de: Call2 0x393

0x3df: Pop(0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e1: PushEmpty(bool, object)
0x3e2: PushEmpty(object)
0x3e3: Call2 0x5b5

0x3e4: Stack[-2] = Stack[-1]
0x3e5: Pop(1)
0x3e6: Call2 0x530

0x3e7: Pop(2)
0x3e8: GOTO 0x3ef

0x3e9: PushEmpty()
0x3ea: Call2 0x3a2

0x3eb: Pop(0)
0x3ec: PushEmpty()
0x3ed: Call2 0x3bd

0x3ee: Pop(0)
0x3ef: Return(); Pop(0)

0x3f0: PushEmpty()
0x3f1: Call2 0x47c

0x3f2: Pop(0)
0x3f3: PushEmpty()
0x3f4: Call2 0x3c6

0x3f5: Pop(0)
0x3f6: @ lshStopSpeech()
0x3f7: Pop(0)
0x3f8: @ lshStopAnimation()
0x3f9: Pop(0)
0x3fa: @ StopAsync()
0x3fb: Pop(0)
0x3fc: @ Hold()
0x3fd: Pop(0)
0x3fe: Return(); Pop(0)

0x3ff: @ StopGroup0()
0x400: Pop(0)
0x401: PushEmpty()
0x402: Call2 0x3c6

0x403: Pop(0)
0x404: PushEmpty(string)
0x405: Stack[-1] = "Neutral"
0x406: Call2 0x580

0x407: Pop(1)
0x408: PushEmpty()
0x409: Call2 0x3bd

0x40a: Pop(0)
0x40b: Return(); Pop(0)

0x40c: PushEmpty()
0x40d: Push(Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x40f: PushEmpty()
0x410: Call2 0x3bd

0x411: Pop(0)
0x412: GOTO 0x417

0x413: PushEmpty(string)
0x414: Stack[-1] = "Neutral"
0x415: Call2 0x580

0x416: Pop(1)
0x417: Return(); Pop(0)

0x418: PushEmpty(bool, bool)
0x419: @ IsOverrideActive(Stack[-1])
0x41a: Pop(0)
0x41b: Pop(0); Push((bool) Stack[-1] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x41d: EventDisable(0)
0x41e: PushEmpty()
0x41f: Call2 0x47c

0x420: Pop(0)
0x421: PushEmpty(bool, object)
0x422: Stack[-1] = Stack[-5]
0x423: Call2 0x493

0x424: Pop(2)
0x425: EventEnable(0)
0x426: PushEmpty(object)
0x427: Stack[-1] = Stack[-4]
0x428: Call2 0x354

0x429: Pop(1)
0x42a: PushEmpty(string)
0x42b: Stack[-1] = "Neutral"
0x42c: Call2 0x580

0x42d: Pop(1)
0x42e: PushEmpty()
0x42f: Call2 0x3c6

0x430: Pop(0)
0x431: PushEmpty()
0x432: Call2 0x3bd

0x433: Pop(0)
0x434: Return(); Pop(2)

0x435: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x436: @ WaitForAnimEnd()
0x437: Pop(0)
0x438: PushEmpty(bool)
0x439: Call2 0x49c

0x43a: Pop(0)
0x43b: Pop(1); Push((bool) Stack[-1] == 0)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: Return(); Pop(12)

0x43e: PushEmpty(int)
0x43f: Call2 0x606

0x440: Stack[-7] = Stack[-1]
0x441: Pop(1)
0x442: Stack[-5] = (int) 0
0x443: PushEmpty(bool)
0x444: Stack[-1] = (bool) 0
0x445: Push((int) 5)
0x446: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x448: PushEmpty(bool)
0x449: Call2 0x49c

0x44a: Pop(0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44c: Stack[-1] = (bool) 1
0x44d: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x44e: Pop(0); Push((bool) Stack[-6] == 0)
0x44f: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x450: Push((int) 3)
0x451: @ Sleep(Stack[-1], Stack[-5])
0x452: Pop(1)
0x453: Pop(0); Push((bool) Stack[-4] == 0)
0x454: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x455: GOTO 0x477

0x456: GOTO 0x46c

0x457: @ irand(Stack[-3], Stack[-6])
0x458: Pop(0)
0x459: Push((int) 5)
0x45a: @ irand(Stack[-3], Stack[-1])
0x45b: Pop(1)
0x45c: Push((int) 0)
0x45d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45f: Stack[-3] = (int) 0
0x460: Push("all")
0x461: PushEmpty(string, int)
0x462: Stack[-1] = Stack[-6]
0x463: Call2 0x5ff

0x464: Pop(1)
0x465: @ PlayAnimation(Stack[-2], Stack[-1])
0x466: Pop(2)
0x467: @ WaitForAnimEnd(Stack[-1])
0x468: Pop(0)
0x469: Pop(0); Push((bool) Stack[-1] == 0)
0x46a: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46b: GOTO 0x477

0x46c: PushEmpty(bool)
0x46d: Call2 0x47a

0x46e: Pop(0)
0x46f: Pop(1); Push((bool) Stack[-1] == 0)
0x470: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x471: GOTO 0x477

0x472: @ ResetAAS()
0x473: Pop(0)
0x474: Push((int) 1)
0x475: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x476: GOTO 0x443

0x477: @ ResetAAS()
0x478: Pop(0)
0x479: Return(); Pop(12)

0x47a: Stack[-1] = (bool) 1
0x47b: Return(); Pop(0)

0x47c: @ StopAnimation()
0x47d: Pop(0)
0x47e: @ StopGroup0()
0x47f: Pop(0)
0x480: Return(); Pop(0)

0x481: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x482: @ GetPosition(Stack[-3])
0x483: Pop(0)
0x484: @@ GetPosition(Stack[-2])
0x485: Pop(0)
0x486: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x487: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x488: Return(); Pop(6)

0x489: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x48a: @ GetPosition(Stack[-3])
0x48b: Pop(0)
0x48c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x48d: Push(CvectorIndex(Stack[-2], 0))
0x48e: Push(CvectorIndex(Stack[-3], 2))
0x48f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x490: Pop(2)
0x491: Stack[-8] = Stack[-1]
0x492: Return(); Pop(6)

0x493: PushEmpty(cvector, cvector)
0x494: @@ GetPosition(Stack[-1])
0x495: Pop(0)
0x496: PushEmpty(bool, cvector)
0x497: Stack[-1] = Stack[-3]
0x498: Call2 0x489

0x499: Stack[-6] = Stack[-2]
0x49a: Pop(2)
0x49b: Return(); Pop(2)

0x49c: PushEmpty(bool, bool)
0x49d: @ IsLoaded(Stack[-1])
0x49e: Pop(0)
0x49f: Stack[-3] = Stack[-1]
0x4a0: Return(); Pop(2)

0x4a1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x4a2: @@ GetPosition(Stack[-8])
0x4a3: Pop(0)
0x4a4: @@ GetEyesHeight(Stack[-9])
0x4a5: Pop(0)
0x4a6: Push(CvectorIndex(Stack[-8], 1))
0x4a7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4a8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4a9: @ GetPosition(Stack[-7])
0x4aa: Pop(0)
0x4ab: @ GetEyesHeight(Stack[-9])
0x4ac: Pop(0)
0x4ad: Push(CvectorIndex(Stack[-7], 1))
0x4ae: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4af: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4b0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x4b1: Push(CvectorIndex(Stack[-6], 1))
0x4b2: Stack[-1] = (int) 0
0x4b3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4b4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x4b5: Pop(1); Push(Sqrt(Stack[-1]))
0x4b6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x4b7: Stack[-5] = -Stack[-6]; Pop(0);
0x4b8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x4b9: PushEmpty(cvector, cvector)
0x4ba: Push(CVector(0.0, 1.0, 0.0))
0x4bb: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x4bc: Call2 0x5bb

0x4bd: Pop(1)
0x4be: Push((int) 25)
0x4bf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4c1: Push(CVector(0.0, 10.0, 0.0))
0x4c2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x4c3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x4c4: @ IsOverrideActive(Stack[-2])
0x4c5: Pop(0)
0x4c6: Push(Stack[-2])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c8: Stack[-21] = (bool) 0
0x4c9: Return(); Pop(18)

0x4ca: @ StopWorld()
0x4cb: Pop(0)
0x4cc: @ CameraTransit(Stack[-3], Stack[-5])
0x4cd: Pop(0)
0x4ce: Push(CvectorIndex(Stack[-4], 0))
0x4cf: Push(CvectorIndex(Stack[-5], 2))
0x4d0: @ Rotate(Stack[-2], Stack[-1])
0x4d1: Pop(2)
0x4d2: PushEmpty(bool)
0x4d3: Call2 0x6e2

0x4d4: Pop(0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: GOTO 0x4df

0x4d7: Push("head")
0x4d8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4d9: Pop(1)
0x4da: Push(Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4dc: Push("head")
0x4dd: @ LookAsyncCamera(Stack[-1])
0x4de: Pop(1)
0x4df: @ CameraWaitForPlayFinish()
0x4e0: Pop(0)
0x4e1: @ ResumeWorld()
0x4e2: Pop(0)
0x4e3: Stack[-21] = (bool) 1
0x4e4: Return(); Pop(18)

0x4e5: PushEmpty(bool, bool)
0x4e6: @ CameraSwitchToNormal()
0x4e7: Pop(0)
0x4e8: PushEmpty(bool)
0x4e9: Call2 0x6e2

0x4ea: Pop(0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: GOTO 0x4f5

0x4ed: Push("head")
0x4ee: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4ef: Pop(1)
0x4f0: Push(Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f2: Push("head")
0x4f3: @ UnlookAsync(Stack[-1])
0x4f4: Pop(1)
0x4f5: Return(); Pop(2)

0x4f6: PushEmpty(int, int, int, int)
0x4f7: Push("voice_common")
0x4f8: @ GetVariable(Stack[-1], Stack[-3])
0x4f9: Pop(1)
0x4fa: Push(Stack[-2])
0x4fb: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x4fc: PushEmpty(bool, object)
0x4fd: Stack[-1] = Stack[-7]
0x4fe: Call2 0x530

0x4ff: Pop(1)
0x500: Pop(1); Push((bool) Stack[-1] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x502: PushEmpty(bool, object)
0x503: Stack[-1] = Stack[-7]
0x504: Call2 0x555

0x505: Pop(1)
0x506: Pop(1); Push((bool) Stack[-1] == 0)
0x507: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x508: Stack[-6] = (bool) 0
0x509: Return(); Pop(4)

0x50a: Push((int) 2)
0x50b: @ irand(Stack[-2], Stack[-1])
0x50c: Pop(1)
0x50d: Push(Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x50f: Push("voice_common")
0x510: Push((int) 1)
0x511: Pop(1); Push(Stack[-4] + Stack[-1]);
0x512: Push((int) 3)
0x513: Pop(2); Push(Stack[-2] % Stack[-1]);
0x514: @ SetVariable(Stack[-2], Stack[-1])
0x515: Pop(2)
0x516: GOTO 0x51b

0x517: Push("voice_common")
0x518: Push((int) 0)
0x519: @ SetVariable(Stack[-2], Stack[-1])
0x51a: Pop(2)
0x51b: GOTO 0x52e

0x51c: PushEmpty(bool, object)
0x51d: Stack[-1] = Stack[-7]
0x51e: Call2 0x555

0x51f: Pop(1)
0x520: Pop(1); Push((bool) Stack[-1] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x522: PushEmpty(bool, object)
0x523: Stack[-1] = Stack[-7]
0x524: Call2 0x530

0x525: Pop(1)
0x526: Pop(1); Push((bool) Stack[-1] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x528: Stack[-6] = (bool) 0
0x529: Return(); Pop(4)

0x52a: Push("voice_common")
0x52b: Push((int) 1)
0x52c: @ SetVariable(Stack[-2], Stack[-1])
0x52d: Pop(2)
0x52e: Stack[-6] = (bool) 1
0x52f: Return(); Pop(4)

0x530: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x531: Stack[-5] = "c"
0x532: Stack[-4] = (int) 0
0x533: Push((int) 1)
0x534: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x535: Push((int) 1)
0x536: Pop(1); Push(Stack[-5] + Stack[-1]);
0x537: Pop(1); Push(Stack[-6] + Stack[-1]);
0x538: @@ HasProperty(Stack[-1], Stack[-4])
0x539: Pop(1)
0x53a: Pop(0); Push((bool) Stack[-3] == 0)
0x53b: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53c: GOTO 0x540

0x53d: Push((int) 1)
0x53e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x53f: GOTO 0x533

0x540: Pop(0); Push((bool) Stack[-4] == 0)
0x541: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x542: Stack[-12] = (bool) 0
0x543: Return(); Pop(10)

0x544: Stack[-2] = (int) 0
0x545: Push((int) 1)
0x546: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: @ irand(Stack[-2], Stack[-4])
0x549: Pop(0)
0x54a: Push((int) 1)
0x54b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x54c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x54d: @@ GetProperty(Stack[-1], Stack[-2])
0x54e: Pop(1)
0x54f: PushEmpty(bool, string)
0x550: Stack[-1] = Stack[-3]
0x551: Call2 0x59f

0x552: Stack[-14] = Stack[-2]
0x553: Pop(2)
0x554: Return(); Pop(10)

0x555: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x556: Push("d")
0x557: PushEmpty(int)
0x558: Call2 0x5f6

0x559: Pop(0)
0x55a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x55b: Push("m")
0x55c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x55d: Stack[-4] = (int) 0
0x55e: Push((int) 1)
0x55f: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x560: Push((int) 1)
0x561: Pop(1); Push(Stack[-5] + Stack[-1]);
0x562: Pop(1); Push(Stack[-6] + Stack[-1]);
0x563: @@ HasProperty(Stack[-1], Stack[-4])
0x564: Pop(1)
0x565: Pop(0); Push((bool) Stack[-3] == 0)
0x566: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x567: GOTO 0x56b

0x568: Push((int) 1)
0x569: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x56a: GOTO 0x55e

0x56b: Pop(0); Push((bool) Stack[-4] == 0)
0x56c: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56d: Stack[-12] = (bool) 0
0x56e: Return(); Pop(10)

0x56f: Stack[-2] = (int) 0
0x570: Push((int) 1)
0x571: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x572: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x573: @ irand(Stack[-2], Stack[-4])
0x574: Pop(0)
0x575: Push((int) 1)
0x576: Pop(1); Push(Stack[-3] + Stack[-1]);
0x577: Pop(1); Push(Stack[-6] + Stack[-1]);
0x578: @@ GetProperty(Stack[-1], Stack[-2])
0x579: Pop(1)
0x57a: PushEmpty(bool, string)
0x57b: Stack[-1] = Stack[-3]
0x57c: Call2 0x59f

0x57d: Stack[-14] = Stack[-2]
0x57e: Pop(2)
0x57f: Return(); Pop(10)

0x580: PushEmpty(bool, float, float, bool, float, float)
0x581: @ lshHasAnimation(Stack[-3], Stack[-7])
0x582: Pop(0)
0x583: Push(Stack[-3])
0x584: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x585: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x586: Pop(0)
0x587: Push((bool) 0)
0x588: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x589: Pop(1)
0x58a: GOTO 0x58f

0x58b: Push("Can't find lsh animation : ")
0x58c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x58d: @ Trace(Stack[-1])
0x58e: Pop(1)
0x58f: Return(); Pop(6)

0x590: PushEmpty(bool, float, float, bool, float, float)
0x591: @ lshHasAnimation(Stack[-3], Stack[-8])
0x592: Pop(0)
0x593: Push(Stack[-3])
0x594: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x595: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x596: Pop(0)
0x597: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x598: Pop(0)
0x599: GOTO 0x59e

0x59a: Push("Can't find lsh animation : ")
0x59b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x59c: @ Trace(Stack[-1])
0x59d: Pop(1)
0x59e: Return(); Pop(6)

0x59f: PushEmpty(bool, bool)
0x5a0: PushEmpty(bool)
0x5a1: Call2 0x6e2

0x5a2: Pop(0)
0x5a3: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5a4: @ lshHasSpeech(Stack[-1], Stack[-3])
0x5a5: Pop(0)
0x5a6: Push(Stack[-1])
0x5a7: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5a8: @ lshPlaySpeech(Stack[-3])
0x5a9: Pop(0)
0x5aa: Stack[-4] = (bool) 1
0x5ab: Return(); Pop(2)

0x5ac: Stack[-4] = (bool) 0
0x5ad: Return(); Pop(2)

0x5ae: PushEmpty(bool)
0x5af: Call2 0x6e2

0x5b0: Pop(0)
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b2: @ lshStopSpeech()
0x5b3: Pop(0)
0x5b4: Return(); Pop(0)

0x5b5: PushEmpty(object, object)
0x5b6: @ self(Stack[-1])
0x5b7: Pop(0)
0x5b8: Stack[-3] = Stack[-1]
0x5b9: Return(); Pop(2)

0x5ba: Stack[-1] = 0
0x5bb: PushEmpty(float, float)
0x5bc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5bd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5be: Push((float)0.0)
0x5bf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5c2: Return(); Pop(2)

0x5c3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5c4: Return(); Pop(2)

0x5c5: PushEmpty(int, int)
0x5c6: @ GetVariable(Stack[-3], Stack[-1])
0x5c7: Pop(0)
0x5c8: Stack[-4] = Stack[-1]
0x5c9: Return(); Pop(2)

0x5ca: PushEmpty(object, object)
0x5cb: @ CreateIntVector(Stack[-1])
0x5cc: Pop(0)
0x5cd: @@ add(Stack[-4])
0x5ce: Pop(0)
0x5cf: @@ add(Stack[-3])
0x5d0: Pop(0)
0x5d1: Push((int) 3)
0x5d2: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5d3: Pop(1)
0x5d4: Return(); Pop(2)

0x5d5: Stack[-1] = 0
0x5d6: PushEmpty(int, int, bool, int, int, bool)
0x5d7: @@ GetItemID(Stack[-3])
0x5d8: Pop(0)
0x5d9: Push("Category")
0x5da: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x5db: Pop(1)
0x5dc: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x5dd: Pop(0)
0x5de: Pop(0); Push((bool) Stack[-1] == 0)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e0: @@ DropItems(Stack[-8], Stack[-7])
0x5e1: Pop(0)
0x5e2: GOTO 0x5e8

0x5e3: PushEmpty(int, int)
0x5e4: Stack[-2] = Stack[-5]
0x5e5: Stack[-1] = Stack[-9]
0x5e6: Call2 0x5ca

0x5e7: Pop(2)
0x5e8: Return(); Pop(6)

0x5e9: PushEmpty(object, object)
0x5ea: @ CreateInvItem(Stack[-1])
0x5eb: Pop(0)
0x5ec: @@ SetItemName(Stack[-4])
0x5ed: Pop(0)
0x5ee: PushEmpty(object, object, int)
0x5ef: Stack[-3] = Stack[-8]
0x5f0: Stack[-2] = Stack[-4]
0x5f1: Stack[-1] = Stack[-6]
0x5f2: Call2 0x5d6

0x5f3: Pop(3)
0x5f4: Return(); Pop(2)

0x5f5: Stack[-1] = 0
0x5f6: PushEmpty(float, float)
0x5f7: @ GetGameTime(Stack[-1])
0x5f8: Pop(0)
0x5f9: Push((int) 1)
0x5fa: PushEmpty(int)
0x5fb: Push((int) 24)
0x5fc: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5fd: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5fe: Return(); Pop(2)

0x5ff: PushEmpty(string, string)
0x600: Stack[-1] = "idle"
0x601: Push(Stack[-3])
0x602: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x603: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x604: Stack[-4] = Stack[-1]
0x605: Return(); Pop(2)

0x606: PushEmpty(int, bool, int, bool)
0x607: Stack[-2] = (int) 0
0x608: Push("all")
0x609: PushEmpty(string, int)
0x60a: Stack[-1] = Stack[-5]
0x60b: Call2 0x5ff

0x60c: Pop(1)
0x60d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x60e: Pop(2)
0x60f: Pop(0); Push((bool) Stack[-1] == 0)
0x610: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x611: GOTO 0x615

0x612: Push((int) 1)
0x613: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x614: GOTO 0x608

0x615: Stack[-5] = Stack[-2]
0x616: Return(); Pop(4)

0x617: PushEmpty()
0x618: Push("d11q06KlaraRing")
0x619: Push((int) 1)
0x61a: @ SetVariable(Stack[-2], Stack[-1])
0x61b: Pop(2)
0x61c: PushEmpty()
0x61d: Call2 0x693

0x61e: Pop(0)
0x61f: Push("d11q06KlaraRing is given")
0x620: @ Trace(Stack[-1])
0x621: Pop(1)
0x622: PushEmpty(object, string, int)
0x623: Stack[-3] = Stack[-5]
0x624: Stack[-2] = "d11q06KlaraRing"
0x625: Stack[-1] = (int) 1
0x626: Call2 0x5e9

0x627: Pop(3)
0x628: Return(); Pop(0)

0x629: PushEmpty()
0x62a: PushEmpty(bool)
0x62b: Stack[-1] = (bool) 0
0x62c: PushEmpty(int, string)
0x62d: Stack[-1] = "d11q06KapellaRing"
0x62e: Call2 0x5c5

0x62f: Pop(1)
0x630: Push((int) 0)
0x631: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x633: PushEmpty(int, string)
0x634: Stack[-1] = "d11q06KlaraRing"
0x635: Call2 0x5c5

0x636: Pop(1)
0x637: Push((int) 0)
0x638: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x63a: Stack[-1] = (bool) 1
0x63b: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63c: Push("d11q06")
0x63d: Push((int) 2)
0x63e: @ SetVariable(Stack[-2], Stack[-1])
0x63f: Pop(2)
0x640: PushEmpty()
0x641: Call2 0x686

0x642: Pop(0)
0x643: Return(); Pop(0)

0x644: PushEmpty()
0x645: Push("ood11Klara2")
0x646: Push((int) 1)
0x647: @ SetVariable(Stack[-2], Stack[-1])
0x648: Pop(2)
0x649: Return(); Pop(0)

0x64a: PushEmpty()
0x64b: Push("ood11Klara3")
0x64c: Push((int) 1)
0x64d: @ SetVariable(Stack[-2], Stack[-1])
0x64e: Pop(2)
0x64f: Return(); Pop(0)

0x650: PushEmpty()
0x651: Push("ood11Klara1")
0x652: Push((int) 1)
0x653: @ SetVariable(Stack[-2], Stack[-1])
0x654: Pop(2)
0x655: Return(); Pop(0)

0x656: PushEmpty()
0x657: PushEmpty(int, string)
0x658: Stack[-1] = "d11q06"
0x659: Call2 0x5c5

0x65a: Pop(1)
0x65b: Push((int) 1)
0x65c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x65d: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x65e: Stack[-2] = (bool) 1
0x65f: Return(); Pop(0)

0x660: Stack[-2] = (bool) 0
0x661: Return(); Pop(0)

0x662: PushEmpty()
0x663: PushEmpty(int, string)
0x664: Stack[-1] = "ood11Klara2"
0x665: Call2 0x5c5

0x666: Pop(1)
0x667: Push((int) 0)
0x668: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x669: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66a: Stack[-2] = (bool) 1
0x66b: Return(); Pop(0)

0x66c: Stack[-2] = (bool) 0
0x66d: Return(); Pop(0)

0x66e: PushEmpty()
0x66f: PushEmpty(int, string)
0x670: Stack[-1] = "ood11Klara3"
0x671: Call2 0x5c5

0x672: Pop(1)
0x673: Push((int) 0)
0x674: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x676: Stack[-2] = (bool) 1
0x677: Return(); Pop(0)

0x678: Stack[-2] = (bool) 0
0x679: Return(); Pop(0)

0x67a: PushEmpty()
0x67b: PushEmpty(int, string)
0x67c: Stack[-1] = "ood11Klara1"
0x67d: Call2 0x5c5

0x67e: Pop(1)
0x67f: Push((int) 0)
0x680: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x682: Stack[-2] = (bool) 1
0x683: Return(); Pop(0)

0x684: Stack[-2] = (bool) 0
0x685: Return(); Pop(0)

0x686: PushEmpty(object, object)
0x687: Push((int) 690)
0x688: Push((int) 2)
0x689: Push((int) 534538)
0x68a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x68b: Pop(3)
0x68c: PushEmpty(bool, object, int)
0x68d: Stack[-2] = Stack[-4]
0x68e: Stack[-1] = (int) 686
0x68f: Call2 0x6ad

0x690: Pop(3)
0x691: Return(); Pop(2)

0x692: Stack[-1] = 0
0x693: PushEmpty(object, object)
0x694: Push((int) 689)
0x695: Push((int) 2)
0x696: Push((int) 534537)
0x697: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: PushEmpty(bool, object, int)
0x69a: Stack[-2] = Stack[-4]
0x69b: Stack[-1] = (int) 686
0x69c: Call2 0x6ad

0x69d: Pop(3)
0x69e: Return(); Pop(2)

0x69f: Stack[-1] = 0
0x6a0: PushEmpty(object, object)
0x6a1: @ GetDiaryRoot(Stack[-1])
0x6a2: Pop(0)
0x6a3: Pop(0); Push((bool) Stack[-1] == 0)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a5: Push("Can't retrieve diary root")
0x6a6: @ Trace(Stack[-1])
0x6a7: Pop(1)
0x6a8: Stack[-3] = (bool) 0
0x6a9: Return(); Pop(2)

0x6aa: Stack[-3] = Stack[-1]
0x6ab: Return(); Pop(2)

0x6ac: Stack[-1] = 0
0x6ad: PushEmpty(object, object, int, object, object, int)
0x6ae: PushEmpty(object)
0x6af: Call2 0x6a0

0x6b0: Stack[-4] = Stack[-1]
0x6b1: Pop(1)
0x6b2: @@ Find(Stack[-7], Stack[-2])
0x6b3: Pop(0)
0x6b4: Pop(0); Push((bool) Stack[-2] == 0)
0x6b5: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b6: Push("Can't find diary parent with id: ")
0x6b7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6b8: @ Trace(Stack[-1])
0x6b9: Pop(1)
0x6ba: Stack[-9] = (bool) 0
0x6bb: Return(); Pop(6)

0x6bc: @@ AddChild(Stack[-8])
0x6bd: Pop(0)
0x6be: Push((int) 7)
0x6bf: @ SendWorldWndMessage(Stack[-1])
0x6c0: Pop(1)
0x6c1: @@ GetCategory(Stack[-1])
0x6c2: Pop(0)
0x6c3: @ SetDiarySection(Stack[-1])
0x6c4: Pop(0)
0x6c5: Stack[-9] = (bool) 0
0x6c6: Return(); Pop(6)

0x6c7: Stack[-2] = 0
0x6c8: Stack[-3] = 0
0x6c9: PushEmpty(int, int)
0x6ca: Push("branch")
0x6cb: @ GetVariable(Stack[-1], Stack[-2])
0x6cc: Pop(1)
0x6cd: Push((int) 0)
0x6ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d0: Stack[-3] = (int) 1
0x6d1: Return(); Pop(2)

0x6d2: GOTO 0x6d8

0x6d3: Push((int) 1)
0x6d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d6: Stack[-3] = (int) 2
0x6d7: Return(); Pop(2)

0x6d8: Stack[-3] = (int) 3
0x6d9: Return(); Pop(2)

0x6da: Stack[-1] = (int) 515540
0x6db: Return(); Pop(0)

0x6dc: Stack[-1] = (int) 502865
0x6dd: Return(); Pop(0)

0x6de: Stack[-1] = "ui/NPC_Klara.png"
0x6df: Return(); Pop(0)

0x6e0: Stack[-1] = "ui/NPC_Klara_b.png"
0x6e1: Return(); Pop(0)

0x6e2: Stack[-1] = (bool) 1
0x6e3: Return(); Pop(0)

