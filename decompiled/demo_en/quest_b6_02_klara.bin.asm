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
	Fear
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Saveyouall
	cleanup
	restore
	player
	Neutral
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
	b6q02
	b6q02KlaraGotoRat
	pt_map_theater
	AddMark
	quest_b6_02
	init_maze
	completed
	oob6Klara2_1
	playsound
	giveitem
	recipe7 is given
	recipe7
	ShowMap
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1f3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd3 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1f7 Vars = (string)
		EVENT_6 Op = 0x20b Vars = ()
		EVENT_5 Op = 0x218 Vars = ()
		EVENT_7 Op = 0x261 Vars = (int)
		EVENT_45 Op = 0x2a3 Vars = (bool)
		EVENT_0 Op = 0x2af Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x35a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x635

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x633

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x637

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x639

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x622

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
0x31: Call2 0x46e

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3af

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
0x48: Call2 0x39e

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
0x56: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x588

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x542

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Fear"
0x63: Call2 0xbd

0x64: Pop(1)
0x65: Push((int) 521178)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 528362)
0x6b: Push((int) 29735)
0x6c: Push((int) 29734)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x9f

0x70: PushEmpty(string)
0x71: Stack[-1] = "Fear"
0x72: Call2 0xbd

0x73: Pop(1)
0x74: Push((int) 521184)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x594

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7e: Push((int) 521185)
0x7f: Push((int) 22388)
0x80: Push((int) 22387)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: PushEmpty(bool)
0x84: Stack[-1] = (bool) 0
0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x57c

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call2 0x570

0x8d: Pop(1)
0x8e: Pop(1); Push((bool) Stack[-1] == 0)
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: Stack[-1] = (bool) 1
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: Push((int) 521188)
0x93: Push((int) 22391)
0x94: Push((int) 22390)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: Push((int) 521191)
0x98: Push((int) -1)
0x99: Push((int) 22393)
0x9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: GOTO 0x9f

0x9d: Return(); Pop(0)

0x9e: GOTO 0x55

0x9f: PushEmpty(bool)
0xa0: Call2 0x63b

0xa1: Pop(0)
0xa2: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa3: @ lshWaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: PushEmpty(string)
0xa9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaa: Call2 0x439

0xab: Pop(1)
0xac: GOTO 0xa3

0xad: GOTO 0xbc

0xae: Push("all")
0xaf: Push("idle")
0xb0: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: @ WaitForAnimEnd()
0xb3: Pop(0)
0xb4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: GOTO 0xbc

0xb7: Push("all")
0xb8: Push("idle")
0xb9: @ PlayAnimation(Stack[-2], Stack[-1])
0xba: Pop(2)
0xbb: GOTO 0xb2

0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: PushEmpty(bool)
0xbf: Call2 0x63b

0xc0: Pop(0)
0xc1: Pop(1); Push((bool) Stack[-1] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: Return(); Pop(0)

0xc4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: PushEmpty(string, bool)
0xc8: Stack[-2] = Stack[-3]
0xc9: Push("")
0xca: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcc: Stack[-1] = (bool) 0
0xcd: GOTO 0xcf

0xce: Stack[-1] = (bool) 1
0xcf: Call2 0x449

0xd0: Pop(2)
0xd1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd2: Return(); Pop(0)

0xd3: PushEmpty()
0xd4: Push((int) 1)
0xd5: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0xd6: PushEmpty()
0xd7: Call2 0x467

0xd8: Pop(0)
0xd9: Push((int) 22381)
0xda: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x519

0xe0: Pop(2)
0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x559

0xe5: Pop(2)
0xe6: Push((int) 29741)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x569

0xed: Pop(2)
0xee: Push((int) 22389)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x519

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x559

0xfa: Pop(2)
0xfb: Push((int) 22392)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x538

0x102: Pop(2)
0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x548

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x54e

0x10c: Pop(2)
0x10d: Push((int) 22380)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x112: Call2 0x588

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x542

0x119: Pop(2)
0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Fear"
0x11c: Call2 0xbd

0x11d: Pop(1)
0x11e: Push((int) 521178)
0x11f: @@ SetMessage(Stack[-1])
0x120: Pop(1)
0x121: @@ ClearReplies()
0x122: Pop(0)
0x123: Push((int) 528362)
0x124: Push((int) 29735)
0x125: Push((int) 29734)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: PushEmpty(string)
0x12a: Stack[-1] = "Fear"
0x12b: Call2 0xbd

0x12c: Pop(1)
0x12d: Push((int) 521184)
0x12e: @@ SetMessage(Stack[-1])
0x12f: Pop(1)
0x130: @@ ClearReplies()
0x131: Pop(0)
0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x134: Call2 0x594

0x135: Pop(1)
0x136: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x137: Push((int) 521185)
0x138: Push((int) 22388)
0x139: Push((int) 22387)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: PushEmpty(bool)
0x13d: Stack[-1] = (bool) 0
0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0x57c

0x141: Pop(1)
0x142: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x570

0x146: Pop(1)
0x147: Pop(1); Push((bool) Stack[-1] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: Stack[-1] = (bool) 1
0x14a: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14b: Push((int) 521188)
0x14c: Push((int) 22391)
0x14d: Push((int) 22390)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Push((int) 521191)
0x151: Push((int) -1)
0x152: Push((int) 22393)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Return(); Pop(0)

0x156: Push((int) 22391)
0x157: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x159: PushEmpty(string)
0x15a: Stack[-1] = "Saveyouall"
0x15b: Call2 0xbd

0x15c: Pop(1)
0x15d: Push((int) 521189)
0x15e: @@ SetMessage(Stack[-1])
0x15f: Pop(1)
0x160: @@ ClearReplies()
0x161: Pop(0)
0x162: Push((int) 528371)
0x163: Push((int) 29744)
0x164: Push((int) 29743)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Push((int) 528373)
0x168: Push((int) 29744)
0x169: Push((int) 29745)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Push((int) 29744)
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x170: PushEmpty(string)
0x171: Stack[-1] = "Saveyouall"
0x172: Call2 0xbd

0x173: Pop(1)
0x174: Push((int) 528372)
0x175: @@ SetMessage(Stack[-1])
0x176: Pop(1)
0x177: @@ ClearReplies()
0x178: Pop(0)
0x179: Push((int) 521190)
0x17a: Push((int) -1)
0x17b: Push((int) 22392)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Return(); Pop(0)

0x17f: Push((int) 22388)
0x180: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x182: PushEmpty(string)
0x183: Stack[-1] = "Saveyouall"
0x184: Call2 0xbd

0x185: Pop(1)
0x186: Push((int) 521186)
0x187: @@ SetMessage(Stack[-1])
0x188: Pop(1)
0x189: @@ ClearReplies()
0x18a: Pop(0)
0x18b: Push((int) 521187)
0x18c: Push((int) -1)
0x18d: Push((int) 22389)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 29735)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Fear"
0x196: Call2 0xbd

0x197: Pop(1)
0x198: Push((int) 528363)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 528364)
0x19e: Push((int) 29737)
0x19f: Push((int) 29736)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 29737)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "Fear"
0x1a8: Call2 0xbd

0x1a9: Pop(1)
0x1aa: Push((int) 528365)
0x1ab: @@ SetMessage(Stack[-1])
0x1ac: Pop(1)
0x1ad: @@ ClearReplies()
0x1ae: Pop(0)
0x1af: Push((int) 528366)
0x1b0: Push((int) 29739)
0x1b1: Push((int) 29738)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: Push((int) 29739)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Fear"
0x1ba: Call2 0xbd

0x1bb: Pop(1)
0x1bc: Push((int) 528367)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 521183)
0x1c2: Push((int) 29740)
0x1c3: Push((int) 22385)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Return(); Pop(0)

0x1c7: Push((int) 29740)
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1ca: PushEmpty(string)
0x1cb: Stack[-1] = "Saveyouall"
0x1cc: Call2 0xbd

0x1cd: Pop(1)
0x1ce: Push((int) 528368)
0x1cf: @@ SetMessage(Stack[-1])
0x1d0: Pop(1)
0x1d1: @@ ClearReplies()
0x1d2: Pop(0)
0x1d3: Push((int) 521179)
0x1d4: Push((int) -1)
0x1d5: Push((int) 22381)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Push((int) 528369)
0x1d9: Push((int) -1)
0x1da: Push((int) 29741)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Return(); Pop(0)

0x1de: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1df: PushEmpty(bool)
0x1e0: Call2 0x63b

0x1e1: Pop(0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e3: @ lshStopAnimation()
0x1e4: Pop(0)
0x1e5: GOTO 0x1e8

0x1e6: @ StopAnimation()
0x1e7: Pop(0)
0x1e8: Return(); Pop(0)

0x1e9: GOTO 0xd4

0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: PushEmpty(int, object)
0x1ed: Stack[-1] = Stack[-3]
0x1ee: Push(-2, 1); TaskCall(0)
0x1ef: Call2 0x0

0x1f0: Pop(-2, 1); TaskReturn
0x1f1: Pop(2)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty()
0x1f4: Call2 0x21c

0x1f5: Pop(0)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(bool, bool)
0x1f8: Push("cleanup")
0x1f9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1fb: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1fc: @ IsLoaded(Stack[-1])
0x1fd: Pop(0)
0x1fe: Pop(0); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: PushEmpty(object)
0x201: Call2 0x46e

0x202: Pop(0)
0x203: @ RemoveActor(Stack[-1])
0x204: Pop(1)
0x205: GOTO 0x20a

0x206: Push("restore")
0x207: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x20a: Return(); Pop(2)

0x20b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x20c: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20d: PushEmpty(object)
0x20e: Call2 0x46e

0x20f: Pop(0)
0x210: @ RemoveActor(Stack[-1])
0x211: Pop(1)
0x212: @ Hold()
0x213: Pop(0)
0x214: PushEmpty()
0x215: Call2 0x287

0x216: Pop(0)
0x217: Return(); Pop(0)

0x218: PushEmpty()
0x219: Call2 0x296

0x21a: Pop(0)
0x21b: Return(); Pop(0)

0x21c: PushEmpty(bool)
0x21d: Call2 0x355

0x21e: Pop(0)
0x21f: Pop(1); Push((bool) Stack[-1] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x221: @ Hold()
0x222: Pop(0)
0x223: @ GetDirection(Stack[-0])
0x224: Pop(0)
0x225: PushEmpty()
0x226: Call2 0x2cc

0x227: Pop(0)
0x228: GOTO 0x225

0x229: Return(); Pop(0)

0x22a: PushEmpty(object, object)
0x22b: Push("player")
0x22c: @ FindActor(Stack[-2], Stack[-1])
0x22d: Pop(1)
0x22e: Pop(0); Push((bool) Stack[-1] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x230: Stack[-3] = (bool) 0
0x231: Return(); Pop(2)

0x232: PushEmpty(bool, object)
0x233: Stack[-1] = Stack[-3]
0x234: Call2 0x34c

0x235: Stack[-5] = Stack[-2]
0x236: Pop(2)
0x237: Return(); Pop(2)

0x238: Stack[-1] = 0
0x239: Push(CvectorIndex(Stack[-0], 0))
0x23a: Push(CvectorIndex(Stack[-0], 2))
0x23b: @ RotateAsync(Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: Return(); Pop(0)

0x23e: PushEmpty(object, bool, object, bool)
0x23f: Push("player")
0x240: @ FindActor(Stack[-3], Stack[-1])
0x241: Pop(1)
0x242: Pop(0); Push((bool) Stack[-2] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: Stack[-5] = (bool) 0
0x245: Return(); Pop(4)

0x246: PushEmpty(float, object)
0x247: Stack[-1] = Stack[-4]
0x248: Call2 0x318

0x249: Pop(1)
0x24a: Push((float)90000.0)
0x24b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24d: Stack[-5] = (bool) 0
0x24e: Return(); Pop(4)

0x24f: @ CanSee(Stack[-1], Stack[-2])
0x250: Pop(0)
0x251: Stack[-5] = Stack[-1]
0x252: Return(); Pop(4)

0x253: Stack[-2] = 0
0x254: PushEmpty(float, float)
0x255: Push((int) 8)
0x256: Push((int) 16)
0x257: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(2)
0x259: Push((int) 10)
0x25a: @ SetTimer(Stack[-1], Stack[-2])
0x25b: Pop(1)
0x25c: Return(); Pop(2)

0x25d: Push((int) 10)
0x25e: @ KillTimer(Stack[-1])
0x25f: Pop(1)
0x260: Return(); Pop(0)

0x261: PushEmpty()
0x262: Push((int) 10)
0x263: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x265: PushEmpty()
0x266: Call2 0x25d

0x267: Pop(0)
0x268: PushEmpty(bool)
0x269: Stack[-1] = (bool) 0
0x26a: PushEmpty(bool)
0x26b: Call2 0x355

0x26c: Pop(0)
0x26d: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26e: PushEmpty(bool)
0x26f: Call2 0x23e

0x270: Pop(0)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: Stack[-1] = (bool) 1
0x273: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x274: PushEmpty(bool)
0x275: Call2 0x22a

0x276: Pop(0)
0x277: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x278: PushEmpty(bool, object)
0x279: PushEmpty(object)
0x27a: Call2 0x46e

0x27b: Stack[-2] = Stack[-1]
0x27c: Pop(1)
0x27d: Call2 0x3e9

0x27e: Pop(2)
0x27f: GOTO 0x286

0x280: PushEmpty()
0x281: Call2 0x239

0x282: Pop(0)
0x283: PushEmpty()
0x284: Call2 0x254

0x285: Pop(0)
0x286: Return(); Pop(0)

0x287: PushEmpty()
0x288: Call2 0x313

0x289: Pop(0)
0x28a: PushEmpty()
0x28b: Call2 0x25d

0x28c: Pop(0)
0x28d: @ lshStopSpeech()
0x28e: Pop(0)
0x28f: @ lshStopAnimation()
0x290: Pop(0)
0x291: @ StopAsync()
0x292: Pop(0)
0x293: @ Hold()
0x294: Pop(0)
0x295: Return(); Pop(0)

0x296: @ StopGroup0()
0x297: Pop(0)
0x298: PushEmpty()
0x299: Call2 0x25d

0x29a: Pop(0)
0x29b: PushEmpty(string)
0x29c: Stack[-1] = "Neutral"
0x29d: Call2 0x439

0x29e: Pop(1)
0x29f: PushEmpty()
0x2a0: Call2 0x254

0x2a1: Pop(0)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: Push(Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a6: PushEmpty()
0x2a7: Call2 0x254

0x2a8: Pop(0)
0x2a9: GOTO 0x2ae

0x2aa: PushEmpty(string)
0x2ab: Stack[-1] = "Neutral"
0x2ac: Call2 0x439

0x2ad: Pop(1)
0x2ae: Return(); Pop(0)

0x2af: PushEmpty(bool, bool)
0x2b0: @ IsOverrideActive(Stack[-1])
0x2b1: Pop(0)
0x2b2: Pop(0); Push((bool) Stack[-1] == 0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2b4: EventDisable(0)
0x2b5: PushEmpty()
0x2b6: Call2 0x313

0x2b7: Pop(0)
0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[-5]
0x2ba: Call2 0x34c

0x2bb: Pop(2)
0x2bc: EventEnable(0)
0x2bd: PushEmpty(object)
0x2be: Stack[-1] = Stack[-4]
0x2bf: Call2 0x1eb

0x2c0: Pop(1)
0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = "Neutral"
0x2c3: Call2 0x439

0x2c4: Pop(1)
0x2c5: PushEmpty()
0x2c6: Call2 0x25d

0x2c7: Pop(0)
0x2c8: PushEmpty()
0x2c9: Call2 0x254

0x2ca: Pop(0)
0x2cb: Return(); Pop(2)

0x2cc: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2cd: @ WaitForAnimEnd()
0x2ce: Pop(0)
0x2cf: PushEmpty(bool)
0x2d0: Call2 0x355

0x2d1: Pop(0)
0x2d2: Pop(1); Push((bool) Stack[-1] == 0)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: Return(); Pop(12)

0x2d5: PushEmpty(int)
0x2d6: Call2 0x508

0x2d7: Stack[-7] = Stack[-1]
0x2d8: Pop(1)
0x2d9: Stack[-5] = (int) 0
0x2da: PushEmpty(bool)
0x2db: Stack[-1] = (bool) 0
0x2dc: Push((int) 5)
0x2dd: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2df: PushEmpty(bool)
0x2e0: Call2 0x355

0x2e1: Pop(0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: Stack[-1] = (bool) 1
0x2e4: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x2e5: Pop(0); Push((bool) Stack[-6] == 0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e7: Push((int) 3)
0x2e8: @ Sleep(Stack[-1], Stack[-5])
0x2e9: Pop(1)
0x2ea: Pop(0); Push((bool) Stack[-4] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x30e

0x2ed: GOTO 0x303

0x2ee: @ irand(Stack[-3], Stack[-6])
0x2ef: Pop(0)
0x2f0: Push((int) 5)
0x2f1: @ irand(Stack[-3], Stack[-1])
0x2f2: Pop(1)
0x2f3: Push((int) 0)
0x2f4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: Stack[-3] = (int) 0
0x2f7: Push("all")
0x2f8: PushEmpty(string, int)
0x2f9: Stack[-1] = Stack[-6]
0x2fa: Call2 0x501

0x2fb: Pop(1)
0x2fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fd: Pop(2)
0x2fe: @ WaitForAnimEnd(Stack[-1])
0x2ff: Pop(0)
0x300: Pop(0); Push((bool) Stack[-1] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x30e

0x303: PushEmpty(bool)
0x304: Call2 0x311

0x305: Pop(0)
0x306: Pop(1); Push((bool) Stack[-1] == 0)
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: GOTO 0x30e

0x309: @ ResetAAS()
0x30a: Pop(0)
0x30b: Push((int) 1)
0x30c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x30d: GOTO 0x2da

0x30e: @ ResetAAS()
0x30f: Pop(0)
0x310: Return(); Pop(12)

0x311: Stack[-1] = (bool) 1
0x312: Return(); Pop(0)

0x313: @ StopAnimation()
0x314: Pop(0)
0x315: @ StopGroup0()
0x316: Pop(0)
0x317: Return(); Pop(0)

0x318: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x319: @ GetPosition(Stack[-3])
0x31a: Pop(0)
0x31b: @@ GetPosition(Stack[-2])
0x31c: Pop(0)
0x31d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x31e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x31f: Return(); Pop(6)

0x320: PushEmpty(bool, bool)
0x321: Push("HasProperty")
0x322: Push((int) 2)
0x323: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x324: Pop(1); Push((bool) Stack[-1] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x326: Stack[-5] = (bool) 0
0x327: Return(); Pop(2)

0x328: @@ HasProperty(Stack[-3], Stack[-1])
0x329: Pop(0)
0x32a: Stack[-5] = Stack[-1]
0x32b: Return(); Pop(2)

0x32c: PushEmpty(float, float)
0x32d: PushEmpty(bool, object, string)
0x32e: Stack[-2] = Stack[-10]
0x32f: Stack[-1] = Stack[-9]
0x330: Call2 0x320

0x331: Pop(2)
0x332: Pop(1); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x334: Stack[-8] = (bool) 0
0x335: Return(); Pop(2)

0x336: @@ GetProperty(Stack[-6], Stack[-1])
0x337: Pop(0)
0x338: PushEmpty(float, float, float, float)
0x339: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x33a: Stack[-2] = Stack[-8]
0x33b: Stack[-1] = Stack[-7]
0x33c: Call2 0x47e

0x33d: Pop(3)
0x33e: @@ SetProperty(Stack[-7], Stack[-1])
0x33f: Pop(1)
0x340: Stack[-8] = (bool) 1
0x341: Return(); Pop(2)

0x342: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x343: @ GetPosition(Stack[-3])
0x344: Pop(0)
0x345: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x346: Push(CvectorIndex(Stack[-2], 0))
0x347: Push(CvectorIndex(Stack[-3], 2))
0x348: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x349: Pop(2)
0x34a: Stack[-8] = Stack[-1]
0x34b: Return(); Pop(6)

0x34c: PushEmpty(cvector, cvector)
0x34d: @@ GetPosition(Stack[-1])
0x34e: Pop(0)
0x34f: PushEmpty(bool, cvector)
0x350: Stack[-1] = Stack[-3]
0x351: Call2 0x342

0x352: Stack[-6] = Stack[-2]
0x353: Pop(2)
0x354: Return(); Pop(2)

0x355: PushEmpty(bool, bool)
0x356: @ IsLoaded(Stack[-1])
0x357: Pop(0)
0x358: Stack[-3] = Stack[-1]
0x359: Return(); Pop(2)

0x35a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x35b: @@ GetPosition(Stack[-8])
0x35c: Pop(0)
0x35d: @@ GetEyesHeight(Stack[-9])
0x35e: Pop(0)
0x35f: Push(CvectorIndex(Stack[-8], 1))
0x360: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x361: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x362: @ GetPosition(Stack[-7])
0x363: Pop(0)
0x364: @ GetEyesHeight(Stack[-9])
0x365: Pop(0)
0x366: Push(CvectorIndex(Stack[-7], 1))
0x367: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x368: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x369: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x36a: Push(CvectorIndex(Stack[-6], 1))
0x36b: Stack[-1] = (int) 0
0x36c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x36d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x36e: Pop(1); Push(Sqrt(Stack[-1]))
0x36f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x370: Stack[-5] = -Stack[-6]; Pop(0);
0x371: Pop(0); Push(Stack[-6] * Stack[-19]);
0x372: PushEmpty(cvector, cvector)
0x373: Push(CVector(0.0, 1.0, 0.0))
0x374: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x375: Call2 0x474

0x376: Pop(1)
0x377: Push((int) 25)
0x378: Pop(2); Push(Stack[-2] * Stack[-1]);
0x379: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37a: Push(CVector(0.0, 10.0, 0.0))
0x37b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x37c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x37d: @ IsOverrideActive(Stack[-2])
0x37e: Pop(0)
0x37f: Push(Stack[-2])
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-21] = (bool) 0
0x382: Return(); Pop(18)

0x383: @ StopWorld()
0x384: Pop(0)
0x385: @ CameraTransit(Stack[-3], Stack[-5])
0x386: Pop(0)
0x387: Push(CvectorIndex(Stack[-4], 0))
0x388: Push(CvectorIndex(Stack[-5], 2))
0x389: @ Rotate(Stack[-2], Stack[-1])
0x38a: Pop(2)
0x38b: PushEmpty(bool)
0x38c: Call2 0x63b

0x38d: Pop(0)
0x38e: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38f: GOTO 0x398

0x390: Push("head")
0x391: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x392: Pop(1)
0x393: Push(Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x395: Push("head")
0x396: @ LookAsyncCamera(Stack[-1])
0x397: Pop(1)
0x398: @ CameraWaitForPlayFinish()
0x399: Pop(0)
0x39a: @ ResumeWorld()
0x39b: Pop(0)
0x39c: Stack[-21] = (bool) 1
0x39d: Return(); Pop(18)

0x39e: PushEmpty(bool, bool)
0x39f: @ CameraSwitchToNormal()
0x3a0: Pop(0)
0x3a1: PushEmpty(bool)
0x3a2: Call2 0x63b

0x3a3: Pop(0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: GOTO 0x3ae

0x3a6: Push("head")
0x3a7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a8: Pop(1)
0x3a9: Push(Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ab: Push("head")
0x3ac: @ UnlookAsync(Stack[-1])
0x3ad: Pop(1)
0x3ae: Return(); Pop(2)

0x3af: PushEmpty(int, int, int, int)
0x3b0: Push("voice_common")
0x3b1: @ GetVariable(Stack[-1], Stack[-3])
0x3b2: Pop(1)
0x3b3: Push(Stack[-2])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3b5: PushEmpty(bool, object)
0x3b6: Stack[-1] = Stack[-7]
0x3b7: Call2 0x3e9

0x3b8: Pop(1)
0x3b9: Pop(1); Push((bool) Stack[-1] == 0)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3bb: PushEmpty(bool, object)
0x3bc: Stack[-1] = Stack[-7]
0x3bd: Call2 0x40e

0x3be: Pop(1)
0x3bf: Pop(1); Push((bool) Stack[-1] == 0)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c1: Stack[-6] = (bool) 0
0x3c2: Return(); Pop(4)

0x3c3: Push((int) 2)
0x3c4: @ irand(Stack[-2], Stack[-1])
0x3c5: Pop(1)
0x3c6: Push(Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c8: Push("voice_common")
0x3c9: Push((int) 1)
0x3ca: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3cb: Push((int) 3)
0x3cc: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3cd: @ SetVariable(Stack[-2], Stack[-1])
0x3ce: Pop(2)
0x3cf: GOTO 0x3d4

0x3d0: Push("voice_common")
0x3d1: Push((int) 0)
0x3d2: @ SetVariable(Stack[-2], Stack[-1])
0x3d3: Pop(2)
0x3d4: GOTO 0x3e7

0x3d5: PushEmpty(bool, object)
0x3d6: Stack[-1] = Stack[-7]
0x3d7: Call2 0x40e

0x3d8: Pop(1)
0x3d9: Pop(1); Push((bool) Stack[-1] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3db: PushEmpty(bool, object)
0x3dc: Stack[-1] = Stack[-7]
0x3dd: Call2 0x3e9

0x3de: Pop(1)
0x3df: Pop(1); Push((bool) Stack[-1] == 0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: Stack[-6] = (bool) 0
0x3e2: Return(); Pop(4)

0x3e3: Push("voice_common")
0x3e4: Push((int) 1)
0x3e5: @ SetVariable(Stack[-2], Stack[-1])
0x3e6: Pop(2)
0x3e7: Stack[-6] = (bool) 1
0x3e8: Return(); Pop(4)

0x3e9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ea: Stack[-5] = "c"
0x3eb: Stack[-4] = (int) 0
0x3ec: Push((int) 1)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3ee: Push((int) 1)
0x3ef: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3f0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f1: @@ HasProperty(Stack[-1], Stack[-4])
0x3f2: Pop(1)
0x3f3: Pop(0); Push((bool) Stack[-3] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: GOTO 0x3f9

0x3f6: Push((int) 1)
0x3f7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3f8: GOTO 0x3ec

0x3f9: Pop(0); Push((bool) Stack[-4] == 0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fb: Stack[-12] = (bool) 0
0x3fc: Return(); Pop(10)

0x3fd: Stack[-2] = (int) 0
0x3fe: Push((int) 1)
0x3ff: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x401: @ irand(Stack[-2], Stack[-4])
0x402: Pop(0)
0x403: Push((int) 1)
0x404: Pop(1); Push(Stack[-3] + Stack[-1]);
0x405: Pop(1); Push(Stack[-6] + Stack[-1]);
0x406: @@ GetProperty(Stack[-1], Stack[-2])
0x407: Pop(1)
0x408: PushEmpty(bool, string)
0x409: Stack[-1] = Stack[-3]
0x40a: Call2 0x458

0x40b: Stack[-14] = Stack[-2]
0x40c: Pop(2)
0x40d: Return(); Pop(10)

0x40e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x40f: Push("d")
0x410: PushEmpty(int)
0x411: Call2 0x4f8

0x412: Pop(0)
0x413: Pop(2); Push(Stack[-2] + Stack[-1]);
0x414: Push("m")
0x415: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x416: Stack[-4] = (int) 0
0x417: Push((int) 1)
0x418: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x419: Push((int) 1)
0x41a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x41b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x41c: @@ HasProperty(Stack[-1], Stack[-4])
0x41d: Pop(1)
0x41e: Pop(0); Push((bool) Stack[-3] == 0)
0x41f: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x420: GOTO 0x424

0x421: Push((int) 1)
0x422: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x423: GOTO 0x417

0x424: Pop(0); Push((bool) Stack[-4] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x426: Stack[-12] = (bool) 0
0x427: Return(); Pop(10)

0x428: Stack[-2] = (int) 0
0x429: Push((int) 1)
0x42a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42c: @ irand(Stack[-2], Stack[-4])
0x42d: Pop(0)
0x42e: Push((int) 1)
0x42f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x430: Pop(1); Push(Stack[-6] + Stack[-1]);
0x431: @@ GetProperty(Stack[-1], Stack[-2])
0x432: Pop(1)
0x433: PushEmpty(bool, string)
0x434: Stack[-1] = Stack[-3]
0x435: Call2 0x458

0x436: Stack[-14] = Stack[-2]
0x437: Pop(2)
0x438: Return(); Pop(10)

0x439: PushEmpty(bool, float, float, bool, float, float)
0x43a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x43b: Pop(0)
0x43c: Push(Stack[-3])
0x43d: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x43e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x43f: Pop(0)
0x440: Push((bool) 0)
0x441: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(1)
0x443: GOTO 0x448

0x444: Push("Can't find lsh animation : ")
0x445: Pop(1); Push(Stack[-1] + Stack[-8]);
0x446: @ Trace(Stack[-1])
0x447: Pop(1)
0x448: Return(); Pop(6)

0x449: PushEmpty(bool, float, float, bool, float, float)
0x44a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x44b: Pop(0)
0x44c: Push(Stack[-3])
0x44d: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x44e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x44f: Pop(0)
0x450: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x451: Pop(0)
0x452: GOTO 0x457

0x453: Push("Can't find lsh animation : ")
0x454: Pop(1); Push(Stack[-1] + Stack[-9]);
0x455: @ Trace(Stack[-1])
0x456: Pop(1)
0x457: Return(); Pop(6)

0x458: PushEmpty(bool, bool)
0x459: PushEmpty(bool)
0x45a: Call2 0x63b

0x45b: Pop(0)
0x45c: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x45d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x45e: Pop(0)
0x45f: Push(Stack[-1])
0x460: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x461: @ lshPlaySpeech(Stack[-3])
0x462: Pop(0)
0x463: Stack[-4] = (bool) 1
0x464: Return(); Pop(2)

0x465: Stack[-4] = (bool) 0
0x466: Return(); Pop(2)

0x467: PushEmpty(bool)
0x468: Call2 0x63b

0x469: Pop(0)
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: @ lshStopSpeech()
0x46c: Pop(0)
0x46d: Return(); Pop(0)

0x46e: PushEmpty(object, object)
0x46f: @ self(Stack[-1])
0x470: Pop(0)
0x471: Stack[-3] = Stack[-1]
0x472: Return(); Pop(2)

0x473: Stack[-1] = 0
0x474: PushEmpty(float, float)
0x475: Pop(0); Push(Stack[-3] | Stack[-3]);
0x476: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x477: Push((float)0.0)
0x478: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x47b: Return(); Pop(2)

0x47c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x47d: Return(); Pop(2)

0x47e: PushEmpty()
0x47f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x480: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x481: Stack[-4] = Stack[-2]
0x482: Return(); Pop(0)

0x483: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x485: Stack[-4] = Stack[-1]
0x486: Return(); Pop(0)

0x487: Stack[-4] = Stack[-3]
0x488: Return(); Pop(0)

0x489: PushEmpty(int, int)
0x48a: @ GetVariable(Stack[-3], Stack[-1])
0x48b: Pop(0)
0x48c: Stack[-4] = Stack[-1]
0x48d: Return(); Pop(2)

0x48e: PushEmpty(object, object)
0x48f: @ CreateIntVector(Stack[-1])
0x490: Pop(0)
0x491: @@ add(Stack[-4])
0x492: Pop(0)
0x493: @@ add(Stack[-3])
0x494: Pop(0)
0x495: Push((int) 3)
0x496: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x497: Pop(1)
0x498: Return(); Pop(2)

0x499: Stack[-1] = 0
0x49a: PushEmpty(int, int, bool, int, int, bool)
0x49b: @@ GetItemID(Stack[-3])
0x49c: Pop(0)
0x49d: Push("Category")
0x49e: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x49f: Pop(1)
0x4a0: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x4a1: Pop(0)
0x4a2: Pop(0); Push((bool) Stack[-1] == 0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a4: @@ DropItems(Stack[-8], Stack[-7])
0x4a5: Pop(0)
0x4a6: GOTO 0x4ac

0x4a7: PushEmpty(int, int)
0x4a8: Stack[-2] = Stack[-5]
0x4a9: Stack[-1] = Stack[-9]
0x4aa: Call2 0x48e

0x4ab: Pop(2)
0x4ac: Return(); Pop(6)

0x4ad: PushEmpty(object, object)
0x4ae: @ CreateInvItem(Stack[-1])
0x4af: Pop(0)
0x4b0: @@ SetItemName(Stack[-4])
0x4b1: Pop(0)
0x4b2: PushEmpty(object, object, int)
0x4b3: Stack[-3] = Stack[-8]
0x4b4: Stack[-2] = Stack[-4]
0x4b5: Stack[-1] = Stack[-6]
0x4b6: Call2 0x49a

0x4b7: Pop(3)
0x4b8: Return(); Pop(2)

0x4b9: Stack[-1] = 0
0x4ba: PushEmpty()
0x4bb: Pop(0); Push((bool) Stack[-2] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bd: Stack[-3] = (bool) 0
0x4be: Return(); Pop(0)

0x4bf: Push((int) 0)
0x4c0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c2: Push((int) 8)
0x4c3: @ SendWorldWndMessage(Stack[-1])
0x4c4: Pop(1)
0x4c5: GOTO 0x4cf

0x4c6: Push((int) 0)
0x4c7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c9: Push((int) 9)
0x4ca: @ SendWorldWndMessage(Stack[-1])
0x4cb: Pop(1)
0x4cc: GOTO 0x4cf

0x4cd: Stack[-3] = (bool) 0
0x4ce: Return(); Pop(0)

0x4cf: PushEmpty(float)
0x4d0: Stack[-1] = Stack[-2]
0x4d1: Call2 0x4dd

0x4d2: Pop(1)
0x4d3: PushEmpty(bool, object, string, float, float, float)
0x4d4: Stack[-5] = Stack[-8]
0x4d5: Stack[-4] = "reputation"
0x4d6: Stack[-3] = Stack[-7]
0x4d7: Stack[-2] = (int) 0
0x4d8: Stack[-1] = (int) 1
0x4d9: Call2 0x32c

0x4da: Pop(6)
0x4db: Stack[-3] = (bool) 1
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty(object, object)
0x4de: @ CreateFloatVector(Stack[-1])
0x4df: Pop(0)
0x4e0: @@ add(Stack[-3])
0x4e1: Pop(0)
0x4e2: Push((int) 16)
0x4e3: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x4e4: Pop(1)
0x4e5: Return(); Pop(2)

0x4e6: Stack[-1] = 0
0x4e7: PushEmpty(object, object)
0x4e8: @ FindActor(Stack[-1], Stack[-4])
0x4e9: Pop(0)
0x4ea: Pop(0); Push((bool) Stack[-1] == 0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ec: Stack[-5] = (bool) 0
0x4ed: Return(); Pop(2)

0x4ee: @ Trigger(Stack[-1], Stack[-3])
0x4ef: Pop(0)
0x4f0: Stack[-5] = (bool) 1
0x4f1: Return(); Pop(2)

0x4f2: Stack[-1] = 0
0x4f3: PushEmpty(float, float)
0x4f4: @ GetGameTime(Stack[-1])
0x4f5: Pop(0)
0x4f6: Stack[-3] = Stack[-1]
0x4f7: Return(); Pop(2)

0x4f8: PushEmpty(float, float)
0x4f9: @ GetGameTime(Stack[-1])
0x4fa: Pop(0)
0x4fb: Push((int) 1)
0x4fc: PushEmpty(int)
0x4fd: Push((int) 24)
0x4fe: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4ff: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x500: Return(); Pop(2)

0x501: PushEmpty(string, string)
0x502: Stack[-1] = "idle"
0x503: Push(Stack[-3])
0x504: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x505: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x506: Stack[-4] = Stack[-1]
0x507: Return(); Pop(2)

0x508: PushEmpty(int, bool, int, bool)
0x509: Stack[-2] = (int) 0
0x50a: Push("all")
0x50b: PushEmpty(string, int)
0x50c: Stack[-1] = Stack[-5]
0x50d: Call2 0x501

0x50e: Pop(1)
0x50f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(2)
0x511: Pop(0); Push((bool) Stack[-1] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x513: GOTO 0x517

0x514: Push((int) 1)
0x515: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x516: GOTO 0x50a

0x517: Stack[-5] = Stack[-2]
0x518: Return(); Pop(4)

0x519: PushEmpty(object, object)
0x51a: Push("b6q02")
0x51b: Push((int) 1)
0x51c: @ SetVariable(Stack[-2], Stack[-1])
0x51d: Pop(2)
0x51e: PushEmpty(object)
0x51f: Call2 0x5f0

0x520: Stack[-2] = Stack[-1]
0x521: Pop(1)
0x522: Push("b6q02KlaraGotoRat")
0x523: Push("pt_map_theater")
0x524: Push((int) 0)
0x525: Push((int) 521207)
0x526: PushEmpty(float)
0x527: Call2 0x4f3

0x528: Pop(0)
0x529: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x52a: Pop(5)
0x52b: PushEmpty()
0x52c: Call2 0x5a0

0x52d: Pop(0)
0x52e: PushEmpty()
0x52f: Call2 0x5ba

0x530: Pop(0)
0x531: PushEmpty(bool, string, string)
0x532: Stack[-2] = "quest_b6_02"
0x533: Stack[-1] = "init_maze"
0x534: Call2 0x4e7

0x535: Pop(3)
0x536: Return(); Pop(2)

0x537: Stack[-1] = 0
0x538: PushEmpty()
0x539: PushEmpty()
0x53a: Call2 0x5ad

0x53b: Pop(0)
0x53c: PushEmpty(bool, string, string)
0x53d: Stack[-2] = "quest_b6_02"
0x53e: Stack[-1] = "completed"
0x53f: Call2 0x4e7

0x540: Pop(3)
0x541: Return(); Pop(0)

0x542: PushEmpty()
0x543: Push("oob6Klara2_1")
0x544: Push((int) 1)
0x545: @ SetVariable(Stack[-2], Stack[-1])
0x546: Pop(2)
0x547: Return(); Pop(0)

0x548: PushEmpty()
0x549: Push("playsound")
0x54a: Push("giveitem")
0x54b: @ TriggerWorld(Stack[-2], Stack[-1])
0x54c: Pop(2)
0x54d: Return(); Pop(0)

0x54e: PushEmpty()
0x54f: Push("recipe7 is given")
0x550: @ Trace(Stack[-1])
0x551: Pop(1)
0x552: PushEmpty(object, string, int)
0x553: Stack[-3] = Stack[-5]
0x554: Stack[-2] = "recipe7"
0x555: Stack[-1] = (int) 1
0x556: Call2 0x4ad

0x557: Pop(3)
0x558: Return(); Pop(0)

0x559: PushEmpty()
0x55a: PushEmpty(object, string, float)
0x55b: PushEmpty(object)
0x55c: Call2 0x5f0

0x55d: Stack[-4] = Stack[-1]
0x55e: Pop(1)
0x55f: Stack[-2] = "pt_map_theater"
0x560: Stack[-1] = (int) 2
0x561: Call2 0x601

0x562: Pop(3)
0x563: PushEmpty(object)
0x564: Call2 0x5f0

0x565: Pop(0)
0x566: @@ ShowMap(Stack[-1])
0x567: Pop(1)
0x568: Return(); Pop(0)

0x569: PushEmpty()
0x56a: PushEmpty(bool, object, float)
0x56b: Stack[-2] = Stack[-5]
0x56c: Stack[-1] = (float) -0.1
0x56d: Call2 0x4ba

0x56e: Pop(3)
0x56f: Return(); Pop(0)

0x570: PushEmpty()
0x571: PushEmpty(int, string)
0x572: Stack[-1] = "b6q02"
0x573: Call2 0x489

0x574: Pop(1)
0x575: Push((int) 1000)
0x576: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x578: Stack[-2] = (bool) 1
0x579: Return(); Pop(0)

0x57a: Stack[-2] = (bool) 0
0x57b: Return(); Pop(0)

0x57c: PushEmpty()
0x57d: PushEmpty(int, string)
0x57e: Stack[-1] = "b6q02"
0x57f: Call2 0x489

0x580: Pop(1)
0x581: Push((int) 2)
0x582: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x584: Stack[-2] = (bool) 1
0x585: Return(); Pop(0)

0x586: Stack[-2] = (bool) 0
0x587: Return(); Pop(0)

0x588: PushEmpty()
0x589: PushEmpty(int, string)
0x58a: Stack[-1] = "oob6Klara2_1"
0x58b: Call2 0x489

0x58c: Pop(1)
0x58d: Push((int) 0)
0x58e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-2] = (bool) 1
0x591: Return(); Pop(0)

0x592: Stack[-2] = (bool) 0
0x593: Return(); Pop(0)

0x594: PushEmpty()
0x595: PushEmpty(int, string)
0x596: Stack[-1] = "b6q02"
0x597: Call2 0x489

0x598: Pop(1)
0x599: Push((int) 0)
0x59a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: Stack[-2] = (bool) 1
0x59d: Return(); Pop(0)

0x59e: Stack[-2] = (bool) 0
0x59f: Return(); Pop(0)

0x5a0: PushEmpty(object, object)
0x5a1: Push((int) 266)
0x5a2: Push((int) 2)
0x5a3: Push((int) 521193)
0x5a4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5a5: Pop(3)
0x5a6: PushEmpty(bool, object, int)
0x5a7: Stack[-2] = Stack[-4]
0x5a8: Stack[-1] = (int) -1
0x5a9: Call2 0x5d4

0x5aa: Pop(3)
0x5ab: Return(); Pop(2)

0x5ac: Stack[-1] = 0
0x5ad: PushEmpty(object, object)
0x5ae: Push((int) 269)
0x5af: Push((int) 2)
0x5b0: Push((int) 521196)
0x5b1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5b2: Pop(3)
0x5b3: PushEmpty(bool, object, int)
0x5b4: Stack[-2] = Stack[-4]
0x5b5: Stack[-1] = (int) 266
0x5b6: Call2 0x5d4

0x5b7: Pop(3)
0x5b8: Return(); Pop(2)

0x5b9: Stack[-1] = 0
0x5ba: PushEmpty(object, object)
0x5bb: Push((int) 267)
0x5bc: Push((int) 2)
0x5bd: Push((int) 521194)
0x5be: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: PushEmpty(bool, object, int)
0x5c1: Stack[-2] = Stack[-4]
0x5c2: Stack[-1] = (int) 266
0x5c3: Call2 0x5d4

0x5c4: Pop(3)
0x5c5: Return(); Pop(2)

0x5c6: Stack[-1] = 0
0x5c7: PushEmpty(object, object)
0x5c8: @ GetDiaryRoot(Stack[-1])
0x5c9: Pop(0)
0x5ca: Pop(0); Push((bool) Stack[-1] == 0)
0x5cb: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5cc: Push("Can't retrieve diary root")
0x5cd: @ Trace(Stack[-1])
0x5ce: Pop(1)
0x5cf: Stack[-3] = (bool) 0
0x5d0: Return(); Pop(2)

0x5d1: Stack[-3] = Stack[-1]
0x5d2: Return(); Pop(2)

0x5d3: Stack[-1] = 0
0x5d4: PushEmpty(object, object, int, object, object, int)
0x5d5: PushEmpty(object)
0x5d6: Call2 0x5c7

0x5d7: Stack[-4] = Stack[-1]
0x5d8: Pop(1)
0x5d9: @@ Find(Stack[-7], Stack[-2])
0x5da: Pop(0)
0x5db: Pop(0); Push((bool) Stack[-2] == 0)
0x5dc: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5dd: Push("Can't find diary parent with id: ")
0x5de: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5df: @ Trace(Stack[-1])
0x5e0: Pop(1)
0x5e1: Stack[-9] = (bool) 0
0x5e2: Return(); Pop(6)

0x5e3: @@ AddChild(Stack[-8])
0x5e4: Pop(0)
0x5e5: Push((int) 7)
0x5e6: @ SendWorldWndMessage(Stack[-1])
0x5e7: Pop(1)
0x5e8: @@ GetCategory(Stack[-1])
0x5e9: Pop(0)
0x5ea: @ SetDiarySection(Stack[-1])
0x5eb: Pop(0)
0x5ec: Stack[-9] = (bool) 0
0x5ed: Return(); Pop(6)

0x5ee: Stack[-2] = 0
0x5ef: Stack[-3] = 0
0x5f0: PushEmpty(object, object, object, object)
0x5f1: @ GetMainOutdoorScene(Stack[-2])
0x5f2: Pop(0)
0x5f3: Pop(0); Push((bool) Stack[-2] == 0)
0x5f4: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f5: Push("Can't find main outdoor scene")
0x5f6: @ Trace(Stack[-1])
0x5f7: Pop(1)
0x5f8: Stack[-1] = 0
0x5f9: Stack[-5] = Stack[-1]
0x5fa: Return(); Pop(4)

0x5fb: @@ GetMap(Stack[-1])
0x5fc: Pop(0)
0x5fd: Stack[-5] = Stack[-1]
0x5fe: Return(); Pop(4)

0x5ff: Stack[-1] = 0
0x600: Stack[-2] = 0
0x601: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x602: @ GetMainOutdoorScene(Stack[-2])
0x603: Pop(0)
0x604: Pop(0); Push((bool) Stack[-2] == 0)
0x605: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x606: Push("Can't find main outdoor scene")
0x607: @ Trace(Stack[-1])
0x608: Pop(1)
0x609: Return(); Pop(8)

0x60a: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x60b: Pop(0)
0x60c: Pop(0); Push((bool) Stack[-1] == 0)
0x60d: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x60e: Push("Warning: outdoor scene locator ")
0x60f: Pop(1); Push(Stack[-1] + Stack[-11]);
0x610: Push(" doesnt exist")
0x611: Pop(2); Push(Stack[-2] + Stack[-1]);
0x612: @ Trace(Stack[-1])
0x613: Pop(1)
0x614: @@ GetMap(Stack[-11])
0x615: Pop(0)
0x616: Pop(0); Push((bool) Stack[-11] == 0)
0x617: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x618: Push("Can't find map")
0x619: @ Trace(Stack[-1])
0x61a: Pop(1)
0x61b: Return(); Pop(8)

0x61c: Push(CvectorIndex(Stack[-4], 0))
0x61d: Push(CvectorIndex(Stack[-5], 2))
0x61e: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x61f: Pop(2)
0x620: Return(); Pop(8)

0x621: Stack[-2] = 0
0x622: PushEmpty(int, int)
0x623: Push("branch")
0x624: @ GetVariable(Stack[-1], Stack[-2])
0x625: Pop(1)
0x626: Push((int) 0)
0x627: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x629: Stack[-3] = (int) 1
0x62a: Return(); Pop(2)

0x62b: GOTO 0x631

0x62c: Push((int) 1)
0x62d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: Stack[-3] = (int) 2
0x630: Return(); Pop(2)

0x631: Stack[-3] = (int) 3
0x632: Return(); Pop(2)

0x633: Stack[-1] = (int) 515540
0x634: Return(); Pop(0)

0x635: Stack[-1] = (int) 502865
0x636: Return(); Pop(0)

0x637: Stack[-1] = "ui/NPC_Klara.png"
0x638: Return(); Pop(0)

0x639: Stack[-1] = "ui/NPC_Klara_b.png"
0x63a: Return(); Pop(0)

0x63b: Stack[-1] = (bool) 1
0x63c: Return(); Pop(0)

