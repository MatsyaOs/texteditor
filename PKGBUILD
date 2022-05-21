
# Maintainer: Your Name <admin@matsyos.ml>
pkgname=matsya-texteditor
pkgver=1
pkgrel=1
pkgdesc="Text Editor of Matsya Ui."
arch=('x86_64')
url="https://github.com/MatsyaOs/texteditor"
license=('GPL')
groups=('Matsya')
makedepends=('git')
depends=(
	'pkgconfig'
	'cmake'
	'extra-cmake-modules'
	 'kconfig' 'kdecoration' 'kguiaddons' 'kcoreaddons' 'kconfigwidgets' 'kwindowsystem' 'kwayland' 'pkgconf' 'qt5-base' 'qt5-quickcontrols2' 'qt5-x11extras' 'qt5-tools'  'kwindowsystem' 'polkit' 'polkit-qt5' 'xorg-server-devel' 'xf86-input-libinput' 'xf86-input-synaptics'  'qt5-base' 'qt5-quickcontrols2' 'freetype2' 'fontconfig' 'networkmanager-qt' 'modemmanager-qt'
)
source=('git'+'https://github.com/MatsyaOs/texteditor')
md5sums=('SKIP')


build() {

	cd "$srcdir"/texteditor/

  cmake -DCMAKE_INSTALL_PREFIX=/usr .
  make
}

package() {
  cd texteditor
  DESTDIR="$pkgdir" make install
}
