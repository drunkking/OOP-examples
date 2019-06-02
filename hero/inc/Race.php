<?php

interface Race {
    public function name();
}

class Human implements Race {
    public function name(){
        return "Human";
    }
}

class Dwarf implements Race {
    public function name(){
        return "Dwarf";
    }
}

class NightElf implements Race {
    public function name(){
        return "NightElf";
    }
}


class Gnome implements Race {
    public function name(){
        return "Gnome";
    }
}

class Draenei implements Race {
    public function name(){
        return "Draenei";
    }
}

class Worgen implements Race {
    public function name(){
        return "Worgen";
    }
}

class Pandaren implements Race {
    public function name(){
        return "Pandaren";
    }
}

class Orc implements Race {
    public function name(){
        return "Orc";
    }
}

class Undead implements Race {
    public function name(){
        return "Undead";
    }
}

class Tauren implements Race {
    public function name(){
        return "Tauren";
    }
}

class Troll implements Race {
    public function name(){
        return "Troll";
    }
}

class BloodElf implements Race {
    public function name(){
        return "Blood Elf";
    }
}

class Goblin implements Race {
    public function name(){
        return "Goblin";
    }
}

class DarkIronDwarf implements Race {
    public function name(){
        return "Dark Iron Dwarf";
    }
}

class KulTiran implements Race {
    public function name(){
        return "Kul Tiran";
    }
}

class LightforgedDraenei implements Race {
    public function name(){
        return "Lightforged Draenei";
    }
}

class VoidElf implements Race {
    public function name(){
        return "Void Elf";
    }
}

class HighmountainTauren implements Race {
    public function name(){
        return "Highmountain Tauren";
    }
}

class MagharOrc implements Race {
    public function name(){
        return "Maghar Orc";
    }
}

class Nightborne implements Race {
    public function name(){
        return "Nightborne";
    }
}

class ZandalariTroll implements Race {
    public function name(){
        return "Zandalari Troll";
    }
}

?>