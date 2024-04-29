Entity1 = {
	Name = "Camera",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-9.600000381469727|4.0|14.0",
				Rotation = "false|1.0|0|0|0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "CAMERA",
			Arguments = {
			}
		},
		{
			Name = "CHANGE_CAMERA_BACKGROUND",
			Arguments = {
				r = "201",
				g = "1",
				b = "1",
				a = "1"
			}
		}
	}
}



Entity2 = {
	Name = "UI_Button",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "button",
				XPos = "50",
                YPos = "70",
                Width = "30",
                Height = "15",
                Texture1 = "MenuButton_Ini.png",
                Texture2 = "MenuButton_Over.png",
                Texture3 = "MenuButton_Clicked.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuPlayButton",
			}
        },
		{
            Name = "PLAY_BUTTON",
            Arguments = {
			}
        },
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-1.610821008682251|5.619948387145996|5.7784810066223145",
				Rotation = "false|0.5458973050117493|0.14995510876178741|0.21834951639175415|0.7948793172836304",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
            Name = "AUDIO_EMITTER",
            Arguments = {
				SongName = "MainMenu.mp3",
				Is3D = "false"
			}
        }
	}	
}

Entity3 = {
	Name = "UI_Cursor",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName= "image",
				XPos = "0",
				YPos = "0",
				Width = "5",
				Height = "5",
				Texture = "Cursor.png",
				Depth = "10"
			}
		},
		{
			Name = "CURSOR",
			Arguments = {
			}
		}
	}		
}
Entity4 = {
	Name = "TitleTextP1",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
                OverlayName= "titletextp1",
				XPos = "50",
				YPos = "20",
				Tam = "5",
				Text = "0123456789\"",
				Font = "DoomDamn",
				Color = "0|0|255",
				Depth = "0"
			}
		}
	}	
}

Entities = { Entity1, Entity2, Entity3, Entity4}

CollisionLayers = {
	Layers = {
		Carretera = "DEFAULT",
		Decoracion = "DEFAULT",
		Edificios = "DEFAULT"
	}
}