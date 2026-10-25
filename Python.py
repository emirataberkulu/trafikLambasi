import tkinter as tk

class TrafikLambasi:
    def __init__(self, root):
        self.root = root
        self.root.title("Trafik Lambası")

        # Koyu gri arka plan paneli
        self.canvas = tk.Canvas(root, width=150, height=350, bg="gray20")
        self.canvas.pack(pady=20, padx=20)

        # Sönük lambaları çizme (Kırmızı, Sarı, Yeşil)
        self.kirmizi = self.canvas.create_oval(30, 30, 120, 120, fill="gray40", outline="black")
        self.sari = self.canvas.create_oval(30, 130, 120, 220, fill="gray40", outline="black")
        self.yesil = self.canvas.create_oval(30, 230, 120, 320, fill="gray40", outline="black")

        # Başlangıç döngüsü
        self.durum = 0
        self.renk_degistir()

    def renk_degistir(self):
        # Önce tüm lambaları söndür (koyu gri yap)
        self.canvas.itemconfig(self.kirmizi, fill="gray40")
        self.canvas.itemconfig(self.sari, fill="gray40")
        self.canvas.itemconfig(self.yesil, fill="gray40")

        # Duruma göre ilgili lambayı yak ve zamanlayıcıyı ayarla
        if self.durum == 0:
            # Sadece Kırmızı (3 saniye)
            self.canvas.itemconfig(self.kirmizi, fill="red")
            self.root.after(3000, self.siradaki_durum, 1)
            
        elif self.durum == 1:
            # Kırmızı ve Sarı birlikte (Kırmızıdan yeşile hazırlık - 1 saniye)
            self.canvas.itemconfig(self.kirmizi, fill="red")
            self.canvas.itemconfig(self.sari, fill="yellow")
            self.root.after(1000, self.siradaki_durum, 2)
            
        elif self.durum == 2:
            # Sadece Yeşil (3 saniye)
            self.canvas.itemconfig(self.yesil, fill="green")
            self.root.after(3000, self.siradaki_durum, 3)
            
        elif self.durum == 3:
            # Sadece Sarı (Yeşilden kırmızıya hazırlık - 1 saniye)
            self.canvas.itemconfig(self.sari, fill="yellow")
            self.root.after(1000, self.siradaki_durum, 0)

    def siradaki_durum(self, yeni_durum):
        self.durum = yeni_durum
        self.renk_degistir()

# Uygulamayı başlat
if __name__ == "__main__":
    root = tk.Tk()
    uygulama = TrafikLambasi(root)
    root.mainloop()